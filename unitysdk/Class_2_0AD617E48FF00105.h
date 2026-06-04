#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::GameCore { class AdventureWaitCameraLookAtTransition; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_0AD617E48FF00105_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13689A10)
#define CLASS_2_0AD617E48FF00105_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13689A60)
#define CLASS_2_0AD617E48FF00105_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13689C80)
#define CLASS_2_0AD617E48FF00105_TICK_OFFSET UNITYSDK_OFFSET(0x13689CD0)
#define CLASS_2_0AD617E48FF00105__CTOR_OFFSET UNITYSDK_OFFSET(0x13689A00)

inline static constexpr unsigned int Class_2_0AD617E48FF00105_TypeDefinitionIndex = 51263;

class Class_2_0AD617E48FF00105 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdventureWaitCameraLookAtTransition* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::Client::CameraDataAndFlags* Field_2_2; // 0x28
	::System::Single Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x34
	::System::Boolean Field_2_5; // 0x35
	::System::Single Field_2_6; // 0x38
	::System::Single Field_2_7; // 0x3C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureWaitCameraLookAtTransition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureWaitCameraLookAtTransition*))((::PBYTE)hIl2Cpp + CLASS_2_0AD617E48FF00105__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0AD617E48FF00105_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0AD617E48FF00105_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0AD617E48FF00105_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0AD617E48FF00105_TICK_OFFSET))(this, a1);
	}
};
