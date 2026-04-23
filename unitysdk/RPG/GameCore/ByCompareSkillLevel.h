#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPARESKILLLEVEL_METHOD_4_274C396221783239_OFFSET UNITYSDK_OFFSET(0x1873B330)
#define RPG_GAMECORE_BYCOMPARESKILLLEVEL_METHOD_4_ADB6F07CC92DF2DD_OFFSET UNITYSDK_OFFSET(0x1873B450)
#define RPG_GAMECORE_BYCOMPARESKILLLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1873B3D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSkillLevel_TypeDefinitionIndex = 21930;

	class ByCompareSkillLevel : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* TriggerKey; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESKILLLEVEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_274C396221783239(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSkillLevel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSkillLevel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESKILLLEVEL_METHOD_4_274C396221783239_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_ADB6F07CC92DF2DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSkillLevel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSkillLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESKILLLEVEL_METHOD_4_ADB6F07CC92DF2DD_OFFSET))(a1, a2);
		}
	};
}
