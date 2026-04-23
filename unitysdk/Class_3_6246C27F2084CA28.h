#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::Client { class MissionModule; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMissionCustomValueChange; }
namespace System { class String; }

#define CLASS_3_6246C27F2084CA28_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA88320)
#define CLASS_3_6246C27F2084CA28_METHOD_3_6EA824B987E032BB_OFFSET UNITYSDK_OFFSET(0xAA88560)
#define CLASS_3_6246C27F2084CA28__CTOR_OFFSET UNITYSDK_OFFSET(0xAA88090)
#define CLASS_3_6246C27F2084CA28__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xAA88370)
#define CLASS_3_6246C27F2084CA28__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xAA883C0)
#define CLASS_3_6246C27F2084CA28__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xAA88490)
#define CLASS_3_6246C27F2084CA28___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA886C0)
#define CLASS_3_6246C27F2084CA28___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xAA88710)
#define CLASS_3_6246C27F2084CA28___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xAA88760)
#define CLASS_3_6246C27F2084CA28___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xAA88770)

inline static constexpr unsigned int Class_3_6246C27F2084CA28_TypeDefinitionIndex = 49305;

class Class_3_6246C27F2084CA28 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitMissionCustomValueChange*>
{
public:
	::RPG::Client::MissionModule* Field_3_0; // 0x68

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitMissionCustomValueChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitMissionCustomValueChange*))((::PBYTE)hIl2Cpp + CLASS_3_6246C27F2084CA28__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6246C27F2084CA28_DISPOSE_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6246C27F2084CA28__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6246C27F2084CA28__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6246C27F2084CA28__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_6EA824B987E032BB(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_6246C27F2084CA28_METHOD_3_6EA824B987E032BB_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6246C27F2084CA28___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6246C27F2084CA28___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6246C27F2084CA28___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6246C27F2084CA28___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
