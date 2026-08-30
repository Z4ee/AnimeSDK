#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PlayAnimationClip; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_3EB34C645666A63A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE3D270)
#define CLASS_2_3EB34C645666A63A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE3D2B0)
#define CLASS_2_3EB34C645666A63A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBE3D4B0)
#define CLASS_2_3EB34C645666A63A_TICK_OFFSET UNITYSDK_OFFSET(0xBE3D500)
#define CLASS_2_3EB34C645666A63A__CTOR_OFFSET UNITYSDK_OFFSET(0xBE3D260)

inline static constexpr unsigned int Class_2_3EB34C645666A63A_TypeDefinitionIndex = 55463;

class Class_2_3EB34C645666A63A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PlayAnimationClip* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayAnimationClip* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayAnimationClip*))((::PBYTE)hIl2Cpp + CLASS_2_3EB34C645666A63A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3EB34C645666A63A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3EB34C645666A63A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3EB34C645666A63A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3EB34C645666A63A_TICK_OFFSET))(this, a1);
	}
};
