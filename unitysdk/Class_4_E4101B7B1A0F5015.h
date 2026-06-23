#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_1_AAE113EF1D654B70;
namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_E4101B7B1A0F5015_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x125D4B10)
#define CLASS_4_E4101B7B1A0F5015_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x125D46E0)
#define CLASS_4_E4101B7B1A0F5015_METHOD_4_7A00E552FBB51A60_OFFSET UNITYSDK_OFFSET(0x125D47C0)
#define CLASS_4_E4101B7B1A0F5015__CTOR_OFFSET UNITYSDK_OFFSET(0x125D4A20)

inline static constexpr unsigned int Class_4_E4101B7B1A0F5015_TypeDefinitionIndex = 61764;

class Class_4_E4101B7B1A0F5015 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::Class_1_AAE113EF1D654B70*>* Field_4_0; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E4101B7B1A0F5015__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E4101B7B1A0F5015_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_7A00E552FBB51A60(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_E4101B7B1A0F5015_METHOD_4_7A00E552FBB51A60_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E4101B7B1A0F5015_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
