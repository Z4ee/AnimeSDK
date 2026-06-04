#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class SwordTrainingCheckCanEnterGame; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2FA6C20B415B735E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB028080)
#define CLASS_2_2FA6C20B415B735E_METHOD_2_D03A02AC64923655_OFFSET UNITYSDK_OFFSET(0xB027DD0)
#define CLASS_2_2FA6C20B415B735E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB027C50)
#define CLASS_2_2FA6C20B415B735E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB028010)
#define CLASS_2_2FA6C20B415B735E_TICK_OFFSET UNITYSDK_OFFSET(0xB0280F0)
#define CLASS_2_2FA6C20B415B735E__CTOR_OFFSET UNITYSDK_OFFSET(0xB027B40)

inline static constexpr unsigned int Class_2_2FA6C20B415B735E_TypeDefinitionIndex = 52018;

class Class_2_2FA6C20B415B735E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::RPG::GameCore::SwordTrainingCheckCanEnterGame* Field_2_2; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x30
	::RPG::GameCore::TaskContext* Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwordTrainingCheckCanEnterGame* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwordTrainingCheckCanEnterGame*))((::PBYTE)hIl2Cpp + CLASS_2_2FA6C20B415B735E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FA6C20B415B735E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_2_D03A02AC64923655()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FA6C20B415B735E_METHOD_2_D03A02AC64923655_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FA6C20B415B735E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FA6C20B415B735E_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2FA6C20B415B735E_TICK_OFFSET))(this, a1);
	}
};
