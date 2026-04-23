#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::GameCore { class MatchThreeDragTutorial; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_C482ADB053341B9A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12AB1C80)
#define CLASS_2_C482ADB053341B9A_METHOD_2_2984099754010F2F_OFFSET UNITYSDK_OFFSET(0x12AB20D0)
#define CLASS_2_C482ADB053341B9A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12AB1D30)
#define CLASS_2_C482ADB053341B9A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12AB2140)
#define CLASS_2_C482ADB053341B9A_TICK_OFFSET UNITYSDK_OFFSET(0x12AB2190)
#define CLASS_2_C482ADB053341B9A__CTOR_OFFSET UNITYSDK_OFFSET(0x12AB1C70)

inline static constexpr unsigned int Class_2_C482ADB053341B9A_TypeDefinitionIndex = 50868;

class Class_2_C482ADB053341B9A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::MatchThreeDragTutorial* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MatchThreeDragTutorial* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MatchThreeDragTutorial*))((::PBYTE)hIl2Cpp + CLASS_2_C482ADB053341B9A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C482ADB053341B9A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C482ADB053341B9A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C482ADB053341B9A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C482ADB053341B9A_TICK_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2Int Method_2_2984099754010F2F(::RPG::MVector2 a1)
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_2_C482ADB053341B9A_METHOD_2_2984099754010F2F_OFFSET))(this, a1);
	}
};
