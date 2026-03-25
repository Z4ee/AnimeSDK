#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PropertyFormationValue; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYFORMATION_METHOD_3_351D982853C77160_OFFSET UNITYSDK_OFFSET(0x171292D0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYFORMATION_METHOD_3_9B2DCED85BA79087_OFFSET UNITYSDK_OFFSET(0x17127BA0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x17127B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourcePropertyFormation_TypeDefinitionIndex = 14224;

	class ComplexSkillAISourcePropertyFormation : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::Il2CppArray<::RPG::GameCore::PropertyFormationValue*>* ValueList; // 0x10
		::RPG::GameCore::DynamicFloat* Expression; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYFORMATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_351D982853C77160(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourcePropertyFormation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourcePropertyFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYFORMATION_METHOD_3_351D982853C77160_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9B2DCED85BA79087(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourcePropertyFormation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourcePropertyFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYFORMATION_METHOD_3_9B2DCED85BA79087_OFFSET))(a1, a2);
		}
	};
}
