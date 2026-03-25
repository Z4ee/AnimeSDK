#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_0_16E4307DCC419505_375;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitEntityEvent; }
namespace System { class String; }

#define CLASS_3_6980BA2F9FEE5A8B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x110BA3D0)
#define CLASS_3_6980BA2F9FEE5A8B_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x110BA5A0)
#define CLASS_3_6980BA2F9FEE5A8B_METHOD_3_6F6E2DBCFEEBC723_OFFSET UNITYSDK_OFFSET(0x110BA6C0)
#define CLASS_3_6980BA2F9FEE5A8B_METHOD_3_BAE7592D149B0E7F_OFFSET UNITYSDK_OFFSET(0x110BA850)
#define CLASS_3_6980BA2F9FEE5A8B__CTOR_OFFSET UNITYSDK_OFFSET(0x110BA060)
#define CLASS_3_6980BA2F9FEE5A8B__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x110BA420)
#define CLASS_3_6980BA2F9FEE5A8B__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x110BA600)
#define CLASS_3_6980BA2F9FEE5A8B___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x110BA8D0)
#define CLASS_3_6980BA2F9FEE5A8B___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x110BA950)
#define CLASS_3_6980BA2F9FEE5A8B___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x110BA960)

inline static constexpr unsigned int Class_3_6980BA2F9FEE5A8B_TypeDefinitionIndex = 42536;

class Class_3_6980BA2F9FEE5A8B : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitEntityEvent*>
{
public:
	::System::String* Field_3_2; // 0x68
	::RPG::GameCore::GameEntity* Field_3_0; // 0x70
	::System::UInt32 Field_3_1; // 0x78

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitEntityEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitEntityEvent*))((::PBYTE)hIl2Cpp + CLASS_3_6980BA2F9FEE5A8B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6980BA2F9FEE5A8B_DISPOSE_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6980BA2F9FEE5A8B__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6980BA2F9FEE5A8B__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_6F6E2DBCFEEBC723(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_3_6980BA2F9FEE5A8B_METHOD_3_6F6E2DBCFEEBC723_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_BAE7592D149B0E7F(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_6980BA2F9FEE5A8B_METHOD_3_BAE7592D149B0E7F_OFFSET))(this, a1);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6980BA2F9FEE5A8B_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6980BA2F9FEE5A8B___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6980BA2F9FEE5A8B___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6980BA2F9FEE5A8B___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
