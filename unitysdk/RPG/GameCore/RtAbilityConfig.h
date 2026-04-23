#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RtModifierConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RTABILITYCONFIG_METHOD_3_0D12E39C635B9ABB_OFFSET UNITYSDK_OFFSET(0x18D829C0)
#define RPG_GAMECORE_RTABILITYCONFIG_METHOD_3_5ADC79734133A074_OFFSET UNITYSDK_OFFSET(0x18D82980)
#define RPG_GAMECORE_RTABILITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D829B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtAbilityConfig_TypeDefinitionIndex = 16754;

	class RtAbilityConfig : public ::RPG::GameCore::AbilityConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAbort; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::RtModifierConfig*>* Modifiers; // 0x60
		::System::String* JsonPath; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTABILITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5ADC79734133A074(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtAbilityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtAbilityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTABILITYCONFIG_METHOD_3_5ADC79734133A074_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0D12E39C635B9ABB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtAbilityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtAbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTABILITYCONFIG_METHOD_3_0D12E39C635B9ABB_OFFSET))(a1, a2);
		}
	};
}
