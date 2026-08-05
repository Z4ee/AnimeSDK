#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_1_8FBDD7D8E0EE0B49;
class Class_4_425BBC3CBFD638A0;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_6FE18E9C108D136B_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x13C00860)
#define CLASS_4_6FE18E9C108D136B_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x13C00D70)
#define CLASS_4_6FE18E9C108D136B_METHOD_4_298E03B6F4208E39_OFFSET UNITYSDK_OFFSET(0x13C009B0)
#define CLASS_4_6FE18E9C108D136B_METHOD_4_CC17E4B020B0F15E_OFFSET UNITYSDK_OFFSET(0x13C00C20)
#define CLASS_4_6FE18E9C108D136B__CTOR_OFFSET UNITYSDK_OFFSET(0x13C00C80)

inline static constexpr unsigned int Class_4_6FE18E9C108D136B_TypeDefinitionIndex = 72451;

class Class_4_6FE18E9C108D136B : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_425BBC3CBFD638A0* Field_4_2; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_1; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6FE18E9C108D136B__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6FE18E9C108D136B_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_298E03B6F4208E39(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_6FE18E9C108D136B_METHOD_4_298E03B6F4208E39_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6FE18E9C108D136B_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_4_CC17E4B020B0F15E(::Class_1_8FBDD7D8E0EE0B49* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8FBDD7D8E0EE0B49*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_6FE18E9C108D136B_METHOD_4_CC17E4B020B0F15E_OFFSET))(this, a1, a2, a3);
	}
};
