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

#define CLASS_1_8339DDA2A9F615DF_METHOD_1_07D430FD2D848CD9_OFFSET UNITYSDK_OFFSET(0x182EC2D0)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_0AFA2E7228F6CB97_OFFSET UNITYSDK_OFFSET(0x182ED490)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_10CCBF1250CA2C7F_OFFSET UNITYSDK_OFFSET(0x182E8F30)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_16A3FF238E774EF7_OFFSET UNITYSDK_OFFSET(0x182E9EA0)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_33C4B7BDA1F38C6F_OFFSET UNITYSDK_OFFSET(0x182ECFA0)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_34DEC0779527F707_OFFSET UNITYSDK_OFFSET(0x182EB220)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_36170DB5A521820A_OFFSET UNITYSDK_OFFSET(0x182E4960)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_4C102AA305D29F5B_OFFSET UNITYSDK_OFFSET(0x182E9960)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_4EC713F72AF2D646_OFFSET UNITYSDK_OFFSET(0x182E4990)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_5C7FC70FF552BF7C_OFFSET UNITYSDK_OFFSET(0x182E9560)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_712479BA4B35C2E0_OFFSET UNITYSDK_OFFSET(0x182E9500)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_73284C190286195C_OFFSET UNITYSDK_OFFSET(0x182EB840)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_848011F632729530_OFFSET UNITYSDK_OFFSET(0x182E84E0)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_87180B9068D2890E_OFFSET UNITYSDK_OFFSET(0x182EC000)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_907E808201E81737_OFFSET UNITYSDK_OFFSET(0x182E9200)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_9246D834B1553CD7_OFFSET UNITYSDK_OFFSET(0x182EC7B0)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_93311D507B10B4FB_1_OFFSET UNITYSDK_OFFSET(0x182E59B0)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_93311D507B10B4FB_2_OFFSET UNITYSDK_OFFSET(0x182E6600)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_93311D507B10B4FB_OFFSET UNITYSDK_OFFSET(0x182E5030)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_A1BEE557455ABB66_1_OFFSET UNITYSDK_OFFSET(0x182EC5D0)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_A1BEE557455ABB66_OFFSET UNITYSDK_OFFSET(0x182EC520)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_AB18B1C0A6C38354_OFFSET UNITYSDK_OFFSET(0x182EBF80)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_B41725995366422B_OFFSET UNITYSDK_OFFSET(0x182EC870)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_BDFFA56D0D08D725_OFFSET UNITYSDK_OFFSET(0x182E72E0)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_D658787C160807C6_OFFSET UNITYSDK_OFFSET(0x182EBC70)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_DE224A6444B5E377_OFFSET UNITYSDK_OFFSET(0x182EC680)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_E39B8FC5094B4480_OFFSET UNITYSDK_OFFSET(0x182EC880)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_E4EB26AE70641D0D_OFFSET UNITYSDK_OFFSET(0x182EA5B0)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_E84AA5E4B2032F85_OFFSET UNITYSDK_OFFSET(0x182EB930)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_F4D295F84C3DA80E_OFFSET UNITYSDK_OFFSET(0x182EB5D0)
#define CLASS_1_8339DDA2A9F615DF_METHOD_1_FA914F12178BF7CA_OFFSET UNITYSDK_OFFSET(0x182EACA0)
#define CLASS_1_8339DDA2A9F615DF__CCTOR_OFFSET UNITYSDK_OFFSET(0x182ED530)

inline static constexpr unsigned int Class_1_8339DDA2A9F615DF_TypeDefinitionIndex = 33929;

class Class_1_8339DDA2A9F615DF : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Color>** StaticGet_Field_1_11()
	{
		return (::Il2CppArray<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8339DDA2A9F615DF_TypeDefinitionIndex)->GetStaticField(0x255C0);
	}
	static ::Il2CppArray<::UnityEngine::Color>** StaticGet_Field_1_12()
	{
		return (::Il2CppArray<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8339DDA2A9F615DF_TypeDefinitionIndex)->GetStaticField(0x255C8);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8339DDA2A9F615DF_TypeDefinitionIndex)->GetStaticField(0x255D0);
	}
	static ::Il2CppArray<::UnityEngine::Vector2>** StaticGet_Field_1_5()
	{
		return (::Il2CppArray<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8339DDA2A9F615DF_TypeDefinitionIndex)->GetStaticField(0x255D8);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_3()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8339DDA2A9F615DF_TypeDefinitionIndex)->GetStaticField(0x255E0);
	}
	static ::Il2CppArray<::System::Single>** StaticGet_Field_1_7()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8339DDA2A9F615DF_TypeDefinitionIndex)->GetStaticField(0x255E8);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8339DDA2A9F615DF_TypeDefinitionIndex)->GetStaticField(0x255F0);
	}
	static ::Il2CppArray<::UnityEngine::Vector2>** StaticGet_Field_1_6()
	{
		return (::Il2CppArray<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8339DDA2A9F615DF_TypeDefinitionIndex)->GetStaticField(0x255F8);
	}
	static ::System::Single* StaticGet_Field_1_8()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8339DDA2A9F615DF_TypeDefinitionIndex)->GetStaticField(0xC030);
	}
	static ::UnityEngine::Vector3* StaticGet_Field_1_9()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8339DDA2A9F615DF_TypeDefinitionIndex)->GetStaticField(0xC034);
	}
	static ::System::Single* StaticGet_Field_1_10()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8339DDA2A9F615DF_TypeDefinitionIndex)->GetStaticField(0xC040);
	}
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8339DDA2A9F615DF_TypeDefinitionIndex)->GetStaticField(0xC044);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8339DDA2A9F615DF_TypeDefinitionIndex)->GetStaticField(0xC048);
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

	static ::Il2CppArray<::UnityEngine::GameObject*>* Method_1_BDFFA56D0D08D725(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Material* a4, ::System::Collections::Generic::List_1<::LegacyGPUParticleSystem_VertexInputType>*& a5)
	{
		return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)(::UnityEngine::Mesh*, ::System::Int32, ::System::Int32, ::UnityEngine::Material*, ::System::Collections::Generic::List_1<::LegacyGPUParticleSystem_VertexInputType>*&))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_BDFFA56D0D08D725_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::Il2CppArray<::UnityEngine::GameObject*>* Method_1_848011F632729530(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Material* a3)
	{
		return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)(::System::Int32, ::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_848011F632729530_OFFSET))(a1, a2, a3);
	}

	static ::Il2CppArray<::UnityEngine::Vector4>* Method_1_10CCBF1250CA2C7F(::UnityEngine::AnimationCurve* a1)
	{
		return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_10CCBF1250CA2C7F_OFFSET))(a1);
	}

	static ::UnityEngine::AnimationCurve* Method_1_907E808201E81737(::UnityEngine::AnimationCurve* a1)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_907E808201E81737_OFFSET))(a1);
	}

	static ::System::Void Method_1_712479BA4B35C2E0(::UnityEngine::Keyframe a1, ::UnityEngine::Keyframe a2, ::UnityEngine::Vector4& a3, ::UnityEngine::Vector4& a4)
	{
		return ((::System::Void(*)(::UnityEngine::Keyframe, ::UnityEngine::Keyframe, ::UnityEngine::Vector4&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_712479BA4B35C2E0_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Texture2D* Method_1_5C7FC70FF552BF7C(::UnityEngine::Mesh* a1, ::RefGPUParticleSystem_MeshBakeType a2, ::System::Int32 a3)
	{
		return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Mesh*, ::RefGPUParticleSystem_MeshBakeType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_5C7FC70FF552BF7C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_16A3FF238E774EF7(::UnityEngine::Texture2D*& a1, ::UnityEngine::Texture2D*& a2, ::UnityEngine::Mesh* a3, ::RefGPUParticleSystem_MeshBakeType a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::UnityEngine::Texture2D*&, ::UnityEngine::Texture2D*&, ::UnityEngine::Mesh*, ::RefGPUParticleSystem_MeshBakeType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_16A3FF238E774EF7_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_FA914F12178BF7CA(::UnityEngine::Texture2D*& a1, ::UnityEngine::Texture2D*& a2, ::UnityEngine::Mesh* a3, ::RefGPUParticleSystem_MeshBakeType a4, ::System::Int32 a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::UnityEngine::Texture2D*&, ::UnityEngine::Texture2D*&, ::UnityEngine::Mesh*, ::RefGPUParticleSystem_MeshBakeType, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_FA914F12178BF7CA_OFFSET))(a1, a2, a3, a4, a5, a6);
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

	static ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Method_1_E39B8FC5094B4480(::Il2CppArray<::Il2CppArray<::System::Single>*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::Il2CppArray<::Il2CppArray<::System::Single>*>*))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_E39B8FC5094B4480_OFFSET))(a1);
	}

	static ::System::Void Method_1_33C4B7BDA1F38C6F(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* a2, ::Il2CppArray<::Il2CppArray<::System::Single>*>*& a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>*, ::Il2CppArray<::Il2CppArray<::System::Single>*>*&))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_33C4B7BDA1F38C6F_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_0AFA2E7228F6CB97(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_8339DDA2A9F615DF_METHOD_1_0AFA2E7228F6CB97_OFFSET))(a1, a2, a3);
	}
};
