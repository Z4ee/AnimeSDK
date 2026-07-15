#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_9B0F70AC3183FFF8__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B89BB0)

inline static constexpr unsigned int Struct_2_9B0F70AC3183FFF8_TypeDefinitionIndex = 76007;

struct alignas(4) Struct_2_9B0F70AC3183FFF8
{
	static ::Struct_2_9B0F70AC3183FFF8* StaticGet_Field_2_0()
	{
		return (::Struct_2_9B0F70AC3183FFF8*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_9B0F70AC3183FFF8_TypeDefinitionIndex)->GetStaticField(0x4910);
	}
	::System::Boolean Field_2_1; // 0x10
	::System::UInt32 Field_2_2; // 0x14
	::System::Single Field_2_3; // 0x18
	::System::Single Field_2_4; // 0x1C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_9B0F70AC3183FFF8__CCTOR_OFFSET))();
	}
};
