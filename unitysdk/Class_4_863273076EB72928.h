#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_863273076EB72928_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x15331A40)
#define CLASS_4_863273076EB72928_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x15331EF0)
#define CLASS_4_863273076EB72928_METHOD_4_C43DD7AFEEA2B827_OFFSET UNITYSDK_OFFSET(0x15331B90)
#define CLASS_4_863273076EB72928__CTOR_OFFSET UNITYSDK_OFFSET(0x15331DC0)

inline static constexpr unsigned int Class_4_863273076EB72928_TypeDefinitionIndex = 40234;

class Class_4_863273076EB72928 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_2; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_1; // 0x30
	::Class_4_8D3E479B491881B3<::MoleMole::EntityHandle>* Field_4_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_863273076EB72928__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_863273076EB72928_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_C43DD7AFEEA2B827(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_863273076EB72928_METHOD_4_C43DD7AFEEA2B827_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_863273076EB72928_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
