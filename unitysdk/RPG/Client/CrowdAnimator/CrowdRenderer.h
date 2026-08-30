#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/Struct_2_7F1F239FF2132566.h"
#include "unitysdk/Struct_2_8EA4F3900BB8E3E8.h"
#include "unitysdk/Struct_2_E610E027254D7CE4.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccessArray.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_8A1B169B056DC41A;
class Class_1_E70BA5F62D4D16DE;
namespace RPG::Client::CrowdAnimator { class CrowdInstance; }
namespace RPG::Client::CrowdAnimator { class CrowdPrototype; }
namespace RPG::Client::CrowdAnimator { class CrowdVariant; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A2A27E0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_DESTROYINSTANCE_OFFSET UNITYSDK_OFFSET(0x1A2A6400)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A2AAFA0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1A2A05F0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1A2AAF90)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_INIT_OFFSET UNITYSDK_OFFSET(0x1A2A2AF0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A2A2C10)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_05903074FA8D7D0E_OFFSET UNITYSDK_OFFSET(0x1A2A0B50)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_13B7129DF98444A6_OFFSET UNITYSDK_OFFSET(0x1A2A6800)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_1DE37A1C9BB093C9_OFFSET UNITYSDK_OFFSET(0x1A2A3570)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_27C6DCFD25B0B42F_OFFSET UNITYSDK_OFFSET(0x1A2AA340)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_2D3038217845E9AA_OFFSET UNITYSDK_OFFSET(0x1A2A84F0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_30E1F2FA8FE17E58_OFFSET UNITYSDK_OFFSET(0x1A2A1180)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_3D4EAC64666D4A03_1_OFFSET UNITYSDK_OFFSET(0x1A2A1E30)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_3D4EAC64666D4A03_OFFSET UNITYSDK_OFFSET(0x1A2A1DB0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_3D510574C32725B5_1_OFFSET UNITYSDK_OFFSET(0x1A2A1F50)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_3D510574C32725B5_OFFSET UNITYSDK_OFFSET(0x1A2A1ED0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_3EC104D2C5D0A41D_OFFSET UNITYSDK_OFFSET(0x1A2A9BC0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_41E39C0C1C27A76F_OFFSET UNITYSDK_OFFSET(0x1A2A8970)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_4390A67BC236F1A0_OFFSET UNITYSDK_OFFSET(0x1A2A0870)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_5DF574466CCD0CE3_OFFSET UNITYSDK_OFFSET(0x1A2AA6B0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_6092608CF92684DE_OFFSET UNITYSDK_OFFSET(0x1A2A3310)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_64C8458820107108_OFFSET UNITYSDK_OFFSET(0x1A2A84C0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_7379F6F0451DB9CF_OFFSET UNITYSDK_OFFSET(0x1A2A3800)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_7CDDB5EC1CD8A779_OFFSET UNITYSDK_OFFSET(0x1A2A0D80)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_7FE7F893829399D7_OFFSET UNITYSDK_OFFSET(0x1A2A9790)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_849D4115D2C23247_OFFSET UNITYSDK_OFFSET(0x1A2A4AF0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_952453844D88CADD_OFFSET UNITYSDK_OFFSET(0x1A2A86D0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_BDE24E53855CC612_OFFSET UNITYSDK_OFFSET(0x1A2A91A0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x1A2A47F0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_C73AD0BB5AD2A8C0_OFFSET UNITYSDK_OFFSET(0x1A2A8670)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_C7B2B5C12DEFDE68_OFFSET UNITYSDK_OFFSET(0x1A2A65A0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_CC32BB23BD684E52_OFFSET UNITYSDK_OFFSET(0x1A2A2FC0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_CDF7BF2EDC899DE1_OFFSET UNITYSDK_OFFSET(0x1A2A7F30)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x1A2A8D50)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_D83897E6502B897D_OFFSET UNITYSDK_OFFSET(0x1A2A8F60)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_DFDC8B0EF9883FD8_OFFSET UNITYSDK_OFFSET(0x1A2A85B0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_E3A452D25792E383_OFFSET UNITYSDK_OFFSET(0x1A2A6520)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_F882D1A1214DC5D9_OFFSET UNITYSDK_OFFSET(0x1A2AA0C0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A2A5030)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A2A4F40)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A2A2AA0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1A2A5100)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2AB280)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2AB270)

namespace RPG::Client::CrowdAnimator
{
	inline static constexpr unsigned int CrowdRenderer_TypeDefinitionIndex = 73616;

	class CrowdRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::ComputeBuffer** StaticGet_JJMEOKDJOGM()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1CB00);
		}
		static ::UnityEngine::ComputeShader** StaticGet_JDLHPFAKHMD()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1CB08);
		}
		static ::Il2CppArray<::Struct_2_E610E027254D7CE4>** StaticGet_KALCHLIGCKJ()
		{
			return (::Il2CppArray<::Struct_2_E610E027254D7CE4>**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1CB10);
		}
		static ::UnityEngine::RenderTexture** StaticGet_KCDEFIDFNMB()
		{
			return (::UnityEngine::RenderTexture**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1CB18);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_GODCEIKHPLF()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1CB20);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_JNGOJOFAANB()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1CB28);
		}
		static ::Il2CppArray<::UnityEngine::Plane>** StaticGet_FIFAJNAGPGI()
		{
			return (::Il2CppArray<::UnityEngine::Plane>**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1CB30);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_JMAFHECEMLM()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1CB38);
		}
		static ::UnityEngine::RenderTexture** StaticGet_OLEHMEJMPPI()
		{
			return (::UnityEngine::RenderTexture**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1CB40);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_BMNACADOALP()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1CB48);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::System::Int32>** StaticGet_JAEEIJEDBPO()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1CB50);
		}
		static ::UnityEngine::RenderTexture** StaticGet_KOHFOKGFDGC()
		{
			return (::UnityEngine::RenderTexture**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1CB58);
		}
		static ::Il2CppArray<::Class_1_E70BA5F62D4D16DE*>** StaticGet_MECAEHPHNIE()
		{
			return (::Il2CppArray<::Class_1_E70BA5F62D4D16DE*>**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1CB60);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_BFNGNFMEPJO()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1CB68);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_ABGAGOMFNAP()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1CB70);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_CANLEJJHFLB()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1CB78);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_EJKNMFNHGNM()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1CB80);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_MNCAPILLHKN()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1CB88);
		}
		static ::RPG::Client::CrowdAnimator::CrowdRenderer** StaticGet_FLMODBLFAGD()
		{
			return (::RPG::Client::CrowdAnimator::CrowdRenderer**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1CB90);
		}
		static ::Il2CppArray<::UnityEngine::Vector4>** StaticGet_BGGMKGMCHDA()
		{
			return (::Il2CppArray<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1CB98);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::UnityEngine::Texture2D*>** StaticGet_AKBJJNGNNEC()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::UnityEngine::Texture2D*>**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1CBA0);
		}
		static ::UnityEngine::ComputeShader** StaticGet_HBCIMMEMAAH()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1CBA8);
		}
		static ::Il2CppArray<::RPG::Client::CrowdAnimator::CrowdInstance*>** StaticGet_KDBMGJFCDDM()
		{
			return (::Il2CppArray<::RPG::Client::CrowdAnimator::CrowdInstance*>**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1CBB0);
		}
		static ::Il2CppArray<::Class_1_8A1B169B056DC41A*>** StaticGet_HGLAMDDFDHD()
		{
			return (::Il2CppArray<::Class_1_8A1B169B056DC41A*>**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1CBB8);
		}
		static ::System::Int32* StaticGet_AGKGFLBMJOJ()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x9AF0);
		}
		static ::System::Int32* StaticGet_JNIBINIBHAO()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x9AF4);
		}
		static ::System::Int32* StaticGet_ADAMEECBBHK()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x9AF8);
		}
		static ::System::Int32* StaticGet_OKPGILGHOIJ()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x9AFC);
		}
		static ::System::Int32* StaticGet_OMHOCLGPCDA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x9B00);
		}
		static ::System::Int32* StaticGet_OMBHBCJGGNH()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x9B04);
		}
		static ::System::Boolean* StaticGet_FLHJPMGBEGF()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x9B08);
		}
		static ::System::Boolean* StaticGet_CKHLLBPFKPJ()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x9B09);
		}
		static ::System::Int32* StaticGet_EBJKGILBDML()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x9B0C);
		}
		static ::System::Int32* StaticGet_GENIJLNADBF()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x9B10);
		}
		static ::System::Boolean* StaticGet_JCHNGPHKGAG()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x9B14);
		}
		static ::System::Boolean* StaticGet_CAKGIPPNJBC()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x9B15);
		}
		static ::System::Boolean* StaticGet_DebugForceDisable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x9B16);
		}
		static ::Unity::Collections::NativeArray_1<::System::UInt32>* StaticGet_PLFBPIOBOGI()
		{
			return (::Unity::Collections::NativeArray_1<::System::UInt32>*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x9B18);
		}
		static ::System::Int32* StaticGet_EEHLPNGHDHJ()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x9B28);
		}
		static ::System::Int32* StaticGet_AHBFOCILMFI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x9B2C);
		}
		static ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>* StaticGet_BGOPFBBGCND()
		{
			return (::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x9B30);
		}
		static ::UnityEngine::Jobs::TransformAccessArray* StaticGet_NHPMMHIJKHK()
		{
			return (::UnityEngine::Jobs::TransformAccessArray*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x9B40);
		}
		static ::Unity::Collections::NativeArray_1<::Struct_2_8EA4F3900BB8E3E8>* StaticGet_NCAHKPOJFEP()
		{
			return (::Unity::Collections::NativeArray_1<::Struct_2_8EA4F3900BB8E3E8>*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x9B48);
		}
		static ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>* StaticGet_FHDNCDMGIHA()
		{
			return (::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x9B58);
		}
		static ::Unity::Collections::NativeArray_1<::Struct_2_7F1F239FF2132566>* StaticGet_FAECNGCPLKF()
		{
			return (::Unity::Collections::NativeArray_1<::Struct_2_7F1F239FF2132566>*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x9B68);
		}
		static ::RPG::CustomRP::Quality* StaticGet_RenderQuality()
		{
			return (::RPG::CustomRP::Quality*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x9B78);
		}
		static ::System::Int32* StaticGet_IIGCPIDDPOC()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x9B7C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_ONDESTROY_OFFSET))(this);
		}

		static ::RPG::Client::CrowdAnimator::CrowdRenderer* get_Instance()
		{
			return ((::RPG::Client::CrowdAnimator::CrowdRenderer*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_GET_INSTANCE_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_INIT_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_RELEASE_OFFSET))(this);
		}

		static ::System::Void DestroyInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_DESTROYINSTANCE_OFFSET))();
		}

		::Struct_2_8EA4F3900BB8E3E8 Method_5_3D4EAC64666D4A03(::System::Int32 a1)
		{
			return ((::Struct_2_8EA4F3900BB8E3E8(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_3D4EAC64666D4A03_OFFSET))(this, a1);
		}

		::Struct_2_7F1F239FF2132566 Method_5_3D4EAC64666D4A03_1(::System::Int32 a1)
		{
			return ((::Struct_2_7F1F239FF2132566(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_3D4EAC64666D4A03_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_3D510574C32725B5(::System::Int32 a1, ::Struct_2_8EA4F3900BB8E3E8 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Struct_2_8EA4F3900BB8E3E8))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_3D510574C32725B5_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_3D510574C32725B5_1(::System::Int32 a1, ::Struct_2_7F1F239FF2132566 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Struct_2_7F1F239FF2132566))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_3D510574C32725B5_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_E3A452D25792E383(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_E3A452D25792E383_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_05903074FA8D7D0E(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_05903074FA8D7D0E_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_4390A67BC236F1A0(::RPG::Client::CrowdAnimator::CrowdInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_4390A67BC236F1A0_OFFSET))(this, a1);
		}

		::System::Void Method_5_7CDDB5EC1CD8A779(::RPG::Client::CrowdAnimator::CrowdInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_7CDDB5EC1CD8A779_OFFSET))(this, a1);
		}

		::System::Void Method_5_30E1F2FA8FE17E58(::RPG::Client::CrowdAnimator::CrowdInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_30E1F2FA8FE17E58_OFFSET))(this, a1);
		}

		static ::UnityEngine::Camera* Method_5_64C8458820107108()
		{
			return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_64C8458820107108_OFFSET))();
		}

		static ::System::Single Method_5_2D3038217845E9AA()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_2D3038217845E9AA_OFFSET))();
		}

		static ::System::Int32 Method_5_DFDC8B0EF9883FD8()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_DFDC8B0EF9883FD8_OFFSET))();
		}

		static ::System::Void Method_5_C73AD0BB5AD2A8C0(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_C73AD0BB5AD2A8C0_OFFSET))(a1);
		}

		static ::System::Void Method_5_CC32BB23BD684E52()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_CC32BB23BD684E52_OFFSET))();
		}

		static ::System::Void Method_5_C638E91FC0D3A13A()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_C638E91FC0D3A13A_OFFSET))();
		}

		static ::System::Void Method_5_6092608CF92684DE()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_6092608CF92684DE_OFFSET))();
		}

		static ::System::Void Method_5_1DE37A1C9BB093C9()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_1DE37A1C9BB093C9_OFFSET))();
		}

		static ::System::Void Method_5_7379F6F0451DB9CF(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_7379F6F0451DB9CF_OFFSET))(a1);
		}

		::Class_1_E70BA5F62D4D16DE* Method_5_C7B2B5C12DEFDE68(::RPG::Client::CrowdAnimator::CrowdPrototype* a1, ::RPG::Client::CrowdAnimator::CrowdVariant* a2)
		{
			return ((::Class_1_E70BA5F62D4D16DE*(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdPrototype*, ::RPG::Client::CrowdAnimator::CrowdVariant*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_C7B2B5C12DEFDE68_OFFSET))(this, a1, a2);
		}

		static ::System::Void Method_5_952453844D88CADD(::Class_1_E70BA5F62D4D16DE* a1)
		{
			return ((::System::Void(*)(::Class_1_E70BA5F62D4D16DE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_952453844D88CADD_OFFSET))(a1);
		}

		::System::Void Method_5_CDF7BF2EDC899DE1(::RPG::Client::CrowdAnimator::CrowdInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_CDF7BF2EDC899DE1_OFFSET))(this, a1);
		}

		static ::System::Void Method_5_41E39C0C1C27A76F(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_41E39C0C1C27A76F_OFFSET))(a1);
		}

		static ::System::Void Method_5_13B7129DF98444A6(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_13B7129DF98444A6_OFFSET))(a1);
		}

		::Class_1_8A1B169B056DC41A* Method_5_D83897E6502B897D(::System::String* a1, ::UnityEngine::Mesh* a2, ::System::Int32 a3, ::UnityEngine::Material* a4, ::RPG::Client::CrowdAnimator::CrowdPrototype* a5, ::Class_1_E70BA5F62D4D16DE* a6)
		{
			return ((::Class_1_8A1B169B056DC41A*(*)(::PVOID, ::System::String*, ::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::RPG::Client::CrowdAnimator::CrowdPrototype*, ::Class_1_E70BA5F62D4D16DE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_D83897E6502B897D_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_5_3EC104D2C5D0A41D(::Class_1_8A1B169B056DC41A* a1, ::Class_1_E70BA5F62D4D16DE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8A1B169B056DC41A*, ::Class_1_E70BA5F62D4D16DE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_3EC104D2C5D0A41D_OFFSET))(this, a1, a2);
		}

		static ::System::Void Method_5_7FE7F893829399D7(::Class_1_8A1B169B056DC41A* a1)
		{
			return ((::System::Void(*)(::Class_1_8A1B169B056DC41A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_7FE7F893829399D7_OFFSET))(a1);
		}

		static ::System::Void Method_5_5DF574466CCD0CE3(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_5DF574466CCD0CE3_OFFSET))(a1);
		}

		static ::System::Void Method_5_27C6DCFD25B0B42F(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_27C6DCFD25B0B42F_OFFSET))(a1);
		}

		static ::UnityEngine::Texture2D* Method_5_BDE24E53855CC612(::RPG::Client::CrowdAnimator::CrowdPrototype* a1, ::UnityEngine::Mesh* a2, ::System::String* a3)
		{
			return ((::UnityEngine::Texture2D*(*)(::RPG::Client::CrowdAnimator::CrowdPrototype*, ::UnityEngine::Mesh*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_BDE24E53855CC612_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Method_5_D0BD1377F2594D33()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_D0BD1377F2594D33_OFFSET))();
		}

		static ::System::Void Method_5_F882D1A1214DC5D9(::Class_1_8A1B169B056DC41A* a1)
		{
			return ((::System::Void(*)(::Class_1_8A1B169B056DC41A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_F882D1A1214DC5D9_OFFSET))(a1);
		}

		static ::System::Void Method_5_849D4115D2C23247(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_849D4115D2C23247_OFFSET))(a1);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_GET_KEY_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_EXECUTE_OFFSET))(this, a1, a2);
		}
	};
}
