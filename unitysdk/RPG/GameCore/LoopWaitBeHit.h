#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPWAITBEHIT_METHOD_3_04DB4192A6E93664_OFFSET UNITYSDK_OFFSET(0x17370C10)
#define RPG_GAMECORE_LOOPWAITBEHIT_METHOD_3_5759B1436ACE3DE4_OFFSET UNITYSDK_OFFSET(0x17370B80)
#define RPG_GAMECORE_LOOPWAITBEHIT__CTOR_OFFSET UNITYSDK_OFFSET(0x17370BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitBeHit_TypeDefinitionIndex = 20311;

	class LoopWaitBeHit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITBEHIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5759B1436ACE3DE4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitBeHit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitBeHit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITBEHIT_METHOD_3_5759B1436ACE3DE4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_04DB4192A6E93664(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitBeHit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitBeHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITBEHIT_METHOD_3_04DB4192A6E93664_OFFSET))(a1, a2);
		}
	};
}
