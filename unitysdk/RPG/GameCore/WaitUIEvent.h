#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/UIEventType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITUIEVENT_METHOD_3_119D535C718E99C6_OFFSET UNITYSDK_OFFSET(0x1D1BF3C0)
#define RPG_GAMECORE_WAITUIEVENT_METHOD_3_9B248A83DCA5369D_OFFSET UNITYSDK_OFFSET(0x1D1BF380)
#define RPG_GAMECORE_WAITUIEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1BF3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitUIEvent_TypeDefinitionIndex = 20903;

	class WaitUIEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::UIEventType UIEventType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUIEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9B248A83DCA5369D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitUIEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitUIEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUIEVENT_METHOD_3_9B248A83DCA5369D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_119D535C718E99C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitUIEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitUIEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUIEVENT_METHOD_3_119D535C718E99C6_OFFSET))(a1, a2);
		}
	};
}
