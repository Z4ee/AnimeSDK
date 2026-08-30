#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PropPuzzleEventSender; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A35D8A59B42C5457_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A7B9BC0)
#define CLASS_2_A35D8A59B42C5457_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A7B9C60)
#define CLASS_2_A35D8A59B42C5457_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A7B9F90)
#define CLASS_2_A35D8A59B42C5457_TICK_OFFSET UNITYSDK_OFFSET(0x1A7B9C00)
#define CLASS_2_A35D8A59B42C5457__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7B9BB0)

inline static constexpr unsigned int Class_2_A35D8A59B42C5457_TypeDefinitionIndex = 58488;

class Class_2_A35D8A59B42C5457 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PropPuzzleEventSender* IGHAHBNLIJA; // 0x18
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20

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
