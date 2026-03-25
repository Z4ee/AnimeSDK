#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TurnBasedModifierConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TURNBASEDABILITYCONFIG_METHOD_3_BE01A5C43F987C27_OFFSET UNITYSDK_OFFSET(0x178D2100)
#define RPG_GAMECORE_TURNBASEDABILITYCONFIG_METHOD_3_CD82E4709D067670_OFFSET UNITYSDK_OFFSET(0x178D20C0)
#define RPG_GAMECORE_TURNBASEDABILITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x178D20F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedAbilityConfig_TypeDefinitionIndex = 16694;

	class TurnBasedAbilityConfig : public ::RPG::GameCore::AbilityConfig
	{
	public:
		// static const ::System::String* ELATION_TAG; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TurnBasedModifierConfig*>* Modifiers; // 0x58
		::RPG::GameCore::JsonEnum* Tag; // 0x60
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnInsertAbort; // 0x68
		::System::Boolean ServantWhiteList; // 0x70
		::System::String* JsonPath; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CD82E4709D067670(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TurnBasedAbilityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TurnBasedAbilityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCONFIG_METHOD_3_CD82E4709D067670_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BE01A5C43F987C27(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TurnBasedAbilityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TurnBasedAbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCONFIG_METHOD_3_BE01A5C43F987C27_OFFSET))(a1, a2);
		}
	};
}
