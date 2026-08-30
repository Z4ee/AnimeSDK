#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_03D6D30E62EFB374.h"

namespace System { class String; }

#define CLASS_2_21F15808D3A65A5F_COMPARETO_OFFSET UNITYSDK_OFFSET(0xB7686F0)
#define CLASS_2_21F15808D3A65A5F_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB7687E0)
#define CLASS_2_21F15808D3A65A5F_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xB7686A0)
#define CLASS_2_21F15808D3A65A5F_METHOD_2_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0xB7687A0)
#define CLASS_2_21F15808D3A65A5F_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB768820)
#define CLASS_2_21F15808D3A65A5F__CTOR_OFFSET UNITYSDK_OFFSET(0xB768640)

inline static constexpr unsigned int Class_2_21F15808D3A65A5F_TypeDefinitionIndex = 62107;

class Class_2_21F15808D3A65A5F : public ::Class_1_03D6D30E62EFB374
{
public:
	::System::Boolean OJHOFOJPBLG; // 0x18
	::System::Boolean CLHBIOOINHB; // 0x19
	::System::UInt32 LHEKOMHBMGA; // 0x1C
	::System::Int32 LKJGKJIJBPB; // 0x20
	::System::UInt32 DOPFFDDBOMO; // 0x24

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
};
