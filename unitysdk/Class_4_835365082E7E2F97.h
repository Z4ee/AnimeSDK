#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_835365082E7E2F97_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x125B3F20)
#define CLASS_4_835365082E7E2F97_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x125B33E0)
#define CLASS_4_835365082E7E2F97_METHOD_4_4B5B99B2F49E658A_OFFSET UNITYSDK_OFFSET(0x125B3590)
#define CLASS_4_835365082E7E2F97__CTOR_OFFSET UNITYSDK_OFFSET(0x125B3DC0)

inline static constexpr unsigned int Class_4_835365082E7E2F97_TypeDefinitionIndex = 81087;

class Class_4_835365082E7E2F97 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_4_2; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Single>* Field_4_3; // 0x30
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x38
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_835365082E7E2F97__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_835365082E7E2F97_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_4B5B99B2F49E658A(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_835365082E7E2F97_METHOD_4_4B5B99B2F49E658A_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_835365082E7E2F97_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
