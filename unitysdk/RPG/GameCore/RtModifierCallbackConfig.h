#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RtModifierEvent.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_RTMODIFIERCALLBACKCONFIG_METHOD_2_DE2053214280CB82_OFFSET UNITYSDK_OFFSET(0x19BEE330)
#define RPG_GAMECORE_RTMODIFIERCALLBACKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19BEE4C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtModifierCallbackConfig_TypeDefinitionIndex = 16783;

	class RtModifierCallbackConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::RtModifierEvent Event; // 0x10
		::System::Int32 Priority; // 0x14
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* CallbackConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTMODIFIERCALLBACKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DE2053214280CB82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtModifierCallbackConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtModifierCallbackConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTMODIFIERCALLBACKCONFIG_METHOD_2_DE2053214280CB82_OFFSET))(a1, a2);
		}
	};
}
