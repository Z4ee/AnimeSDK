#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_8BB6DB215E69FCE0_METHOD_1_8F4CE8F7DCFF553A_OFFSET UNITYSDK_OFFSET(0xA97C930)
#define CLASS_1_8BB6DB215E69FCE0__CCTOR_OFFSET UNITYSDK_OFFSET(0xA97C920)

inline static constexpr unsigned int Class_1_8BB6DB215E69FCE0_TypeDefinitionIndex = 68590;

class Class_1_8BB6DB215E69FCE0 : public ::System::Object
{
public:
	static ::UnityEngine::Vector3* StaticGet_Field_1_0()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8BB6DB215E69FCE0_TypeDefinitionIndex)->GetStaticField(0xD600);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8BB6DB215E69FCE0__CCTOR_OFFSET))();
	}

	static ::UnityEngine::Vector3 Method_1_8F4CE8F7DCFF553A(::Il2CppArray<::UnityEngine::UIVertex>*& a1)
	{
		return ((::UnityEngine::Vector3(*)(::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_1_8BB6DB215E69FCE0_METHOD_1_8F4CE8F7DCFF553A_OFFSET))(a1);
	}
};
