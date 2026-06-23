#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_30FE1CE5A1C958A6.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_65581DA3EB7CCE53_METHOD_1_04165E1F10101EC1_OFFSET UNITYSDK_OFFSET(0xFB0B640)
#define CLASS_1_65581DA3EB7CCE53_METHOD_1_2C1AF1D4507683AA_OFFSET UNITYSDK_OFFSET(0xFB0B2F0)
#define CLASS_1_65581DA3EB7CCE53_METHOD_1_355A701480BC6449_OFFSET UNITYSDK_OFFSET(0xFB0B360)
#define CLASS_1_65581DA3EB7CCE53_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xFB0B2B0)

inline static constexpr unsigned int Class_1_65581DA3EB7CCE53_TypeDefinitionIndex = 63088;

class Class_1_65581DA3EB7CCE53 : public ::System::Object
{
public:
	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_65581DA3EB7CCE53_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_2C1AF1D4507683AA(::Enum_3_30FE1CE5A1C958A6 a1, ::System::Boolean a2, ::System::String* a3, ::UnityEngine::Color a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::Enum_3_30FE1CE5A1C958A6, ::System::Boolean, ::System::String*, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_65581DA3EB7CCE53_METHOD_1_2C1AF1D4507683AA_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_355A701480BC6449(::UnityEngine::GameObject* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_65581DA3EB7CCE53_METHOD_1_355A701480BC6449_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_04165E1F10101EC1(::Enum_3_30FE1CE5A1C958A6 a1, ::System::Boolean a2, ::System::String* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::Enum_3_30FE1CE5A1C958A6, ::System::Boolean, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_65581DA3EB7CCE53_METHOD_1_04165E1F10101EC1_OFFSET))(a1, a2, a3, a4);
	}
};
