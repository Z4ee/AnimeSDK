#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ArchiveWolfBroPuzzle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_5063828FF26459EE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC46A150)
#define CLASS_2_5063828FF26459EE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC469F10)
#define CLASS_2_5063828FF26459EE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC46A100)
#define CLASS_2_5063828FF26459EE_TICK_OFFSET UNITYSDK_OFFSET(0xC46A190)
#define CLASS_2_5063828FF26459EE__CTOR_OFFSET UNITYSDK_OFFSET(0xC469F00)

inline static constexpr unsigned int Class_2_5063828FF26459EE_TypeDefinitionIndex = 54141;

class Class_2_5063828FF26459EE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ArchiveWolfBroPuzzle* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

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
