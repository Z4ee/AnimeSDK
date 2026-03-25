#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPWAITENTITYSERVEREVENT_METHOD_3_31FEC89E38633222_OFFSET UNITYSDK_OFFSET(0x17370D30)
#define RPG_GAMECORE_LOOPWAITENTITYSERVEREVENT_METHOD_3_F85355FD62381C7D_OFFSET UNITYSDK_OFFSET(0x17370CC0)
#define RPG_GAMECORE_LOOPWAITENTITYSERVEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x17370D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitEntityServerEvent_TypeDefinitionIndex = 20314;

	class LoopWaitEntityServerEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITENTITYSERVEREVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F85355FD62381C7D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitEntityServerEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitEntityServerEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITENTITYSERVEREVENT_METHOD_3_F85355FD62381C7D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_31FEC89E38633222(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitEntityServerEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitEntityServerEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITENTITYSERVEREVENT_METHOD_3_31FEC89E38633222_OFFSET))(a1, a2);
		}
	};
}
