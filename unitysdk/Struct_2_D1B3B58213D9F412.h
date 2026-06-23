#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_313B4C8411879F52.h"
#include "unitysdk/Enum_3_C94072881E4D8DDF.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_D1B3B58213D9F412_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x745B00)
#define STRUCT_2_D1B3B58213D9F412_METHOD_2_776272FEED5AE92B_OFFSET UNITYSDK_OFFSET(0x745B80)
#define STRUCT_2_D1B3B58213D9F412_TOSTRING_OFFSET UNITYSDK_OFFSET(0x745AF0)
#define STRUCT_2_D1B3B58213D9F412__CCTOR_OFFSET UNITYSDK_OFFSET(0x11759D10)
#define STRUCT_2_D1B3B58213D9F412__CTOR_OFFSET UNITYSDK_OFFSET(0x745AB0)

inline static constexpr unsigned int Struct_2_D1B3B58213D9F412_TypeDefinitionIndex = 76335;

struct alignas(4) Struct_2_D1B3B58213D9F412
{
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_D1B3B58213D9F412_TypeDefinitionIndex)->GetStaticField(0xE350);
	}
	::System::Int32 Field_2_1; // 0x10
	::System::Int32 Field_2_2; // 0x14
	::System::Int32 Field_2_3; // 0x18
	::System::Int32 Field_2_4; // 0x1C
	::Enum_3_C94072881E4D8DDF Field_2_5; // 0x20
	::Enum_3_313B4C8411879F52 Field_2_6; // 0x24

	::System::Void _ctor(::System::Int32& a1, ::System::Int32& a2, ::System::Int32& a3, ::System::Int32& a4, ::Enum_3_C94072881E4D8DDF& a5, ::Enum_3_313B4C8411879F52& a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::Enum_3_C94072881E4D8DDF&, ::Enum_3_313B4C8411879F52&))((::PBYTE)hIl2Cpp + STRUCT_2_D1B3B58213D9F412__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_D1B3B58213D9F412__CCTOR_OFFSET))();
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D1B3B58213D9F412_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D1B3B58213D9F412_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Boolean Method_2_776272FEED5AE92B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D1B3B58213D9F412_METHOD_2_776272FEED5AE92B_OFFSET))(this);
	}
};
