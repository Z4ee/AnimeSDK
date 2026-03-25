#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CakeRaceActionBase; }

#define CLASS_1_CABF235B95E45FA8_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x165B6F00)
#define CLASS_1_CABF235B95E45FA8_GET_EXECUTEBEFOREBEGINDELAY_OFFSET UNITYSDK_OFFSET(0x165B6F60)
#define CLASS_1_CABF235B95E45FA8_GET_REMAINEXECUTETIMES_OFFSET UNITYSDK_OFFSET(0x165B6F40)
#define CLASS_1_CABF235B95E45FA8_GET_SHOWDURATIONMS_OFFSET UNITYSDK_OFFSET(0x165B6F20)
#define CLASS_1_CABF235B95E45FA8_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x165B6EB0)
#define CLASS_1_CABF235B95E45FA8_SET_ACTION_OFFSET UNITYSDK_OFFSET(0x165B6F10)
#define CLASS_1_CABF235B95E45FA8_SET_EXECUTEBEFOREBEGINDELAY_OFFSET UNITYSDK_OFFSET(0x165B6F70)
#define CLASS_1_CABF235B95E45FA8_SET_REMAINEXECUTETIMES_OFFSET UNITYSDK_OFFSET(0x165B6F50)
#define CLASS_1_CABF235B95E45FA8_SET_SHOWDURATIONMS_OFFSET UNITYSDK_OFFSET(0x165B6F30)
#define CLASS_1_CABF235B95E45FA8__CTOR_OFFSET UNITYSDK_OFFSET(0x165B6E90)

inline static constexpr unsigned int Class_1_CABF235B95E45FA8_TypeDefinitionIndex = 28963;

class Class_1_CABF235B95E45FA8 : public ::System::Object
{
public:
	::RPG::GameCore::CakeRaceActionBase* _Action_k__BackingField; // 0x10
	::System::Boolean _ExecuteBeforeBeginDelay_k__BackingField; // 0x18
	::System::UInt32 _RemainExecuteTimes_k__BackingField; // 0x1C
	::System::UInt64 _ShowDurationMs_k__BackingField; // 0x20

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
