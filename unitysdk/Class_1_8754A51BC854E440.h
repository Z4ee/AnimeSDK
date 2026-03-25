#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GCFreeClosure/ClosureEvent_2.h"
#include "unitysdk/RPG/GameCore/FiveDimLightningStateType.h"
#include "unitysdk/System/Object.h"

class Class_2_9DD8A46984F1AFFD;
namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_8754A51BC854E440_CLEAR_OFFSET UNITYSDK_OFFSET(0x1677D5D0)
#define CLASS_1_8754A51BC854E440_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1677D630)
#define CLASS_1_8754A51BC854E440_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1677D6C0)
#define CLASS_1_8754A51BC854E440__CTOR_OFFSET UNITYSDK_OFFSET(0x1677D730)

inline static constexpr unsigned int Class_1_8754A51BC854E440_TypeDefinitionIndex = 33536;

class Class_1_8754A51BC854E440 : public ::System::Object
{
public:
	::RPG::PoolList_1<::System::Int32>* Field_1_3; // 0x10
	::RPG::GCFreeClosure::ClosureEvent_2<::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimLightningStateType> Field_1_2; // 0x18
	::System::Boolean Field_1_4; // 0x28
	::System::Single Field_1_0; // 0x2C
	::RPG::GameCore::FiveDimLightningStateType Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8754A51BC854E440__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8754A51BC854E440_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8754A51BC854E440_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8754A51BC854E440_ONRECYCLE_OFFSET))(this);
	}
};
