#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class AutoResetUniTaskCompletionSource; }
namespace System { class String; }
namespace UnityEngine { class Object; }

#define CLASS_1_33B8806115563930_CLASS_1_8BB8F3E88D4C664D_METHOD_1_EF6110B9AAEA204F_OFFSET UNITYSDK_OFFSET(0x1544A3F0)
#define CLASS_1_33B8806115563930_CLASS_1_8BB8F3E88D4C664D__CTOR_OFFSET UNITYSDK_OFFSET(0x1544A3E0)

inline static constexpr unsigned int Class_1_33B8806115563930_Class_1_8BB8F3E88D4C664D_TypeDefinitionIndex = 66249;

class Class_1_33B8806115563930_Class_1_8BB8F3E88D4C664D : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* Field_1_7; // 0x10
	::System::String* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33B8806115563930_CLASS_1_8BB8F3E88D4C664D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EF6110B9AAEA204F(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_33B8806115563930_CLASS_1_8BB8F3E88D4C664D_METHOD_1_EF6110B9AAEA204F_OFFSET))(this, a1, a2);
	}
};
