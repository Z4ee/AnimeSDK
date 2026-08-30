#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEDYNAMICVALUE_METHOD_3_5A9AC225119E3CF5_OFFSET UNITYSDK_OFFSET(0x1CFF42B0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEDYNAMICVALUE_METHOD_3_682D26F747658A3A_OFFSET UNITYSDK_OFFSET(0x1CFF42F0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEDYNAMICVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF42E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceDynamicValue_TypeDefinitionIndex = 15372;

	class ComplexSkillAISourceDynamicValue : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean IsTarget; // 0x10
		::System::String* DynamicValueKey; // 0x18
		::System::Boolean StringFromParam; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEDYNAMICVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5A9AC225119E3CF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceDynamicValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceDynamicValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEDYNAMICVALUE_METHOD_3_5A9AC225119E3CF5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_682D26F747658A3A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceDynamicValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEDYNAMICVALUE_METHOD_3_682D26F747658A3A_OFFSET))(a1, a2);
		}
	};
}
