#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_299;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F2B96F2C60871B23_METHOD_1_098E71CA53F64B12_OFFSET UNITYSDK_OFFSET(0x1185C9D0)
#define CLASS_1_F2B96F2C60871B23_METHOD_1_0EF345F8F1CF4181_OFFSET UNITYSDK_OFFSET(0x1185CD60)
#define CLASS_1_F2B96F2C60871B23_METHOD_1_E5FBE1A66FD1D401_OFFSET UNITYSDK_OFFSET(0x1185C830)
#define CLASS_1_F2B96F2C60871B23__CTOR_OFFSET UNITYSDK_OFFSET(0x1185C760)

inline static constexpr unsigned int Class_1_F2B96F2C60871B23_TypeDefinitionIndex = 45023;

class Class_1_F2B96F2C60871B23 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_299*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_299*>* Field_1_0; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2B96F2C60871B23__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E5FBE1A66FD1D401(::Class_0_16E4307DCC419505_299* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_299*))((::PBYTE)hIl2Cpp + CLASS_1_F2B96F2C60871B23_METHOD_1_E5FBE1A66FD1D401_OFFSET))(this, a1);
	}

	::System::Void Method_1_098E71CA53F64B12(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F2B96F2C60871B23_METHOD_1_098E71CA53F64B12_OFFSET))(this, a1);
	}

	::System::Void Method_1_0EF345F8F1CF4181(::Class_0_16E4307DCC419505_299* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_299*))((::PBYTE)hIl2Cpp + CLASS_1_F2B96F2C60871B23_METHOD_1_0EF345F8F1CF4181_OFFSET))(this, a1);
	}
};
