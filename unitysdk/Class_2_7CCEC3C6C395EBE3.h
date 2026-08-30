#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class OverrideLightDeviceFollowColliderMode; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7CCEC3C6C395EBE3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A81FF00)
#define CLASS_2_7CCEC3C6C395EBE3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A81FDF0)
#define CLASS_2_7CCEC3C6C395EBE3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A81FF40)
#define CLASS_2_7CCEC3C6C395EBE3_TICK_OFFSET UNITYSDK_OFFSET(0x1A81FF90)
#define CLASS_2_7CCEC3C6C395EBE3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A81FDE0)

inline static constexpr unsigned int Class_2_7CCEC3C6C395EBE3_TypeDefinitionIndex = 53042;

class Class_2_7CCEC3C6C395EBE3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::OverrideLightDeviceFollowColliderMode* OFKGLJOAMLD; // 0x20

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
