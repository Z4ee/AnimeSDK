#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class EnableFreelookCameraBattleTransitionMode; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_929650DFF00BA38E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8BECE60)
#define CLASS_2_929650DFF00BA38E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8BECEA0)
#define CLASS_2_929650DFF00BA38E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8BEDE60)
#define CLASS_2_929650DFF00BA38E_TICK_OFFSET UNITYSDK_OFFSET(0x8BEDEB0)
#define CLASS_2_929650DFF00BA38E__CTOR_OFFSET UNITYSDK_OFFSET(0x8BECE50)

inline static constexpr unsigned int Class_2_929650DFF00BA38E_TypeDefinitionIndex = 46877;

class Class_2_929650DFF00BA38E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::EnableFreelookCameraBattleTransitionMode* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableFreelookCameraBattleTransitionMode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableFreelookCameraBattleTransitionMode*))((::PBYTE)hIl2Cpp + CLASS_2_929650DFF00BA38E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_929650DFF00BA38E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_929650DFF00BA38E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_929650DFF00BA38E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_929650DFF00BA38E_TICK_OFFSET))(this, a1);
	}
};
