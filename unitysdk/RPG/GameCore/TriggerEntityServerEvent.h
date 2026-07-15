#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERENTITYSERVEREVENT_METHOD_3_6958616EC6997E13_OFFSET UNITYSDK_OFFSET(0x1B055DC0)
#define RPG_GAMECORE_TRIGGERENTITYSERVEREVENT_METHOD_3_F88724E729D74966_OFFSET UNITYSDK_OFFSET(0x1B055D80)
#define RPG_GAMECORE_TRIGGERENTITYSERVEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B055DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEntityServerEvent_TypeDefinitionIndex = 21321;

	class TriggerEntityServerEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENTITYSERVEREVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F88724E729D74966(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEntityServerEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEntityServerEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENTITYSERVEREVENT_METHOD_3_F88724E729D74966_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6958616EC6997E13(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEntityServerEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEntityServerEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENTITYSERVEREVENT_METHOD_3_6958616EC6997E13_OFFSET))(a1, a2);
		}
	};
}
