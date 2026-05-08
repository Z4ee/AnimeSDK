#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_1_277F99B3E754A6A7;
class Class_3_CF43FA1E89397A1C;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_104A9E7C6E50A6F5_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xF0A30F0)
#define CLASS_4_104A9E7C6E50A6F5_METHOD_4_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0xF0A27B0)
#define CLASS_4_104A9E7C6E50A6F5_METHOD_4_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0xF0A24E0)
#define CLASS_4_104A9E7C6E50A6F5_METHOD_4_AA37E1BCEDA13215_OFFSET UNITYSDK_OFFSET(0xF0A2C40)
#define CLASS_4_104A9E7C6E50A6F5_METHOD_4_DDFA3779482357B4_OFFSET UNITYSDK_OFFSET(0xF0A2F50)
#define CLASS_4_104A9E7C6E50A6F5_METHOD_4_FEF7761FC877F0EE_OFFSET UNITYSDK_OFFSET(0xF0A2820)
#define CLASS_4_104A9E7C6E50A6F5__CTOR_OFFSET UNITYSDK_OFFSET(0xF0A29C0)

inline static constexpr unsigned int Class_4_104A9E7C6E50A6F5_TypeDefinitionIndex = 46480;

class Class_4_104A9E7C6E50A6F5 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_3_CF43FA1E89397A1C* Field_4_5; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_3; // 0x30
	::Class_3_CF43FA1E89397A1C* Field_4_6; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_4; // 0x40
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_0; // 0x48
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_2; // 0x50
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::Int32>*>* Field_4_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_104A9E7C6E50A6F5__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_104A9E7C6E50A6F5_METHOD_4_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_4_3F0F9592A0E917D4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_104A9E7C6E50A6F5_METHOD_4_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_4_AA37E1BCEDA13215(::Class_1_277F99B3E754A6A7* a1, ::Struct_2_29439DBE2B63DCF3& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_277F99B3E754A6A7*, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_104A9E7C6E50A6F5_METHOD_4_AA37E1BCEDA13215_OFFSET))(this, a1, a2);
	}

	::Class_1_277F99B3E754A6A7* Method_4_DDFA3779482357B4(::Struct_2_29439DBE2B63DCF3& a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::Class_1_277F99B3E754A6A7*(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_4_104A9E7C6E50A6F5_METHOD_4_DDFA3779482357B4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_104A9E7C6E50A6F5_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_4_FEF7761FC877F0EE(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_104A9E7C6E50A6F5_METHOD_4_FEF7761FC877F0EE_OFFSET))(this, a1);
	}
};
