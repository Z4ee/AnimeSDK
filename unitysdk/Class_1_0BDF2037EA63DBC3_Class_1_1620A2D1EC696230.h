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

#define CLASS_1_0BDF2037EA63DBC3_CLASS_1_1620A2D1EC696230_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE51E780)
#define CLASS_1_0BDF2037EA63DBC3_CLASS_1_1620A2D1EC696230_FINALIZE_OFFSET UNITYSDK_OFFSET(0xE51E670)
#define CLASS_1_0BDF2037EA63DBC3_CLASS_1_1620A2D1EC696230_METHOD_1_98B53867646B6532_OFFSET UNITYSDK_OFFSET(0xE51D6E0)
#define CLASS_1_0BDF2037EA63DBC3_CLASS_1_1620A2D1EC696230_METHOD_1_A383DC32C4A40940_OFFSET UNITYSDK_OFFSET(0xE51DF20)
#define CLASS_1_0BDF2037EA63DBC3_CLASS_1_1620A2D1EC696230_METHOD_1_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0xE51C8B0)
#define CLASS_1_0BDF2037EA63DBC3_CLASS_1_1620A2D1EC696230_METHOD_1_C43F5FABBA68414A_OFFSET UNITYSDK_OFFSET(0xE51D1E0)
#define CLASS_1_0BDF2037EA63DBC3_CLASS_1_1620A2D1EC696230_METHOD_1_C6F98AD79A4365F1_OFFSET UNITYSDK_OFFSET(0xE51DDA0)
#define CLASS_1_0BDF2037EA63DBC3_CLASS_1_1620A2D1EC696230_METHOD_1_CB08B07BED874C8D_OFFSET UNITYSDK_OFFSET(0xE51E7D0)
#define CLASS_1_0BDF2037EA63DBC3_CLASS_1_1620A2D1EC696230_METHOD_1_DFA1BC439EA1E30C_OFFSET UNITYSDK_OFFSET(0xE51D8A0)
#define CLASS_1_0BDF2037EA63DBC3_CLASS_1_1620A2D1EC696230__CTOR_OFFSET UNITYSDK_OFFSET(0xE51D4C0)

inline static constexpr unsigned int Class_1_0BDF2037EA63DBC3_Class_1_1620A2D1EC696230_TypeDefinitionIndex = 69513;

class Class_1_0BDF2037EA63DBC3_Class_1_1620A2D1EC696230 : public ::System::Object
{
public:
	// static const ::System::Int32 GDBIEIAMPLF = 0x8; // 0x0
	// static const ::System::String* NJCFPPOEGDF; // 0x0
	// static const ::System::String* OICMFANFFGJ; // 0x0
	// static const ::System::String* DDFLCOFHDCB; // 0x0
	// static const ::System::String* BPBOEOFALEK; // 0x0
	// static const ::System::Int32 CCOGJDIIJIC = 0x8; // 0x0
	// static const ::System::Int32 OLGKIMHNGDI = 0x1; // 0x0
	::Il2CppArray<::UnityEngine::Vector4>* ALANEOALIFK; // 0x10
	::UnityEngine::ComputeShader* MLNAIBGJAGD; // 0x18
	::UnityEngine::ComputeBuffer* CIDOIOPKOKP; // 0x20
	::UnityEngine::Texture2D* BECBMGHFMNA; // 0x28
	::UnityEngine::RenderTexture* DJMPAIFPBCM; // 0x30
	::Il2CppArray<::UnityEngine::Vector2>* EDCJKBFNJBP; // 0x38
	::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* GOJNFHCLBAF; // 0x40
	::Il2CppArray<::UnityEngine::Vector2>* NIFNLNOLAJC; // 0x48
	::System::Collections::Generic::List_1<::System::Action*>* BHHJMAOIAOM; // 0x50
	::Il2CppArray<::System::Action*>* BKPAKEADKOM; // 0x58
	::System::Int32 PIHPNGEIJBO; // 0x60
	::System::Boolean POLPDEKOOCM; // 0x64
	::System::Boolean JAGIDLCEAPD; // 0x65

	::System::Void _ctor(::UnityEngine::Texture2D* a1, ::UnityEngine::ComputeShader* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_CLASS_1_1620A2D1EC696230__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_CLASS_1_1620A2D1EC696230_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_A383DC32C4A40940(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_CLASS_1_1620A2D1EC696230_METHOD_1_A383DC32C4A40940_OFFSET))(this, a1);
	}

	::System::Void Method_1_C43F5FABBA68414A(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_CLASS_1_1620A2D1EC696230_METHOD_1_C43F5FABBA68414A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A5B6063FFC26FC8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_CLASS_1_1620A2D1EC696230_METHOD_1_A5B6063FFC26FC8F_OFFSET))(this);
	}

	::System::Int32 Method_1_C6F98AD79A4365F1(::UnityEngine::Vector2 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_CLASS_1_1620A2D1EC696230_METHOD_1_C6F98AD79A4365F1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector4 Method_1_DFA1BC439EA1E30C(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_CLASS_1_1620A2D1EC696230_METHOD_1_DFA1BC439EA1E30C_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_CLASS_1_1620A2D1EC696230_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CB08B07BED874C8D(::UnityEngine::Rendering::AsyncGPUReadbackRequest a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_CLASS_1_1620A2D1EC696230_METHOD_1_CB08B07BED874C8D_OFFSET))(this, a1);
	}

	::System::Void Method_1_98B53867646B6532(::UnityEngine::Texture2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CLASS_1_0BDF2037EA63DBC3_CLASS_1_1620A2D1EC696230_METHOD_1_98B53867646B6532_OFFSET))(this, a1);
	}
};
