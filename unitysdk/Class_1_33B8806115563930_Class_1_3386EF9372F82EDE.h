#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class AutoResetUniTaskCompletionSource; }
namespace System::IO { class Stream; }
namespace UnityEngine { class Object; }

#define CLASS_1_33B8806115563930_CLASS_1_3386EF9372F82EDE_METHOD_1_610B70F9FFFB9177_OFFSET UNITYSDK_OFFSET(0x11B40710)
#define CLASS_1_33B8806115563930_CLASS_1_3386EF9372F82EDE__CTOR_OFFSET UNITYSDK_OFFSET(0x11B40700)

inline static constexpr unsigned int Class_1_33B8806115563930_Class_1_3386EF9372F82EDE_TypeDefinitionIndex = 66250;

class Class_1_33B8806115563930_Class_1_3386EF9372F82EDE : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* Field_1_0; // 0x10
	::System::IO::Stream* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33B8806115563930_CLASS_1_3386EF9372F82EDE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_610B70F9FFFB9177(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_33B8806115563930_CLASS_1_3386EF9372F82EDE_METHOD_1_610B70F9FFFB9177_OFFSET))(this, a1, a2);
	}
};
