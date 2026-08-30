#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class Optimize_EnvGPUParticleRemoteTestMonoPlugin; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class RenderTexture; }

#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xDA0CFF0)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xDA0DA60)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_METHOD_3_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0xDA0D830)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_METHOD_3_50B174C236FA5278_OFFSET UNITYSDK_OFFSET(0xDA0E9F0)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_METHOD_3_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0xDA0C7B0)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_METHOD_3_7B411317D337F87A_OFFSET UNITYSDK_OFFSET(0xDA0D070)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xDA0C720)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_METHOD_3_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0xDA0DAA0)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_METHOD_3_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0xDA0C820)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_METHOD_3_B77F621C85AADA36_OFFSET UNITYSDK_OFFSET(0xDA0DC10)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_METHOD_3_D0D67BA4C4BC9E64_OFFSET UNITYSDK_OFFSET(0xDA0DAF0)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_METHOD_3_D87A7D8243E04FD7_OFFSET UNITYSDK_OFFSET(0xDA0CD00)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_METHOD_3_F206290BA342BA13_1_OFFSET UNITYSDK_OFFSET(0xDA0CE00)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_METHOD_3_F206290BA342BA13_OFFSET UNITYSDK_OFFSET(0xDA0CC90)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_METHOD_3_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0xDA0E4F0)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xDA0CE70)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xDA0F2E0)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xDA0F2D0)

namespace RPG::Client
{
	inline static constexpr unsigned int Optimize_EnvGPUParticleRemoteTestBehavior_TypeDefinitionIndex = 70795;

	class Optimize_EnvGPUParticleRemoteTestBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::Il2CppArray<::UnityEngine::Matrix4x4>** StaticGet_s_EmptyOccluders()
		{
			return (::Il2CppArray<::UnityEngine::Matrix4x4>**)Il2CppClass::FromTypeDefinitionIndex(Optimize_EnvGPUParticleRemoteTestBehavior_TypeDefinitionIndex)->GetStaticField(0x42D70);
		}
		static ::System::Int32* StaticGet__PosTexID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Optimize_EnvGPUParticleRemoteTestBehavior_TypeDefinitionIndex)->GetStaticField(0xFDC0);
		}
		static ::System::Int32* StaticGet__WindScaleID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Optimize_EnvGPUParticleRemoteTestBehavior_TypeDefinitionIndex)->GetStaticField(0xFDC4);
		}
		static ::System::Int32* StaticGet__TimeID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Optimize_EnvGPUParticleRemoteTestBehavior_TypeDefinitionIndex)->GetStaticField(0xFDC8);
		}
		static ::System::Int32* StaticGet__OccluderAsVolumeID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Optimize_EnvGPUParticleRemoteTestBehavior_TypeDefinitionIndex)->GetStaticField(0xFDCC);
		}
		static ::System::Int32* StaticGet__DeltaTimeID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Optimize_EnvGPUParticleRemoteTestBehavior_TypeDefinitionIndex)->GetStaticField(0xFDD0);
		}
		static ::System::Int32* StaticGet__SizeID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Optimize_EnvGPUParticleRemoteTestBehavior_TypeDefinitionIndex)->GetStaticField(0xFDD4);
		}
		static ::System::Int32* StaticGet__NoiseScaleID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Optimize_EnvGPUParticleRemoteTestBehavior_TypeDefinitionIndex)->GetStaticField(0xFDD8);
		}
		static ::System::Int32* StaticGet__NoiseTexID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Optimize_EnvGPUParticleRemoteTestBehavior_TypeDefinitionIndex)->GetStaticField(0xFDDC);
		}
		static ::System::Int32* StaticGet__RangeMaxOldID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Optimize_EnvGPUParticleRemoteTestBehavior_TypeDefinitionIndex)->GetStaticField(0xFDE0);
		}
		static ::System::Int32* StaticGet__EmissionScaleID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Optimize_EnvGPUParticleRemoteTestBehavior_TypeDefinitionIndex)->GetStaticField(0xFDE4);
		}
		static ::System::Int32* StaticGet__RangeMinID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Optimize_EnvGPUParticleRemoteTestBehavior_TypeDefinitionIndex)->GetStaticField(0xFDE8);
		}
		static ::System::Int32* StaticGet__WindID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Optimize_EnvGPUParticleRemoteTestBehavior_TypeDefinitionIndex)->GetStaticField(0xFDEC);
		}
		static ::System::Int32* StaticGet__FadingRateID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Optimize_EnvGPUParticleRemoteTestBehavior_TypeDefinitionIndex)->GetStaticField(0xFDF0);
		}
		static ::System::Int32* StaticGet__DensityScaleID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Optimize_EnvGPUParticleRemoteTestBehavior_TypeDefinitionIndex)->GetStaticField(0xFDF4);
		}
		static ::System::Int32* StaticGet__OccluderMatrixID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Optimize_EnvGPUParticleRemoteTestBehavior_TypeDefinitionIndex)->GetStaticField(0xFDF8);
		}
		static ::System::Int32* StaticGet__NoiseTillingID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Optimize_EnvGPUParticleRemoteTestBehavior_TypeDefinitionIndex)->GetStaticField(0xFDFC);
		}
		static ::System::Int32* StaticGet__RangeMaxID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Optimize_EnvGPUParticleRemoteTestBehavior_TypeDefinitionIndex)->GetStaticField(0xFE00);
		}
		static ::System::Int32* StaticGet__RangeMinOldID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Optimize_EnvGPUParticleRemoteTestBehavior_TypeDefinitionIndex)->GetStaticField(0xFE04);
		}
		static ::System::Int32* StaticGet__SpeedTexID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Optimize_EnvGPUParticleRemoteTestBehavior_TypeDefinitionIndex)->GetStaticField(0xFE08);
		}
		static ::System::Int32* StaticGet__StencilOpID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Optimize_EnvGPUParticleRemoteTestBehavior_TypeDefinitionIndex)->GetStaticField(0xFE0C);
		}
		// static const ::System::Int32 KernelSpawn = 0x0; // 0x0
		// static const ::System::Int32 KernelUpdate = 0x1; // 0x0
		::System::Boolean _initialized; // 0x38
		::System::Int32 _texSide; // 0x3C
		::System::Int32 _activeCount; // 0x40
		::UnityEngine::Vector3 _boundsMin; // 0x44
		::UnityEngine::Vector3 _boundsMax; // 0x50
		::UnityEngine::RenderTexture* _positionRT; // 0x60
		::UnityEngine::RenderTexture* _speedRT; // 0x68
		::UnityEngine::MeshRenderer* _meshRenderer; // 0x70
		::UnityEngine::MeshFilter* _meshFilter; // 0x78
		::UnityEngine::Material* _matInstance; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_3_5BCE9210F4ACDD0B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_METHOD_3_5BCE9210F4ACDD0B_OFFSET))(this);
		}

		::System::Void Method_3_F206290BA342BA13()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_METHOD_3_F206290BA342BA13_OFFSET))(this);
		}

		::System::Void Method_3_F206290BA342BA13_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_METHOD_3_F206290BA342BA13_1_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_9E38127F40B34F1F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_METHOD_3_9E38127F40B34F1F_OFFSET))(this);
		}

		::System::Void Method_3_ABE7715DB28B2DD1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_METHOD_3_ABE7715DB28B2DD1_OFFSET))(this);
		}

		::System::Void Method_3_D87A7D8243E04FD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_METHOD_3_D87A7D8243E04FD7_OFFSET))(this);
		}

		::System::Void Method_3_F63FE1AA9633F811()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_METHOD_3_F63FE1AA9633F811_OFFSET))(this);
		}

		::System::Void Method_3_7B411317D337F87A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_METHOD_3_7B411317D337F87A_OFFSET))(this);
		}

		::System::Void Method_3_3CCA0B8A31B650A8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_METHOD_3_3CCA0B8A31B650A8_OFFSET))(this);
		}

		static ::UnityEngine::RenderTexture* Method_3_D0D67BA4C4BC9E64(::System::Int32 a1, ::UnityEngine::RenderTextureFormat a2, ::System::String* a3)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::UnityEngine::RenderTextureFormat, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_METHOD_3_D0D67BA4C4BC9E64_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Mesh* Method_3_B77F621C85AADA36(::System::Int32 a1)
		{
			return ((::UnityEngine::Mesh*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_METHOD_3_B77F621C85AADA36_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::Matrix4x4>* Method_3_50B174C236FA5278()
		{
			return ((::Il2CppArray<::UnityEngine::Matrix4x4>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_METHOD_3_50B174C236FA5278_OFFSET))();
		}

		::RPG::Client::Optimize_EnvGPUParticleRemoteTestMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::Optimize_EnvGPUParticleRemoteTestMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}
