#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MODIFIERBEHAVIORFLAGLISTPAIR_METHOD_2_CBE2A98613B331E8_OFFSET UNITYSDK_OFFSET(0x1994B090)
#define RPG_GAMECORE_MODIFIERBEHAVIORFLAGLISTPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x1994B1B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierBehaviorFlagListPair_TypeDefinitionIndex = 16238;

	class ModifierBehaviorFlagListPair : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ModifierBehaviorFlag Key; // 0x10
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* BehaviorFlags; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERBEHAVIORFLAGLISTPAIR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CBE2A98613B331E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifierBehaviorFlagListPair*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifierBehaviorFlagListPair*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERBEHAVIORFLAGLISTPAIR_METHOD_2_CBE2A98613B331E8_OFFSET))(a1, a2);
		}
	};
}
