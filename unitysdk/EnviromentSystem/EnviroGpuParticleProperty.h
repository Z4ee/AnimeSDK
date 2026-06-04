#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroAssetProperty.h"
#include "unitysdk/EnviromentSystem/EnviroGpuParticleProperty_EnviroGpuParticle.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace RPG::Client { class GpuParticleOccluder; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_004598EA5EBAC892_OFFSET UNITYSDK_OFFSET(0x13594A60)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_0A9532FAEAAC0B12_OFFSET UNITYSDK_OFFSET(0x13594980)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_0DA2366A4A7DBAA7_OFFSET UNITYSDK_OFFSET(0x13591480)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_153F913CE80846EE_OFFSET UNITYSDK_OFFSET(0x1358DC80)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_2F381734DBBAB430_OFFSET UNITYSDK_OFFSET(0x13594AC0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x13594B30)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_42B2BB88AE2FB02E_OFFSET UNITYSDK_OFFSET(0x1358E0E0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_50767E19148D64AB_OFFSET UNITYSDK_OFFSET(0x1358E8E0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_510117FB185393B1_OFFSET UNITYSDK_OFFSET(0x13594D70)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x13594AD0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x13594B90)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x13594BF0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0x13594C50)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0x13594CB0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_5790A55946AA509D_6_OFFSET UNITYSDK_OFFSET(0x13594D10)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x135948B0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_5D0BCFABEB41AF6A_OFFSET UNITYSDK_OFFSET(0x1358E160)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_6BC96613664F3638_OFFSET UNITYSDK_OFFSET(0x13593AC0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_6E371F7870BE8E38_OFFSET UNITYSDK_OFFSET(0x13591590)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_80FACD8CB3F84BED_OFFSET UNITYSDK_OFFSET(0x13594290)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_821BBDC04720A2EB_OFFSET UNITYSDK_OFFSET(0x1358EFE0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_981042ED17D01D80_OFFSET UNITYSDK_OFFSET(0x13593F60)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_984CEF7BA8F7C8D1_OFFSET UNITYSDK_OFFSET(0x1358F2D0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_A44A18C9451109E4_OFFSET UNITYSDK_OFFSET(0x13590DE0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_B00A1D822E6F5C31_OFFSET UNITYSDK_OFFSET(0x135937B0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_B76CD5CB3E297DF3_OFFSET UNITYSDK_OFFSET(0x1358ECB0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_BA9F244927357C17_OFFSET UNITYSDK_OFFSET(0x13594850)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_C027CF3DBDF58558_OFFSET UNITYSDK_OFFSET(0x13591290)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_C9A3013DD208C696_OFFSET UNITYSDK_OFFSET(0x13593500)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_D155D4917B3D2C6A_OFFSET UNITYSDK_OFFSET(0x1358DFA0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_D8767955799CFD63_OFFSET UNITYSDK_OFFSET(0x135916E0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_E7B58F15867D5BA9_1_OFFSET UNITYSDK_OFFSET(0x135949F0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_E7B58F15867D5BA9_OFFSET UNITYSDK_OFFSET(0x13594910)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x13592770)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY__CCTOR_OFFSET UNITYSDK_OFFSET(0x13594660)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1358D8A0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1358D760)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroGpuParticleProperty_TypeDefinitionIndex = 46779;

	class EnviroGpuParticleProperty : public ::EnviromentSystem::EnviroAssetProperty
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::GpuParticleOccluder*>** StaticGet_GpuParticleOccluders()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::GpuParticleOccluder*>**)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x44D60);
		}
		static ::System::String** StaticGet__Noise3DPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x44D68);
		}
		static ::System::String** StaticGet__Noise2DPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x44D70);
		}
		static ::System::Int32* StaticGet__WindZoneBBoxMaxPosShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xC4C0);
		}
		static ::System::Int32* StaticGet__WindGlobalShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xC4C4);
		}
		static ::System::Int32* StaticGet__RangeMinOldShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xC4C8);
		}
		static ::System::Int32* StaticGet__NoiseTillingShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xC4CC);
		}
		static ::System::Int32* StaticGet__WindZoneBBoxMinPosShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xC4D0);
		}
		static ::System::Int32* StaticGet__NoiseTexShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xC4D4);
		}
		static ::System::Int32* StaticGet__PositionTexShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xC4D8);
		}
		static ::System::Int32* StaticGet__RangeMinShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xC4DC);
		}
		static ::System::Int32* StaticGet__SpeedTexReadShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xC4E0);
		}
		static ::System::Int32* StaticGet__WindScaleShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xC4E4);
		}
		static ::System::Int32* StaticGet__WindZoneShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xC4E8);
		}
		static ::System::Int32* StaticGet__RandomSizeShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xC4EC);
		}
		static ::System::Int32* StaticGet__Occluder()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xC4F0);
		}
		static ::System::Int32* StaticGet__SpeedTexShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xC4F4);
		}
		static ::System::Int32* StaticGet__DeltaTimeShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xC4F8);
		}
		static ::System::Int32* StaticGet__GpuParticleOccluderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xC4FC);
		}
		static ::System::Int32* StaticGet__TimeShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xC500);
		}
		static ::System::Int32* StaticGet__NoiseTex2DShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xC504);
		}
		static ::System::Int32* StaticGet__RangeMaxShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xC508);
		}
		static ::System::Int32* StaticGet__NoiseScaleShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xC50C);
		}
		static ::System::Int32* StaticGet__PositionTexReadShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xC510);
		}
		static ::System::Int32* StaticGet__RangeMaxOldShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xC514);
		}
		static ::System::Int32* StaticGet__OccluderAsVolumeID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xC518);
		}
		::System::Boolean OnlyInHighQuality; // 0x50
		::System::Boolean OccluderAsVolume; // 0x51
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroGpuParticleProperty_EnviroGpuParticle>* m_GpuParticles; // 0x58
		::UnityEngine::Texture2D* PerlinNoise2D; // 0x60
		::UnityEngine::Texture2D* PerlinNoise3D; // 0x68
		::System::Boolean _Enable; // 0x70
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* tmpMaterial; // 0x78
		::Il2CppArray<::UnityEngine::Matrix4x4>* _OccludersMatrixArray; // 0x80

		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroGpuParticleProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroGpuParticleProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY__CCTOR_OFFSET))();
		}

		::System::Boolean Method_3_153F913CE80846EE(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_153F913CE80846EE_OFFSET))(this, a1);
		}

		::System::Void Method_3_D155D4917B3D2C6A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_D155D4917B3D2C6A_OFFSET))(this);
		}

		::System::Void Method_3_42B2BB88AE2FB02E(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_42B2BB88AE2FB02E_OFFSET))(this, a1);
		}

		::System::Void Method_3_5D0BCFABEB41AF6A(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_5D0BCFABEB41AF6A_OFFSET))(this, a1);
		}

		::System::Void Method_3_50767E19148D64AB(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_50767E19148D64AB_OFFSET))(this, a1);
		}

		::System::Void Method_3_984CEF7BA8F7C8D1(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_984CEF7BA8F7C8D1_OFFSET))(this, a1);
		}

		::System::Void Method_3_C027CF3DBDF58558()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_C027CF3DBDF58558_OFFSET))(this);
		}

		::System::Void Method_3_0DA2366A4A7DBAA7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_0DA2366A4A7DBAA7_OFFSET))(this);
		}

		::System::Void Method_3_6E371F7870BE8E38(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_6E371F7870BE8E38_OFFSET))(this, a1);
		}

		::System::Void Method_3_D8767955799CFD63(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_D8767955799CFD63_OFFSET))(this, a1);
		}

		::System::Void Method_3_B76CD5CB3E297DF3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_B76CD5CB3E297DF3_OFFSET))(this);
		}

		::System::Void Method_3_821BBDC04720A2EB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_821BBDC04720A2EB_OFFSET))(this);
		}

		::System::Void Method_3_F63FE1AA9633F811()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_F63FE1AA9633F811_OFFSET))(this);
		}

		::System::Void Method_3_C9A3013DD208C696()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_C9A3013DD208C696_OFFSET))(this);
		}

		::System::Void Method_3_B00A1D822E6F5C31()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_B00A1D822E6F5C31_OFFSET))(this);
		}

		::System::Void Method_3_6BC96613664F3638(::System::Collections::Generic::List_1<::System::String*>*& a1, ::System::Collections::Generic::List_1<::System::Type*>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Collections::Generic::List_1<::System::Type*>*&))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_6BC96613664F3638_OFFSET))(this, a1, a2);
		}

		static ::System::Void Method_3_981042ED17D01D80(::RPG::Client::GpuParticleOccluder* a1)
		{
			return ((::System::Void(*)(::RPG::Client::GpuParticleOccluder*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_981042ED17D01D80_OFFSET))(a1);
		}

		static ::System::Void Method_3_80FACD8CB3F84BED(::RPG::Client::GpuParticleOccluder* a1)
		{
			return ((::System::Void(*)(::RPG::Client::GpuParticleOccluder*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_80FACD8CB3F84BED_OFFSET))(a1);
		}

		::System::Void Method_3_A44A18C9451109E4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_A44A18C9451109E4_OFFSET))(this);
		}

		::System::Boolean Method_3_BA9F244927357C17(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_BA9F244927357C17_OFFSET))(this, a1);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void Method_3_E7B58F15867D5BA9(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_E7B58F15867D5BA9_OFFSET))(this, a1);
		}

		::System::Void Method_3_0A9532FAEAAC0B12(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_0A9532FAEAAC0B12_OFFSET))(this, a1);
		}

		::System::Void Method_3_E7B58F15867D5BA9_1(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_E7B58F15867D5BA9_1_OFFSET))(this, a1);
		}

		::System::Void Method_3_004598EA5EBAC892(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_004598EA5EBAC892_OFFSET))(this, a1);
		}

		::System::Void Method_3_2F381734DBBAB430()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_2F381734DBBAB430_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
		}

		::System::Void Method_3_3C927B51D2142A24(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_3C927B51D2142A24_OFFSET))(this, a1);
		}

		::System::Void Method_3_5790A55946AA509D_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_5790A55946AA509D_4_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_5790A55946AA509D_5_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_5790A55946AA509D_6_OFFSET))(this);
		}

		::System::Void Method_3_510117FB185393B1(::System::Collections::Generic::List_1<::System::String*>*& a1, ::System::Collections::Generic::List_1<::System::Type*>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Collections::Generic::List_1<::System::Type*>*&))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_510117FB185393B1_OFFSET))(this, a1, a2);
		}
	};
}
