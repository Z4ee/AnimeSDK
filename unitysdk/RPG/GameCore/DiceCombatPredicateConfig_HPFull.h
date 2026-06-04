#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HPFULL_METHOD_4_2DD0EBE522F7092E_OFFSET UNITYSDK_OFFSET(0x196AEC70)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HPFULL_METHOD_4_986F6C8E65EC87C8_OFFSET UNITYSDK_OFFSET(0x196AC160)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HPFULL__CTOR_OFFSET UNITYSDK_OFFSET(0x196AC110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_HPFull_TypeDefinitionIndex = 15331;

	class DiceCombatPredicateConfig_HPFull : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HPFULL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2DD0EBE522F7092E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HPFull*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HPFull*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HPFULL_METHOD_4_2DD0EBE522F7092E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_986F6C8E65EC87C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HPFull* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HPFull*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HPFULL_METHOD_4_986F6C8E65EC87C8_OFFSET))(a1, a2);
		}
	};
}
