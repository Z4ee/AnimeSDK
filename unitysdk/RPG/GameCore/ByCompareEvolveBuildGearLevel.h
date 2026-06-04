#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL_METHOD_4_313ED20035504CBC_OFFSET UNITYSDK_OFFSET(0x1950F770)
#define RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL_METHOD_4_41C1F7F72A15A87F_OFFSET UNITYSDK_OFFSET(0x1950FAD0)
#define RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL_METHOD_4_8D468805C75A5D8F_OFFSET UNITYSDK_OFFSET(0x1950FB50)
#define RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL_METHOD_4_C91F2E3C66268AB2_OFFSET UNITYSDK_OFFSET(0x1950F840)
#define RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1950F7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareEvolveBuildGearLevel_TypeDefinitionIndex = 21290;

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

		static ::System::Void Method_4_41C1F7F72A15A87F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEvolveBuildGearLevel*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEvolveBuildGearLevel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL_METHOD_4_41C1F7F72A15A87F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8D468805C75A5D8F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEvolveBuildGearLevel* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEvolveBuildGearLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL_METHOD_4_8D468805C75A5D8F_OFFSET))(a1, a2);
		}
	};
}
