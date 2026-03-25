#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_0_16E4307DCC419505_375;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropStateChangeV2; }

#define CLASS_3_180EAFEBEC0569D9_METHOD_3_FCFB5DE045BD6704_OFFSET UNITYSDK_OFFSET(0xC4E1B20)
#define CLASS_3_180EAFEBEC0569D9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC4E1960)
#define CLASS_3_180EAFEBEC0569D9__CTOR_OFFSET UNITYSDK_OFFSET(0xC4E15B0)
#define CLASS_3_180EAFEBEC0569D9__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xC4E1710)
#define CLASS_3_180EAFEBEC0569D9__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xC4E19C0)
#define CLASS_3_180EAFEBEC0569D9__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xC4E1A70)
#define CLASS_3_180EAFEBEC0569D9___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC4E1CC0)
#define CLASS_3_180EAFEBEC0569D9___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xC4E1CB0)
#define CLASS_3_180EAFEBEC0569D9___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xC4E1D20)
#define CLASS_3_180EAFEBEC0569D9___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xC4E1D30)

inline static constexpr unsigned int Class_3_180EAFEBEC0569D9_TypeDefinitionIndex = 43319;

class Class_3_180EAFEBEC0569D9 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitPropStateChangeV2*>
{
public:
	::System::UInt32 Field_3_0; // 0x68
	::System::UInt32 Field_3_1; // 0x6C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPropStateChangeV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPropStateChangeV2*))((::PBYTE)hIl2Cpp + CLASS_3_180EAFEBEC0569D9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_180EAFEBEC0569D9__PREPAREDATA_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_180EAFEBEC0569D9_ONTASKRESET_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_180EAFEBEC0569D9__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_180EAFEBEC0569D9__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_FCFB5DE045BD6704(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_3_180EAFEBEC0569D9_METHOD_3_FCFB5DE045BD6704_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_180EAFEBEC0569D9___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_180EAFEBEC0569D9___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_180EAFEBEC0569D9___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_180EAFEBEC0569D9___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
