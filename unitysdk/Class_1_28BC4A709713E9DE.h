#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_453;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_28BC4A709713E9DE_METHOD_1_25D370106FFA0FBF_OFFSET UNITYSDK_OFFSET(0x12B83C90)
#define CLASS_1_28BC4A709713E9DE_METHOD_1_8733738E0E834C59_OFFSET UNITYSDK_OFFSET(0x12B83BB0)
#define CLASS_1_28BC4A709713E9DE_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x12B83C40)
#define CLASS_1_28BC4A709713E9DE_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x12B83D30)
#define CLASS_1_28BC4A709713E9DE__CTOR_OFFSET UNITYSDK_OFFSET(0x12B83B30)

inline static constexpr unsigned int Class_1_28BC4A709713E9DE_TypeDefinitionIndex = 82053;

class Class_1_28BC4A709713E9DE : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::Class_0_16E4307DCC419505_453*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28BC4A709713E9DE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8733738E0E834C59(::Class_0_16E4307DCC419505_453* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_453*))((::PBYTE)hIl2Cpp + CLASS_1_28BC4A709713E9DE_METHOD_1_8733738E0E834C59_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28BC4A709713E9DE_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_1_25D370106FFA0FBF(::Class_0_16E4307DCC419505_453*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_453*&))((::PBYTE)hIl2Cpp + CLASS_1_28BC4A709713E9DE_METHOD_1_25D370106FFA0FBF_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28BC4A709713E9DE_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}
};
