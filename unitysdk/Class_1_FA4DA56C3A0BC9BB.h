#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/HideFlags.h"

namespace System { class String; }
namespace UnityEngine { class TextAsset; }
namespace UnityEngine { class Texture3D; }

#define CLASS_1_FA4DA56C3A0BC9BB_METHOD_1_0C247A24E7FC3289_OFFSET UNITYSDK_OFFSET(0xB712EC0)
#define CLASS_1_FA4DA56C3A0BC9BB_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xB712DE0)
#define CLASS_1_FA4DA56C3A0BC9BB_METHOD_1_A3769EE9A8F58984_OFFSET UNITYSDK_OFFSET(0xB713040)
#define CLASS_1_FA4DA56C3A0BC9BB_METHOD_1_CE34EA208837238D_1_OFFSET UNITYSDK_OFFSET(0xB712D80)
#define CLASS_1_FA4DA56C3A0BC9BB_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0xB712D10)

inline static constexpr unsigned int Class_1_FA4DA56C3A0BC9BB_TypeDefinitionIndex = 49433;

class Class_1_FA4DA56C3A0BC9BB : public ::System::Object
{
public:
	static ::UnityEngine::Texture3D** StaticGet_PBNHCEPGCAM()
	{
		return (::UnityEngine::Texture3D**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FA4DA56C3A0BC9BB_TypeDefinitionIndex)->GetStaticField(0x66C20);
	}
	static ::System::Boolean* StaticGet_AABOIJCDIGC()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FA4DA56C3A0BC9BB_TypeDefinitionIndex)->GetStaticField(0x15300);
	}
	static ::System::Boolean* StaticGet_KOBHDGPCPHB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FA4DA56C3A0BC9BB_TypeDefinitionIndex)->GetStaticField(0x15301);
	}
	// static const ::UnityEngine::HideFlags INFMLBGMGKH; // 0x0
	// static const ::System::Int32 EJFHAKAHDLO = 0x23; // 0x0

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FA4DA56C3A0BC9BB_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FA4DA56C3A0BC9BB_METHOD_1_CE34EA208837238D_1_OFFSET))();
	}

	static ::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FA4DA56C3A0BC9BB_METHOD_1_88B60F3B95FAA4F1_OFFSET))();
	}

	static ::System::Void Method_1_0C247A24E7FC3289()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FA4DA56C3A0BC9BB_METHOD_1_0C247A24E7FC3289_OFFSET))();
	}

	static ::UnityEngine::Texture3D* Method_1_A3769EE9A8F58984(::UnityEngine::TextAsset* a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Texture3D*(*)(::UnityEngine::TextAsset*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FA4DA56C3A0BC9BB_METHOD_1_A3769EE9A8F58984_OFFSET))(a1, a2);
	}
};
