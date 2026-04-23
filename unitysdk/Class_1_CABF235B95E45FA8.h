#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CakeRaceActionBase; }

#define CLASS_1_CABF235B95E45FA8_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x17D14FB0)
#define CLASS_1_CABF235B95E45FA8_GET_EXECUTEBEFOREBEGINDELAY_OFFSET UNITYSDK_OFFSET(0x17D15010)
#define CLASS_1_CABF235B95E45FA8_GET_REMAINEXECUTETIMES_OFFSET UNITYSDK_OFFSET(0x17D14FF0)
#define CLASS_1_CABF235B95E45FA8_GET_SHOWDURATIONMS_OFFSET UNITYSDK_OFFSET(0x17D14FD0)
#define CLASS_1_CABF235B95E45FA8_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17D14F60)
#define CLASS_1_CABF235B95E45FA8_SET_ACTION_OFFSET UNITYSDK_OFFSET(0x17D14FC0)
#define CLASS_1_CABF235B95E45FA8_SET_EXECUTEBEFOREBEGINDELAY_OFFSET UNITYSDK_OFFSET(0x17D15020)
#define CLASS_1_CABF235B95E45FA8_SET_REMAINEXECUTETIMES_OFFSET UNITYSDK_OFFSET(0x17D15000)
#define CLASS_1_CABF235B95E45FA8_SET_SHOWDURATIONMS_OFFSET UNITYSDK_OFFSET(0x17D14FE0)
#define CLASS_1_CABF235B95E45FA8__CTOR_OFFSET UNITYSDK_OFFSET(0x17D14F40)

inline static constexpr unsigned int Class_1_CABF235B95E45FA8_TypeDefinitionIndex = 34697;

class Class_1_CABF235B95E45FA8 : public ::System::Object
{
public:
	::RPG::GameCore::CakeRaceActionBase* _Action_k__BackingField; // 0x10
	::System::UInt64 _ShowDurationMs_k__BackingField; // 0x18
	::System::UInt32 _RemainExecuteTimes_k__BackingField; // 0x20
	::System::Boolean _ExecuteBeforeBeginDelay_k__BackingField; // 0x24

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionBase* a1, ::System::UInt64 a2, ::System::UInt32 a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionBase*, ::System::UInt64, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CABF235B95E45FA8__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CABF235B95E45FA8_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::CakeRaceActionBase* get_Action()
	{
		return ((::RPG::GameCore::CakeRaceActionBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CABF235B95E45FA8_GET_ACTION_OFFSET))(this);
	}

	::System::Void set_Action(::RPG::GameCore::CakeRaceActionBase* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionBase*))((::PBYTE)hIl2Cpp + CLASS_1_CABF235B95E45FA8_SET_ACTION_OFFSET))(this, value);
	}

	::System::UInt64 get_ShowDurationMs()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CABF235B95E45FA8_GET_SHOWDURATIONMS_OFFSET))(this);
	}

	::System::Void set_ShowDurationMs(::System::UInt64 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_CABF235B95E45FA8_SET_SHOWDURATIONMS_OFFSET))(this, value);
	}

	::System::UInt32 get_RemainExecuteTimes()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CABF235B95E45FA8_GET_REMAINEXECUTETIMES_OFFSET))(this);
	}

	::System::Void set_RemainExecuteTimes(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CABF235B95E45FA8_SET_REMAINEXECUTETIMES_OFFSET))(this, value);
	}

	::System::Boolean get_ExecuteBeforeBeginDelay()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CABF235B95E45FA8_GET_EXECUTEBEFOREBEGINDELAY_OFFSET))(this);
	}

	::System::Void set_ExecuteBeforeBeginDelay(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CABF235B95E45FA8_SET_EXECUTEBEFOREBEGINDELAY_OFFSET))(this, value);
	}
};
