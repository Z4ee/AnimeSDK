#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_8F4B1B7E7C6E267E_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x13AEEE30)
#define CLASS_4_8F4B1B7E7C6E267E_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x13AEEA00)
#define CLASS_4_8F4B1B7E7C6E267E_METHOD_4_93F158A28B71634B_OFFSET UNITYSDK_OFFSET(0x13AEEAE0)
#define CLASS_4_8F4B1B7E7C6E267E__CTOR_OFFSET UNITYSDK_OFFSET(0x13AEED40)

inline static constexpr unsigned int Class_4_8F4B1B7E7C6E267E_TypeDefinitionIndex = 45977;

class Class_4_8F4B1B7E7C6E267E : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_4_0; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8F4B1B7E7C6E267E__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8F4B1B7E7C6E267E_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_93F158A28B71634B(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_8F4B1B7E7C6E267E_METHOD_4_93F158A28B71634B_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8F4B1B7E7C6E267E_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
