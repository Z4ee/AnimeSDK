#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPWAITBEHIT_METHOD_3_04DB4192A6E93664_OFFSET UNITYSDK_OFFSET(0x1BCD4930)
#define RPG_GAMECORE_LOOPWAITBEHIT_METHOD_3_3DED4D9B3E902128_OFFSET UNITYSDK_OFFSET(0x1BCD48E0)
#define RPG_GAMECORE_LOOPWAITBEHIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCD4920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitBeHit_TypeDefinitionIndex = 21320;

	class LoopWaitBeHit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITBEHIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3DED4D9B3E902128(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitBeHit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitBeHit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITBEHIT_METHOD_3_3DED4D9B3E902128_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_04DB4192A6E93664(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitBeHit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitBeHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITBEHIT_METHOD_3_04DB4192A6E93664_OFFSET))(a1, a2);
		}
	};
}
