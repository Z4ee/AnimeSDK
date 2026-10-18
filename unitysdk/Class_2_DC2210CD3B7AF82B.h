#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LoopScene; }
namespace RPG::GameCore { class SetLoopSceneCameraSpeed; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_DC2210CD3B7AF82B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C2B610)
#define CLASS_2_DC2210CD3B7AF82B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C2B650)
#define CLASS_2_DC2210CD3B7AF82B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15C2B800)
#define CLASS_2_DC2210CD3B7AF82B_TICK_OFFSET UNITYSDK_OFFSET(0x15C2B850)
#define CLASS_2_DC2210CD3B7AF82B__CTOR_OFFSET UNITYSDK_OFFSET(0x15C2B600)

inline static constexpr unsigned int Class_2_DC2210CD3B7AF82B_TypeDefinitionIndex = 58556;

class Class_2_DC2210CD3B7AF82B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetLoopSceneCameraSpeed* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::Client::LoopScene* LCNCFFNCIME; // 0x28
	::UnityEngine::AnimationCurve* BKHPEABMAOE; // 0x30
	::System::Single PGMIOKKLHIE; // 0x38
	::System::Boolean DLNNFPKMHLO; // 0x3C
	::System::Single BOBKPMMHHAM; // 0x40

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
