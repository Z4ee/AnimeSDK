#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_9A097580DF02CED3;
namespace RPG::GameCore { class ST_Side_SearchSmartObject; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F3E2CB0463B47760_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBAA3840)
#define CLASS_3_F3E2CB0463B47760_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBAA39B0)
#define CLASS_3_F3E2CB0463B47760_TICK_OFFSET UNITYSDK_OFFSET(0xBAA38A0)
#define CLASS_3_F3E2CB0463B47760__CTOR_OFFSET UNITYSDK_OFFSET(0xBAA3780)

inline static constexpr unsigned int Class_3_F3E2CB0463B47760_TypeDefinitionIndex = 52534;

class Class_3_F3E2CB0463B47760 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_SearchSmartObject*>
{
public:
	::Class_2_9A097580DF02CED3* DOCOOLBBMJM; // 0x28
	::System::Single PGMIOKKLHIE; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_SearchSmartObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_SearchSmartObject*))((::PBYTE)hIl2Cpp + CLASS_3_F3E2CB0463B47760__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F3E2CB0463B47760_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F3E2CB0463B47760_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F3E2CB0463B47760_ONTASKRESET_OFFSET))(this);
	}
};
