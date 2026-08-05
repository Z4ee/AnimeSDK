#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9BF81AE22E7B99D1.h"
#include "unitysdk/System/Object.h"

class Class_1_5F7DC6C255126730;
class Class_3_DF51DE504C82D3C3;
class Class_3_FF7CFAFF8952A3AA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F37ACBD40C173304__CTOR_1_OFFSET UNITYSDK_OFFSET(0x153FE620)
#define CLASS_1_F37ACBD40C173304__CTOR_OFFSET UNITYSDK_OFFSET(0x153FE380)

inline static constexpr unsigned int Class_1_F37ACBD40C173304_TypeDefinitionIndex = 75095;

class Class_1_F37ACBD40C173304 : public ::System::Object
{
public:
	::System::String* Field_1_7; // 0x10
	::Class_1_5F7DC6C255126730* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::Class_1_5F7DC6C255126730*>* Field_1_5; // 0x20
	::Class_1_5F7DC6C255126730* Field_1_11; // 0x28
	::System::String* Field_1_0; // 0x30
	::System::String* Field_1_1; // 0x38
	::System::Boolean Field_1_6; // 0x40
	::Enum_3_9BF81AE22E7B99D1 Field_1_10; // 0x44

	::System::Void _ctor(::Class_3_DF51DE504C82D3C3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DF51DE504C82D3C3*))((::PBYTE)hIl2Cpp + CLASS_1_F37ACBD40C173304__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_3_FF7CFAFF8952A3AA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FF7CFAFF8952A3AA*))((::PBYTE)hIl2Cpp + CLASS_1_F37ACBD40C173304__CTOR_1_OFFSET))(this, a1);
	}
};
