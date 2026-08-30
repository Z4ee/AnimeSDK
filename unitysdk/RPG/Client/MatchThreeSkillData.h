#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MatchThreeSkillRow; }
namespace RPG::GameCore::Match3 { class Match3BirdSkillConfig; }
namespace System { class String; }

#define RPG_CLIENT_MATCHTHREESKILLDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C98EC70)
#define RPG_CLIENT_MATCHTHREESKILLDATA_GET_CHARGECOUNT_OFFSET UNITYSDK_OFFSET(0x1C98F180)
#define RPG_CLIENT_MATCHTHREESKILLDATA_GET_CHARGEDICONPATH_OFFSET UNITYSDK_OFFSET(0x1C98EE80)
#define RPG_CLIENT_MATCHTHREESKILLDATA_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1C98F240)
#define RPG_CLIENT_MATCHTHREESKILLDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1C98F0C0)
#define RPG_CLIENT_MATCHTHREESKILLDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C98EE60)
#define RPG_CLIENT_MATCHTHREESKILLDATA_GET_ISMULTISTYLEBOMB_OFFSET UNITYSDK_OFFSET(0x1C98F1E0)
#define RPG_CLIENT_MATCHTHREESKILLDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1C98EE00)
#define RPG_CLIENT_MATCHTHREESKILLDATA_GET_UNCHARGEDICONPATH_OFFSET UNITYSDK_OFFSET(0x1C98EFA0)
#define RPG_CLIENT_MATCHTHREESKILLDATA_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1C98F250)
#define RPG_CLIENT_MATCHTHREESKILLDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C98EE70)
#define RPG_CLIENT_MATCHTHREESKILLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C98ECE0)
#define RPG_CLIENT_MATCHTHREESKILLDATA__INIT_OFFSET UNITYSDK_OFFSET(0x1C98ECF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeSkillData_TypeDefinitionIndex = 66024;

	class MatchThreeSkillData : public ::System::Object
	{
	public:
		::RPG::GameCore::Match3::Match3BirdSkillConfig* _Config_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESKILLDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeSkillData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::MatchThreeSkillData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESKILLDATA_CREATE_OFFSET))(a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESKILLDATA__INIT_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESKILLDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESKILLDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::String* get_ChargedIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESKILLDATA_GET_CHARGEDICONPATH_OFFSET))(this);
		}

		::System::String* get_UnchargedIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESKILLDATA_GET_UNCHARGEDICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESKILLDATA_GET_DESC_OFFSET))(this);
		}

		::System::UInt32 get_ChargeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESKILLDATA_GET_CHARGECOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsMultiStyleBomb()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESKILLDATA_GET_ISMULTISTYLEBOMB_OFFSET))(this);
		}

		::RPG::GameCore::MatchThreeSkillRow* get_Row()
		{
			return ((::RPG::GameCore::MatchThreeSkillRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESKILLDATA_GET_ROW_OFFSET))(this);
		}

		::RPG::GameCore::Match3::Match3BirdSkillConfig* get_Config()
		{
			return ((::RPG::GameCore::Match3::Match3BirdSkillConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESKILLDATA_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::Match3::Match3BirdSkillConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::Match3BirdSkillConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESKILLDATA_SET_CONFIG_OFFSET))(this, a1);
		}
	};
}
