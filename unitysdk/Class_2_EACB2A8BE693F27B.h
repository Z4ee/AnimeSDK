#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_104.h"
#include "unitysdk/Share/EPropertyType.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_417.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_EACB2A8BE693F27B_METHOD_2_2733F872C86C1773_OFFSET UNITYSDK_OFFSET(0x1A5DC720)
#define CLASS_2_EACB2A8BE693F27B_METHOD_2_8D1C14454D487737_OFFSET UNITYSDK_OFFSET(0x1A5DC6F0)
#define CLASS_2_EACB2A8BE693F27B_METHOD_2_C05AF0F207BA5B1F_OFFSET UNITYSDK_OFFSET(0x1A5DC6C0)
#define CLASS_2_EACB2A8BE693F27B_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1A5DC730)
#define CLASS_2_EACB2A8BE693F27B_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1A5DC710)
#define CLASS_2_EACB2A8BE693F27B_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A5DC700)
#define CLASS_2_EACB2A8BE693F27B_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A5DC6E0)
#define CLASS_2_EACB2A8BE693F27B_METHOD_2_FA5EFB3A13C76C8C_OFFSET UNITYSDK_OFFSET(0x1A5DC6D0)
#define CLASS_2_EACB2A8BE693F27B__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5DC640)

inline static constexpr unsigned int Class_2_EACB2A8BE693F27B_TypeDefinitionIndex = 13764;

class Class_2_EACB2A8BE693F27B : public ::Class_1_5DA2E7556103D5A3_104
{
public:
	::System::Collections::Generic::List_1<::System::UInt16>* Field_2_3; // 0x70
	::System::Byte Field_2_2; // 0x78
	::System::Boolean Field_2_0; // 0x79
	::System::Int32 Field_2_1; // 0x7C

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_417 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_417, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_EACB2A8BE693F27B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::UInt16>* Method_2_C05AF0F207BA5B1F()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt16>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EACB2A8BE693F27B_METHOD_2_C05AF0F207BA5B1F_OFFSET))(this);
	}

	::System::Byte Method_2_FA5EFB3A13C76C8C()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EACB2A8BE693F27B_METHOD_2_FA5EFB3A13C76C8C_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EACB2A8BE693F27B_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::Share::EPropertyType Method_2_8D1C14454D487737()
	{
		return ((::Share::EPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EACB2A8BE693F27B_METHOD_2_8D1C14454D487737_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EACB2A8BE693F27B_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EACB2A8BE693F27B_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_2733F872C86C1773(::System::Byte a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_2_EACB2A8BE693F27B_METHOD_2_2733F872C86C1773_OFFSET))(this, a1);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EACB2A8BE693F27B_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}
};
