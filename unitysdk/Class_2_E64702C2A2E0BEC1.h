#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_58.h"

class Class_2_24A88014580ADDB3;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerAnimStateWithMove; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_2_E64702C2A2E0BEC1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB912D20)
#define CLASS_2_E64702C2A2E0BEC1_METHOD_2_D3A565A802E80D24_OFFSET UNITYSDK_OFFSET(0xB913820)
#define CLASS_2_E64702C2A2E0BEC1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB912E90)
#define CLASS_2_E64702C2A2E0BEC1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB913C20)
#define CLASS_2_E64702C2A2E0BEC1_TICK_OFFSET UNITYSDK_OFFSET(0xB913DD0)
#define CLASS_2_E64702C2A2E0BEC1__CTOR_OFFSET UNITYSDK_OFFSET(0xB9129F0)

inline static constexpr unsigned int Class_2_E64702C2A2E0BEC1_TypeDefinitionIndex = 55716;

class Class_2_E64702C2A2E0BEC1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::System::Boolean>* NFJNDAFJCAG; // 0x18
	::UnityEngine::Animator* JDFCDMAPBFJ; // 0x20
	::RPG::GameCore::TriggerAnimStateWithMove* OFKGLJOAMLD; // 0x28
	::Struct_2_CC45B4503679E14E_58 EJPILIBEFCB; // 0x30
	::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x40
	::Class_2_24A88014580ADDB3* JDNLKGBPHDC; // 0x48
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x50
	::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* KELALIPPMIM; // 0x58
	::System::Boolean PFMNLFEOAGO; // 0x60
	::System::Boolean HHCFIHBHPLB; // 0x61
	::System::Int32 APNGJPMPMOB; // 0x64

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

	::System::Void Method_2_D3A565A802E80D24(::RPG::GameCore::GameEntityList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_2_E64702C2A2E0BEC1_METHOD_2_D3A565A802E80D24_OFFSET))(this, a1);
	}
};
