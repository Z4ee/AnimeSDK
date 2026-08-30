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

#define CLASS_1_0BDF2037EA63DBC3_CLASS_1_FDB184180E579C9E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE5C9FA0)
#define CLASS_1_0BDF2037EA63DBC3_CLASS_1_FDB184180E579C9E_FINALIZE_OFFSET UNITYSDK_OFFSET(0xE5C9E90)
#define CLASS_1_0BDF2037EA63DBC3_CLASS_1_FDB184180E579C9E_METHOD_1_335506DF50B6309D_OFFSET UNITYSDK_OFFSET(0xE5C9FF0)
#define CLASS_1_0BDF2037EA63DBC3_CLASS_1_FDB184180E579C9E_METHOD_1_98B53867646B6532_OFFSET UNITYSDK_OFFSET(0xE5C8ED0)
#define CLASS_1_0BDF2037EA63DBC3_CLASS_1_FDB184180E579C9E_METHOD_1_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0xE5C8080)
#define CLASS_1_0BDF2037EA63DBC3_CLASS_1_FDB184180E579C9E_METHOD_1_C43F5FABBA68414A_OFFSET UNITYSDK_OFFSET(0xE5C89B0)
#define CLASS_1_0BDF2037EA63DBC3_CLASS_1_FDB184180E579C9E_METHOD_1_C6F98AD79A4365F1_OFFSET UNITYSDK_OFFSET(0xE5C9590)
#define CLASS_1_0BDF2037EA63DBC3_CLASS_1_FDB184180E579C9E_METHOD_1_CBAE9666256B7B09_OFFSET UNITYSDK_OFFSET(0xE5C9710)
#define CLASS_1_0BDF2037EA63DBC3_CLASS_1_FDB184180E579C9E_METHOD_1_DFA1BC439EA1E30C_OFFSET UNITYSDK_OFFSET(0xE5C9090)
#define CLASS_1_0BDF2037EA63DBC3_CLASS_1_FDB184180E579C9E__CTOR_OFFSET UNITYSDK_OFFSET(0xE5C8C90)

inline static constexpr unsigned int Class_1_0BDF2037EA63DBC3_Class_1_FDB184180E579C9E_TypeDefinitionIndex = 69477;

class Class_1_0BDF2037EA63DBC3_Class_1_FDB184180E579C9E : public ::System::Object
{
public:
	// static const ::System::Int32 GDBIEIAMPLF = 0x8; // 0x0
	// static const ::System::String* NJCFPPOEGDF; // 0x0
	// static const ::System::String* OICMFANFFGJ; // 0x0
	// static const ::System::String* DDFLCOFHDCB; // 0x0
	// static const ::System::String* BPBOEOFALEK; // 0x0
	// static const ::System::Int32 CCOGJDIIJIC = 0x8; // 0x0
	// static const ::System::Int32 OLGKIMHNGDI = 0x1; // 0x0
	::UnityEngine::ComputeBuffer* CIDOIOPKOKP; // 0x10
	::Il2CppArray<::UnityEngine::Vector2>* NIFNLNOLAJC; // 0x18
	::UnityEngine::RenderTexture* DJMPAIFPBCM; // 0x20
	::Il2CppArray<::System::Action*>* BKPAKEADKOM; // 0x28
	::Il2CppArray<::UnityEngine::Vector2>* EDCJKBFNJBP; // 0x30
	::System::Collections::Generic::List_1<::System::Action*>* BHHJMAOIAOM; // 0x38
	::UnityEngine::Texture2D* BECBMGHFMNA; // 0x40
	::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* GOJNFHCLBAF; // 0x48
	::UnityEngine::ComputeShader* MLNAIBGJAGD; // 0x50
	::Il2CppArray<::UnityEngine::Vector4>* ALANEOALIFK; // 0x58
	::System::Boolean JAGIDLCEAPD; // 0x60
	::System::Boolean POLPDEKOOCM; // 0x61
	::System::Int32 PIHPNGEIJBO; // 0x64

	::System::Void _ctor(::UnityEngine::Texture2D* a1, ::UnityEngine::ComputeShader* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_CLASS_1_FDB184180E579C9E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_CLASS_1_FDB184180E579C9E_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_CBAE9666256B7B09(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_CLASS_1_FDB184180E579C9E_METHOD_1_CBAE9666256B7B09_OFFSET))(this, a1);
	}

	::System::Void Method_1_C43F5FABBA68414A(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_CLASS_1_FDB184180E579C9E_METHOD_1_C43F5FABBA68414A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A5B6063FFC26FC8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_CLASS_1_FDB184180E579C9E_METHOD_1_A5B6063FFC26FC8F_OFFSET))(this);
	}

	::System::Int32 Method_1_C6F98AD79A4365F1(::UnityEngine::Vector2 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_CLASS_1_FDB184180E579C9E_METHOD_1_C6F98AD79A4365F1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector4 Method_1_DFA1BC439EA1E30C(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_CLASS_1_FDB184180E579C9E_METHOD_1_DFA1BC439EA1E30C_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_CLASS_1_FDB184180E579C9E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_335506DF50B6309D(::UnityEngine::Rendering::AsyncGPUReadbackRequest a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_CLASS_1_FDB184180E579C9E_METHOD_1_335506DF50B6309D_OFFSET))(this, a1);
	}

	::System::Void Method_1_98B53867646B6532(::UnityEngine::Texture2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_CLASS_1_FDB184180E579C9E_METHOD_1_98B53867646B6532_OFFSET))(this, a1);
	}
};
