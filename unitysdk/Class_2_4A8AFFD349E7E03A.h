#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E0F4C078E2549C40.h"
#include "unitysdk/MoleMole/Battle/MonsterAlertInitParams.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_F3CFF1AFF7EE7DCD;
class Class_3_07AAFA6F7F79BEB3_1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4A8AFFD349E7E03A_METHOD_2_03E1F9C5B660FAB7_OFFSET UNITYSDK_OFFSET(0x109DC620)
#define CLASS_2_4A8AFFD349E7E03A_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x109DD1B0)
#define CLASS_2_4A8AFFD349E7E03A_METHOD_2_C47E35FA49069F6E_OFFSET UNITYSDK_OFFSET(0x109DCE10)
#define CLASS_2_4A8AFFD349E7E03A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x109DD250)
#define CLASS_2_4A8AFFD349E7E03A__CTOR_OFFSET UNITYSDK_OFFSET(0x109DD240)

inline static constexpr unsigned int Class_2_4A8AFFD349E7E03A_TypeDefinitionIndex = 62391;

class Class_2_4A8AFFD349E7E03A : public ::Class_1_E0F4C078E2549C40
{
public:
	::MoleMole::Battle::MonsterAlertInitParams Field_2_7; // 0x20
	::Class_3_07AAFA6F7F79BEB3_1* Field_2_8; // 0x40
	::System::Int32 Field_2_9; // 0x48
	::UnityEngine::Vector3 Field_2_6; // 0x4C
	::System::Int32 Field_2_2; // 0x58
	::System::UInt32 Field_2_0; // 0x5C
	::System::Boolean Field_2_3; // 0x60
	::System::Boolean Field_2_5; // 0x61
	::System::Boolean Field_2_4; // 0x62
	::System::Single Field_2_1; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A8AFFD349E7E03A__CTOR_OFFSET))(this);
	}

	::MoleMole::EntityHandle Method_2_03E1F9C5B660FAB7()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A8AFFD349E7E03A_METHOD_2_03E1F9C5B660FAB7_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A8AFFD349E7E03A_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_C47E35FA49069F6E(::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>*))((::PBYTE)hIl2Cpp + CLASS_2_4A8AFFD349E7E03A_METHOD_2_C47E35FA49069F6E_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A8AFFD349E7E03A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
