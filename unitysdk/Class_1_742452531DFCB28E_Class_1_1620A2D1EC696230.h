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

#define CLASS_1_742452531DFCB28E_CLASS_1_1620A2D1EC696230_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16D8A430)
#define CLASS_1_742452531DFCB28E_CLASS_1_1620A2D1EC696230_FINALIZE_OFFSET UNITYSDK_OFFSET(0x16D8A320)
#define CLASS_1_742452531DFCB28E_CLASS_1_1620A2D1EC696230_METHOD_1_335506DF50B6309D_OFFSET UNITYSDK_OFFSET(0x16D8A480)
#define CLASS_1_742452531DFCB28E_CLASS_1_1620A2D1EC696230_METHOD_1_98B53867646B6532_OFFSET UNITYSDK_OFFSET(0x16D89280)
#define CLASS_1_742452531DFCB28E_CLASS_1_1620A2D1EC696230_METHOD_1_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0x16D88450)
#define CLASS_1_742452531DFCB28E_CLASS_1_1620A2D1EC696230_METHOD_1_C43F5FABBA68414A_OFFSET UNITYSDK_OFFSET(0x16D88D80)
#define CLASS_1_742452531DFCB28E_CLASS_1_1620A2D1EC696230_METHOD_1_C6F98AD79A4365F1_OFFSET UNITYSDK_OFFSET(0x16D89A20)
#define CLASS_1_742452531DFCB28E_CLASS_1_1620A2D1EC696230_METHOD_1_CBAE9666256B7B09_OFFSET UNITYSDK_OFFSET(0x16D89BA0)
#define CLASS_1_742452531DFCB28E_CLASS_1_1620A2D1EC696230_METHOD_1_DFA1BC439EA1E30C_OFFSET UNITYSDK_OFFSET(0x16D89440)
#define CLASS_1_742452531DFCB28E_CLASS_1_1620A2D1EC696230__CTOR_OFFSET UNITYSDK_OFFSET(0x16D89060)

inline static constexpr unsigned int Class_1_742452531DFCB28E_Class_1_1620A2D1EC696230_TypeDefinitionIndex = 66384;

class Class_1_742452531DFCB28E_Class_1_1620A2D1EC696230 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x8; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x1; // 0x0
	::Il2CppArray<::UnityEngine::Vector2>* Field_1_7; // 0x10
	::Il2CppArray<::System::Action*>* Field_1_8; // 0x18
	::Il2CppArray<::UnityEngine::Vector2>* Field_1_9; // 0x20
	::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* Field_1_10; // 0x28
	::UnityEngine::Texture2D* Field_1_11; // 0x30
	::UnityEngine::ComputeBuffer* Field_1_12; // 0x38
	::UnityEngine::RenderTexture* Field_1_13; // 0x40
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_14; // 0x48
	::System::Collections::Generic::List_1<::System::Action*>* Field_1_15; // 0x50
	::UnityEngine::ComputeShader* Field_1_16; // 0x58
	::System::Boolean Field_1_17; // 0x60
	::System::Boolean Field_1_18; // 0x61
	::System::Int32 Field_1_19; // 0x64

	::System::Void _ctor(::UnityEngine::Texture2D* a1, ::UnityEngine::ComputeShader* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_CLASS_1_1620A2D1EC696230__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_CLASS_1_1620A2D1EC696230_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_CBAE9666256B7B09(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_CLASS_1_1620A2D1EC696230_METHOD_1_CBAE9666256B7B09_OFFSET))(this, a1);
	}

	::System::Void Method_1_C43F5FABBA68414A(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_CLASS_1_1620A2D1EC696230_METHOD_1_C43F5FABBA68414A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A5B6063FFC26FC8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_CLASS_1_1620A2D1EC696230_METHOD_1_A5B6063FFC26FC8F_OFFSET))(this);
	}

	::System::Int32 Method_1_C6F98AD79A4365F1(::UnityEngine::Vector2 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_CLASS_1_1620A2D1EC696230_METHOD_1_C6F98AD79A4365F1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector4 Method_1_DFA1BC439EA1E30C(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_CLASS_1_1620A2D1EC696230_METHOD_1_DFA1BC439EA1E30C_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_CLASS_1_1620A2D1EC696230_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_335506DF50B6309D(::UnityEngine::Rendering::AsyncGPUReadbackRequest a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_CLASS_1_1620A2D1EC696230_METHOD_1_335506DF50B6309D_OFFSET))(this, a1);
	}

	::System::Void Method_1_98B53867646B6532(::UnityEngine::Texture2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CLASS_1_742452531DFCB28E_CLASS_1_1620A2D1EC696230_METHOD_1_98B53867646B6532_OFFSET))(this, a1);
	}
};
