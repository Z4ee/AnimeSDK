#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class SwordTrainingCheckCanEnterGame; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2FA6C20B415B735E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA196C70)
#define CLASS_2_2FA6C20B415B735E_METHOD_2_45066CE8D10D20A0_OFFSET UNITYSDK_OFFSET(0xA196A70)
#define CLASS_2_2FA6C20B415B735E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA196910)
#define CLASS_2_2FA6C20B415B735E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA196C00)
#define CLASS_2_2FA6C20B415B735E_TICK_OFFSET UNITYSDK_OFFSET(0xA196CE0)
#define CLASS_2_2FA6C20B415B735E__CTOR_OFFSET UNITYSDK_OFFSET(0xA1967F0)

inline static constexpr unsigned int Class_2_2FA6C20B415B735E_TypeDefinitionIndex = 44611;

class Class_2_2FA6C20B415B735E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_3_5775A4FEC79026BC* Field_2_4; // 0x28
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x30
	::RPG::GameCore::SwordTrainingCheckCanEnterGame* Field_2_0; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwordTrainingCheckCanEnterGame* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwordTrainingCheckCanEnterGame*))((::PBYTE)hIl2Cpp + CLASS_2_2FA6C20B415B735E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FA6C20B415B735E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_2_45066CE8D10D20A0()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FA6C20B415B735E_METHOD_2_45066CE8D10D20A0_OFFSET))(this);
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
