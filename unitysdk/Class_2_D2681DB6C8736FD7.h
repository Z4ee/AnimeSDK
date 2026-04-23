#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CancelMazePuzzleChallenge; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D2681DB6C8736FD7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA54A200)
#define CLASS_2_D2681DB6C8736FD7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA54A240)
#define CLASS_2_D2681DB6C8736FD7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA54A410)
#define CLASS_2_D2681DB6C8736FD7_TICK_OFFSET UNITYSDK_OFFSET(0xA54A460)
#define CLASS_2_D2681DB6C8736FD7__CTOR_OFFSET UNITYSDK_OFFSET(0xA54A1F0)

inline static constexpr unsigned int Class_2_D2681DB6C8736FD7_TypeDefinitionIndex = 48600;

class Class_2_D2681DB6C8736FD7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PropComponent* Field_2_2; // 0x18
	::RPG::GameCore::CancelMazePuzzleChallenge* Field_2_0; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::System::UInt32 Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CancelMazePuzzleChallenge* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CancelMazePuzzleChallenge*))((::PBYTE)hIl2Cpp + CLASS_2_D2681DB6C8736FD7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2681DB6C8736FD7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2681DB6C8736FD7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2681DB6C8736FD7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D2681DB6C8736FD7_TICK_OFFSET))(this, a1);
	}
};
