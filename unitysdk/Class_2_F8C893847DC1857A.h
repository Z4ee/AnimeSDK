#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class StartChimeraWorkRound; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F8C893847DC1857A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCA50870)
#define CLASS_2_F8C893847DC1857A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCA508B0)
#define CLASS_2_F8C893847DC1857A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCA50960)
#define CLASS_2_F8C893847DC1857A_TICK_OFFSET UNITYSDK_OFFSET(0xCA509A0)
#define CLASS_2_F8C893847DC1857A__CTOR_OFFSET UNITYSDK_OFFSET(0xCA50860)

inline static constexpr unsigned int Class_2_F8C893847DC1857A_TypeDefinitionIndex = 58869;

class Class_2_F8C893847DC1857A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::StartChimeraWorkRound* IGHAHBNLIJA; // 0x18
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartChimeraWorkRound* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartChimeraWorkRound*))((::PBYTE)hIl2Cpp + CLASS_2_F8C893847DC1857A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8C893847DC1857A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8C893847DC1857A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8C893847DC1857A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F8C893847DC1857A_TICK_OFFSET))(this, a1);
	}
};
