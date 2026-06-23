#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InlevelCameraState.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_616C3DBF123B7844__CCTOR_OFFSET UNITYSDK_OFFSET(0x13343EA0)

inline static constexpr unsigned int Struct_2_616C3DBF123B7844_TypeDefinitionIndex = 51971;

struct alignas(8) Struct_2_616C3DBF123B7844
{
	static ::System::String** StaticGet_Field_2_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_616C3DBF123B7844_TypeDefinitionIndex)->GetStaticField(0x47380);
	}
	::System::String* Field_2_0; // 0x10
	::MoleMole::Config::InlevelCameraState Field_2_1; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_616C3DBF123B7844__CCTOR_OFFSET))();
	}
};
