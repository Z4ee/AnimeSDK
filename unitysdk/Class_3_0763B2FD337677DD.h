#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_0_16E4307DCC419505_460;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropStateChange; }

#define CLASS_3_0763B2FD337677DD_METHOD_3_3FB378AD48E4B10B_OFFSET UNITYSDK_OFFSET(0xC48C990)
#define CLASS_3_0763B2FD337677DD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC48C790)
#define CLASS_3_0763B2FD337677DD__CTOR_OFFSET UNITYSDK_OFFSET(0xC48C270)
#define CLASS_3_0763B2FD337677DD__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xC48C3E0)
#define CLASS_3_0763B2FD337677DD__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xC48C7F0)
#define CLASS_3_0763B2FD337677DD__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xC48C8C0)

inline static constexpr unsigned int Class_3_0763B2FD337677DD_TypeDefinitionIndex = 53745;

class Class_3_0763B2FD337677DD : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitPropStateChange*>
{
public:
	::System::UInt32 JJNEKDFIBMA; // 0x68
	::System::UInt32 IDOEBJDGHBF; // 0x6C

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

	::System::Void Method_3_3FB378AD48E4B10B(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_3_0763B2FD337677DD_METHOD_3_3FB378AD48E4B10B_OFFSET))(this, a1);
	}
};
