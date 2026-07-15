#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PropertyFormationValue; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYFORMATION_METHOD_3_1288D8677A2E7D65_OFFSET UNITYSDK_OFFSET(0x1BC285C0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYFORMATION_METHOD_3_DE0178A644CD88E6_OFFSET UNITYSDK_OFFSET(0x1BC28560)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC285B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourcePropertyFormation_TypeDefinitionIndex = 14919;

	class ComplexSkillAISourcePropertyFormation : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::Il2CppArray<::RPG::GameCore::PropertyFormationValue*>* ValueList; // 0x10
		::RPG::GameCore::DynamicFloat* Expression; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYFORMATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DE0178A644CD88E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourcePropertyFormation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourcePropertyFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYFORMATION_METHOD_3_DE0178A644CD88E6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1288D8677A2E7D65(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourcePropertyFormation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourcePropertyFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYFORMATION_METHOD_3_1288D8677A2E7D65_OFFSET))(a1, a2);
		}
	};
}
