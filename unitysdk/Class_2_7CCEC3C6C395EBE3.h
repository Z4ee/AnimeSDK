#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class OverrideLightDeviceFollowColliderMode; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7CCEC3C6C395EBE3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92B9010)
#define CLASS_2_7CCEC3C6C395EBE3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x92B8F00)
#define CLASS_2_7CCEC3C6C395EBE3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x92B9050)
#define CLASS_2_7CCEC3C6C395EBE3_TICK_OFFSET UNITYSDK_OFFSET(0x92B90A0)
#define CLASS_2_7CCEC3C6C395EBE3__CTOR_OFFSET UNITYSDK_OFFSET(0x92B8EF0)

inline static constexpr unsigned int Class_2_7CCEC3C6C395EBE3_TypeDefinitionIndex = 48699;

class Class_2_7CCEC3C6C395EBE3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::OverrideLightDeviceFollowColliderMode* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideLightDeviceFollowColliderMode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideLightDeviceFollowColliderMode*))((::PBYTE)hIl2Cpp + CLASS_2_7CCEC3C6C395EBE3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCEC3C6C395EBE3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCEC3C6C395EBE3_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCEC3C6C395EBE3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7CCEC3C6C395EBE3_TICK_OFFSET))(this, a1);
	}
};
