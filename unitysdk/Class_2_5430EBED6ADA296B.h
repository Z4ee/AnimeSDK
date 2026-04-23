#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class ShowSwordTrainingConfirmGiveUpDialog; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_5430EBED6ADA296B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9813C60)
#define CLASS_2_5430EBED6ADA296B_METHOD_2_1CD1133DC003C11C_OFFSET UNITYSDK_OFFSET(0x9813AC0)
#define CLASS_2_5430EBED6ADA296B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9813920)
#define CLASS_2_5430EBED6ADA296B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9813C10)
#define CLASS_2_5430EBED6ADA296B_TICK_OFFSET UNITYSDK_OFFSET(0x9813CB0)
#define CLASS_2_5430EBED6ADA296B__CTOR_OFFSET UNITYSDK_OFFSET(0x9813910)

inline static constexpr unsigned int Class_2_5430EBED6ADA296B_TypeDefinitionIndex = 51282;

class Class_2_5430EBED6ADA296B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::ShowSwordTrainingConfirmGiveUpDialog* Field_2_0; // 0x20
	::RPG::Client::UIController* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowSwordTrainingConfirmGiveUpDialog* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowSwordTrainingConfirmGiveUpDialog*))((::PBYTE)hIl2Cpp + CLASS_2_5430EBED6ADA296B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5430EBED6ADA296B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_1CD1133DC003C11C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5430EBED6ADA296B_METHOD_2_1CD1133DC003C11C_OFFSET))(this, a1);
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
