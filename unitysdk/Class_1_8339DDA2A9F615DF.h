#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LegacyGPUParticleSystem_VertexInputType.h"
#include "unitysdk/RefGPUParticleSystem_MeshBakeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/HideFlags.h"
#include "unitysdk/UnityEngine/Keyframe.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture2D; }

#define CLASS_1_8339DDA2A9F615DF_METHOD_1_00FC5517DE5D81F6_OFFSET UNITYSDK_OFFSET(0x1ABBB8B0)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_07D430FD2D848CD9_OFFSET UNITYSDK_OFFSET(0x1ABBEB40)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_0AFA2E7228F6CB97_OFFSET UNITYSDK_OFFSET(0x1ABBF950)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_143FE869CE5D7FA8_OFFSET UNITYSDK_OFFSET(0x1ABBD600)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_34DEC0779527F707_OFFSET UNITYSDK_OFFSET(0x1ABBDBA0)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_36170DB5A521820A_OFFSET UNITYSDK_OFFSET(0x1ABB7C90)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_4C102AA305D29F5B_OFFSET UNITYSDK_OFFSET(0x1ABBC3B0)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_4EC713F72AF2D646_OFFSET UNITYSDK_OFFSET(0x1ABB7CC0)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_6841A0F38E512482_OFFSET UNITYSDK_OFFSET(0x1ABBF090)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_712479BA4B35C2E0_OFFSET UNITYSDK_OFFSET(0x1ABBBF40)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_73284C190286195C_OFFSET UNITYSDK_OFFSET(0x1ABBE160)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_7AF12EE9A95D4489_OFFSET UNITYSDK_OFFSET(0x1ABBF400)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_848011F632729530_OFFSET UNITYSDK_OFFSET(0x1ABBB010)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_87180B9068D2890E_OFFSET UNITYSDK_OFFSET(0x1ABBE8C0)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_907E808201E81737_OFFSET UNITYSDK_OFFSET(0x1ABBBC50)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_9246D834B1553CD7_OFFSET UNITYSDK_OFFSET(0x1ABBEFC0)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_93311D507B10B4FB_1_OFFSET UNITYSDK_OFFSET(0x1ABB8BA0)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_93311D507B10B4FB_2_OFFSET UNITYSDK_OFFSET(0x1ABB95C0)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_93311D507B10B4FB_OFFSET UNITYSDK_OFFSET(0x1ABB82F0)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_A1BEE557455ABB66_1_OFFSET UNITYSDK_OFFSET(0x1ABBEDE0)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_A1BEE557455ABB66_OFFSET UNITYSDK_OFFSET(0x1ABBED30)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_AB18B1C0A6C38354_OFFSET UNITYSDK_OFFSET(0x1ABBE850)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_B41725995366422B_OFFSET UNITYSDK_OFFSET(0x1ABBF080)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_B6E2BA04D0F037E4_OFFSET UNITYSDK_OFFSET(0x1ABB9FC0)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_BBA838E833679CE6_OFFSET UNITYSDK_OFFSET(0x1ABBBFA0)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_D23B18F21136BF12_OFFSET UNITYSDK_OFFSET(0x1ABBC890)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_D658787C160807C6_OFFSET UNITYSDK_OFFSET(0x1ABBE560)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_DE224A6444B5E377_OFFSET UNITYSDK_OFFSET(0x1ABBEE90)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_E4EB26AE70641D0D_OFFSET UNITYSDK_OFFSET(0x1ABBCFC0)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_E84AA5E4B2032F85_OFFSET UNITYSDK_OFFSET(0x1ABBE250)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_F4D295F84C3DA80E_OFFSET UNITYSDK_OFFSET(0x1ABBDF60)
#define CLASS_1_8339DDA2A9F615DF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ABBF9F0)

inline static constexpr unsigned int Class_1_8339DDA2A9F615DF_TypeDefinitionIndex = 40553;

class Class_1_8339DDA2A9F615DF : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8339DDA2A9F615DF_TypeDefinitionIndex)->GetStaticField(0x4F6E0);
	}
	static ::Il2CppArray<::UnityEngine::Color>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8339DDA2A9F615DF_TypeDefinitionIndex)->GetStaticField(0x4F6E8);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8339DDA2A9F615DF_TypeDefinitionIndex)->GetStaticField(0x4F6F0);
	}
	static ::Il2CppArray<::UnityEngine::Color>** StaticGet_Field_1_3()
	{
		return (::Il2CppArray<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8339DDA2A9F615DF_TypeDefinitionIndex)->GetStaticField(0x4F6F8);
	}
	static ::Il2CppArray<::System::Single>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8339DDA2A9F615DF_TypeDefinitionIndex)->GetStaticField(0x4F700);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_5()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8339DDA2A9F615DF_TypeDefinitionIndex)->GetStaticField(0x4F708);
	}
	static ::Il2CppArray<::UnityEngine::Vector2>** StaticGet_Field_1_6()
	{
		return (::Il2CppArray<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8339DDA2A9F615DF_TypeDefinitionIndex)->GetStaticField(0x4F710);
	}
	static ::Il2CppArray<::UnityEngine::Vector2>** StaticGet_Field_1_7()
	{
		return (::Il2CppArray<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8339DDA2A9F615DF_TypeDefinitionIndex)->GetStaticField(0x4F718);
	}
	static ::System::Single* StaticGet_Field_1_8()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8339DDA2A9F615DF_TypeDefinitionIndex)->GetStaticField(0xF710);
	}
	static ::UnityEngine::Vector3* StaticGet_Field_1_9()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8339DDA2A9F615DF_TypeDefinitionIndex)->GetStaticField(0xF714);
	}
	static ::System::Single* StaticGet_Field_1_10()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8339DDA2A9F615DF_TypeDefinitionIndex)->GetStaticField(0xF720);
	}
	static ::System::Single* StaticGet_Field_1_11()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8339DDA2A9F615DF_TypeDefinitionIndex)->GetStaticField(0xF724);
	}
	static ::System::Int32* StaticGet_Field_1_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8339DDA2A9F615DF_TypeDefinitionIndex)->GetStaticField(0xF728);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF__CCTOR_OFFSET))();
	}

	static ::UnityEngine::GameObject* Method_1_36170DB5A521820A(::System::String* a1, ::UnityEngine::HideFlags a2)
	{
		return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::HideFlags))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_36170DB5A521820A_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::UnityEngine::GameObject*>* Method_1_4EC713F72AF2D646(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Material* a3)
	{
		return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)(::System::Int32, ::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_4EC713F72AF2D646_OFFSET))(a1, a2, a3);
	}

	static ::Il2CppArray<::UnityEngine::GameObject*>* Method_1_93311D507B10B4FB(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::System::Collections::Generic::List_1<::LegacyGPUParticleSystem_VertexInputType>*& a4)
	{
		return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)(::System::Int32, ::System::Int32, ::UnityEngine::Material*, ::System::Collections::Generic::List_1<::LegacyGPUParticleSystem_VertexInputType>*&))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_93311D507B10B4FB_OFFSET))(a1, a2, a3, a4);
	}

	static ::Il2CppArray<::UnityEngine::GameObject*>* Method_1_93311D507B10B4FB_1(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::System::Collections::Generic::List_1<::LegacyGPUParticleSystem_VertexInputType>*& a4)
	{
		return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)(::System::Int32, ::System::Int32, ::UnityEngine::Material*, ::System::Collections::Generic::List_1<::LegacyGPUParticleSystem_VertexInputType>*&))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_93311D507B10B4FB_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::Il2CppArray<::UnityEngine::GameObject*>* Method_1_93311D507B10B4FB_2(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::System::Collections::Generic::List_1<::LegacyGPUParticleSystem_VertexInputType>*& a4)
	{
		return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)(::System::Int32, ::System::Int32, ::UnityEngine::Material*, ::System::Collections::Generic::List_1<::LegacyGPUParticleSystem_VertexInputType>*&))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_93311D507B10B4FB_2_OFFSET))(a1, a2, a3, a4);
	}

	static ::Il2CppArray<::UnityEngine::GameObject*>* Method_1_B6E2BA04D0F037E4(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Material* a4, ::System::Collections::Generic::List_1<::LegacyGPUParticleSystem_VertexInputType>*& a5)
	{
		return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)(::UnityEngine::Mesh*, ::System::Int32, ::System::Int32, ::UnityEngine::Material*, ::System::Collections::Generic::List_1<::LegacyGPUParticleSystem_VertexInputType>*&))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_B6E2BA04D0F037E4_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::Il2CppArray<::UnityEngine::GameObject*>* Method_1_848011F632729530(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Material* a3)
	{
		return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)(::System::Int32, ::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_848011F632729530_OFFSET))(a1, a2, a3);
	}

	static ::Il2CppArray<::UnityEngine::Vector4>* Method_1_00FC5517DE5D81F6(::UnityEngine::AnimationCurve* a1)
	{
		return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_00FC5517DE5D81F6_OFFSET))(a1);
	}

	static ::UnityEngine::AnimationCurve* Method_1_907E808201E81737(::UnityEngine::AnimationCurve* a1)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_907E808201E81737_OFFSET))(a1);
	}

	static ::System::Void Method_1_712479BA4B35C2E0(::UnityEngine::Keyframe a1, ::UnityEngine::Keyframe a2, ::UnityEngine::Vector4& a3, ::UnityEngine::Vector4& a4)
	{
		return ((::System::Void(*)(::UnityEngine::Keyframe, ::UnityEngine::Keyframe, ::UnityEngine::Vector4&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_712479BA4B35C2E0_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Texture2D* Method_1_BBA838E833679CE6(::UnityEngine::Mesh* a1, ::RefGPUParticleSystem_MeshBakeType a2, ::System::Int32 a3)
	{
		return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Mesh*, ::RefGPUParticleSystem_MeshBakeType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_BBA838E833679CE6_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_D23B18F21136BF12(::UnityEngine::Texture2D*& a1, ::UnityEngine::Texture2D*& a2, ::UnityEngine::Mesh* a3, ::RefGPUParticleSystem_MeshBakeType a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::UnityEngine::Texture2D*&, ::UnityEngine::Texture2D*&, ::UnityEngine::Mesh*, ::RefGPUParticleSystem_MeshBakeType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_D23B18F21136BF12_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_143FE869CE5D7FA8(::UnityEngine::Texture2D*& a1, ::UnityEngine::Texture2D*& a2, ::UnityEngine::Mesh* a3, ::RefGPUParticleSystem_MeshBakeType a4, ::System::Int32 a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::UnityEngine::Texture2D*&, ::UnityEngine::Texture2D*&, ::UnityEngine::Mesh*, ::RefGPUParticleSystem_MeshBakeType, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_143FE869CE5D7FA8_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_34DEC0779527F707(::UnityEngine::Texture2D*& a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& a2)
	{
		return ((::System::Void(*)(::UnityEngine::Texture2D*&, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_34DEC0779527F707_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E4EB26AE70641D0D(::RefGPUParticleSystem_MeshBakeType a1, ::Il2CppArray<::UnityEngine::Vector3>*& a2, ::Il2CppArray<::UnityEngine::Vector3>*& a3, ::Il2CppArray<::System::Int32>*& a4, ::Il2CppArray<::System::Single>*& a5, ::System::Int32 a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::RefGPUParticleSystem_MeshBakeType, ::Il2CppArray<::UnityEngine::Vector3>*&, ::Il2CppArray<::UnityEngine::Vector3>*&, ::Il2CppArray<::System::Int32>*&, ::Il2CppArray<::System::Single>*&, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_E4EB26AE70641D0D_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_1_4C102AA305D29F5B(::RefGPUParticleSystem_MeshBakeType a1, ::Il2CppArray<::UnityEngine::Vector3>*& a2, ::Il2CppArray<::System::Int32>*& a3, ::Il2CppArray<::System::Single>*& a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::RefGPUParticleSystem_MeshBakeType, ::Il2CppArray<::UnityEngine::Vector3>*&, ::Il2CppArray<::System::Int32>*&, ::Il2CppArray<::System::Single>*&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_4C102AA305D29F5B_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_F4D295F84C3DA80E(::Il2CppArray<::UnityEngine::Vector3>*& a1, ::Il2CppArray<::System::Int32>*& a2, ::Il2CppArray<::System::Single>*& a3, ::System::Single& a4, ::System::Int32& a5)
	{
		return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*&, ::Il2CppArray<::System::Int32>*&, ::Il2CppArray<::System::Single>*&, ::System::Single&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_F4D295F84C3DA80E_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_73284C190286195C(::Il2CppArray<::System::Single>*& a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::Single>*&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_73284C190286195C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E84AA5E4B2032F85(::Il2CppArray<::UnityEngine::Vector3>*& a1, ::Il2CppArray<::UnityEngine::Vector3>*& a2, ::Il2CppArray<::System::Int32>*& a3, ::Il2CppArray<::System::Single>*& a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*&, ::Il2CppArray<::UnityEngine::Vector3>*&, ::Il2CppArray<::System::Int32>*&, ::Il2CppArray<::System::Single>*&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_E84AA5E4B2032F85_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_D658787C160807C6(::Il2CppArray<::UnityEngine::Vector3>*& a1, ::Il2CppArray<::System::Int32>*& a2, ::Il2CppArray<::System::Single>*& a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*&, ::Il2CppArray<::System::Int32>*&, ::Il2CppArray<::System::Single>*&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_D658787C160807C6_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector3 Method_1_87180B9068D2890E(::Il2CppArray<::UnityEngine::Vector3>*& a1, ::Il2CppArray<::System::Int32>*& a2, ::System::Int32 a3)
	{
		return ((::UnityEngine::Vector3(*)(::Il2CppArray<::UnityEngine::Vector3>*&, ::Il2CppArray<::System::Int32>*&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_87180B9068D2890E_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_07D430FD2D848CD9(::Il2CppArray<::UnityEngine::Vector3>*& a1, ::Il2CppArray<::System::Int32>*& a2, ::System::Int32 a3)
	{
		return ((::UnityEngine::Vector3(*)(::Il2CppArray<::UnityEngine::Vector3>*&, ::Il2CppArray<::System::Int32>*&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_07D430FD2D848CD9_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_A1BEE557455ABB66(::System::Int32 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_A1BEE557455ABB66_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A1BEE557455ABB66_1(::System::Int32 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_A1BEE557455ABB66_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AB18B1C0A6C38354(::Il2CppArray<::System::Single>*& a1, ::System::Int32& a2, ::System::Single& a3, ::System::Single& a4, ::System::Int32& a5)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::Single>*&, ::System::Int32&, ::System::Single&, ::System::Single&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_AB18B1C0A6C38354_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::UnityEngine::Vector3 Method_1_DE224A6444B5E377(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_DE224A6444B5E377_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_9246D834B1553CD7(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_9246D834B1553CD7_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Mesh* Method_1_B41725995366422B(::UnityEngine::Mesh* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::UnityEngine::Mesh*(*)(::UnityEngine::Mesh*, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_B41725995366422B_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Method_1_6841A0F38E512482(::Il2CppArray<::Il2CppArray<::System::Single>*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::Il2CppArray<::Il2CppArray<::System::Single>*>*))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_6841A0F38E512482_OFFSET))(a1);
	}

	static ::System::Void Method_1_7AF12EE9A95D4489(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* a2, ::Il2CppArray<::Il2CppArray<::System::Single>*>*& a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>*, ::Il2CppArray<::Il2CppArray<::System::Single>*>*&))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_7AF12EE9A95D4489_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_0AFA2E7228F6CB97(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_0AFA2E7228F6CB97_OFFSET))(a1, a2, a3);
	}
};
