#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LoopScene; }
namespace RPG::GameCore { class SetLoopSceneCameraSpeed; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_DC2210CD3B7AF82B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16F47930)
#define CLASS_2_DC2210CD3B7AF82B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16F47970)
#define CLASS_2_DC2210CD3B7AF82B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16F47B20)
#define CLASS_2_DC2210CD3B7AF82B_TICK_OFFSET UNITYSDK_OFFSET(0x16F47B70)
#define CLASS_2_DC2210CD3B7AF82B__CTOR_OFFSET UNITYSDK_OFFSET(0x16F47920)

inline static constexpr unsigned int Class_2_DC2210CD3B7AF82B_TypeDefinitionIndex = 55932;

class Class_2_DC2210CD3B7AF82B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::UnityEngine::AnimationCurve* Field_2_0; // 0x18
	::RPG::Client::LoopScene* Field_2_1; // 0x20
	::RPG::GameCore::SetLoopSceneCameraSpeed* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_3; // 0x30
	::System::Single Field_2_4; // 0x38
	::System::Boolean Field_2_5; // 0x3C
	::System::Single Field_2_6; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetLoopSceneCameraSpeed* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetLoopSceneCameraSpeed*))((::PBYTE)hIl2Cpp + CLASS_2_DC2210CD3B7AF82B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC2210CD3B7AF82B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC2210CD3B7AF82B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC2210CD3B7AF82B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DC2210CD3B7AF82B_TICK_OFFSET))(this, a1);
	}
};
