#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ArchiveWolfBroPuzzle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_5063828FF26459EE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDD799A0)
#define CLASS_2_5063828FF26459EE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDD796E0)
#define CLASS_2_5063828FF26459EE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDD79950)
#define CLASS_2_5063828FF26459EE_TICK_OFFSET UNITYSDK_OFFSET(0xDD799E0)
#define CLASS_2_5063828FF26459EE__CTOR_OFFSET UNITYSDK_OFFSET(0xDD796D0)

inline static constexpr unsigned int Class_2_5063828FF26459EE_TypeDefinitionIndex = 58088;

class Class_2_5063828FF26459EE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::ArchiveWolfBroPuzzle* IGHAHBNLIJA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ArchiveWolfBroPuzzle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ArchiveWolfBroPuzzle*))((::PBYTE)hIl2Cpp + CLASS_2_5063828FF26459EE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5063828FF26459EE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5063828FF26459EE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5063828FF26459EE_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5063828FF26459EE_TICK_OFFSET))(this, a1);
	}
};
