#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_0_16E4307DCC419505_375;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitGroupEvent; }
namespace System { class String; }

#define CLASS_3_82569144C11E3034_METHOD_3_8EFA7AE8C875AA71_OFFSET UNITYSDK_OFFSET(0x8E11270)
#define CLASS_3_82569144C11E3034_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8E10F10)
#define CLASS_3_82569144C11E3034__CTOR_OFFSET UNITYSDK_OFFSET(0x8E10DB0)
#define CLASS_3_82569144C11E3034__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x8E10F70)
#define CLASS_3_82569144C11E3034__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x8E110A0)
#define CLASS_3_82569144C11E3034__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x8E111C0)
#define CLASS_3_82569144C11E3034___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8E113B0)
#define CLASS_3_82569144C11E3034___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x8E11410)
#define CLASS_3_82569144C11E3034___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x8E11420)
#define CLASS_3_82569144C11E3034___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x8E11430)

inline static constexpr unsigned int Class_3_82569144C11E3034_TypeDefinitionIndex = 42540;

class Class_3_82569144C11E3034 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitGroupEvent*>
{
public:
	::System::String* Field_3_1; // 0x68
	::RPG::GameCore::GameEntity* Field_3_0; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitGroupEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitGroupEvent*))((::PBYTE)hIl2Cpp + CLASS_3_82569144C11E3034__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_82569144C11E3034_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_82569144C11E3034__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_82569144C11E3034__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_82569144C11E3034__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_8EFA7AE8C875AA71(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_3_82569144C11E3034_METHOD_3_8EFA7AE8C875AA71_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_82569144C11E3034___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_82569144C11E3034___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_82569144C11E3034___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_82569144C11E3034___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
