#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"
#include "unitysdk/RPG/GameCore/MapRotationEnergyState.h"

namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMapRotationEnergyStateChange; }
namespace System { class Object; }

#define CLASS_3_925B5406571C4C8E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB8E4C0)
#define CLASS_3_925B5406571C4C8E_METHOD_3_6FECEF220D41E8B2_OFFSET UNITYSDK_OFFSET(0xBB8E790)
#define CLASS_3_925B5406571C4C8E__CTOR_OFFSET UNITYSDK_OFFSET(0xBB8E2A0)
#define CLASS_3_925B5406571C4C8E__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xBB8E550)
#define CLASS_3_925B5406571C4C8E__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xBB8E610)
#define CLASS_3_925B5406571C4C8E__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xBB8E6D0)

inline static constexpr unsigned int Class_3_925B5406571C4C8E_TypeDefinitionIndex = 53267;

class Class_3_925B5406571C4C8E : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitMapRotationEnergyStateChange*>
{
public:
	::RPG::PoolHashSet_1<::RPG::GameCore::MapRotationEnergyState>* BFDIGFLKBOB; // 0x68
	::RPG::PoolHashSet_1<::RPG::GameCore::MapRotationEnergyState>* FDCFBMPEJNF; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitMapRotationEnergyStateChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitMapRotationEnergyStateChange*))((::PBYTE)hIl2Cpp + CLASS_3_925B5406571C4C8E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_925B5406571C4C8E_DISPOSE_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_925B5406571C4C8E__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_925B5406571C4C8E__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_925B5406571C4C8E__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_6FECEF220D41E8B2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_925B5406571C4C8E_METHOD_3_6FECEF220D41E8B2_OFFSET))(this, a1);
	}
};
