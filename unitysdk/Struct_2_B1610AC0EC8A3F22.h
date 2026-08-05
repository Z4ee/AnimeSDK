#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_820D7C7CD0571B34.h"
#include "unitysdk/Enum_3_9DFCA80EDE781DDA.h"
#include "unitysdk/Struct_2_1A37120368FD2FC8.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_B1610AC0EC8A3F22_METHOD_2_9BA400780E1A7612_1_OFFSET UNITYSDK_OFFSET(0x749890)
#define STRUCT_2_B1610AC0EC8A3F22_METHOD_2_9BA400780E1A7612_OFFSET UNITYSDK_OFFSET(0x749880)
#define STRUCT_2_B1610AC0EC8A3F22__CCTOR_OFFSET UNITYSDK_OFFSET(0x117D6CB0)

inline static constexpr unsigned int Struct_2_B1610AC0EC8A3F22_TypeDefinitionIndex = 40221;

struct alignas(8) Struct_2_B1610AC0EC8A3F22
{
	static ::Struct_2_B1610AC0EC8A3F22* StaticGet_Field_2_0()
	{
		return (::Struct_2_B1610AC0EC8A3F22*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_B1610AC0EC8A3F22_TypeDefinitionIndex)->GetStaticField(0x3E930);
	}
	::System::Collections::Generic::List_1<::Struct_2_1A37120368FD2FC8>* Field_2_1; // 0x10

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_B1610AC0EC8A3F22__CCTOR_OFFSET))();
	}

	::System::Void Method_2_9BA400780E1A7612(::System::Int32 a1, ::Enum_3_820D7C7CD0571B34 a2, ::Enum_3_9DFCA80EDE781DDA a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_820D7C7CD0571B34, ::Enum_3_9DFCA80EDE781DDA))((::PBYTE)hIl2Cpp + STRUCT_2_B1610AC0EC8A3F22_METHOD_2_9BA400780E1A7612_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9BA400780E1A7612_1(::System::Int32 a1, ::Enum_3_820D7C7CD0571B34 a2, ::Enum_3_9DFCA80EDE781DDA a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_820D7C7CD0571B34, ::Enum_3_9DFCA80EDE781DDA))((::PBYTE)hIl2Cpp + STRUCT_2_B1610AC0EC8A3F22_METHOD_2_9BA400780E1A7612_1_OFFSET))(this, a1, a2, a3);
	}
};
