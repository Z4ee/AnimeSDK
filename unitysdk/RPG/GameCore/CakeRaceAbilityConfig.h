#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceAbilityName.h"
#include "unitysdk/RPG/GameCore/CakeRaceAbilityType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CakeRaceActionBase; }
namespace RPG::GameCore { class CakeRaceBasePredicateConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CAKERACEABILITYCONFIG_METHOD_2_53BA73FFEB473A80_OFFSET UNITYSDK_OFFSET(0x1CDD2670)
#define RPG_GAMECORE_CAKERACEABILITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDD2A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceAbilityConfig_TypeDefinitionIndex = 18110;

	class CakeRaceAbilityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CakeRaceAbilityType Type; // 0x10
		::RPG::GameCore::CakeRaceAbilityName Name; // 0x14
		::System::String* Desc; // 0x18
		::System::Int32 DelayMs; // 0x20
		::System::Int32 CoolDownMs; // 0x24
		::System::UInt32 InitCD; // 0x28
		::RPG::GameCore::CakeRaceBasePredicateConfig* WaitUsePredicate; // 0x30
		::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>* OnCreate; // 0x38
		::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>* OnUse; // 0x40
		::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>* OnInvoke; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEABILITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_53BA73FFEB473A80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceAbilityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceAbilityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEABILITYCONFIG_METHOD_2_53BA73FFEB473A80_OFFSET))(a1, a2);
		}
	};
}
