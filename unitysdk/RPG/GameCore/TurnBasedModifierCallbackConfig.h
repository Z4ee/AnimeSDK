#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_TURNBASEDMODIFIERCALLBACKCONFIG_METHOD_2_B7C07E5AE3CE4396_OFFSET UNITYSDK_OFFSET(0x1D29D8F0)
#define RPG_GAMECORE_TURNBASEDMODIFIERCALLBACKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D29DA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedModifierCallbackConfig_TypeDefinitionIndex = 18021;

	class TurnBasedModifierCallbackConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TurnBasedModifierEvent Event; // 0x10
		::System::Int32 Priority; // 0x14
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* CallbackConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERCALLBACKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B7C07E5AE3CE4396(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TurnBasedModifierCallbackConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TurnBasedModifierCallbackConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERCALLBACKCONFIG_METHOD_2_B7C07E5AE3CE4396_OFFSET))(a1, a2);
		}
	};
}
