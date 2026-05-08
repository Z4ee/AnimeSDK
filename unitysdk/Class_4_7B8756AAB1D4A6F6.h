#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_2_034E96628B18700D;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_7B8756AAB1D4A6F6_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x10658020)
#define CLASS_4_7B8756AAB1D4A6F6_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x10657A90)
#define CLASS_4_7B8756AAB1D4A6F6_METHOD_4_652514A15DC5E0CD_OFFSET UNITYSDK_OFFSET(0x10657B70)
#define CLASS_4_7B8756AAB1D4A6F6_METHOD_4_85E65692F7E102DF_OFFSET UNITYSDK_OFFSET(0x10657D90)
#define CLASS_4_7B8756AAB1D4A6F6__CTOR_OFFSET UNITYSDK_OFFSET(0x10657F30)

inline static constexpr unsigned int Class_4_7B8756AAB1D4A6F6_TypeDefinitionIndex = 76468;

class Class_4_7B8756AAB1D4A6F6 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_0; // 0x28
	::Class_4_8D3E479B491881B3<::System::Int32>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7B8756AAB1D4A6F6__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7B8756AAB1D4A6F6_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_652514A15DC5E0CD(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_7B8756AAB1D4A6F6_METHOD_4_652514A15DC5E0CD_OFFSET))(this, a1);
	}

	::System::Void Method_4_85E65692F7E102DF(::System::String* a1, ::Class_2_034E96628B18700D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_2_034E96628B18700D*))((::PBYTE)hIl2Cpp + CLASS_4_7B8756AAB1D4A6F6_METHOD_4_85E65692F7E102DF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7B8756AAB1D4A6F6_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
