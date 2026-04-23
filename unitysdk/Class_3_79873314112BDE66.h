#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"

namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MissionModule; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitSubMissionStateChange; }

#define CLASS_3_79873314112BDE66_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11894870)
#define CLASS_3_79873314112BDE66_METHOD_3_59B4050C6767C1DB_OFFSET UNITYSDK_OFFSET(0x11894B00)
#define CLASS_3_79873314112BDE66__CTOR_OFFSET UNITYSDK_OFFSET(0x118944C0)
#define CLASS_3_79873314112BDE66__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x118948E0)
#define CLASS_3_79873314112BDE66__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x118949C0)
#define CLASS_3_79873314112BDE66__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x11894A60)
#define CLASS_3_79873314112BDE66___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11894D70)
#define CLASS_3_79873314112BDE66___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x11894DE0)
#define CLASS_3_79873314112BDE66___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x11894DF0)
#define CLASS_3_79873314112BDE66___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x11894E00)

inline static constexpr unsigned int Class_3_79873314112BDE66_TypeDefinitionIndex = 49323;

class Class_3_79873314112BDE66 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitSubMissionStateChange*>
{
public:
	::RPG::Client::MissionModule* Field_3_1; // 0x68
	::RPG::Client::MapDef* Field_3_2; // 0x70
	::RPG::PoolHashSet_1<::System::UInt32>* Field_3_0; // 0x78

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitSubMissionStateChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitSubMissionStateChange*))((::PBYTE)hIl2Cpp + CLASS_3_79873314112BDE66__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_79873314112BDE66_DISPOSE_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_79873314112BDE66__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_79873314112BDE66__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_79873314112BDE66__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_59B4050C6767C1DB(::System::UInt32 a1, ::RPG::GameCore::SubMissionState a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::SubMissionState, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_79873314112BDE66_METHOD_3_59B4050C6767C1DB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_79873314112BDE66___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_79873314112BDE66___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_79873314112BDE66___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_79873314112BDE66___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
