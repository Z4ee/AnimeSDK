#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_0_16E4307DCC419505_401;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropStateChange; }

#define CLASS_3_0763B2FD337677DD_METHOD_3_CA6F6BE86A71AD17_OFFSET UNITYSDK_OFFSET(0xB064AC0)
#define CLASS_3_0763B2FD337677DD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB0648C0)
#define CLASS_3_0763B2FD337677DD__CTOR_OFFSET UNITYSDK_OFFSET(0xB064500)
#define CLASS_3_0763B2FD337677DD__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xB064670)
#define CLASS_3_0763B2FD337677DD__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB064920)
#define CLASS_3_0763B2FD337677DD__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB0649F0)
#define CLASS_3_0763B2FD337677DD___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB064C60)
#define CLASS_3_0763B2FD337677DD___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xB064C50)
#define CLASS_3_0763B2FD337677DD___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB064CC0)
#define CLASS_3_0763B2FD337677DD___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB064CD0)

inline static constexpr unsigned int Class_3_0763B2FD337677DD_TypeDefinitionIndex = 49984;

class Class_3_0763B2FD337677DD : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitPropStateChange*>
{
public:
	::System::UInt32 Field_3_0; // 0x68
	::System::UInt32 Field_3_1; // 0x6C

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

	::System::Void Method_3_CA6F6BE86A71AD17(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_3_0763B2FD337677DD_METHOD_3_CA6F6BE86A71AD17_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0763B2FD337677DD___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0763B2FD337677DD___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0763B2FD337677DD___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0763B2FD337677DD___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
