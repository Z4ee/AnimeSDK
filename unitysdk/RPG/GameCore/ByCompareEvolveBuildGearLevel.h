#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL_METHOD_4_313ED20035504CBC_OFFSET UNITYSDK_OFFSET(0x17007910)
#define RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL_METHOD_4_C91F2E3C66268AB2_OFFSET UNITYSDK_OFFSET(0x170079E0)
#define RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x17007990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareEvolveBuildGearLevel_TypeDefinitionIndex = 20704;

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

		static ::System::Void Method_4_313ED20035504CBC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareEvolveBuildGearLevel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareEvolveBuildGearLevel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL_METHOD_4_313ED20035504CBC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C91F2E3C66268AB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareEvolveBuildGearLevel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareEvolveBuildGearLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL_METHOD_4_C91F2E3C66268AB2_OFFSET))(a1, a2);
		}
	};
}
