#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERAWAITSECOND_METHOD_3_48189F71CA6B8A14_OFFSET UNITYSDK_OFFSET(0x1C24E730)
#define RPG_GAMECORE_CHIMERAWAITSECOND_METHOD_3_EFDA6EC0796B956E_OFFSET UNITYSDK_OFFSET(0x1C24E6D0)
#define RPG_GAMECORE_CHIMERAWAITSECOND__CTOR_OFFSET UNITYSDK_OFFSET(0x1C24E720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraWaitSecond_TypeDefinitionIndex = 15250;

	class ChimeraWaitSecond : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::System::Single WaitTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWAITSECOND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EFDA6EC0796B956E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraWaitSecond*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraWaitSecond*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWAITSECOND_METHOD_3_EFDA6EC0796B956E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_48189F71CA6B8A14(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraWaitSecond* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraWaitSecond*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWAITSECOND_METHOD_3_48189F71CA6B8A14_OFFSET))(a1, a2);
		}
	};
}
