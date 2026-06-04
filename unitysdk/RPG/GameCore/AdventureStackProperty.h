#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAbilityProperty.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTURESTACKPROPERTY_METHOD_3_64CDBC4F3CE6D4AC_OFFSET UNITYSDK_OFFSET(0x194542F0)
#define RPG_GAMECORE_ADVENTURESTACKPROPERTY_METHOD_3_F444F0C9609E5CB1_OFFSET UNITYSDK_OFFSET(0x19454270)
#define RPG_GAMECORE_ADVENTURESTACKPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x194542C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureStackProperty_TypeDefinitionIndex = 20542;

	class AdventureStackProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AdventureAbilityProperty Property; // 0x20
		::RPG::GameCore::DynamicFloat* PropertyValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESTACKPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F444F0C9609E5CB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureStackProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureStackProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESTACKPROPERTY_METHOD_3_F444F0C9609E5CB1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_64CDBC4F3CE6D4AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureStackProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureStackProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESTACKPROPERTY_METHOD_3_64CDBC4F3CE6D4AC_OFFSET))(a1, a2);
		}
	};
}
