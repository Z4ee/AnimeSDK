#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ArrayPoolWrapper_1.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_0_16E4307DCC419505_343;
namespace RPG::GameCore { class SetModifierValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_686A4C37DC69D429_METHOD_3_017394C37EBAB42E_OFFSET UNITYSDK_OFFSET(0x9348900)
#define CLASS_3_686A4C37DC69D429_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9348600)
#define CLASS_3_686A4C37DC69D429__CTOR_OFFSET UNITYSDK_OFFSET(0x93485D0)

inline static constexpr unsigned int Class_3_686A4C37DC69D429_TypeDefinitionIndex = 51201;

class Class_3_686A4C37DC69D429 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetModifierValue*>
{
public:
	::RPG::GameCore::ArrayPoolWrapper_1<::Class_0_16E4307DCC419505_343*> Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetModifierValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetModifierValue*))((::PBYTE)hIl2Cpp + CLASS_3_686A4C37DC69D429__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_686A4C37DC69D429_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_017394C37EBAB42E(::Il2CppArray<::Class_0_16E4307DCC419505_343*>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_0_16E4307DCC419505_343*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_686A4C37DC69D429_METHOD_3_017394C37EBAB42E_OFFSET))(this, a1, a2, a3);
	}
};
