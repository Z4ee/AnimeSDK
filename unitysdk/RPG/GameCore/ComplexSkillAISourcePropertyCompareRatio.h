#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPARERATIO_METHOD_3_2C8A785055FA93C6_OFFSET UNITYSDK_OFFSET(0x1CFF58B0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPARERATIO_METHOD_3_F9BF8F5334575447_OFFSET UNITYSDK_OFFSET(0x1CFF5860)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPARERATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF58A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourcePropertyCompareRatio_TypeDefinitionIndex = 15350;

	class ComplexSkillAISourcePropertyCompareRatio : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean FromTargetA; // 0x10
		::RPG::GameCore::AbilityProperty PropertyTypeA; // 0x14
		::System::Boolean FromTargetB; // 0x18
		::RPG::GameCore::AbilityProperty PropertyTypeB; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPARERATIO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F9BF8F5334575447(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourcePropertyCompareRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourcePropertyCompareRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPARERATIO_METHOD_3_F9BF8F5334575447_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2C8A785055FA93C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourcePropertyCompareRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourcePropertyCompareRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPARERATIO_METHOD_3_2C8A785055FA93C6_OFFSET))(a1, a2);
		}
	};
}
