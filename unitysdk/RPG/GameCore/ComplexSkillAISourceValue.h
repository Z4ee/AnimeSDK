#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUE_METHOD_3_6B5B2BBA448ECAB5_OFFSET UNITYSDK_OFFSET(0x1966EB30)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUE_METHOD_3_E1B31863A9FD3D00_OFFSET UNITYSDK_OFFSET(0x196702A0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1966EB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceValue_TypeDefinitionIndex = 14762;

	class ComplexSkillAISourceValue : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::RPG::GameCore::ComplexSkillAIValueType ValueType; // 0x10
		::System::Boolean IsTarget; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E1B31863A9FD3D00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUE_METHOD_3_E1B31863A9FD3D00_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6B5B2BBA448ECAB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUE_METHOD_3_6B5B2BBA448ECAB5_OFFSET))(a1, a2);
		}
	};
}
