#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_0_16E4307DCC419505_547;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropStateChange; }

#define CLASS_3_0763B2FD337677DD_METHOD_3_B0AB14A553A955E1_OFFSET UNITYSDK_OFFSET(0xC38CE60)
#define CLASS_3_0763B2FD337677DD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC38CC60)
#define CLASS_3_0763B2FD337677DD__CTOR_OFFSET UNITYSDK_OFFSET(0xC38C740)
#define CLASS_3_0763B2FD337677DD__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xC38C8B0)
#define CLASS_3_0763B2FD337677DD__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xC38CCC0)
#define CLASS_3_0763B2FD337677DD__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xC38CD90)

inline static constexpr unsigned int Class_3_0763B2FD337677DD_TypeDefinitionIndex = 53489;

class Class_3_0763B2FD337677DD : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitPropStateChange*>
{
public:
	::System::UInt32 IDOEBJDGHBF; // 0x68
	::System::UInt32 JJNEKDFIBMA; // 0x6C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPropStateChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPropStateChange*))((::PBYTE)hIl2Cpp + CLASS_3_0763B2FD337677DD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0763B2FD337677DD__PREPAREDATA_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0763B2FD337677DD_ONTASKRESET_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0763B2FD337677DD__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0763B2FD337677DD__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_B0AB14A553A955E1(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_3_0763B2FD337677DD_METHOD_3_B0AB14A553A955E1_OFFSET))(this, a1);
	}
};
