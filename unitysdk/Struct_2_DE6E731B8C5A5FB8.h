#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define STRUCT_2_DE6E731B8C5A5FB8_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x967040)

inline static constexpr unsigned int Struct_2_DE6E731B8C5A5FB8_TypeDefinitionIndex = 89464;

struct alignas(8) Struct_2_DE6E731B8C5A5FB8
{
	::System::Boolean Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18
	::Foundation::AssetPath Field_2_3; // 0x20
	::UnityEngine::GameObject* Field_2_4; // 0x30
	::Il2CppArray<::Foundation::AssetPath>* Field_2_5; // 0x38
	::Il2CppArray<::UnityEngine::GameObject*>* Field_2_6; // 0x40

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DE6E731B8C5A5FB8_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}
};
