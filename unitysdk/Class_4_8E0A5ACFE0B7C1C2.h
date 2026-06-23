#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_8E0A5ACFE0B7C1C2_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x190069C0)
#define CLASS_4_8E0A5ACFE0B7C1C2_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x19007100)
#define CLASS_4_8E0A5ACFE0B7C1C2_METHOD_4_4B5B99B2F49E658A_OFFSET UNITYSDK_OFFSET(0x19006B10)
#define CLASS_4_8E0A5ACFE0B7C1C2__CTOR_OFFSET UNITYSDK_OFFSET(0x19006FB0)

inline static constexpr unsigned int Class_4_8E0A5ACFE0B7C1C2_TypeDefinitionIndex = 58952;

class Class_4_8E0A5ACFE0B7C1C2 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_3_B537A0AA78803363* Field_4_2; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_0; // 0x30
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_4_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8E0A5ACFE0B7C1C2__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8E0A5ACFE0B7C1C2_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_4B5B99B2F49E658A(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_8E0A5ACFE0B7C1C2_METHOD_4_4B5B99B2F49E658A_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8E0A5ACFE0B7C1C2_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
