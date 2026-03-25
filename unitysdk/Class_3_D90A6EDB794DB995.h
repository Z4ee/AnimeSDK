#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_0_16E4307DCC419505_375;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropStateChange; }

#define CLASS_3_D90A6EDB794DB995_METHOD_3_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0x8C6A310)
#define CLASS_3_D90A6EDB794DB995_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8C6A150)
#define CLASS_3_D90A6EDB794DB995__CTOR_OFFSET UNITYSDK_OFFSET(0x8C69DA0)
#define CLASS_3_D90A6EDB794DB995__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x8C69F00)
#define CLASS_3_D90A6EDB794DB995__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x8C6A1B0)
#define CLASS_3_D90A6EDB794DB995__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x8C6A260)
#define CLASS_3_D90A6EDB794DB995___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8C6A4B0)
#define CLASS_3_D90A6EDB794DB995___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x8C6A4A0)
#define CLASS_3_D90A6EDB794DB995___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x8C6A510)
#define CLASS_3_D90A6EDB794DB995___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x8C6A520)

inline static constexpr unsigned int Class_3_D90A6EDB794DB995_TypeDefinitionIndex = 43318;

class Class_3_D90A6EDB794DB995 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitPropStateChange*>
{
public:
	::System::UInt32 Field_3_1; // 0x68
	::System::UInt32 Field_3_0; // 0x6C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPropStateChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPropStateChange*))((::PBYTE)hIl2Cpp + CLASS_3_D90A6EDB794DB995__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D90A6EDB794DB995__PREPAREDATA_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D90A6EDB794DB995_ONTASKRESET_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D90A6EDB794DB995__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D90A6EDB794DB995__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_3_D90A6EDB794DB995_METHOD_3_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D90A6EDB794DB995___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D90A6EDB794DB995___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D90A6EDB794DB995___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D90A6EDB794DB995___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
