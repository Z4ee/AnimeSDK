#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_722EA82C1161F2A1.h"

namespace System { class String; }

#define CLASS_2_21F15808D3A65A5F_COMPARETO_OFFSET UNITYSDK_OFFSET(0x89D5090)
#define CLASS_2_21F15808D3A65A5F_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x89D5180)
#define CLASS_2_21F15808D3A65A5F_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x89D5040)
#define CLASS_2_21F15808D3A65A5F_METHOD_2_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x89D5140)
#define CLASS_2_21F15808D3A65A5F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x89D51C0)
#define CLASS_2_21F15808D3A65A5F__CTOR_OFFSET UNITYSDK_OFFSET(0x89D4FE0)
#define CLASS_2_21F15808D3A65A5F___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x89D5270)

inline static constexpr unsigned int Class_2_21F15808D3A65A5F_TypeDefinitionIndex = 50357;

class Class_2_21F15808D3A65A5F : public ::Class_1_722EA82C1161F2A1
{
public:
	::System::Int32 Field_2_2; // 0x18
	::System::Boolean Field_2_1; // 0x1C
	::System::Boolean Field_2_4; // 0x1D
	::System::UInt32 Field_2_3; // 0x20
	::System::UInt32 Field_2_0; // 0x24

	::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2, ::System::Int32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_21F15808D3A65A5F__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_21F15808D3A65A5F_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Int32 CompareTo(::Class_2_21F15808D3A65A5F* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_21F15808D3A65A5F*))((::PBYTE)hIl2Cpp + CLASS_2_21F15808D3A65A5F_COMPARETO_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21F15808D3A65A5F_METHOD_2_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21F15808D3A65A5F_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21F15808D3A65A5F_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21F15808D3A65A5F___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
