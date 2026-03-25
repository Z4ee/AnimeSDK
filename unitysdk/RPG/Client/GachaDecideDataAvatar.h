#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGachaDecideData.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class GachaNewsRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GACHADECIDEDATAAVATAR_GETAVAILABLEDECIDEAVATARS_OFFSET UNITYSDK_OFFSET(0x974E390)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_GETDECIDEDAVATARS_OFFSET UNITYSDK_OFFSET(0x974E800)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_GETNOTDECIDEDAVATARS_OFFSET UNITYSDK_OFFSET(0x974E880)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_GET_NEWESTNEWSROW_OFFSET UNITYSDK_OFFSET(0x974F360)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_HASNEWMAXRANKAVATAR_OFFSET UNITYSDK_OFFSET(0x974E910)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_ISAVATARSHOWREDDOTNEW_OFFSET UNITYSDK_OFFSET(0x974F230)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_ISSHOWNEWS_OFFSET UNITYSDK_OFFSET(0x974E280)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_ISSTANDARDAVATAR_OFFSET UNITYSDK_OFFSET(0x974F070)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_MARKALLMAXRANKAVATARSEEN_OFFSET UNITYSDK_OFFSET(0x974EDB0)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_MARKNEWSTNEWSSEEN_OFFSET UNITYSDK_OFFSET(0x974E2F0)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_SET_NEWESTNEWSROW_OFFSET UNITYSDK_OFFSET(0x974F370)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR__CONVERTTOAVATARS_OFFSET UNITYSDK_OFFSET(0x974E410)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x974E0F0)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR__ONSYNCDECIDEDATA_OFFSET UNITYSDK_OFFSET(0x974E100)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR___IFIXBASEPROXY__ONSYNCDECIDEDATA_OFFSET UNITYSDK_OFFSET(0x974F380)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaDecideDataAvatar_TypeDefinitionIndex = 52203;

	class GachaDecideDataAvatar : public ::RPG::Client::BaseGachaDecideData
	{
	public:
		::RPG::GameCore::GachaNewsRow* _NewestNewsRow_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR__CTOR_OFFSET))(this);
		}

		::System::Void _OnSyncDecideData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR__ONSYNCDECIDEDATA_OFFSET))(this);
		}

		::System::Boolean IsShowNews()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR_ISSHOWNEWS_OFFSET))(this);
		}

		::System::Void MarkNewstNewsSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR_MARKNEWSTNEWSSEEN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetAvailableDecideAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR_GETAVAILABLEDECIDEAVATARS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetDecidedAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR_GETDECIDEDAVATARS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetNotDecidedAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR_GETNOTDECIDEDAVATARS_OFFSET))(this);
		}

		::System::Boolean HasNewMaxRankAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR_HASNEWMAXRANKAVATAR_OFFSET))(this);
		}

		::System::Void MarkAllMaxRankAvatarSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR_MARKALLMAXRANKAVATARSEEN_OFFSET))(this);
		}

		::System::Boolean IsStandardAvatar(::System::UInt32 avatarRealID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR_ISSTANDARDAVATAR_OFFSET))(this, avatarRealID);
		}

		::System::Boolean IsAvatarShowRedDotNew(::System::UInt32 avatarRealID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR_ISAVATARSHOWREDDOTNEW_OFFSET))(this, avatarRealID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* _ConvertToAvatars(::System::Collections::Generic::List_1<::RPG::Client::ItemData*>* itemDatas)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR__CONVERTTOAVATARS_OFFSET))(this, itemDatas);
		}

		::RPG::GameCore::GachaNewsRow* get_NewestNewsRow()
		{
			return ((::RPG::GameCore::GachaNewsRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR_GET_NEWESTNEWSROW_OFFSET))(this);
		}

		::System::Void set_NewestNewsRow(::RPG::GameCore::GachaNewsRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GachaNewsRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR_SET_NEWESTNEWSROW_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy__OnSyncDecideData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR___IFIXBASEPROXY__ONSYNCDECIDEDATA_OFFSET))(this);
		}
	};
}
