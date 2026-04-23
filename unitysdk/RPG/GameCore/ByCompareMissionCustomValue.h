#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MissionCustomValue; }

#define RPG_GAMECORE_BYCOMPAREMISSIONCUSTOMVALUE_METHOD_4_7605545FDCA9D7BA_OFFSET UNITYSDK_OFFSET(0x18732DB0)
#define RPG_GAMECORE_BYCOMPAREMISSIONCUSTOMVALUE_METHOD_4_79BC103FE8AF0010_OFFSET UNITYSDK_OFFSET(0x18732CD0)
#define RPG_GAMECORE_BYCOMPAREMISSIONCUSTOMVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x18732D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareMissionCustomValue_TypeDefinitionIndex = 19392;

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

		static ::System::Void Method_4_79BC103FE8AF0010(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMissionCustomValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMissionCustomValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMISSIONCUSTOMVALUE_METHOD_4_79BC103FE8AF0010_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7605545FDCA9D7BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMissionCustomValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMissionCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMISSIONCUSTOMVALUE_METHOD_4_7605545FDCA9D7BA_OFFSET))(a1, a2);
		}
	};
}
