#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERPAMMOVEPHASETALKWAIT_METHOD_3_D2E349BD7DD31F5A_OFFSET UNITYSDK_OFFSET(0x19E195C0)
#define RPG_GAMECORE_TRIGGERPAMMOVEPHASETALKWAIT_METHOD_3_D6320ACE549608AE_OFFSET UNITYSDK_OFFSET(0x19E194B0)
#define RPG_GAMECORE_TRIGGERPAMMOVEPHASETALKWAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19E19590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerPamMovePhaseTalkWait_TypeDefinitionIndex = 18903;

	class TriggerPamMovePhaseTalkWait : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMMOVEPHASETALKWAIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D6320ACE549608AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerPamMovePhaseTalkWait*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerPamMovePhaseTalkWait*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMMOVEPHASETALKWAIT_METHOD_3_D6320ACE549608AE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D2E349BD7DD31F5A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerPamMovePhaseTalkWait* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerPamMovePhaseTalkWait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMMOVEPHASETALKWAIT_METHOD_3_D2E349BD7DD31F5A_OFFSET))(a1, a2);
		}
	};
}
