#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class MoveVirtualCameraOnDollyPath; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_32440C1BA84000CF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16E639B0)
#define CLASS_2_32440C1BA84000CF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16E639F0)
#define CLASS_2_32440C1BA84000CF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16E63CF0)
#define CLASS_2_32440C1BA84000CF_TICK_OFFSET UNITYSDK_OFFSET(0x16E63D40)
#define CLASS_2_32440C1BA84000CF__CTOR_OFFSET UNITYSDK_OFFSET(0x16E639A0)

inline static constexpr unsigned int Class_2_32440C1BA84000CF_TypeDefinitionIndex = 55651;

class Class_2_32440C1BA84000CF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::MoveVirtualCameraOnDollyPath* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MoveVirtualCameraOnDollyPath* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MoveVirtualCameraOnDollyPath*))((::PBYTE)hIl2Cpp + CLASS_2_32440C1BA84000CF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32440C1BA84000CF_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32440C1BA84000CF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32440C1BA84000CF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_32440C1BA84000CF_TICK_OFFSET))(this, a1);
	}
};
