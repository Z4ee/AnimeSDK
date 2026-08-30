#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/ModifierCustomEventSortType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }

#define RPG_GAMECORE_MODIFIERCUSTOMEVENTCONFIG_METHOD_2_CE1718586B91F924_OFFSET UNITYSDK_OFFSET(0x1D1B24B0)
#define RPG_GAMECORE_MODIFIERCUSTOMEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1B2650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierCustomEventConfig_TypeDefinitionIndex = 16907;

	class ModifierCustomEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* BehaviorFlags; // 0x10
		::RPG::GameCore::JsonEnum* EventType; // 0x18
		::RPG::GameCore::ModifierCustomEventSortType SortBy; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERCUSTOMEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CE1718586B91F924(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifierCustomEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifierCustomEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERCUSTOMEVENTCONFIG_METHOD_2_CE1718586B91F924_OFFSET))(a1, a2);
		}
	};
}
