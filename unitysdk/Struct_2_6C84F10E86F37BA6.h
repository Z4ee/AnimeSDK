#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_DED36D60477F658C;
namespace System { class String; }

#define STRUCT_2_6C84F10E86F37BA6_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x766D50)
#define STRUCT_2_6C84F10E86F37BA6_METHOD_2_71E25A039EF7FB83_OFFSET UNITYSDK_OFFSET(0x134635C0)
#define STRUCT_2_6C84F10E86F37BA6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x766D40)

inline static constexpr unsigned int Struct_2_6C84F10E86F37BA6_TypeDefinitionIndex = 61893;

struct alignas(8) Struct_2_6C84F10E86F37BA6
{
	::Class_1_DED36D60477F658C* Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18
	::System::Boolean Field_2_2; // 0x1C
	::System::Boolean Field_2_3; // 0x1D
	::System::Int32 Field_2_4; // 0x20
	::System::UInt32 Field_2_5; // 0x24

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6C84F10E86F37BA6_TOSTRING_OFFSET))(this);
	}

	static ::Struct_2_6C84F10E86F37BA6 Method_2_71E25A039EF7FB83()
	{
		return ((::Struct_2_6C84F10E86F37BA6(*)())((::PBYTE)hIl2Cpp + STRUCT_2_6C84F10E86F37BA6_METHOD_2_71E25A039EF7FB83_OFFSET))();
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6C84F10E86F37BA6_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
