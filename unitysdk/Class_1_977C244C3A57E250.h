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

#define CLASS_1_977C244C3A57E250_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA480870)
#define CLASS_1_977C244C3A57E250_GET_KEY_OFFSET UNITYSDK_OFFSET(0xA480860)
#define CLASS_1_977C244C3A57E250_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xA480210)
#define CLASS_1_977C244C3A57E250_METHOD_1_23BECAB4E8DF4D1B_OFFSET UNITYSDK_OFFSET(0xA480AA0)
#define CLASS_1_977C244C3A57E250_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xA4807B0)
#define CLASS_1_977C244C3A57E250_METHOD_1_7FBFC04DB341E38F_OFFSET UNITYSDK_OFFSET(0xA480360)
#define CLASS_1_977C244C3A57E250_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xA480C50)
#define CLASS_1_977C244C3A57E250_METHOD_1_B4DE4A1745AD2498_OFFSET UNITYSDK_OFFSET(0xA480BD0)
#define CLASS_1_977C244C3A57E250__CTOR_OFFSET UNITYSDK_OFFSET(0xA480D60)
#define CLASS_1_977C244C3A57E250___RETRIVEDEPTHSAMPLE_B__8_0_OFFSET UNITYSDK_OFFSET(0xA480D70)

inline static constexpr unsigned int Class_1_977C244C3A57E250_TypeDefinitionIndex = 59021;

class Class_1_977C244C3A57E250 : public ::System::Object
{
public:
	static ::UnityEngine::Mesh** StaticGet_Field_1_0()
	{
		return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(Class_1_977C244C3A57E250_TypeDefinitionIndex)->GetStaticField(0x5B780);
	}
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_1; // 0x10
	::Il2CppArray<::UnityEngine::Vector3>* Field_1_2; // 0x18
	::Il2CppArray<::System::Single>* Field_1_3; // 0x20
	::UnityEngine::Material* Field_1_4; // 0x28
	::UnityEngine::RenderTexture* Field_1_5; // 0x30
	::System::Int32 Field_1_6; // 0x38
	::System::Int32 Field_1_7; // 0x3C

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
