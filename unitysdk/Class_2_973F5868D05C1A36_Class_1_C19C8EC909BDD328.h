#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_973F5868D05C1A36;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_973F5868D05C1A36_CLASS_1_C19C8EC909BDD328_METHOD_1_E325569BD525B0A1_OFFSET UNITYSDK_OFFSET(0xEC8AD20)
#define CLASS_2_973F5868D05C1A36_CLASS_1_C19C8EC909BDD328__CTOR_OFFSET UNITYSDK_OFFSET(0xEC8AD10)

inline static constexpr unsigned int Class_2_973F5868D05C1A36_Class_1_C19C8EC909BDD328_TypeDefinitionIndex = 51623;

class Class_2_973F5868D05C1A36_Class_1_C19C8EC909BDD328 : public ::System::Object
{
public:
	::Class_2_973F5868D05C1A36* Field_1_6; // 0x10
	::UnityEngine::RectTransform* Field_1_1; // 0x18
	::UnityEngine::Camera* Field_1_0; // 0x20
	::System::Int32 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_CLASS_1_C19C8EC909BDD328__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E325569BD525B0A1(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_CLASS_1_C19C8EC909BDD328_METHOD_1_E325569BD525B0A1_OFFSET))(this, a1);
	}
};
