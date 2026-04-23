#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PropPuzzleEventSender; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A35D8A59B42C5457_DISPOSE_OFFSET UNITYSDK_OFFSET(0x97B46A0)
#define CLASS_2_A35D8A59B42C5457_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x97B4740)
#define CLASS_2_A35D8A59B42C5457_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x97B4930)
#define CLASS_2_A35D8A59B42C5457_TICK_OFFSET UNITYSDK_OFFSET(0x97B46E0)
#define CLASS_2_A35D8A59B42C5457__CTOR_OFFSET UNITYSDK_OFFSET(0x97B4690)

inline static constexpr unsigned int Class_2_A35D8A59B42C5457_TypeDefinitionIndex = 53808;

class Class_2_A35D8A59B42C5457 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::PropPuzzleEventSender* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropPuzzleEventSender* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropPuzzleEventSender*))((::PBYTE)hIl2Cpp + CLASS_2_A35D8A59B42C5457__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A35D8A59B42C5457_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A35D8A59B42C5457_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A35D8A59B42C5457_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A35D8A59B42C5457_ONTASKRESET_OFFSET))(this);
	}
};
