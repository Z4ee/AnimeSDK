#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LoopSceneMoveObject; }
namespace RPG::GameCore { class SetLoopMoveObjectSpeed; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_71341A53A0AC4D6A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17E2AEF0)
#define CLASS_2_71341A53A0AC4D6A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17E2AF30)
#define CLASS_2_71341A53A0AC4D6A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17E2B180)
#define CLASS_2_71341A53A0AC4D6A_TICK_OFFSET UNITYSDK_OFFSET(0x17E2B1D0)
#define CLASS_2_71341A53A0AC4D6A__CTOR_OFFSET UNITYSDK_OFFSET(0x17E2AEE0)

inline static constexpr unsigned int Class_2_71341A53A0AC4D6A_TypeDefinitionIndex = 58703;

class Class_2_71341A53A0AC4D6A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::Client::LoopSceneMoveObject* HGDAENIAFKC; // 0x20
	::UnityEngine::AnimationCurve* BKHPEABMAOE; // 0x28
	::RPG::GameCore::SetLoopMoveObjectSpeed* OFKGLJOAMLD; // 0x30
	::System::Single PGMIOKKLHIE; // 0x38
	::System::Single BOBKPMMHHAM; // 0x3C
	::System::Boolean DLNNFPKMHLO; // 0x40

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
