#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_0_16E4307DCC419505_401;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitGroupEvent; }
namespace System { class String; }

#define CLASS_3_8704178D7D215E2F_METHOD_3_C74639398F739FDA_OFFSET UNITYSDK_OFFSET(0x12ACD820)
#define CLASS_3_8704178D7D215E2F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12ACD490)
#define CLASS_3_8704178D7D215E2F__CTOR_OFFSET UNITYSDK_OFFSET(0x12ACD320)
#define CLASS_3_8704178D7D215E2F__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x12ACD4F0)
#define CLASS_3_8704178D7D215E2F__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x12ACD620)
#define CLASS_3_8704178D7D215E2F__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x12ACD750)
#define CLASS_3_8704178D7D215E2F___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12ACD960)
#define CLASS_3_8704178D7D215E2F___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x12ACD9C0)
#define CLASS_3_8704178D7D215E2F___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x12ACD9D0)
#define CLASS_3_8704178D7D215E2F___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x12ACD9E0)

inline static constexpr unsigned int Class_3_8704178D7D215E2F_TypeDefinitionIndex = 49127;

class Class_3_8704178D7D215E2F : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitGroupEvent*>
{
public:
	::System::String* Field_3_0; // 0x68
	::RPG::GameCore::GameEntity* Field_3_1; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitGroupEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitGroupEvent*))((::PBYTE)hIl2Cpp + CLASS_3_8704178D7D215E2F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8704178D7D215E2F_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8704178D7D215E2F__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8704178D7D215E2F__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8704178D7D215E2F__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_C74639398F739FDA(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_3_8704178D7D215E2F_METHOD_3_C74639398F739FDA_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8704178D7D215E2F___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8704178D7D215E2F___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8704178D7D215E2F___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8704178D7D215E2F___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
