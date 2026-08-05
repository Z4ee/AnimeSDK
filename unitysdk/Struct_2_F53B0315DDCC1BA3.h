#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0269E9CD0547602F.h"
#include "unitysdk/Enum_3_CC035F282C9A4FE9.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_F53B0315DDCC1BA3_METHOD_2_ED0E3DD53734BBBE_OFFSET UNITYSDK_OFFSET(0x1A2AA200)
#define STRUCT_2_F53B0315DDCC1BA3_METHOD_2_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x8B6400)
#define STRUCT_2_F53B0315DDCC1BA3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2AA170)
#define STRUCT_2_F53B0315DDCC1BA3__CTOR_OFFSET UNITYSDK_OFFSET(0x8B63B0)

inline static constexpr unsigned int Struct_2_F53B0315DDCC1BA3_TypeDefinitionIndex = 43558;

struct alignas(8) Struct_2_F53B0315DDCC1BA3
{
	static ::Il2CppArray<::Struct_2_F53B0315DDCC1BA3>** StaticGet_Field_2_3()
	{
		return (::Il2CppArray<::Struct_2_F53B0315DDCC1BA3>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_F53B0315DDCC1BA3_TypeDefinitionIndex)->GetStaticField(0x3BAC0);
	}
	::Enum_3_CC035F282C9A4FE9 Field_2_2; // 0x10
	::System::Boolean Field_2_1; // 0x11
	::System::String* Field_2_0; // 0x18
	::System::String* Field_2_7; // 0x20

	::System::Void _ctor(::Enum_3_CC035F282C9A4FE9 a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_CC035F282C9A4FE9, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_F53B0315DDCC1BA3__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_F53B0315DDCC1BA3__CCTOR_OFFSET))();
	}

	static ::Struct_2_F53B0315DDCC1BA3 Method_2_ED0E3DD53734BBBE(::Enum_3_0269E9CD0547602F a1)
	{
		return ((::Struct_2_F53B0315DDCC1BA3(*)(::Enum_3_0269E9CD0547602F))((::PBYTE)hIl2Cpp + STRUCT_2_F53B0315DDCC1BA3_METHOD_2_ED0E3DD53734BBBE_OFFSET))(a1);
	}

	::System::Int32 Method_2_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F53B0315DDCC1BA3_METHOD_2_F026F9F94BAA5E1F_OFFSET))(this);
	}
};
