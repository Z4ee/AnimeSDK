#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/UIEventType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITUIEVENT_METHOD_3_119D535C718E99C6_OFFSET UNITYSDK_OFFSET(0x17907E70)
#define RPG_GAMECORE_WAITUIEVENT_METHOD_3_FDFB445D743E7785_OFFSET UNITYSDK_OFFSET(0x17907DF0)
#define RPG_GAMECORE_WAITUIEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x17907E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitUIEvent_TypeDefinitionIndex = 19872;

	class WaitUIEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::UIEventType UIEventType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUIEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FDFB445D743E7785(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitUIEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitUIEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUIEVENT_METHOD_3_FDFB445D743E7785_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_119D535C718E99C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitUIEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitUIEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUIEVENT_METHOD_3_119D535C718E99C6_OFFSET))(a1, a2);
		}
	};
}
