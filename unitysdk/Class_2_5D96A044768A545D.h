#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class LimitFrameMaxTimeStep; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_5D96A044768A545D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x117C9A40)
#define CLASS_2_5D96A044768A545D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x117C9A80)
#define CLASS_2_5D96A044768A545D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x117C9BB0)
#define CLASS_2_5D96A044768A545D_TICK_OFFSET UNITYSDK_OFFSET(0x117C9C00)
#define CLASS_2_5D96A044768A545D__CTOR_OFFSET UNITYSDK_OFFSET(0x117C9A30)

inline static constexpr unsigned int Class_2_5D96A044768A545D_TypeDefinitionIndex = 50832;

class Class_2_5D96A044768A545D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::LimitFrameMaxTimeStep* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LimitFrameMaxTimeStep* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LimitFrameMaxTimeStep*))((::PBYTE)hIl2Cpp + CLASS_2_5D96A044768A545D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D96A044768A545D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D96A044768A545D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D96A044768A545D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5D96A044768A545D_TICK_OFFSET))(this, a1);
	}
};
