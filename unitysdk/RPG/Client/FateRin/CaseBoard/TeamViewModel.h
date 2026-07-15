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

#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1A3809B0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1A380990)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_OVERRIDESERVANTCLASS_OFFSET UNITYSDK_OFFSET(0x1A380970)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_OVERRIDESERVANTTAB_OFFSET UNITYSDK_OFFSET(0x1A380950)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_RINROAST_OFFSET UNITYSDK_OFFSET(0x1A380A20)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_TEAMNAME_OFFSET UNITYSDK_OFFSET(0x1A380930)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_GET_TEAMTYPE_OFFSET UNITYSDK_OFFSET(0x1A380910)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SETSHOW_OFFSET UNITYSDK_OFFSET(0x1A37CAF0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1A3809A0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SET_OVERRIDESERVANTCLASS_OFFSET UNITYSDK_OFFSET(0x1A380980)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SET_OVERRIDESERVANTTAB_OFFSET UNITYSDK_OFFSET(0x1A380960)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SET_TEAMNAME_OFFSET UNITYSDK_OFFSET(0x1A380940)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SET_TEAMTYPE_OFFSET UNITYSDK_OFFSET(0x1A380920)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_SHOWDETAILPAGE_OFFSET UNITYSDK_OFFSET(0x1A380C50)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A380B10)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A37F480)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL__GETTEAMNAME_OFFSET UNITYSDK_OFFSET(0x1A380D00)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL__ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A380CB0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TEAMVIEWMODEL__SETUPBASICINFO_OFFSET UNITYSDK_OFFSET(0x1A380A90)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int TeamViewModel_TypeDefinitionIndex = 75858;

	class TeamViewModel : public ::System::Object
	{
	public:
		::System::String* _OverrideServantClass_k__BackingField; // 0x10
		::System::String* _TeamName_k__BackingField; // 0x18
		::Class_1_6417078E6DA36F89* _AvatarFactory; // 0x20
		::Class_1_5C8F237BF51192A7* _CaseBoardService; // 0x28
		::System::Boolean _IsShow_k__BackingField; // 0x30
		::RPG::GameCore::FateRinCaseBoardTeamType _TeamType_k__BackingField; // 0x34
		::RPG::Client::TextID _OverrideServantTab_k__BackingField; // 0x38

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
