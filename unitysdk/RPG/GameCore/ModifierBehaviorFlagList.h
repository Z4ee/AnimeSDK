#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MODIFIERBEHAVIORFLAGLIST_METHOD_2_1D25AF26A7E251D4_OFFSET UNITYSDK_OFFSET(0x1994AFC0)
#define RPG_GAMECORE_MODIFIERBEHAVIORFLAGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1994B080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierBehaviorFlagList_TypeDefinitionIndex = 16237;

	class ModifierBehaviorFlagList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* BehaviorFlags; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERBEHAVIORFLAGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1D25AF26A7E251D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifierBehaviorFlagList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifierBehaviorFlagList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERBEHAVIORFLAGLIST_METHOD_2_1D25AF26A7E251D4_OFFSET))(a1, a2);
		}
	};
}
