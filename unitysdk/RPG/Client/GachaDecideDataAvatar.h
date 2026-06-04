#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGachaDecideData.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class GachaNewsRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GACHADECIDEDATAAVATAR_GETAVAILABLEDECIDEAVATARS_OFFSET UNITYSDK_OFFSET(0xBAA97B0)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_GETDECIDEDAVATARS_OFFSET UNITYSDK_OFFSET(0xBAA9AA0)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_GETNOTDECIDEDAVATARS_OFFSET UNITYSDK_OFFSET(0xBAA9B20)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_GET_NEWESTNEWSROW_OFFSET UNITYSDK_OFFSET(0xBAAA740)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_HASNEWMAXRANKAVATAR_OFFSET UNITYSDK_OFFSET(0xBAA9BB0)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_ISAVATARSHOWREDDOTNEW_OFFSET UNITYSDK_OFFSET(0xBAAA4B0)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_ISSHOWNEWS_OFFSET UNITYSDK_OFFSET(0xBAA96A0)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_ISSTANDARDAVATAR_OFFSET UNITYSDK_OFFSET(0xBAAA300)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_MARKALLMAXRANKAVATARSEEN_OFFSET UNITYSDK_OFFSET(0xBAAA030)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_MARKNEWSTNEWSSEEN_OFFSET UNITYSDK_OFFSET(0xBAA9710)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_SET_NEWESTNEWSROW_OFFSET UNITYSDK_OFFSET(0xBAAA750)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR__CONVERTTOAVATARS_OFFSET UNITYSDK_OFFSET(0xBAA9830)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0xBAA94D0)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR__GETPREVIEWAVATAR_OFFSET UNITYSDK_OFFSET(0xBAAA5E0)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR__ONSYNCDECIDEDATA_OFFSET UNITYSDK_OFFSET(0xBAA94E0)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR___IFIXBASEPROXY__ONSYNCDECIDEDATA_OFFSET UNITYSDK_OFFSET(0xBAAA760)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaDecideDataAvatar_TypeDefinitionIndex = 60089;

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

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetAvailableDecideAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR_GETAVAILABLEDECIDEAVATARS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetDecidedAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR_GETDECIDEDAVATARS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetNotDecidedAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR_GETNOTDECIDEDAVATARS_OFFSET))(this);
		}

		::System::Boolean HasNewMaxRankAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR_HASNEWMAXRANKAVATAR_OFFSET))(this);
		}

		::System::Void MarkAllMaxRankAvatarSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR_MARKALLMAXRANKAVATARSEEN_OFFSET))(this);
		}

		::System::Boolean IsStandardAvatar(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR_ISSTANDARDAVATAR_OFFSET))(this, a1);
		}

		::System::Boolean IsAvatarShowRedDotNew(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR_ISAVATARSHOWREDDOTNEW_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* _ConvertToAvatars(::System::Collections::Generic::List_1<::RPG::Client::ItemData*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR__CONVERTTOAVATARS_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* _GetPreviewAvatar(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR__GETPREVIEWAVATAR_OFFSET))(this, a1);
		}

		::RPG::GameCore::GachaNewsRow* get_NewestNewsRow()
		{
			return ((::RPG::GameCore::GachaNewsRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR_GET_NEWESTNEWSROW_OFFSET))(this);
		}

		::System::Void set_NewestNewsRow(::RPG::GameCore::GachaNewsRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GachaNewsRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR_SET_NEWESTNEWSROW_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy__OnSyncDecideData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR___IFIXBASEPROXY__ONSYNCDECIDEDATA_OFFSET))(this);
		}
	};
}
