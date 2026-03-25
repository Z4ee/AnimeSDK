#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_F0D462198B262603_CLASS_1_9BBA7E2AAEF1A44B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10C88C60)
#define CLASS_1_F0D462198B262603_CLASS_1_9BBA7E2AAEF1A44B_METHOD_1_1B231DA12CDB4296_OFFSET UNITYSDK_OFFSET(0x10C89FA0)
#define CLASS_1_F0D462198B262603_CLASS_1_9BBA7E2AAEF1A44B_METHOD_1_3BB0800928A96D64_OFFSET UNITYSDK_OFFSET(0x10C89950)
#define CLASS_1_F0D462198B262603_CLASS_1_9BBA7E2AAEF1A44B_METHOD_1_51A3671A7892A14B_OFFSET UNITYSDK_OFFSET(0x10C8A190)
#define CLASS_1_F0D462198B262603_CLASS_1_9BBA7E2AAEF1A44B_METHOD_1_6BA26089EC3BC2F1_OFFSET UNITYSDK_OFFSET(0x10C89DA0)
#define CLASS_1_F0D462198B262603_CLASS_1_9BBA7E2AAEF1A44B__CTOR_OFFSET UNITYSDK_OFFSET(0x10C894E0)

inline static constexpr unsigned int Class_1_F0D462198B262603_Class_1_9BBA7E2AAEF1A44B_TypeDefinitionIndex = 57120;

class Class_1_F0D462198B262603_Class_1_9BBA7E2AAEF1A44B : public ::System::Object
{
public:
	::Collections::Pooled::PooledList_1<::System::String*>* Field_1_2; // 0x10
	::System::String* Field_1_1; // 0x18
	::UnityEngine::Material* Field_1_0; // 0x20
	::System::Boolean Field_1_3; // 0x28

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F0D462198B262603_CLASS_1_9BBA7E2AAEF1A44B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_6BA26089EC3BC2F1(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0D462198B262603_CLASS_1_9BBA7E2AAEF1A44B_METHOD_1_6BA26089EC3BC2F1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_3BB0800928A96D64(::UnityEngine::Material* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F0D462198B262603_CLASS_1_9BBA7E2AAEF1A44B_METHOD_1_3BB0800928A96D64_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_51A3671A7892A14B(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0D462198B262603_CLASS_1_9BBA7E2AAEF1A44B_METHOD_1_51A3671A7892A14B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_1B231DA12CDB4296(::UnityEngine::Material* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F0D462198B262603_CLASS_1_9BBA7E2AAEF1A44B_METHOD_1_1B231DA12CDB4296_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0D462198B262603_CLASS_1_9BBA7E2AAEF1A44B_DISPOSE_OFFSET))(this);
	}
};
