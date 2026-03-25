#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BAT/BATRendererBehavior_MaterialBATKeyword.h"
#include "unitysdk/RPG/Client/BAT/BATRendererBehavior___c__DisplayClass22_0.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client::BAT { class BATRenderer; }
namespace RPG::Client::TAUtils { class MaterialPropertiesCollection; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9169880)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0x9169870)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x91646C0)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_GET__CSCULLINGKERNELID_OFFSET UNITYSDK_OFFSET(0x916A460)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_GET__INSTANCEDATABUFFER_OFFSET UNITYSDK_OFFSET(0x916A3B0)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_0A55B605BCCBA14A_OFFSET UNITYSDK_OFFSET(0x91698E0)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_30FFBE713F2F7B5D_OFFSET UNITYSDK_OFFSET(0x916BB30)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x9166650)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x9166A70)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x91644B0)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x916C000)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x916C060)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x916C0C0)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0x916C120)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0x916C190)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_6_OFFSET UNITYSDK_OFFSET(0x916C270)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x916BFA0)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_7787CB3AD5CF0BB7_OFFSET UNITYSDK_OFFSET(0x916A510)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x916A4C0)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_8B5E3014AFF7F8EA_OFFSET UNITYSDK_OFFSET(0x9164730)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_9AF91962BC6E178A_OFFSET UNITYSDK_OFFSET(0x9165120)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x9166C10)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x91663C0)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x9166740)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x9165DA0)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x9164520)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x91669D0)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x9166A20)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x9166AB0)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x9166940)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9166990)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x916C200)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_F0E5333B48B6C5FF_OFFSET UNITYSDK_OFFSET(0x9166F90)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x9166AF0)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x916BDF0)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x916BDA0)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR___DRAWMESHES_G___GETMPB_22_0_OFFSET UNITYSDK_OFFSET(0x916BAA0)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x916C2D0)

namespace RPG::Client::BAT
{
	inline static constexpr unsigned int BATRendererBehavior_TypeDefinitionIndex = 60387;

	class BATRendererBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__FrustumPlaneParamsShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BATRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x11090);
		}
		static ::System::Int32* StaticGet__InstanceDataIndexTextureTexelSizeShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BATRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x11094);
		}
		static ::System::Int32* StaticGet__ArgsBufferShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BATRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x11098);
		}
		static ::System::Int32* StaticGet__VertexCountShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BATRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x1109C);
		}
		static ::System::Int32* StaticGet__AnimationTextureShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BATRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x110A0);
		}
		static ::System::Int32* StaticGet__IsLinearDepthShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BATRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x110A4);
		}
		static ::System::Int32* StaticGet__ArgsCountsBufferShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BATRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x110A8);
		}
		static ::System::Int32* StaticGet__InstanceDataTextureShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BATRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x110AC);
		}
		static ::System::Int32* StaticGet__NumberOfBonesShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BATRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x110B0);
		}
		static ::System::Int32* StaticGet__FrameIndexShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BATRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x110B4);
		}
		static ::System::Int32* StaticGet__InstanceDataIndexTextureShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BATRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x110B8);
		}
		static ::System::Int32* StaticGet__PrototypeCountShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BATRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x110BC);
		}
		static ::System::Int32* StaticGet__ArgsTotalCountBufferShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BATRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x110C0);
		}
		static ::System::Int32* StaticGet__InstanceDataIndexBufferShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BATRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x110C4);
		}
		static ::System::Int32* StaticGet__BoneIndicesWeightsTextureShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BATRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x110C8);
		}
		static ::System::Int32* StaticGet__CullingDataBufferShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BATRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x110CC);
		}
		static ::System::Int32* StaticGet__TotalCountShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BATRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x110D0);
		}
		static ::System::Int32* StaticGet__InstanceDataTextureTexelSizeShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BATRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x110D4);
		}
		static ::System::Int32* StaticGet__InstanceDataBufferShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BATRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x110D8);
		}
		static ::System::Int32* StaticGet__InstanceCountsBufferShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BATRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x110DC);
		}
		// static const ::System::String* _BATRendererComputeShaderPath; // 0x0
		// static const ::System::String* _InstanceDataCopyComputeShaderPath; // 0x0
		::System::Int32 _ArgsTotalCount; // 0x38
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>*>* _ArgsOffsets; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* _ArgsCounts; // 0x48
		::UnityEngine::ComputeBuffer* _ArgsCountsBuffer; // 0x50
		::UnityEngine::ComputeBuffer* _ArgsBuffer; // 0x58
		::UnityEngine::RenderTexture* _InstanceDataTexture; // 0x60
		::UnityEngine::RenderTexture* _InstanceDataIndexTexture; // 0x68
		::UnityEngine::Vector4 _InstanceDataTexture_TexelSize; // 0x70
		::UnityEngine::Vector4 _InstanceDataIndexTexture_TexelSize; // 0x80
		::System::Int32 _CSCopyBufferToTextureKernelID; // 0x90
		::System::Int32 _CSClearKernelID; // 0x94
		::System::Int32 _CSFrustumCullingKernelID; // 0x98
		::System::Int32 _CSFrustumHizCullingKernelID; // 0x9C
		::Il2CppArray<::UnityEngine::Plane>* _FrustumPlanes; // 0xA0
		::Il2CppArray<::UnityEngine::Vector4>* _FrustumPlaneParams; // 0xA8
		::UnityEngine::ComputeBuffer* _InstanceDataIndexBuffer; // 0xB0
		::UnityEngine::ComputeBuffer* _CullingDataBuffer; // 0xB8
		::UnityEngine::ComputeBuffer* _InstanceCountsBuffer; // 0xC0
		::UnityEngine::ComputeShader* _BATRendererComputeShader; // 0xC8
		::UnityEngine::ComputeShader* _InstanceDataCopyComputeShader; // 0xD0
		::RPG::Client::TAUtils::MaterialPropertiesCollection* _GlobalMaterialProperties; // 0xD8
		::System::Single _TickTime; // 0xE0
		::System::Boolean _Visible; // 0xE4
		::System::Boolean _Culling; // 0xE5
		::System::Boolean _CullingWithHiz; // 0xE6

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_C638E91FC0D3A13A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_C638E91FC0D3A13A_OFFSET))(this);
		}

		::System::Void Method_3_A6544B958241856F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_A6544B958241856F_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_CA373AA1C7054598_3_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_GET_KEY_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_8B5E3014AFF7F8EA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_8B5E3014AFF7F8EA_OFFSET))(this);
		}

		::System::Void Method_3_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_3_B9A97467188E4B69()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_B9A97467188E4B69_OFFSET))(this);
		}

		::System::Void Method_3_9B2E710EB9D49BA6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_9B2E710EB9D49BA6_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_CA373AA1C7054598_4_OFFSET))(this);
		}

		::System::Void Method_3_9AF91962BC6E178A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_9AF91962BC6E178A_OFFSET))(this);
		}

		::System::Void Method_3_0A55B605BCCBA14A(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_0A55B605BCCBA14A_OFFSET))(this, a1);
		}

		::System::Void Method_3_AC7CD4175E0A3EF8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_AC7CD4175E0A3EF8_OFFSET))(this);
		}

		::System::Void Method_3_7DD84EAFF333A1E4(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_7DD84EAFF333A1E4_OFFSET))(this, a1);
		}

		::System::Void Method_3_F0E5333B48B6C5FF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_F0E5333B48B6C5FF_OFFSET))(this, a1);
		}

		::System::Void Method_3_7787CB3AD5CF0BB7(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_7787CB3AD5CF0BB7_OFFSET))(this, a1);
		}

		::System::Void Method_3_30FFBE713F2F7B5D(::UnityEngine::Material* a1, ::RPG::Client::BAT::BATRendererBehavior_MaterialBATKeyword a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::RPG::Client::BAT::BATRendererBehavior_MaterialBATKeyword))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_30FFBE713F2F7B5D_OFFSET))(this, a1, a2);
		}

		::System::Int32 get__CSCullingKernelID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_GET__CSCULLINGKERNELID_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get__InstanceDataBuffer()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_GET__INSTANCEDATABUFFER_OFFSET))(this);
		}

		::RPG::Client::BAT::BATRenderer* get_Owner()
		{
			return ((::RPG::Client::BAT::BATRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_GET_OWNER_OFFSET))(this);
		}

		static ::UnityEngine::MaterialPropertyBlock* __DrawMeshes_g___GetMPB_22_0(::System::Int32 index, ::RPG::Client::BAT::BATRendererBehavior___c__DisplayClass22_0& a2)
		{
			return ((::UnityEngine::MaterialPropertyBlock*(*)(::System::Int32, ::RPG::Client::BAT::BATRendererBehavior___c__DisplayClass22_0&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR___DRAWMESHES_G___GETMPB_22_0_OFFSET))(index, a2);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET))(this);
		}

		::System::Boolean Method_3_F0E307B84478A272()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_F0E307B84478A272_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_6_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
