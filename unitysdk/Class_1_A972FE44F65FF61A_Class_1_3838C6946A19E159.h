#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class AutoResetUniTaskCompletionSource; }
namespace System::IO { class Stream; }
namespace UnityEngine { class Object; }

#define CLASS_1_A972FE44F65FF61A_CLASS_1_3838C6946A19E159_METHOD_1_782452690FABD6CC_OFFSET UNITYSDK_OFFSET(0x104E5250)
#define CLASS_1_A972FE44F65FF61A_CLASS_1_3838C6946A19E159__CTOR_OFFSET UNITYSDK_OFFSET(0x104E5240)

inline static constexpr unsigned int Class_1_A972FE44F65FF61A_Class_1_3838C6946A19E159_TypeDefinitionIndex = 48773;

class Class_1_A972FE44F65FF61A_Class_1_3838C6946A19E159 : public ::System::Object
{
public:
	::System::IO::Stream* Field_1_0; // 0x10
	::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A972FE44F65FF61A_CLASS_1_3838C6946A19E159__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_782452690FABD6CC(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_A972FE44F65FF61A_CLASS_1_3838C6946A19E159_METHOD_1_782452690FABD6CC_OFFSET))(this, a1, a2);
	}
};
