#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetProbePuzzleResetNumber; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_3AC4A4E4A74256ED_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16EAA5D0)
#define CLASS_2_3AC4A4E4A74256ED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16EAA3C0)
#define CLASS_2_3AC4A4E4A74256ED_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16EAA580)
#define CLASS_2_3AC4A4E4A74256ED_TICK_OFFSET UNITYSDK_OFFSET(0x16EAA610)
#define CLASS_2_3AC4A4E4A74256ED__CTOR_OFFSET UNITYSDK_OFFSET(0x16EAA3B0)

inline static constexpr unsigned int Class_2_3AC4A4E4A74256ED_TypeDefinitionIndex = 58715;

class Class_2_3AC4A4E4A74256ED : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::SetProbePuzzleResetNumber* IGHAHBNLIJA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetProbePuzzleResetNumber* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetProbePuzzleResetNumber*))((::PBYTE)hIl2Cpp + CLASS_2_3AC4A4E4A74256ED__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AC4A4E4A74256ED_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AC4A4E4A74256ED_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AC4A4E4A74256ED_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3AC4A4E4A74256ED_TICK_OFFSET))(this, a1);
	}
};
