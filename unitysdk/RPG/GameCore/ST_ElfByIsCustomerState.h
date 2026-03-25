#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfCustomerState.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_ELFBYISCUSTOMERSTATE_METHOD_4_5624341840F4A5CE_OFFSET UNITYSDK_OFFSET(0x17695B40)
#define RPG_GAMECORE_ST_ELFBYISCUSTOMERSTATE_METHOD_4_9D2C0CF5FE65D8D0_OFFSET UNITYSDK_OFFSET(0x17695A70)
#define RPG_GAMECORE_ST_ELFBYISCUSTOMERSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17695AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ElfByIsCustomerState_TypeDefinitionIndex = 19722;

	class ST_ElfByIsCustomerState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ElfCustomerState State; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISCUSTOMERSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9D2C0CF5FE65D8D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ElfByIsCustomerState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ElfByIsCustomerState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISCUSTOMERSTATE_METHOD_4_9D2C0CF5FE65D8D0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5624341840F4A5CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ElfByIsCustomerState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ElfByIsCustomerState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISCUSTOMERSTATE_METHOD_4_5624341840F4A5CE_OFFSET))(a1, a2);
		}
	};
}
