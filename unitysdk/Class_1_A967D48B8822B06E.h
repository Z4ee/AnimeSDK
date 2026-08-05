#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B24FA697699C6DD5;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A967D48B8822B06E_METHOD_1_0A7C75AE549C5CCF_OFFSET UNITYSDK_OFFSET(0x13FEE410)
#define CLASS_1_A967D48B8822B06E_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x13FEE590)
#define CLASS_1_A967D48B8822B06E__CTOR_OFFSET UNITYSDK_OFFSET(0x13FEE310)

inline static constexpr unsigned int Class_1_A967D48B8822B06E_TypeDefinitionIndex = 77600;

class Class_1_A967D48B8822B06E : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_10 = 0x3; // 0x0
	::System::Collections::Generic::List_1<::Class_1_B24FA697699C6DD5*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::Class_1_B24FA697699C6DD5*>* Field_1_7; // 0x20
	::System::Single Field_1_2; // 0x28
	::System::Boolean Field_1_11; // 0x2C
	::System::Boolean Field_1_5; // 0x2D
	::System::Int32 Field_1_6; // 0x30
	::UnityEngine::Vector3 Field_1_1; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A967D48B8822B06E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0A7C75AE549C5CCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A967D48B8822B06E_METHOD_1_0A7C75AE549C5CCF_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A967D48B8822B06E_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};
