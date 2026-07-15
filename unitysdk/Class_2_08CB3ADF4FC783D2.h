#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class LoadBattleArea; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_08CB3ADF4FC783D2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16FC6920)
#define CLASS_2_08CB3ADF4FC783D2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16FC69B0)
#define CLASS_2_08CB3ADF4FC783D2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16FC6960)
#define CLASS_2_08CB3ADF4FC783D2_TICK_OFFSET UNITYSDK_OFFSET(0x16FC6A00)
#define CLASS_2_08CB3ADF4FC783D2__CTOR_OFFSET UNITYSDK_OFFSET(0x16FC6910)

inline static constexpr unsigned int Class_2_08CB3ADF4FC783D2_TypeDefinitionIndex = 52645;

class Class_2_08CB3ADF4FC783D2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::LoadBattleArea* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LoadBattleArea* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LoadBattleArea*))((::PBYTE)hIl2Cpp + CLASS_2_08CB3ADF4FC783D2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08CB3ADF4FC783D2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08CB3ADF4FC783D2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08CB3ADF4FC783D2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_08CB3ADF4FC783D2_TICK_OFFSET))(this, a1);
	}
};
