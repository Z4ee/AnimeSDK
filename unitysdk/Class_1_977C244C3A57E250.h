#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/AsyncGPUReadbackRequest.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CLASS_1_977C244C3A57E250_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB72A810)
#define CLASS_1_977C244C3A57E250_GET_KEY_OFFSET UNITYSDK_OFFSET(0xB72A7D0)
#define CLASS_1_977C244C3A57E250_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xB72A170)
#define CLASS_1_977C244C3A57E250_METHOD_1_23BECAB4E8DF4D1B_OFFSET UNITYSDK_OFFSET(0xB72AA40)
#define CLASS_1_977C244C3A57E250_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xB72A710)
#define CLASS_1_977C244C3A57E250_METHOD_1_7FBFC04DB341E38F_OFFSET UNITYSDK_OFFSET(0xB72A2C0)
#define CLASS_1_977C244C3A57E250_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xB72ABF0)
#define CLASS_1_977C244C3A57E250_METHOD_1_B4DE4A1745AD2498_OFFSET UNITYSDK_OFFSET(0xB72AB70)
#define CLASS_1_977C244C3A57E250__CTOR_OFFSET UNITYSDK_OFFSET(0xB72AD00)
#define CLASS_1_977C244C3A57E250___RETRIVEDEPTHSAMPLE_B__8_0_OFFSET UNITYSDK_OFFSET(0xB72AD10)

inline static constexpr unsigned int Class_1_977C244C3A57E250_TypeDefinitionIndex = 63140;

class Class_1_977C244C3A57E250 : public ::System::Object
{
public:
	static ::UnityEngine::Mesh** StaticGet_DKDMHCDJNFJ()
	{
		return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(Class_1_977C244C3A57E250_TypeDefinitionIndex)->GetStaticField(0x66E90);
	}
	::Il2CppArray<::System::Single>* GAFBBCEGJLJ; // 0x10
	::Il2CppArray<::UnityEngine::Vector4>* NKKKCPIDHGN; // 0x18
	::UnityEngine::RenderTexture* HGADCGCBJCE; // 0x20
	::UnityEngine::Material* CGGJOHOBPIO; // 0x28
	::Il2CppArray<::UnityEngine::Vector3>* JMCJLDLFAHN; // 0x30
	::System::Int32 EKBKMHAAKDN; // 0x38
	::System::Int32 DMIKJDCOCNI; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_977C244C3A57E250__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_977C244C3A57E250_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_7FBFC04DB341E38F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_977C244C3A57E250_METHOD_1_7FBFC04DB341E38F_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_977C244C3A57E250_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Int32 get_Key()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_977C244C3A57E250_GET_KEY_OFFSET))(this);
	}

	::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + CLASS_1_977C244C3A57E250_EXECUTE_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::UnityEngine::Vector4>* Method_1_23BECAB4E8DF4D1B()
	{
		return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_977C244C3A57E250_METHOD_1_23BECAB4E8DF4D1B_OFFSET))(this);
	}

	::System::Single Method_1_B4DE4A1745AD2498(::UnityEngine::Vector4 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + CLASS_1_977C244C3A57E250_METHOD_1_B4DE4A1745AD2498_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_977C244C3A57E250_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void __RetriveDepthSample_b__8_0(::UnityEngine::Rendering::AsyncGPUReadbackRequest a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + CLASS_1_977C244C3A57E250___RETRIVEDEPTHSAMPLE_B__8_0_OFFSET))(this, a1);
	}
};
