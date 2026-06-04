#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RtModifierConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RTABILITYCONFIG_METHOD_3_C168DDEA7273D413_OFFSET UNITYSDK_OFFSET(0x19BD5F10)
#define RPG_GAMECORE_RTABILITYCONFIG_METHOD_3_FB3F1F349255B70A_OFFSET UNITYSDK_OFFSET(0x19BD5ED0)
#define RPG_GAMECORE_RTABILITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19BD5F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtAbilityConfig_TypeDefinitionIndex = 16772;

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

		static ::System::Void Method_3_FB3F1F349255B70A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtAbilityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtAbilityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTABILITYCONFIG_METHOD_3_FB3F1F349255B70A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C168DDEA7273D413(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtAbilityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtAbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTABILITYCONFIG_METHOD_3_C168DDEA7273D413_OFFSET))(a1, a2);
		}
	};
}
