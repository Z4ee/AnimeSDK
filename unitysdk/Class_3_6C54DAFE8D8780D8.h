#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"

namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MissionModule; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitSubMissionStateChange; }

#define CLASS_3_6C54DAFE8D8780D8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12EA3FD0)
#define CLASS_3_6C54DAFE8D8780D8_METHOD_3_E6162EFE692CA91A_OFFSET UNITYSDK_OFFSET(0x12EA4310)
#define CLASS_3_6C54DAFE8D8780D8__CTOR_OFFSET UNITYSDK_OFFSET(0x12EA3C20)
#define CLASS_3_6C54DAFE8D8780D8__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x12EA4040)
#define CLASS_3_6C54DAFE8D8780D8__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x12EA4190)
#define CLASS_3_6C54DAFE8D8780D8__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x12EA4250)

inline static constexpr unsigned int Class_3_6C54DAFE8D8780D8_TypeDefinitionIndex = 53751;

class Class_3_6C54DAFE8D8780D8 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitSubMissionStateChange*>
{
public:
	::RPG::PoolHashSet_1<::System::UInt32>* LKAKKKHGMHK; // 0x68
	::RPG::Client::MapDef* KKKADHHBMLD; // 0x70
	::RPG::Client::MissionModule* JOMIMCLABPL; // 0x78

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitSubMissionStateChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitSubMissionStateChange*))((::PBYTE)hIl2Cpp + CLASS_3_6C54DAFE8D8780D8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C54DAFE8D8780D8_DISPOSE_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C54DAFE8D8780D8__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C54DAFE8D8780D8__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C54DAFE8D8780D8__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_E6162EFE692CA91A(::System::UInt32 a1, ::RPG::GameCore::SubMissionState a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::SubMissionState, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6C54DAFE8D8780D8_METHOD_3_E6162EFE692CA91A_OFFSET))(this, a1, a2, a3);
	}
};
