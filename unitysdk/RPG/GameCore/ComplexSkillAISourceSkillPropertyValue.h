#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
#include "unitysdk/RPG/GameCore/SkillPropertyType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAISOURCESKILLPROPERTYVALUE_METHOD_3_0D399A5573F48198_OFFSET UNITYSDK_OFFSET(0x18830310)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCESKILLPROPERTYVALUE_METHOD_3_CCF9C4FED467B014_OFFSET UNITYSDK_OFFSET(0x1882EE40)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCESKILLPROPERTYVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1882EE20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceSkillPropertyValue_TypeDefinitionIndex = 14703;

	class ComplexSkillAISourceSkillPropertyValue : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::RPG::GameCore::SkillPropertyType PropertyType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCESKILLPROPERTYVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0D399A5573F48198(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceSkillPropertyValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceSkillPropertyValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCESKILLPROPERTYVALUE_METHOD_3_0D399A5573F48198_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CCF9C4FED467B014(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceSkillPropertyValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceSkillPropertyValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCESKILLPROPERTYVALUE_METHOD_3_CCF9C4FED467B014_OFFSET))(a1, a2);
		}
	};
}
