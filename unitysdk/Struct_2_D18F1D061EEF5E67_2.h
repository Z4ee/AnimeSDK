#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_D18F1D061EEF5E67_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1615CD10)

inline static constexpr unsigned int Struct_2_D18F1D061EEF5E67_2_TypeDefinitionIndex = 86621;

struct alignas(8) Struct_2_D18F1D061EEF5E67_2
{
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_D18F1D061EEF5E67_2_TypeDefinitionIndex)->GetStaticField(0x348C0);
	}
	::System::String* Field_2_2; // 0x10
	::System::Int32 Field_2_1; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_D18F1D061EEF5E67_2__CCTOR_OFFSET))();
	}
};
