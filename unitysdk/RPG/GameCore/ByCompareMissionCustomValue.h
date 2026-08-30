#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MissionCustomValue; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREMISSIONCUSTOMVALUE_METHOD_4_01172CE0B51DA08A_OFFSET UNITYSDK_OFFSET(0x1BBA4230)
#define RPG_GAMECORE_BYCOMPAREMISSIONCUSTOMVALUE_METHOD_4_0619082DDDA8A1AD_OFFSET UNITYSDK_OFFSET(0x1BBA4270)
#define RPG_GAMECORE_BYCOMPAREMISSIONCUSTOMVALUE_METHOD_4_7605545FDCA9D7BA_OFFSET UNITYSDK_OFFSET(0x1BBA3F90)
#define RPG_GAMECORE_BYCOMPAREMISSIONCUSTOMVALUE_METHOD_4_847AD1B580C55D92_OFFSET UNITYSDK_OFFSET(0x1BBA3F40)
#define RPG_GAMECORE_BYCOMPAREMISSIONCUSTOMVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBA3F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareMissionCustomValue_TypeDefinitionIndex = 20200;

	class ByCompareMissionCustomValue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 MainMissionID; // 0x20
		::RPG::GameCore::MissionCustomValue* MissionCustomValue; // 0x28
		::RPG::GameCore::CompareType EquationType; // 0x30
		::System::Boolean ShowCompareValue; // 0x34
		::System::UInt32 TargetValue; // 0x38
		::RPG::GameCore::MissionCustomValue* MissionCustomValueCompare; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMISSIONCUSTOMVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_847AD1B580C55D92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMissionCustomValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMissionCustomValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMISSIONCUSTOMVALUE_METHOD_4_847AD1B580C55D92_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7605545FDCA9D7BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMissionCustomValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMissionCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMISSIONCUSTOMVALUE_METHOD_4_7605545FDCA9D7BA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_01172CE0B51DA08A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMissionCustomValue*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMissionCustomValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMISSIONCUSTOMVALUE_METHOD_4_01172CE0B51DA08A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0619082DDDA8A1AD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMissionCustomValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMissionCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMISSIONCUSTOMVALUE_METHOD_4_0619082DDDA8A1AD_OFFSET))(a1, a2);
		}
	};
}
