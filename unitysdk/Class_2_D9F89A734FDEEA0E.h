#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowPuzzleHudWolfBroInBox; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D9F89A734FDEEA0E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x134B2550)
#define CLASS_2_D9F89A734FDEEA0E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x134B2590)
#define CLASS_2_D9F89A734FDEEA0E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x134B2610)
#define CLASS_2_D9F89A734FDEEA0E_TICK_OFFSET UNITYSDK_OFFSET(0x134B2660)
#define CLASS_2_D9F89A734FDEEA0E__CTOR_OFFSET UNITYSDK_OFFSET(0x134B2540)

inline static constexpr unsigned int Class_2_D9F89A734FDEEA0E_TypeDefinitionIndex = 54821;

class Class_2_D9F89A734FDEEA0E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::ShowPuzzleHudWolfBroInBox* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowPuzzleHudWolfBroInBox* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowPuzzleHudWolfBroInBox*))((::PBYTE)hIl2Cpp + CLASS_2_D9F89A734FDEEA0E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9F89A734FDEEA0E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9F89A734FDEEA0E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9F89A734FDEEA0E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D9F89A734FDEEA0E_TICK_OFFSET))(this, a1);
	}
};
