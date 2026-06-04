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

class Class_1_7A36E79DF579B3ED;
class Class_1_8A1B169B056DC41A;
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

#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_AWAKE_OFFSET UNITYSDK_OFFSET(0xB7177E0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_DESTROYINSTANCE_OFFSET UNITYSDK_OFFSET(0xB71B280)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB71FCE0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xB715620)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_GET_KEY_OFFSET UNITYSDK_OFFSET(0xB71FCD0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB717BC0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_05903074FA8D7D0E_OFFSET UNITYSDK_OFFSET(0xB715B80)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_13B7129DF98444A6_OFFSET UNITYSDK_OFFSET(0xB71B680)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_173B4412467E28D4_OFFSET UNITYSDK_OFFSET(0xB71D480)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_1DE37A1C9BB093C9_OFFSET UNITYSDK_OFFSET(0xB718520)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_20487879979618C8_OFFSET UNITYSDK_OFFSET(0xB71D720)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_27C6DCFD25B0B42F_OFFSET UNITYSDK_OFFSET(0xB71F0D0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_2D3038217845E9AA_OFFSET UNITYSDK_OFFSET(0xB71D2A0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_30E1F2FA8FE17E58_OFFSET UNITYSDK_OFFSET(0xB7161B0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_3D4EAC64666D4A03_1_OFFSET UNITYSDK_OFFSET(0xB716E60)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_3D4EAC64666D4A03_OFFSET UNITYSDK_OFFSET(0xB716DE0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_3D510574C32725B5_1_OFFSET UNITYSDK_OFFSET(0xB716F80)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_3D510574C32725B5_OFFSET UNITYSDK_OFFSET(0xB716F00)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_3EC104D2C5D0A41D_OFFSET UNITYSDK_OFFSET(0xB71E950)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_4390A67BC236F1A0_OFFSET UNITYSDK_OFFSET(0xB7158A0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_6092608CF92684DE_OFFSET UNITYSDK_OFFSET(0xB7182C0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_64C8458820107108_OFFSET UNITYSDK_OFFSET(0xB71D270)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_7379F6F0451DB9CF_OFFSET UNITYSDK_OFFSET(0xB7187B0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_7CDDB5EC1CD8A779_OFFSET UNITYSDK_OFFSET(0xB715DB0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_7FE7F893829399D7_OFFSET UNITYSDK_OFFSET(0xB71E520)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_849D4115D2C23247_OFFSET UNITYSDK_OFFSET(0xB719AA0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_BDE24E53855CC612_OFFSET UNITYSDK_OFFSET(0xB71DF30)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0xB7197A0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_C73AD0BB5AD2A8C0_OFFSET UNITYSDK_OFFSET(0xB71D420)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_C7B2B5C12DEFDE68_OFFSET UNITYSDK_OFFSET(0xB71B420)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_CC32BB23BD684E52_OFFSET UNITYSDK_OFFSET(0xB717F70)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_CDF7BF2EDC899DE1_OFFSET UNITYSDK_OFFSET(0xB71CCE0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xB71DAE0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_D1AB56BF093CD6E7_OFFSET UNITYSDK_OFFSET(0xB71F440)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_D83897E6502B897D_OFFSET UNITYSDK_OFFSET(0xB71DCF0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_DFDC8B0EF9883FD8_OFFSET UNITYSDK_OFFSET(0xB71D360)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_E3A452D25792E383_OFFSET UNITYSDK_OFFSET(0xB71B3A0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_F882D1A1214DC5D9_OFFSET UNITYSDK_OFFSET(0xB71EE50)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB719FE0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB719EF0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB717AA0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_RELEASE_OFFSET UNITYSDK_OFFSET(0xB71A0B0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB71FFC0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0xB71FFB0)

namespace RPG::Client::CrowdAnimator
{
	inline static constexpr unsigned int CrowdRenderer_TypeDefinitionIndex = 68816;

	class CrowdRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::ComputeShader** StaticGet_Field_5_0()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1F10);
		}
		static ::Il2CppArray<::UnityEngine::Plane>** StaticGet_Field_5_1()
		{
			return (::Il2CppArray<::UnityEngine::Plane>**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1F18);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::UnityEngine::Texture2D*>** StaticGet_Field_5_2()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::UnityEngine::Texture2D*>**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1F20);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_Field_5_3()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1F28);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_Field_5_4()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1F30);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_Field_5_5()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1F38);
		}
		static ::Il2CppArray<::UnityEngine::Vector4>** StaticGet_Field_5_6()
		{
			return (::Il2CppArray<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1F40);
		}
		static ::UnityEngine::RenderTexture** StaticGet_Field_5_7()
		{
			return (::UnityEngine::RenderTexture**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1F48);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_Field_5_8()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1F50);
		}
		static ::Il2CppArray<::Class_1_7A36E79DF579B3ED*>** StaticGet_Field_5_9()
		{
			return (::Il2CppArray<::Class_1_7A36E79DF579B3ED*>**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1F58);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_Field_5_10()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1F60);
		}
		static ::UnityEngine::ComputeShader** StaticGet_Field_5_11()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1F68);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_Field_5_12()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1F70);
		}
		static ::RPG::Client::CrowdAnimator::CrowdRenderer** StaticGet_Field_5_13()
		{
			return (::RPG::Client::CrowdAnimator::CrowdRenderer**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1F78);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_Field_5_14()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1F80);
		}
		static ::Il2CppArray<::Class_1_8A1B169B056DC41A*>** StaticGet_Field_5_15()
		{
			return (::Il2CppArray<::Class_1_8A1B169B056DC41A*>**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1F88);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::System::Int32>** StaticGet_Field_5_16()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1F90);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_Field_5_17()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1F98);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_Field_5_18()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1FA0);
		}
		static ::UnityEngine::RenderTexture** StaticGet_Field_5_19()
		{
			return (::UnityEngine::RenderTexture**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1FA8);
		}
		static ::Il2CppArray<::RPG::Client::CrowdAnimator::CrowdInstance*>** StaticGet_Field_5_20()
		{
			return (::Il2CppArray<::RPG::Client::CrowdAnimator::CrowdInstance*>**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1FB0);
		}
		static ::UnityEngine::RenderTexture** StaticGet_Field_5_21()
		{
			return (::UnityEngine::RenderTexture**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1FB8);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_Field_5_22()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1FC0);
		}
		static ::Il2CppArray<::Struct_2_E610E027254D7CE4>** StaticGet_Field_5_23()
		{
			return (::Il2CppArray<::Struct_2_E610E027254D7CE4>**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x1FC8);
		}
		static ::System::Int32* StaticGet_Field_5_24()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0xC50);
		}
		static ::System::Int32* StaticGet_Field_5_25()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0xC54);
		}
		static ::System::Int32* StaticGet_Field_5_26()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0xC58);
		}
		static ::System::Boolean* StaticGet_Field_5_27()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0xC5C);
		}
		static ::System::Boolean* StaticGet_Field_5_28()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0xC5D);
		}
		static ::System::Boolean* StaticGet_Field_5_29()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0xC5E);
		}
		static ::System::Boolean* StaticGet_Field_5_30()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0xC5F);
		}
		static ::Unity::Collections::NativeArray_1<::Struct_2_8EA4F3900BB8E3E8>* StaticGet_Field_5_31()
		{
			return (::Unity::Collections::NativeArray_1<::Struct_2_8EA4F3900BB8E3E8>*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0xC60);
		}
		static ::UnityEngine::Jobs::TransformAccessArray* StaticGet_Field_5_32()
		{
			return (::UnityEngine::Jobs::TransformAccessArray*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0xC70);
		}
		static ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>* StaticGet_Field_5_33()
		{
			return (::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0xC78);
		}
		static ::RPG::CustomRP::Quality* StaticGet_RenderQuality()
		{
			return (::RPG::CustomRP::Quality*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0xC88);
		}
		static ::System::Boolean* StaticGet_DebugForceDisable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0xC8C);
		}
		static ::System::Int32* StaticGet_Field_5_36()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0xC90);
		}
		static ::System::Int32* StaticGet_Field_5_37()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0xC94);
		}
		static ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>* StaticGet_Field_5_38()
		{
			return (::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0xC98);
		}
		static ::Unity::Collections::NativeArray_1<::System::UInt32>* StaticGet_Field_5_39()
		{
			return (::Unity::Collections::NativeArray_1<::System::UInt32>*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0xCA8);
		}
		static ::Unity::Collections::NativeArray_1<::Struct_2_7F1F239FF2132566>* StaticGet_Field_5_40()
		{
			return (::Unity::Collections::NativeArray_1<::Struct_2_7F1F239FF2132566>*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0xCB8);
		}
		static ::System::Int32* StaticGet_Field_5_41()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0xCC8);
		}
		static ::System::Int32* StaticGet_Field_5_42()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0xCCC);
		}
		static ::System::Int32* StaticGet_Field_5_43()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0xCD0);
		}
		static ::System::Int32* StaticGet_Field_5_44()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0xCD4);
		}
		static ::System::Int32* StaticGet_Field_5_45()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0xCD8);
		}
		static ::System::Int32* StaticGet_Field_5_46()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0xCDC);
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

		::Class_1_7A36E79DF579B3ED* Method_5_C7B2B5C12DEFDE68(::RPG::Client::CrowdAnimator::CrowdPrototype* a1, ::RPG::Client::CrowdAnimator::CrowdVariant* a2)
		{
			return ((::Class_1_7A36E79DF579B3ED*(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdPrototype*, ::RPG::Client::CrowdAnimator::CrowdVariant*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_C7B2B5C12DEFDE68_OFFSET))(this, a1, a2);
		}

		static ::System::Void Method_5_173B4412467E28D4(::Class_1_7A36E79DF579B3ED* a1)
		{
			return ((::System::Void(*)(::Class_1_7A36E79DF579B3ED*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_173B4412467E28D4_OFFSET))(a1);
		}

		::System::Void Method_5_CDF7BF2EDC899DE1(::RPG::Client::CrowdAnimator::CrowdInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_CDF7BF2EDC899DE1_OFFSET))(this, a1);
		}

		static ::System::Void Method_5_20487879979618C8(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_20487879979618C8_OFFSET))(a1);
		}

		static ::System::Void Method_5_13B7129DF98444A6(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_13B7129DF98444A6_OFFSET))(a1);
		}

		::Class_1_8A1B169B056DC41A* Method_5_D83897E6502B897D(::System::String* a1, ::UnityEngine::Mesh* a2, ::System::Int32 a3, ::UnityEngine::Material* a4, ::RPG::Client::CrowdAnimator::CrowdPrototype* a5, ::Class_1_7A36E79DF579B3ED* a6)
		{
			return ((::Class_1_8A1B169B056DC41A*(*)(::PVOID, ::System::String*, ::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::RPG::Client::CrowdAnimator::CrowdPrototype*, ::Class_1_7A36E79DF579B3ED*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_D83897E6502B897D_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_5_3EC104D2C5D0A41D(::Class_1_8A1B169B056DC41A* a1, ::Class_1_7A36E79DF579B3ED* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8A1B169B056DC41A*, ::Class_1_7A36E79DF579B3ED*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_3EC104D2C5D0A41D_OFFSET))(this, a1, a2);
		}

		static ::System::Void Method_5_7FE7F893829399D7(::Class_1_8A1B169B056DC41A* a1)
		{
			return ((::System::Void(*)(::Class_1_8A1B169B056DC41A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_7FE7F893829399D7_OFFSET))(a1);
		}

		static ::System::Void Method_5_D1AB56BF093CD6E7(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_D1AB56BF093CD6E7_OFFSET))(a1);
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
