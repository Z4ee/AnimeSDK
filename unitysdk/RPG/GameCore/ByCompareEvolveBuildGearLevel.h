#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL_METHOD_4_17CA82C94D8D8FD7_OFFSET UNITYSDK_OFFSET(0x1CEC00A0)
#define RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL_METHOD_4_6F17FB5F629DD811_OFFSET UNITYSDK_OFFSET(0x1CEC03A0)
#define RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL_METHOD_4_6FFEAB40DFD2820E_OFFSET UNITYSDK_OFFSET(0x1CEC0370)
#define RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL_METHOD_4_C91F2E3C66268AB2_OFFSET UNITYSDK_OFFSET(0x1CEC00E0)
#define RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEC00D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareEvolveBuildGearLevel_TypeDefinitionIndex = 22268;

	class ByCompareEvolveBuildGearLevel : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 TargetGearID; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x24
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x28
		::System::Boolean CompareToMax; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_17CA82C94D8D8FD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareEvolveBuildGearLevel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareEvolveBuildGearLevel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL_METHOD_4_17CA82C94D8D8FD7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C91F2E3C66268AB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareEvolveBuildGearLevel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareEvolveBuildGearLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL_METHOD_4_C91F2E3C66268AB2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6FFEAB40DFD2820E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEvolveBuildGearLevel*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEvolveBuildGearLevel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL_METHOD_4_6FFEAB40DFD2820E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6F17FB5F629DD811(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEvolveBuildGearLevel* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEvolveBuildGearLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL_METHOD_4_6F17FB5F629DD811_OFFSET))(a1, a2);
		}
	};
}
