#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PropEscalatorMoveStart; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_80FECCEC433F4D09_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1674FB00)
#define CLASS_2_80FECCEC433F4D09_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1674FBA0)
#define CLASS_2_80FECCEC433F4D09_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1674FB50)
#define CLASS_2_80FECCEC433F4D09_TICK_OFFSET UNITYSDK_OFFSET(0x1674FD90)
#define CLASS_2_80FECCEC433F4D09__CTOR_OFFSET UNITYSDK_OFFSET(0x1674FAF0)

inline static constexpr unsigned int Class_2_80FECCEC433F4D09_TypeDefinitionIndex = 55738;

class Class_2_80FECCEC433F4D09 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::String* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::PropEscalatorMoveStart* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropEscalatorMoveStart* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropEscalatorMoveStart*))((::PBYTE)hIl2Cpp + CLASS_2_80FECCEC433F4D09__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80FECCEC433F4D09_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80FECCEC433F4D09_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80FECCEC433F4D09_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_80FECCEC433F4D09_TICK_OFFSET))(this, a1);
	}
};
