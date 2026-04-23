#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetCameraConfigPriority; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_C564B21A6BBAA12F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12B3D460)
#define CLASS_2_C564B21A6BBAA12F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12B3D4A0)
#define CLASS_2_C564B21A6BBAA12F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12B3D620)
#define CLASS_2_C564B21A6BBAA12F_TICK_OFFSET UNITYSDK_OFFSET(0x12B3D670)
#define CLASS_2_C564B21A6BBAA12F__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3D450)

inline static constexpr unsigned int Class_2_C564B21A6BBAA12F_TypeDefinitionIndex = 51045;

class Class_2_C564B21A6BBAA12F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::SetCameraConfigPriority* Field_2_0; // 0x20

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
