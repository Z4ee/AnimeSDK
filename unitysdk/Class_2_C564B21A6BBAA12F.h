#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetCameraConfigPriority; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_C564B21A6BBAA12F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8CDCBD0)
#define CLASS_2_C564B21A6BBAA12F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8CDCC10)
#define CLASS_2_C564B21A6BBAA12F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8CDCD90)
#define CLASS_2_C564B21A6BBAA12F_TICK_OFFSET UNITYSDK_OFFSET(0x8CDCDE0)
#define CLASS_2_C564B21A6BBAA12F__CTOR_OFFSET UNITYSDK_OFFSET(0x8CDCBC0)

inline static constexpr unsigned int Class_2_C564B21A6BBAA12F_TypeDefinitionIndex = 44329;

class Class_2_C564B21A6BBAA12F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetCameraConfigPriority* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCameraConfigPriority* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCameraConfigPriority*))((::PBYTE)hIl2Cpp + CLASS_2_C564B21A6BBAA12F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C564B21A6BBAA12F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C564B21A6BBAA12F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C564B21A6BBAA12F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C564B21A6BBAA12F_TICK_OFFSET))(this, a1);
	}
};
