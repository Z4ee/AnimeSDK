#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_4_425BBC3CBFD638A0;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_9B9D61B88A0D79FD_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xF3BA800)
#define CLASS_4_9B9D61B88A0D79FD_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xF3BA2D0)
#define CLASS_4_9B9D61B88A0D79FD_METHOD_4_652514A15DC5E0CD_OFFSET UNITYSDK_OFFSET(0xF3BA3B0)
#define CLASS_4_9B9D61B88A0D79FD__CTOR_OFFSET UNITYSDK_OFFSET(0xF3BA750)

inline static constexpr unsigned int Class_4_9B9D61B88A0D79FD_TypeDefinitionIndex = 81410;

class Class_4_9B9D61B88A0D79FD : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_425BBC3CBFD638A0* Field_4_1; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9B9D61B88A0D79FD__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9B9D61B88A0D79FD_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_652514A15DC5E0CD(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_9B9D61B88A0D79FD_METHOD_4_652514A15DC5E0CD_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9B9D61B88A0D79FD_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
