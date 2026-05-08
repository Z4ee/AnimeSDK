#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_F2C28752E8780B52;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A967D48B8822B06E_METHOD_1_0A7C75AE549C5CCF_OFFSET UNITYSDK_OFFSET(0x1593E2F0)
#define CLASS_1_A967D48B8822B06E_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1593E250)
#define CLASS_1_A967D48B8822B06E__CTOR_OFFSET UNITYSDK_OFFSET(0x1593E140)

inline static constexpr unsigned int Class_1_A967D48B8822B06E_TypeDefinitionIndex = 53661;

class Class_1_A967D48B8822B06E : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_8 = 0x3; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_6; // 0x10
	::System::Collections::Generic::List_1<::Class_1_F2C28752E8780B52*>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_1_F2C28752E8780B52*>* Field_1_3; // 0x20
	::System::Single Field_1_0; // 0x28
	::UnityEngine::Vector3 Field_1_1; // 0x2C
	::System::Boolean Field_1_5; // 0x38
	::System::Boolean Field_1_7; // 0x39
	::System::Int32 Field_1_4; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A967D48B8822B06E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A967D48B8822B06E_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_0A7C75AE549C5CCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A967D48B8822B06E_METHOD_1_0A7C75AE549C5CCF_OFFSET))(this);
	}
};
