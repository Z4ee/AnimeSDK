#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGachaDecideData.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class GachaNewsRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GACHADECIDEDATAAVATAR_GETAVAILABLEDECIDEAVATARS_OFFSET UNITYSDK_OFFSET(0xA40F230)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_GETDECIDEDAVATARS_OFFSET UNITYSDK_OFFSET(0xA40F6A0)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_GETNOTDECIDEDAVATARS_OFFSET UNITYSDK_OFFSET(0xA40F720)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_GET_NEWESTNEWSROW_OFFSET UNITYSDK_OFFSET(0xA410200)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_HASNEWMAXRANKAVATAR_OFFSET UNITYSDK_OFFSET(0xA40F7B0)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_ISAVATARSHOWREDDOTNEW_OFFSET UNITYSDK_OFFSET(0xA4100D0)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_ISSHOWNEWS_OFFSET UNITYSDK_OFFSET(0xA40F120)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_ISSTANDARDAVATAR_OFFSET UNITYSDK_OFFSET(0xA40FF10)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_MARKALLMAXRANKAVATARSEEN_OFFSET UNITYSDK_OFFSET(0xA40FC50)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_MARKNEWSTNEWSSEEN_OFFSET UNITYSDK_OFFSET(0xA40F190)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_SET_NEWESTNEWSROW_OFFSET UNITYSDK_OFFSET(0xA410210)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR__CONVERTTOAVATARS_OFFSET UNITYSDK_OFFSET(0xA40F2B0)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0xA40EF90)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR__ONSYNCDECIDEDATA_OFFSET UNITYSDK_OFFSET(0xA40EFA0)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR___IFIXBASEPROXY__ONSYNCDECIDEDATA_OFFSET UNITYSDK_OFFSET(0xA410220)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaDecideDataAvatar_TypeDefinitionIndex = 59155;

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
