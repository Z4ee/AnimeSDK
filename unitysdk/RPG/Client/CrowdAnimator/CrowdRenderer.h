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

class Class_1_4FE0A7F4356B7F01;
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

#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_AWAKE_OFFSET UNITYSDK_OFFSET(0x942A0C0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_DESTROYINSTANCE_OFFSET UNITYSDK_OFFSET(0x942DB60)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9432720)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9427F20)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_GET_KEY_OFFSET UNITYSDK_OFFSET(0x9432710)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x942A480)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_05903074FA8D7D0E_OFFSET UNITYSDK_OFFSET(0x9428490)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_1DE37A1C9BB093C9_OFFSET UNITYSDK_OFFSET(0x942AF10)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_21128227BF5060FB_OFFSET UNITYSDK_OFFSET(0x9430010)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_27C6DCFD25B0B42F_OFFSET UNITYSDK_OFFSET(0x9431B40)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_2D3038217845E9AA_OFFSET UNITYSDK_OFFSET(0x942FB60)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_3D4EAC64666D4A03_1_OFFSET UNITYSDK_OFFSET(0x9429740)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_3D4EAC64666D4A03_OFFSET UNITYSDK_OFFSET(0x94296C0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_3D510574C32725B5_1_OFFSET UNITYSDK_OFFSET(0x9429860)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_3D510574C32725B5_OFFSET UNITYSDK_OFFSET(0x94297E0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_3EC104D2C5D0A41D_OFFSET UNITYSDK_OFFSET(0x94312C0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_4390A67BC236F1A0_OFFSET UNITYSDK_OFFSET(0x94281B0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_5AA90374EAB91F81_OFFSET UNITYSDK_OFFSET(0x9428AD0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_5DF574466CCD0CE3_OFFSET UNITYSDK_OFFSET(0x9431ED0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_6092608CF92684DE_OFFSET UNITYSDK_OFFSET(0x942AC80)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_64C8458820107108_OFFSET UNITYSDK_OFFSET(0x942FB30)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_7379F6F0451DB9CF_OFFSET UNITYSDK_OFFSET(0x942B1A0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_849D4115D2C23247_OFFSET UNITYSDK_OFFSET(0x942C4C0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x942C1D0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_C0688C2E36BAE128_OFFSET UNITYSDK_OFFSET(0x942FD40)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_C3C3A4E67F2EC85D_OFFSET UNITYSDK_OFFSET(0x9430800)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_C73AD0BB5AD2A8C0_OFFSET UNITYSDK_OFFSET(0x942FCE0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_C7B2B5C12DEFDE68_OFFSET UNITYSDK_OFFSET(0x942DD00)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_CDF7BF2EDC899DE1_OFFSET UNITYSDK_OFFSET(0x942F4F0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x94303A0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_D83897E6502B897D_OFFSET UNITYSDK_OFFSET(0x94305B0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_DFDC8B0EF9883FD8_OFFSET UNITYSDK_OFFSET(0x942FC20)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_E3A452D25792E383_OFFSET UNITYSDK_OFFSET(0x942DC80)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_EA7C9571288E1295_OFFSET UNITYSDK_OFFSET(0x942A830)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_F0BE46541980EA83_OFFSET UNITYSDK_OFFSET(0x9430DA0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_F41EBDBD5A663AEE_OFFSET UNITYSDK_OFFSET(0x94286C0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_F882D1A1214DC5D9_OFFSET UNITYSDK_OFFSET(0x94318C0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_FFC5EA0753059801_OFFSET UNITYSDK_OFFSET(0x942DF80)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x942C9E0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x942C910)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x942A380)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_RELEASE_OFFSET UNITYSDK_OFFSET(0x942CAB0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0x9432A00)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x94329F0)

namespace RPG::Client::CrowdAnimator
{
	inline static constexpr unsigned int CrowdRenderer_TypeDefinitionIndex = 60436;

	class CrowdRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::RPG::Client::CrowdAnimator::CrowdInstance*>** StaticGet_Field_5_2()
		{
			return (::Il2CppArray<::RPG::Client::CrowdAnimator::CrowdInstance*>**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x35C90);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_Field_5_10()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x35C98);
		}
		static ::Il2CppArray<::UnityEngine::Vector4>** StaticGet_Field_5_43()
		{
			return (::Il2CppArray<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x35CA0);
		}
		static ::Il2CppArray<::UnityEngine::Plane>** StaticGet_Field_5_42()
		{
			return (::Il2CppArray<::UnityEngine::Plane>**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x35CA8);
		}
		static ::UnityEngine::ComputeShader** StaticGet_Field_5_29()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x35CB0);
		}
		static ::UnityEngine::RenderTexture** StaticGet_Field_5_18()
		{
			return (::UnityEngine::RenderTexture**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x35CB8);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_Field_5_8()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x35CC0);
		}
		static ::Il2CppArray<::Class_1_4FE0A7F4356B7F01*>** StaticGet_Field_5_24()
		{
			return (::Il2CppArray<::Class_1_4FE0A7F4356B7F01*>**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x35CC8);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_Field_5_14()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x35CD0);
		}
		static ::RPG::Client::CrowdAnimator::CrowdRenderer** StaticGet_Field_5_44()
		{
			return (::RPG::Client::CrowdAnimator::CrowdRenderer**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x35CD8);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_Field_5_19()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x35CE0);
		}
		static ::UnityEngine::RenderTexture** StaticGet_Field_5_16()
		{
			return (::UnityEngine::RenderTexture**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x35CE8);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_Field_5_26()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x35CF0);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_Field_5_15()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x35CF8);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_Field_5_13()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x35D00);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::UnityEngine::Texture2D*>** StaticGet_Field_5_27()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::UnityEngine::Texture2D*>**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x35D08);
		}
		static ::Il2CppArray<::Struct_2_E610E027254D7CE4>** StaticGet_Field_5_25()
		{
			return (::Il2CppArray<::Struct_2_E610E027254D7CE4>**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x35D10);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::System::Int32>** StaticGet_Field_5_28()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x35D18);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_Field_5_9()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x35D20);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_Field_5_20()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x35D28);
		}
		static ::Il2CppArray<::Class_1_8A1B169B056DC41A*>** StaticGet_Field_5_21()
		{
			return (::Il2CppArray<::Class_1_8A1B169B056DC41A*>**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x35D30);
		}
		static ::UnityEngine::RenderTexture** StaticGet_Field_5_17()
		{
			return (::UnityEngine::RenderTexture**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x35D38);
		}
		static ::UnityEngine::ComputeShader** StaticGet_Field_5_34()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x35D40);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_Field_5_11()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x35D48);
		}
		static ::Unity::Collections::NativeArray_1<::Struct_2_7F1F239FF2132566>* StaticGet_Field_5_4()
		{
			return (::Unity::Collections::NativeArray_1<::Struct_2_7F1F239FF2132566>*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x10C00);
		}
		static ::Unity::Collections::NativeArray_1<::Struct_2_8EA4F3900BB8E3E8>* StaticGet_Field_5_3()
		{
			return (::Unity::Collections::NativeArray_1<::Struct_2_8EA4F3900BB8E3E8>*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x10C10);
		}
		static ::System::Boolean* StaticGet_Field_5_41()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x10C20);
		}
		static ::System::Boolean* StaticGet_Field_5_38()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x10C21);
		}
		static ::System::Boolean* StaticGet_Field_5_40()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x10C22);
		}
		static ::System::Boolean* StaticGet_Field_5_39()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x10C23);
		}
		static ::System::Boolean* StaticGet_DebugForceDisable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x10C24);
		}
		static ::UnityEngine::Jobs::TransformAccessArray* StaticGet_Field_5_6()
		{
			return (::UnityEngine::Jobs::TransformAccessArray*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x10C28);
		}
		static ::System::Int32* StaticGet_Field_5_30()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x10C30);
		}
		static ::System::Int32* StaticGet_Field_5_32()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x10C34);
		}
		static ::System::Int32* StaticGet_Field_5_22()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x10C38);
		}
		static ::System::Int32* StaticGet_Field_5_33()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x10C3C);
		}
		static ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>* StaticGet_Field_5_7()
		{
			return (::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x10C40);
		}
		static ::System::Int32* StaticGet_Field_5_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x10C50);
		}
		static ::System::Int32* StaticGet_Field_5_36()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x10C54);
		}
		static ::System::Int32* StaticGet_Field_5_23()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x10C58);
		}
		static ::System::Int32* StaticGet_Field_5_37()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x10C5C);
		}
		static ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>* StaticGet_Field_5_5()
		{
			return (::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x10C60);
		}
		static ::RPG::CustomRP::Quality* StaticGet_RenderQuality()
		{
			return (::RPG::CustomRP::Quality*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x10C70);
		}
		static ::System::Int32* StaticGet_Field_5_31()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x10C74);
		}
		static ::System::Int32* StaticGet_Field_5_35()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x10C78);
		}
		static ::System::Int32* StaticGet_Field_5_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x10C7C);
		}
		static ::Unity::Collections::NativeArray_1<::System::UInt32>* StaticGet_Field_5_12()
		{
			return (::Unity::Collections::NativeArray_1<::System::UInt32>*)Il2CppClass::FromTypeDefinitionIndex(CrowdRenderer_TypeDefinitionIndex)->GetStaticField(0x10C80);
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

		::System::Void Method_5_F41EBDBD5A663AEE(::RPG::Client::CrowdAnimator::CrowdInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_F41EBDBD5A663AEE_OFFSET))(this, a1);
		}

		::System::Void Method_5_5AA90374EAB91F81(::RPG::Client::CrowdAnimator::CrowdInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_5AA90374EAB91F81_OFFSET))(this, a1);
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

		static ::System::Void Method_5_EA7C9571288E1295()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_EA7C9571288E1295_OFFSET))();
		}

		static ::System::Void Method_5_97D83E4CB3B11935()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_97D83E4CB3B11935_OFFSET))();
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

		::Class_1_4FE0A7F4356B7F01* Method_5_C7B2B5C12DEFDE68(::RPG::Client::CrowdAnimator::CrowdPrototype* a1, ::RPG::Client::CrowdAnimator::CrowdVariant* a2)
		{
			return ((::Class_1_4FE0A7F4356B7F01*(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdPrototype*, ::RPG::Client::CrowdAnimator::CrowdVariant*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_C7B2B5C12DEFDE68_OFFSET))(this, a1, a2);
		}

		static ::System::Void Method_5_C0688C2E36BAE128(::Class_1_4FE0A7F4356B7F01* a1)
		{
			return ((::System::Void(*)(::Class_1_4FE0A7F4356B7F01*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_C0688C2E36BAE128_OFFSET))(a1);
		}

		::System::Void Method_5_CDF7BF2EDC899DE1(::RPG::Client::CrowdAnimator::CrowdInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_CDF7BF2EDC899DE1_OFFSET))(this, a1);
		}

		static ::System::Void Method_5_21128227BF5060FB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_21128227BF5060FB_OFFSET))(a1);
		}

		static ::System::Void Method_5_FFC5EA0753059801(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_FFC5EA0753059801_OFFSET))(a1);
		}

		::Class_1_8A1B169B056DC41A* Method_5_D83897E6502B897D(::System::String* a1, ::UnityEngine::Mesh* a2, ::System::Int32 a3, ::UnityEngine::Material* a4, ::RPG::Client::CrowdAnimator::CrowdPrototype* a5, ::Class_1_4FE0A7F4356B7F01* a6)
		{
			return ((::Class_1_8A1B169B056DC41A*(*)(::PVOID, ::System::String*, ::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::RPG::Client::CrowdAnimator::CrowdPrototype*, ::Class_1_4FE0A7F4356B7F01*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_D83897E6502B897D_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_5_3EC104D2C5D0A41D(::Class_1_8A1B169B056DC41A* a1, ::Class_1_4FE0A7F4356B7F01* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8A1B169B056DC41A*, ::Class_1_4FE0A7F4356B7F01*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_3EC104D2C5D0A41D_OFFSET))(this, a1, a2);
		}

		static ::System::Void Method_5_F0BE46541980EA83(::Class_1_8A1B169B056DC41A* a1)
		{
			return ((::System::Void(*)(::Class_1_8A1B169B056DC41A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_F0BE46541980EA83_OFFSET))(a1);
		}

		static ::System::Void Method_5_5DF574466CCD0CE3(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_5DF574466CCD0CE3_OFFSET))(a1);
		}

		static ::System::Void Method_5_27C6DCFD25B0B42F(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_27C6DCFD25B0B42F_OFFSET))(a1);
		}

		static ::UnityEngine::Texture2D* Method_5_C3C3A4E67F2EC85D(::RPG::Client::CrowdAnimator::CrowdPrototype* a1, ::UnityEngine::Mesh* a2, ::System::String* a3)
		{
			return ((::UnityEngine::Texture2D*(*)(::RPG::Client::CrowdAnimator::CrowdPrototype*, ::UnityEngine::Mesh*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_METHOD_5_C3C3A4E67F2EC85D_OFFSET))(a1, a2, a3);
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
