#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ResilienceEnum.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETRESILIENCE_METHOD_3_4525884BB26B5924_OFFSET UNITYSDK_OFFSET(0x1D50C0F0)
#define RPG_GAMECORE_SETRESILIENCE_METHOD_3_9DC7B721C639EC6B_OFFSET UNITYSDK_OFFSET(0x1D50C130)
#define RPG_GAMECORE_SETRESILIENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D50C120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetResilience_TypeDefinitionIndex = 23211;

	class SetResilience : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ResilienceEnum Resilience; // 0x18
		::System::Boolean DoReset; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETRESILIENCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4525884BB26B5924(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetResilience*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetResilience*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETRESILIENCE_METHOD_3_4525884BB26B5924_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9DC7B721C639EC6B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetResilience* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetResilience*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETRESILIENCE_METHOD_3_9DC7B721C639EC6B_OFFSET))(a1, a2);
		}
	};
}
