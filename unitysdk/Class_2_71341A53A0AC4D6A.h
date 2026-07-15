#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LoopSceneMoveObject; }
namespace RPG::GameCore { class SetLoopMoveObjectSpeed; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_71341A53A0AC4D6A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x168895E0)
#define CLASS_2_71341A53A0AC4D6A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16889620)
#define CLASS_2_71341A53A0AC4D6A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16889870)
#define CLASS_2_71341A53A0AC4D6A_TICK_OFFSET UNITYSDK_OFFSET(0x168898C0)
#define CLASS_2_71341A53A0AC4D6A__CTOR_OFFSET UNITYSDK_OFFSET(0x168895D0)

inline static constexpr unsigned int Class_2_71341A53A0AC4D6A_TypeDefinitionIndex = 55931;

class Class_2_71341A53A0AC4D6A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::UnityEngine::AnimationCurve* Field_2_0; // 0x18
	::RPG::GameCore::SetLoopMoveObjectSpeed* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::RPG::Client::LoopSceneMoveObject* Field_2_3; // 0x30
	::System::Single Field_2_4; // 0x38
	::System::Boolean Field_2_5; // 0x3C
	::System::Single Field_2_6; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetLoopMoveObjectSpeed* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetLoopMoveObjectSpeed*))((::PBYTE)hIl2Cpp + CLASS_2_71341A53A0AC4D6A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71341A53A0AC4D6A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71341A53A0AC4D6A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71341A53A0AC4D6A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71341A53A0AC4D6A_TICK_OFFSET))(this, a1);
	}
};
