#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/AsyncGPUReadbackRequest.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }

#define CLASS_1_0ACF520A830B24C7_CLASS_1_FDB184180E579C9E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A26090)
#define CLASS_1_0ACF520A830B24C7_CLASS_1_FDB184180E579C9E_FINALIZE_OFFSET UNITYSDK_OFFSET(0x11A25FB0)
#define CLASS_1_0ACF520A830B24C7_CLASS_1_FDB184180E579C9E_METHOD_1_3F5F0BE9AFB2990C_OFFSET UNITYSDK_OFFSET(0x11A257D0)
#define CLASS_1_0ACF520A830B24C7_CLASS_1_FDB184180E579C9E_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x11A243A0)
#define CLASS_1_0ACF520A830B24C7_CLASS_1_FDB184180E579C9E_METHOD_1_98B53867646B6532_OFFSET UNITYSDK_OFFSET(0x11A25160)
#define CLASS_1_0ACF520A830B24C7_CLASS_1_FDB184180E579C9E_METHOD_1_A383DC32C4A40940_OFFSET UNITYSDK_OFFSET(0x11A25940)
#define CLASS_1_0ACF520A830B24C7_CLASS_1_FDB184180E579C9E_METHOD_1_C43F5FABBA68414A_OFFSET UNITYSDK_OFFSET(0x11A24C50)
#define CLASS_1_0ACF520A830B24C7_CLASS_1_FDB184180E579C9E_METHOD_1_CB08B07BED874C8D_OFFSET UNITYSDK_OFFSET(0x11A260E0)
#define CLASS_1_0ACF520A830B24C7_CLASS_1_FDB184180E579C9E_METHOD_1_DFA1BC439EA1E30C_OFFSET UNITYSDK_OFFSET(0x11A252C0)
#define CLASS_1_0ACF520A830B24C7_CLASS_1_FDB184180E579C9E__CTOR_OFFSET UNITYSDK_OFFSET(0x11A24F20)

inline static constexpr unsigned int Class_1_0ACF520A830B24C7_Class_1_FDB184180E579C9E_TypeDefinitionIndex = 64058;

class Class_1_0ACF520A830B24C7_Class_1_FDB184180E579C9E : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x8; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x1; // 0x0
	::Il2CppArray<::UnityEngine::Vector2>* Field_1_12; // 0x10
	::Il2CppArray<::UnityEngine::Vector2>* Field_1_11; // 0x18
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_14; // 0x20
	::UnityEngine::ComputeShader* Field_1_8; // 0x28
	::System::Collections::Generic::List_1<::System::Action*>* Field_1_18; // 0x30
	::UnityEngine::Texture2D* Field_1_7; // 0x38
	::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* Field_1_19; // 0x40
	::UnityEngine::RenderTexture* Field_1_10; // 0x48
	::Il2CppArray<::System::Action*>* Field_1_13; // 0x50
	::UnityEngine::ComputeBuffer* Field_1_9; // 0x58
	::System::Int32 Field_1_15; // 0x60
	::System::Boolean Field_1_17; // 0x64
	::System::Boolean Field_1_16; // 0x65

	::System::Void _ctor(::UnityEngine::Texture2D* a1, ::UnityEngine::ComputeShader* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_CLASS_1_FDB184180E579C9E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_CLASS_1_FDB184180E579C9E_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_A383DC32C4A40940(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_CLASS_1_FDB184180E579C9E_METHOD_1_A383DC32C4A40940_OFFSET))(this, a1);
	}

	::System::Void Method_1_C43F5FABBA68414A(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_CLASS_1_FDB184180E579C9E_METHOD_1_C43F5FABBA68414A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_CLASS_1_FDB184180E579C9E_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Int32 Method_1_3F5F0BE9AFB2990C(::UnityEngine::Vector2 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_CLASS_1_FDB184180E579C9E_METHOD_1_3F5F0BE9AFB2990C_OFFSET))(this, a1);
	}

	::UnityEngine::Vector4 Method_1_DFA1BC439EA1E30C(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_CLASS_1_FDB184180E579C9E_METHOD_1_DFA1BC439EA1E30C_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_CLASS_1_FDB184180E579C9E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CB08B07BED874C8D(::UnityEngine::Rendering::AsyncGPUReadbackRequest a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_CLASS_1_FDB184180E579C9E_METHOD_1_CB08B07BED874C8D_OFFSET))(this, a1);
	}

	::System::Void Method_1_98B53867646B6532(::UnityEngine::Texture2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CLASS_1_0ACF520A830B24C7_CLASS_1_FDB184180E579C9E_METHOD_1_98B53867646B6532_OFFSET))(this, a1);
	}
};
