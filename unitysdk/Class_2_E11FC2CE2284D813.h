#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ModifyEntityBoostPoint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E11FC2CE2284D813_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1872AEE0)
#define CLASS_2_E11FC2CE2284D813_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1872AF20)
#define CLASS_2_E11FC2CE2284D813_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1872B540)
#define CLASS_2_E11FC2CE2284D813_TICK_OFFSET UNITYSDK_OFFSET(0x1872B590)
#define CLASS_2_E11FC2CE2284D813__CTOR_OFFSET UNITYSDK_OFFSET(0x1872AED0)

inline static constexpr unsigned int Class_2_E11FC2CE2284D813_TypeDefinitionIndex = 52702;

class Class_2_E11FC2CE2284D813 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ModifyEntityBoostPoint* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyEntityBoostPoint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyEntityBoostPoint*))((::PBYTE)hIl2Cpp + CLASS_2_E11FC2CE2284D813__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E11FC2CE2284D813_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E11FC2CE2284D813_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E11FC2CE2284D813_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E11FC2CE2284D813_TICK_OFFSET))(this, a1);
	}
};
