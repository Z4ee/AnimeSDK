#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CurvePropGroupPuzzleFinishListener; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_B61DF64A8B0238DB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1577CFF0)
#define CLASS_2_B61DF64A8B0238DB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1577D030)
#define CLASS_2_B61DF64A8B0238DB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1577D0E0)
#define CLASS_2_B61DF64A8B0238DB_TICK_OFFSET UNITYSDK_OFFSET(0x1577D130)
#define CLASS_2_B61DF64A8B0238DB__CTOR_OFFSET UNITYSDK_OFFSET(0x1577CFE0)

inline static constexpr unsigned int Class_2_B61DF64A8B0238DB_TypeDefinitionIndex = 58214;

class Class_2_B61DF64A8B0238DB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::CurvePropGroupPuzzleFinishListener* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CurvePropGroupPuzzleFinishListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CurvePropGroupPuzzleFinishListener*))((::PBYTE)hIl2Cpp + CLASS_2_B61DF64A8B0238DB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B61DF64A8B0238DB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B61DF64A8B0238DB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B61DF64A8B0238DB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B61DF64A8B0238DB_TICK_OFFSET))(this, a1);
	}
};
