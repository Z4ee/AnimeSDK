#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PlayChallengeTargetAnimation; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F3076C7E9489C07F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC090240)
#define CLASS_2_F3076C7E9489C07F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC090280)
#define CLASS_2_F3076C7E9489C07F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC0902E0)
#define CLASS_2_F3076C7E9489C07F_TICK_OFFSET UNITYSDK_OFFSET(0xC090330)
#define CLASS_2_F3076C7E9489C07F__CTOR_OFFSET UNITYSDK_OFFSET(0xC090230)

inline static constexpr unsigned int Class_2_F3076C7E9489C07F_TypeDefinitionIndex = 53355;

class Class_2_F3076C7E9489C07F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PlayChallengeTargetAnimation* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayChallengeTargetAnimation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayChallengeTargetAnimation*))((::PBYTE)hIl2Cpp + CLASS_2_F3076C7E9489C07F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3076C7E9489C07F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3076C7E9489C07F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3076C7E9489C07F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F3076C7E9489C07F_TICK_OFFSET))(this, a1);
	}
};
