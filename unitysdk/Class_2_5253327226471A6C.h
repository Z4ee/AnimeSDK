#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AdvPuzzleCollectItem; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_5253327226471A6C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18195A30)
#define CLASS_2_5253327226471A6C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18195A70)
#define CLASS_2_5253327226471A6C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18195BD0)
#define CLASS_2_5253327226471A6C_TICK_OFFSET UNITYSDK_OFFSET(0x181959D0)
#define CLASS_2_5253327226471A6C__CTOR_OFFSET UNITYSDK_OFFSET(0x181959C0)

inline static constexpr unsigned int Class_2_5253327226471A6C_TypeDefinitionIndex = 50091;

class Class_2_5253327226471A6C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdvPuzzleCollectItem* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPuzzleCollectItem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPuzzleCollectItem*))((::PBYTE)hIl2Cpp + CLASS_2_5253327226471A6C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5253327226471A6C_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5253327226471A6C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5253327226471A6C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5253327226471A6C_ONTASKRESET_OFFSET))(this);
	}
};
