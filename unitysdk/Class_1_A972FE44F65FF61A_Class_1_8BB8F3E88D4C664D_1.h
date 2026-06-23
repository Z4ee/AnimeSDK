#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class AutoResetUniTaskCompletionSource; }
namespace System { class String; }
namespace UnityEngine { class Object; }

#define CLASS_1_A972FE44F65FF61A_CLASS_1_8BB8F3E88D4C664D_1_METHOD_1_EF6110B9AAEA204F_OFFSET UNITYSDK_OFFSET(0x13FBBFD0)
#define CLASS_1_A972FE44F65FF61A_CLASS_1_8BB8F3E88D4C664D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13FBBFC0)

inline static constexpr unsigned int Class_1_A972FE44F65FF61A_Class_1_8BB8F3E88D4C664D_1_TypeDefinitionIndex = 73486;

class Class_1_A972FE44F65FF61A_Class_1_8BB8F3E88D4C664D_1 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A972FE44F65FF61A_CLASS_1_8BB8F3E88D4C664D_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EF6110B9AAEA204F(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_A972FE44F65FF61A_CLASS_1_8BB8F3E88D4C664D_1_METHOD_1_EF6110B9AAEA204F_OFFSET))(this, a1, a2);
	}
};
