#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_239DB2F71E2352B9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1612CCC0)
#define STRUCT_2_239DB2F71E2352B9__CTOR_OFFSET UNITYSDK_OFFSET(0x83B270)

inline static constexpr unsigned int Struct_2_239DB2F71E2352B9_TypeDefinitionIndex = 50009;

struct alignas(8) Struct_2_239DB2F71E2352B9
{
	static ::System::UInt32* StaticGet_Field_2_4()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_239DB2F71E2352B9_TypeDefinitionIndex)->GetStaticField(0xC380);
	}
	::System::String* Field_2_0; // 0x10
	::System::Single Field_2_7; // 0x18
	::System::Int32 Field_2_6; // 0x1C
	::System::UInt32 Field_2_5; // 0x20

	::System::Void _ctor(::System::String* a1, ::System::Single a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_239DB2F71E2352B9__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_239DB2F71E2352B9__CCTOR_OFFSET))();
	}
};
