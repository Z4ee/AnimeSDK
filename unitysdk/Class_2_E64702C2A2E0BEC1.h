#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_45.h"

class Class_2_24A88014580ADDB3;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerAnimStateWithMove; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_2_E64702C2A2E0BEC1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA751010)
#define CLASS_2_E64702C2A2E0BEC1_METHOD_2_522C6266F72AB644_OFFSET UNITYSDK_OFFSET(0xA7519D0)
#define CLASS_2_E64702C2A2E0BEC1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA751100)
#define CLASS_2_E64702C2A2E0BEC1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA751D70)
#define CLASS_2_E64702C2A2E0BEC1_TICK_OFFSET UNITYSDK_OFFSET(0xA751F20)
#define CLASS_2_E64702C2A2E0BEC1__CTOR_OFFSET UNITYSDK_OFFSET(0xA750CF0)

inline static constexpr unsigned int Class_2_E64702C2A2E0BEC1_TypeDefinitionIndex = 52038;

class Class_2_E64702C2A2E0BEC1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::System::Boolean>* Field_2_0; // 0x18
	::UnityEngine::Animator* Field_2_1; // 0x20
	::RPG::GameCore::TriggerAnimStateWithMove* Field_2_2; // 0x28
	::Class_2_24A88014580ADDB3* Field_2_3; // 0x30
	::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* Field_2_4; // 0x38
	::RPG::GameCore::GameEntity* Field_2_5; // 0x40
	::RPG::GameCore::TaskContext* Field_2_6; // 0x48
	::Struct_2_CC45B4503679E14E_45 Field_2_7; // 0x50
	::System::Boolean Field_2_8; // 0x60
	::System::Boolean Field_2_9; // 0x61
	::System::Int32 Field_2_10; // 0x64

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerAnimStateWithMove* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerAnimStateWithMove*))((::PBYTE)hIl2Cpp + CLASS_2_E64702C2A2E0BEC1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E64702C2A2E0BEC1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E64702C2A2E0BEC1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E64702C2A2E0BEC1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E64702C2A2E0BEC1_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_522C6266F72AB644(::RPG::GameCore::GameEntityList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_2_E64702C2A2E0BEC1_METHOD_2_522C6266F72AB644_OFFSET))(this, a1);
	}
};
