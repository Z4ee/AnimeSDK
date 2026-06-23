#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_9A16BB53176B1EDB;
namespace UnityEngine { class RectTransform; }

#define CLASS_1_999DD7A68F57F2D7_METHOD_1_4AA685DC491BA87A_OFFSET UNITYSDK_OFFSET(0x13BE6240)
#define CLASS_1_999DD7A68F57F2D7_METHOD_1_4B2E2B61CE404D2A_OFFSET UNITYSDK_OFFSET(0x13BE64A0)
#define CLASS_1_999DD7A68F57F2D7_METHOD_1_90F57E46DEE570F0_OFFSET UNITYSDK_OFFSET(0x13BE6670)
#define CLASS_1_999DD7A68F57F2D7__CTOR_OFFSET UNITYSDK_OFFSET(0x13BE6230)

inline static constexpr unsigned int Class_1_999DD7A68F57F2D7_TypeDefinitionIndex = 79848;

class Class_1_999DD7A68F57F2D7 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_999DD7A68F57F2D7__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_4AA685DC491BA87A(::UnityEngine::RectTransform* a1, ::Il2CppArray<::UnityEngine::Vector2>*& a2)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*, ::Il2CppArray<::UnityEngine::Vector2>*&))((::PBYTE)hIl2Cpp + CLASS_1_999DD7A68F57F2D7_METHOD_1_4AA685DC491BA87A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4B2E2B61CE404D2A(::Class_2_9A16BB53176B1EDB* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_2_9A16BB53176B1EDB*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_999DD7A68F57F2D7_METHOD_1_4B2E2B61CE404D2A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_90F57E46DEE570F0(::Class_2_9A16BB53176B1EDB* a1, ::UnityEngine::Vector2& a2)
	{
		return ((::System::Void(*)(::Class_2_9A16BB53176B1EDB*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_999DD7A68F57F2D7_METHOD_1_90F57E46DEE570F0_OFFSET))(a1, a2);
	}
};
