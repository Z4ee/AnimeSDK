#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define CLASS_1_BBF613D29E606A5E_METHOD_1_46D5C4F0EA172C6A_OFFSET UNITYSDK_OFFSET(0x128F5140)
#define CLASS_1_BBF613D29E606A5E_METHOD_1_53BF32F2E25C8B7C_OFFSET UNITYSDK_OFFSET(0x128F4F00)
#define CLASS_1_BBF613D29E606A5E_METHOD_1_7EC693EFA0B59E75_OFFSET UNITYSDK_OFFSET(0x128F4E90)
#define CLASS_1_BBF613D29E606A5E_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x128F50F0)
#define CLASS_1_BBF613D29E606A5E__CTOR_OFFSET UNITYSDK_OFFSET(0x128F4E20)

inline static constexpr unsigned int Class_1_BBF613D29E606A5E_TypeDefinitionIndex = 91066;

class Class_1_BBF613D29E606A5E : public ::System::Object
{
public:
	::UnityEngine::RectTransform* Field_1_1; // 0x10
	::UnityEngine::Vector2 Field_1_6; // 0x18
	::System::Single Field_1_5; // 0x20
	::System::Int32 Field_1_0; // 0x24
	::UnityEngine::Vector2 Field_1_7; // 0x28

	::System::Void _ctor(::UnityEngine::RectTransform* a1, ::System::Int32 a2, ::UnityEngine::Vector2 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Int32, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BBF613D29E606A5E__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_7EC693EFA0B59E75(::UnityEngine::Vector2 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BBF613D29E606A5E_METHOD_1_7EC693EFA0B59E75_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2 Method_1_53BF32F2E25C8B7C(::System::Int32 a1, ::UnityEngine::RectTransform* a2)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_BBF613D29E606A5E_METHOD_1_53BF32F2E25C8B7C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BBF613D29E606A5E_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_46D5C4F0EA172C6A(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_BBF613D29E606A5E_METHOD_1_46D5C4F0EA172C6A_OFFSET))(this, a1);
	}
};
