#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T1, typename T2> class Class_1_7A66407CD5C66F37;
template <typename T1, typename T2> class Class_3_B60F6C2F126D2E26;

#define CLASS_1_029A7EDCBF9933C8_METHOD_1_0278C58BA5A6AE4B_OFFSET UNITYSDK_OFFSET(0x19DB71D0)
#define CLASS_1_029A7EDCBF9933C8_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x19DB8850)
#define CLASS_1_029A7EDCBF9933C8_METHOD_1_7B411317D337F87A_OFFSET UNITYSDK_OFFSET(0x19DB7750)
#define CLASS_1_029A7EDCBF9933C8_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19DB7670)
#define CLASS_1_029A7EDCBF9933C8_METHOD_1_D1C9D812A3FB4E21_OFFSET UNITYSDK_OFFSET(0x19DB7490)
#define CLASS_1_029A7EDCBF9933C8__CTOR_OFFSET UNITYSDK_OFFSET(0x19DB8AE0)

inline static constexpr unsigned int Class_1_029A7EDCBF9933C8_TypeDefinitionIndex = 39826;

class Class_1_029A7EDCBF9933C8 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_2 = 0x186A0; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, ::System::Type*>, ::Class_1_7A66407CD5C66F37<::System::Object*, ::System::Object*>*>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_029A7EDCBF9933C8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0278C58BA5A6AE4B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_029A7EDCBF9933C8_METHOD_1_0278C58BA5A6AE4B_OFFSET))(this, a1);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_029A7EDCBF9933C8_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_029A7EDCBF9933C8_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Boolean Method_1_D1C9D812A3FB4E21()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_029A7EDCBF9933C8_METHOD_1_D1C9D812A3FB4E21_OFFSET))(this);
	}

	::System::Void Method_1_7B411317D337F87A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_029A7EDCBF9933C8_METHOD_1_7B411317D337F87A_OFFSET))(this);
	}
};
