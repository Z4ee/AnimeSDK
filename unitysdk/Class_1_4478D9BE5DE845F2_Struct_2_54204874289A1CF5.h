#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_1_4478D9BE5DE845F2_STRUCT_2_54204874289A1CF5__CCTOR_OFFSET UNITYSDK_OFFSET(0xE20B250)

inline static constexpr unsigned int Class_1_4478D9BE5DE845F2_Struct_2_54204874289A1CF5_TypeDefinitionIndex = 90721;

struct alignas(4) Class_1_4478D9BE5DE845F2_Struct_2_54204874289A1CF5
{
	static ::Class_1_4478D9BE5DE845F2_Struct_2_54204874289A1CF5* StaticGet_Field_2_0()
	{
		return (::Class_1_4478D9BE5DE845F2_Struct_2_54204874289A1CF5*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4478D9BE5DE845F2_Struct_2_54204874289A1CF5_TypeDefinitionIndex)->GetStaticField(0xC030);
	}
	::System::Int32 Field_2_2; // 0x10
	::UnityEngine::Vector2 Field_2_1; // 0x14

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4478D9BE5DE845F2_STRUCT_2_54204874289A1CF5__CCTOR_OFFSET))();
	}
};
