#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client::SkinnedGPUParticles { class SkinnedGPUParticles; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class GPUParticlesAsset; }
namespace UnityEngine { class GPUParticlesRenderer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xC8E41F0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GET__MESH_OFFSET UNITYSDK_OFFSET(0xC8E62A0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xC8E6330)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GET__PARTICLESASSET_OFFSET UNITYSDK_OFFSET(0xC8E63C0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GET__PARTICLESRENDERER_OFFSET UNITYSDK_OFFSET(0xC8E6370)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GET__SKINNEDMESH_OFFSET UNITYSDK_OFFSET(0xC8E6250)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0xC8E3FB0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_0D7638DBC93E5002_1_OFFSET UNITYSDK_OFFSET(0xC8E40D0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0xC8E3F30)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xC8E4150)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xC8E4020)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xC8E4190)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xC8E3DB0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5782059EA974C4A1_OFFSET UNITYSDK_OFFSET(0xC8E3E70)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xC8E66A0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0xC8E6700)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0xC8E6760)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0xC8E67C0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0xC8E6820)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_6_OFFSET UNITYSDK_OFFSET(0xC8E68E0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xC8E6640)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5F857E0E7C9DB593_OFFSET UNITYSDK_OFFSET(0xC8E4A60)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_6BA3F6FAA35776D7_1_OFFSET UNITYSDK_OFFSET(0xC8E4080)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_6BA3F6FAA35776D7_OFFSET UNITYSDK_OFFSET(0xC8E3E20)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_891A756279733473_OFFSET UNITYSDK_OFFSET(0xC8E51C0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xC8E5FC0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_B3B8EDCA29605E60_OFFSET UNITYSDK_OFFSET(0xC8E42F0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xC8E61C0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xC8E6880)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_FA61996746A43D4E_OFFSET UNITYSDK_OFFSET(0xC8E4280)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xC8E6500)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xC8E64C0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR___IFIXBASEPROXY_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xC8E6940)

namespace RPG::Client::SkinnedGPUParticles
{
	inline static constexpr unsigned int SkinnedGPUParticlesBehavior_TypeDefinitionIndex = 68792;

	class SkinnedGPUParticlesBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__IndexCountShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xD3B0);
		}
		static ::System::Int32* StaticGet__VertexBufferLayoutOfColorShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xD3B4);
		}
		static ::System::Int32* StaticGet__UsePackedVertexShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xD3B8);
		}
		static ::System::Int32* StaticGet__CustomVertexStreamsShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xD3BC);
		}
		static ::System::Int32* StaticGet__VertexBufferWithUVShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xD3C0);
		}
		static ::System::Int32* StaticGet__IndexBufferShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xD3C4);
		}
		static ::System::Int32* StaticGet__SkinnedVertexBufferLayoutShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xD3C8);
		}
		static ::System::Int32* StaticGet__SkinnedVertexBufferShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xD3CC);
		}
		static ::System::Int32* StaticGet__MotionReprojectionShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xD3D0);
		}
		static ::System::Int32* StaticGet__VertexCountShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xD3D4);
		}
		static ::System::Int32* StaticGet__SkinnedWorldToObjectShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xD3D8);
		}
		static ::System::Int32* StaticGet__VertexBufferWithColorShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xD3DC);
		}
		static ::System::Int32* StaticGet__PreviousSkinnedVertexBufferShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xD3E0);
		}
		static ::System::Int32* StaticGet__SkinnedObjectToWorldShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xD3E4);
		}
		static ::System::Int32* StaticGet__IndexFormatShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xD3E8);
		}
		static ::System::Int32* StaticGet__VertexBufferLayoutOfUVShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xD3EC);
		}
		::UnityEngine::Matrix4x4 _SkinnedObjectToWorld; // 0x38
		::UnityEngine::Matrix4x4 _SkinnedWorldToObject; // 0x78
		::UnityEngine::Vector3 _SkinnedRoot; // 0xB8
		::UnityEngine::Matrix4x4 _PreviousSkinnedObjectToWorld; // 0xC4
		::UnityEngine::Matrix4x4 _PreviousSkinnedWorldToObject; // 0x104
		::UnityEngine::Vector3 _PreviousSkinnedRoot; // 0x144
		::UnityEngine::ComputeBuffer* _VertexBufferWithColor; // 0x150
		::UnityEngine::ComputeBuffer* _VertexBufferWithUV; // 0x158
		::UnityEngine::ComputeBuffer* _IndexBuffer; // 0x160
		::UnityEngine::Vector4 _SkinnedVertexBufferLayout; // 0x168
		::UnityEngine::Vector4 _VertexBufferLayoutOfColor; // 0x178
		::UnityEngine::Vector4 _VertexBufferLayoutOfUV; // 0x188
		::System::Int32 _UsePackedVertex; // 0x198
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* _Materials; // 0x1A0
		::System::Boolean _Inited; // 0x1A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_6BA3F6FAA35776D7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_6BA3F6FAA35776D7_OFFSET))(this);
		}

		::System::Void Method_3_0D7638DBC93E5002()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_0D7638DBC93E5002_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_6BA3F6FAA35776D7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_6BA3F6FAA35776D7_1_OFFSET))(this);
		}

		::System::Void Method_3_0D7638DBC93E5002_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_0D7638DBC93E5002_1_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_5782059EA974C4A1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5782059EA974C4A1_OFFSET))(this);
		}

		::System::Void Method_3_FA61996746A43D4E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_FA61996746A43D4E_OFFSET))(this, a1);
		}

		::System::Void Method_3_0BDFAC56E6B704CB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_0BDFAC56E6B704CB_OFFSET))(this);
		}

		::System::Boolean Method_3_B3B8EDCA29605E60()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_B3B8EDCA29605E60_OFFSET))(this);
		}

		::System::Void Method_3_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_97D83E4CB3B11935_OFFSET))(this);
		}

		::System::Boolean Method_3_5F857E0E7C9DB593()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5F857E0E7C9DB593_OFFSET))(this);
		}

		::System::Void Method_3_891A756279733473(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_891A756279733473_OFFSET))(this, a1);
		}

		::System::Void Method_3_D0BD1377F2594D33()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_D0BD1377F2594D33_OFFSET))(this);
		}

		::RPG::Client::SkinnedGPUParticles::SkinnedGPUParticles* get__Owner()
		{
			return ((::RPG::Client::SkinnedGPUParticles::SkinnedGPUParticles*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GET__OWNER_OFFSET))(this);
		}

		::UnityEngine::SkinnedMeshRenderer* get__SkinnedMesh()
		{
			return ((::UnityEngine::SkinnedMeshRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GET__SKINNEDMESH_OFFSET))(this);
		}

		::UnityEngine::Mesh* get__Mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GET__MESH_OFFSET))(this);
		}

		::UnityEngine::GPUParticlesRenderer* get__ParticlesRenderer()
		{
			return ((::UnityEngine::GPUParticlesRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GET__PARTICLESRENDERER_OFFSET))(this);
		}

		::UnityEngine::GPUParticlesAsset* get__ParticlesAsset()
		{
			return ((::UnityEngine::GPUParticlesAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GET__PARTICLESASSET_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET))(this);
		}

		::System::Boolean Method_3_F0E307B84478A272()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_F0E307B84478A272_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_6_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR___IFIXBASEPROXY_ENDOFLATETICK_OFFSET))(this, a1);
		}
	};
}
