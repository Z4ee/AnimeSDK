#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfWaiterState.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_ELFBYISWAITERSTATE_METHOD_4_7079C2EC98FFE86E_OFFSET UNITYSDK_OFFSET(0x18DEF050)
#define RPG_GAMECORE_ST_ELFBYISWAITERSTATE_METHOD_4_D24C3C4AB5A0C4D8_OFFSET UNITYSDK_OFFSET(0x18DEF120)
#define RPG_GAMECORE_ST_ELFBYISWAITERSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18DEF0D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ElfByIsWaiterState_TypeDefinitionIndex = 20405;

	class ST_ElfByIsWaiterState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ElfWaiterState State; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISWAITERSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7079C2EC98FFE86E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ElfByIsWaiterState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ElfByIsWaiterState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISWAITERSTATE_METHOD_4_7079C2EC98FFE86E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D24C3C4AB5A0C4D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ElfByIsWaiterState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ElfByIsWaiterState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISWAITERSTATE_METHOD_4_D24C3C4AB5A0C4D8_OFFSET))(a1, a2);
		}
	};
}
