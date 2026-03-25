#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ChessWaitAllProjectileFinish; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_5BCE3A8D724BC47B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8BD9380)
#define CLASS_2_5BCE3A8D724BC47B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8BD93C0)
#define CLASS_2_5BCE3A8D724BC47B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8BD9410)
#define CLASS_2_5BCE3A8D724BC47B_TICK_OFFSET UNITYSDK_OFFSET(0x8BD9460)
#define CLASS_2_5BCE3A8D724BC47B__CTOR_OFFSET UNITYSDK_OFFSET(0x8BD9370)

inline static constexpr unsigned int Class_2_5BCE3A8D724BC47B_TypeDefinitionIndex = 45208;

class Class_2_5BCE3A8D724BC47B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ChessWaitAllProjectileFinish* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChessWaitAllProjectileFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChessWaitAllProjectileFinish*))((::PBYTE)hIl2Cpp + CLASS_2_5BCE3A8D724BC47B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5BCE3A8D724BC47B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5BCE3A8D724BC47B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5BCE3A8D724BC47B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5BCE3A8D724BC47B_TICK_OFFSET))(this, a1);
	}
};
