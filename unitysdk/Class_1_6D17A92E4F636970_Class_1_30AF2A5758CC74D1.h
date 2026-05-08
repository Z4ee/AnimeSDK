#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Sprite; }

#define CLASS_1_6D17A92E4F636970_CLASS_1_30AF2A5758CC74D1_METHOD_1_7D96D38E7AAD3527_OFFSET UNITYSDK_OFFSET(0x11DC8B70)
#define CLASS_1_6D17A92E4F636970_CLASS_1_30AF2A5758CC74D1__CTOR_OFFSET UNITYSDK_OFFSET(0x11DC8B60)

inline static constexpr unsigned int Class_1_6D17A92E4F636970_Class_1_30AF2A5758CC74D1_TypeDefinitionIndex = 82597;

class Class_1_6D17A92E4F636970_Class_1_30AF2A5758CC74D1 : public ::System::Object
{
public:
	::System::Action_2<::UnityEngine::Sprite*, ::Foundation::AssetRequestHandle>* Field_1_1; // 0x10
	::UnityEngine::Sprite* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D17A92E4F636970_CLASS_1_30AF2A5758CC74D1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7D96D38E7AAD3527(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_6D17A92E4F636970_CLASS_1_30AF2A5758CC74D1_METHOD_1_7D96D38E7AAD3527_OFFSET))(this, a1, a2);
	}
};
