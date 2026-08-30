#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C15D42F68202F156_Class_1_C1D26EA5BEAA582B.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_C15D42F68202F156_CLASS_2_99B26405A94B246A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156A3660)
#define CLASS_1_C15D42F68202F156_CLASS_2_99B26405A94B246A_GET_OVERLAYEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x156A34F0)
#define CLASS_1_C15D42F68202F156_CLASS_2_99B26405A94B246A_METHOD_2_8D5DFAE13FB43C24_OFFSET UNITYSDK_OFFSET(0x156A3960)
#define CLASS_1_C15D42F68202F156_CLASS_2_99B26405A94B246A__CTOR_OFFSET UNITYSDK_OFFSET(0x156A3500)

inline static constexpr unsigned int Class_1_C15D42F68202F156_Class_2_99B26405A94B246A_TypeDefinitionIndex = 60356;

class Class_1_C15D42F68202F156_Class_2_99B26405A94B246A : public ::Class_1_C15D42F68202F156_Class_1_C1D26EA5BEAA582B
{
public:
	::UnityEngine::GameObject* GKNBCPMJHMN; // 0x20
	::System::String* _OverlayEffectPath_k__BackingField; // 0x28

	::System::Void _ctor(::UnityEngine::GameObject* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_CLASS_2_99B26405A94B246A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* get_OverlayEffectPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_CLASS_2_99B26405A94B246A_GET_OVERLAYEFFECTPATH_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_CLASS_2_99B26405A94B246A_DISPOSE_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_8D5DFAE13FB43C24(::System::Int32 a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_CLASS_2_99B26405A94B246A_METHOD_2_8D5DFAE13FB43C24_OFFSET))(this, a1);
	}
};
