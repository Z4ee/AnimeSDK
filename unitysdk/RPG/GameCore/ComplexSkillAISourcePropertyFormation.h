#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PropertyFormationValue; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYFORMATION_METHOD_3_1288D8677A2E7D65_OFFSET UNITYSDK_OFFSET(0x1966E200)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYFORMATION_METHOD_3_E12F828F7B7C25C2_OFFSET UNITYSDK_OFFSET(0x1966FF00)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1966E1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourcePropertyFormation_TypeDefinitionIndex = 14759;

	class ComplexSkillAISourcePropertyFormation : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::Il2CppArray<::RPG::GameCore::PropertyFormationValue*>* ValueList; // 0x10
		::RPG::GameCore::DynamicFloat* Expression; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYFORMATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E12F828F7B7C25C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourcePropertyFormation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourcePropertyFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYFORMATION_METHOD_3_E12F828F7B7C25C2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1288D8677A2E7D65(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourcePropertyFormation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourcePropertyFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYFORMATION_METHOD_3_1288D8677A2E7D65_OFFSET))(a1, a2);
		}
	};
}
