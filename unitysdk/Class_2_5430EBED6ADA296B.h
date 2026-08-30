#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class ShowSwordTrainingConfirmGiveUpDialog; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_5430EBED6ADA296B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFA7A570)
#define CLASS_2_5430EBED6ADA296B_METHOD_2_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0xFA7A400)
#define CLASS_2_5430EBED6ADA296B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFA7A240)
#define CLASS_2_5430EBED6ADA296B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xFA7A520)
#define CLASS_2_5430EBED6ADA296B_TICK_OFFSET UNITYSDK_OFFSET(0xFA7A5C0)
#define CLASS_2_5430EBED6ADA296B__CTOR_OFFSET UNITYSDK_OFFSET(0xFA7A230)

inline static constexpr unsigned int Class_2_5430EBED6ADA296B_TypeDefinitionIndex = 55811;

class Class_2_5430EBED6ADA296B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::UIController* OGOFNHAGOPO; // 0x18
	::RPG::GameCore::ShowSwordTrainingConfirmGiveUpDialog* OFKGLJOAMLD; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowSwordTrainingConfirmGiveUpDialog* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowSwordTrainingConfirmGiveUpDialog*))((::PBYTE)hIl2Cpp + CLASS_2_5430EBED6ADA296B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5430EBED6ADA296B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5430EBED6ADA296B_METHOD_2_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5430EBED6ADA296B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5430EBED6ADA296B_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5430EBED6ADA296B_TICK_OFFSET))(this, a1);
	}
};
