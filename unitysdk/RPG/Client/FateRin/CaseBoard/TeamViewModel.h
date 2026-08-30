#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/CaseBoard/TeamSizeType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/System/Object.h"

class Class_1_5C8F237BF51192A7;
class Class_1_6417078E6DA36F89;
namespace RPG::GameCore { class FateRinCaseBoardBaseTeamInfo; }
namespace System { class String; }

#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1CBFA930)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1CBFA910)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_OVERRIDESERVANTCLASS_OFFSET UNITYSDK_OFFSET(0x1CBFA8F0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_OVERRIDESERVANTTAB_OFFSET UNITYSDK_OFFSET(0x1CBFA8D0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_RINROAST_OFFSET UNITYSDK_OFFSET(0x1CBFA9A0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_TEAMNAME_OFFSET UNITYSDK_OFFSET(0x1CBFA8B0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_TEAMTYPE_OFFSET UNITYSDK_OFFSET(0x1CBFA890)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SETSHOW_OFFSET UNITYSDK_OFFSET(0x1CBF6C80)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1CBFA920)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SET_OVERRIDESERVANTCLASS_OFFSET UNITYSDK_OFFSET(0x1CBFA900)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SET_OVERRIDESERVANTTAB_OFFSET UNITYSDK_OFFSET(0x1CBFA8E0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SET_TEAMNAME_OFFSET UNITYSDK_OFFSET(0x1CBFA8C0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SET_TEAMTYPE_OFFSET UNITYSDK_OFFSET(0x1CBFA8A0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SHOWDETAILPAGE_OFFSET UNITYSDK_OFFSET(0x1CBFABD0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1CBFAA90)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBF94C0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL__GETTEAMNAME_OFFSET UNITYSDK_OFFSET(0x1CBFAC80)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL__ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1CBFAC30)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL__SETUPBASICINFO_OFFSET UNITYSDK_OFFSET(0x1CBFAA10)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int TeamViewModel_TypeDefinitionIndex = 79491;

	class TeamViewModel : public ::System::Object
	{
	public:
		::System::String* _TeamName_k__BackingField; // 0x10
		::System::String* _OverrideServantClass_k__BackingField; // 0x18
		::Class_1_5C8F237BF51192A7* _CaseBoardService; // 0x20
		::Class_1_6417078E6DA36F89* _AvatarFactory; // 0x28
		::RPG::Client::TextID _OverrideServantTab_k__BackingField; // 0x30
		::System::Boolean _IsShow_k__BackingField; // 0x40
		::RPG::GameCore::FateRinCaseBoardTeamType _TeamType_k__BackingField; // 0x44

		::System::Void _ctor(::RPG::GameCore::FateRinCaseBoardBaseTeamInfo* a1, ::Class_1_5C8F237BF51192A7* a2, ::Class_1_6417078E6DA36F89* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo*, ::Class_1_5C8F237BF51192A7*, ::Class_1_6417078E6DA36F89*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::FateRinCaseBoardTeamType get_TeamType()
		{
			return ((::RPG::GameCore::FateRinCaseBoardTeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_TEAMTYPE_OFFSET))(this);
		}

		::System::Void set_TeamType(::RPG::GameCore::FateRinCaseBoardTeamType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SET_TEAMTYPE_OFFSET))(this, a1);
		}

		::System::String* get_TeamName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_TEAMNAME_OFFSET))(this);
		}

		::System::Void set_TeamName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SET_TEAMNAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_OverrideServantTab()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_OVERRIDESERVANTTAB_OFFSET))(this);
		}

		::System::Void set_OverrideServantTab(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SET_OVERRIDESERVANTTAB_OFFSET))(this, a1);
		}

		::System::String* get_OverrideServantClass()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_OVERRIDESERVANTCLASS_OFFSET))(this);
		}

		::System::Void set_OverrideServantClass(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SET_OVERRIDESERVANTCLASS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_ISSHOW_OFFSET))(this);
		}

		::System::Void set_IsShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SET_ISSHOW_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_RinRoast()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_RINROAST_OFFSET))(this);
		}

		::System::Void SetShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SETSHOW_OFFSET))(this, a1);
		}

		::System::Void Update(::RPG::GameCore::FateRinCaseBoardBaseTeamInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_UPDATE_OFFSET))(this, a1);
		}

		::System::Void ShowDetailPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SHOWDETAILPAGE_OFFSET))(this);
		}

		::System::Void _OnUpdate(::RPG::GameCore::FateRinCaseBoardBaseTeamInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL__ONUPDATE_OFFSET))(this, a1);
		}

		::System::String* _GetTeamName(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL__GETTEAMNAME_OFFSET))(this, a1);
		}

		::System::Void _SetupBasicInfo(::RPG::GameCore::FateRinCaseBoardBaseTeamInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL__SETUPBASICINFO_OFFSET))(this, a1);
		}
	};
}
