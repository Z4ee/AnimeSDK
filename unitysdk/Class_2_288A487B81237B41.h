#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetMonsterHPTotalSeg; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_288A487B81237B41_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA9FA230)
#define CLASS_2_288A487B81237B41_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA9FA270)
#define CLASS_2_288A487B81237B41_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA9FA4B0)
#define CLASS_2_288A487B81237B41_TICK_OFFSET UNITYSDK_OFFSET(0xA9FA500)
#define CLASS_2_288A487B81237B41__CTOR_OFFSET UNITYSDK_OFFSET(0xA9FA220)

inline static constexpr unsigned int Class_2_288A487B81237B41_TypeDefinitionIndex = 52670;

class Class_2_288A487B81237B41 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::SetMonsterHPTotalSeg* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMonsterHPTotalSeg* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMonsterHPTotalSeg*))((::PBYTE)hIl2Cpp + CLASS_2_288A487B81237B41__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_288A487B81237B41_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_288A487B81237B41_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_288A487B81237B41_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_288A487B81237B41_TICK_OFFSET))(this, a1);
	}
};
