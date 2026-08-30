#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowMazePuzzleChallengeFinishToast; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2307E9325C065C89_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18C9D340)
#define CLASS_2_2307E9325C065C89_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18C9D1F0)
#define CLASS_2_2307E9325C065C89_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18C9D2A0)
#define CLASS_2_2307E9325C065C89_TICK_OFFSET UNITYSDK_OFFSET(0x18C9D2E0)
#define CLASS_2_2307E9325C065C89__CTOR_OFFSET UNITYSDK_OFFSET(0x18C9D1E0)

inline static constexpr unsigned int Class_2_2307E9325C065C89_TypeDefinitionIndex = 53533;

class Class_2_2307E9325C065C89 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowMazePuzzleChallengeFinishToast* OFKGLJOAMLD; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowMazePuzzleChallengeFinishToast* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowMazePuzzleChallengeFinishToast*))((::PBYTE)hIl2Cpp + CLASS_2_2307E9325C065C89__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2307E9325C065C89_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2307E9325C065C89_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2307E9325C065C89_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2307E9325C065C89_DISPOSE_OFFSET))(this);
	}
};
