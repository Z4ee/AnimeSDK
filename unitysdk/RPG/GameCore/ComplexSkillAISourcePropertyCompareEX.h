#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueCompareType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPAREEX_METHOD_3_343BE46B8DDF36A9_OFFSET UNITYSDK_OFFSET(0x1D9AC260)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPAREEX_METHOD_3_7EE45C4EE6F0ED05_OFFSET UNITYSDK_OFFSET(0x1D9AC200)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPAREEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9AC250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourcePropertyCompareEX_TypeDefinitionIndex = 15349;

	class ComplexSkillAISourcePropertyCompareEX : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean FromTargetA; // 0x10
		::RPG::GameCore::AbilityProperty PropertyTypeA; // 0x14
		::System::Boolean FromTargetB; // 0x18
		::RPG::GameCore::AbilityProperty PropertyTypeB; // 0x1C
		::RPG::GameCore::ComplexSkillAIValueCompareType CompareType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPAREEX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7EE45C4EE6F0ED05(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourcePropertyCompareEX*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourcePropertyCompareEX*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPAREEX_METHOD_3_7EE45C4EE6F0ED05_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_343BE46B8DDF36A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourcePropertyCompareEX* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourcePropertyCompareEX*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPAREEX_METHOD_3_343BE46B8DDF36A9_OFFSET))(a1, a2);
		}
	};
}
