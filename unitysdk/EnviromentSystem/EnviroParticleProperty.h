#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroAssetProperty.h"
#include "unitysdk/EnviromentSystem/EnviroParticleProperty_EnviroParticleSystem.h"
#include "unitysdk/UnityEngine/ParticleSystem_Particle.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_0AA98B52501920FC_OFFSET UNITYSDK_OFFSET(0x15607770)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_0DA2366A4A7DBAA7_OFFSET UNITYSDK_OFFSET(0x15609570)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0x15607910)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x156054D0)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_367B828F03288F81_OFFSET UNITYSDK_OFFSET(0x15609C90)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_42B2BB88AE2FB02E_OFFSET UNITYSDK_OFFSET(0x15607090)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_46B69F9383394A79_OFFSET UNITYSDK_OFFSET(0x15608140)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_61929A3103595552_OFFSET UNITYSDK_OFFSET(0x156090E0)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_6265C7118C397180_OFFSET UNITYSDK_OFFSET(0x15607B80)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_65286758AD0A6377_OFFSET UNITYSDK_OFFSET(0x15609670)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_772D67C1BB94E51A_1_OFFSET UNITYSDK_OFFSET(0x156063C0)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_772D67C1BB94E51A_OFFSET UNITYSDK_OFFSET(0x15605AE0)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_840D76A628A32BA4_OFFSET UNITYSDK_OFFSET(0x15608DB0)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_8C5640BC001B297D_OFFSET UNITYSDK_OFFSET(0x15609BA0)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_A1181F48E2FBC750_OFFSET UNITYSDK_OFFSET(0x15609AD0)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x15608F00)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_B61816188D411E7A_OFFSET UNITYSDK_OFFSET(0x15609D70)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_BF32778AFC3501D1_OFFSET UNITYSDK_OFFSET(0x15605150)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1560A1B0)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1560A170)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0x15607DE0)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_D155D4917B3D2C6A_OFFSET UNITYSDK_OFFSET(0x15606F60)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_DCCE11FE949CAADF_OFFSET UNITYSDK_OFFSET(0x15609280)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_E05012375B3FEA38_OFFSET UNITYSDK_OFFSET(0x156099B0)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_EC90937CEA9AFCA9_OFFSET UNITYSDK_OFFSET(0x156094A0)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_FCC585F890185F8B_OFFSET UNITYSDK_OFFSET(0x15607110)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15604DD0)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x15604C50)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroParticleProperty_TypeDefinitionIndex = 49607;

	class EnviroParticleProperty : public ::EnviromentSystem::EnviroAssetProperty
	{
	public:
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem>* m_particleSystem; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tmpCustomData; // 0x58
		::Il2CppArray<::UnityEngine::ParticleSystem_Particle>* tmpparticles; // 0x60

		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroParticleProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroParticleProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void Method_3_BF32778AFC3501D1(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_BF32778AFC3501D1_OFFSET))(this, a1);
		}

		::System::Void Method_3_2566AD459572DFC3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_2566AD459572DFC3_OFFSET))(this);
		}

		::System::Void Method_3_D155D4917B3D2C6A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_D155D4917B3D2C6A_OFFSET))(this);
		}

		::System::Void Method_3_42B2BB88AE2FB02E(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_42B2BB88AE2FB02E_OFFSET))(this, a1);
		}

		::System::Void Method_3_FCC585F890185F8B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_FCC585F890185F8B_OFFSET))(this, a1);
		}

		::System::Void Method_3_6265C7118C397180(::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_6265C7118C397180_OFFSET))(this, a1);
		}

		::System::Void Method_3_CD9F3CEFB366C27A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_CD9F3CEFB366C27A_OFFSET))(this);
		}

		::System::Void Method_3_840D76A628A32BA4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_840D76A628A32BA4_OFFSET))(this, a1);
		}

		::System::Void Method_3_A27DC2C5A103933A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_A27DC2C5A103933A_OFFSET))(this);
		}

		::System::Void Method_3_61929A3103595552()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_61929A3103595552_OFFSET))(this);
		}

		::System::Void Method_3_DCCE11FE949CAADF(::System::Collections::Generic::List_1<::System::String*>*& a1, ::System::Collections::Generic::List_1<::System::Type*>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Collections::Generic::List_1<::System::Type*>*&))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_DCCE11FE949CAADF_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_EC90937CEA9AFCA9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_EC90937CEA9AFCA9_OFFSET))(this);
		}

		::System::Void Method_3_0DA2366A4A7DBAA7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_0DA2366A4A7DBAA7_OFFSET))(this);
		}

		::System::Boolean Method_3_65286758AD0A6377(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_65286758AD0A6377_OFFSET))(this, a1);
		}

		::System::Void Method_3_0AA98B52501920FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_0AA98B52501920FC_OFFSET))(this);
		}

		::System::Void Method_3_19844080C13BA28F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_19844080C13BA28F_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* Method_3_E05012375B3FEA38(::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector4>*(*)(::PVOID, ::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_E05012375B3FEA38_OFFSET))(this, a1);
		}

		::System::Void Method_3_A1181F48E2FBC750(::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*&))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_A1181F48E2FBC750_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_8C5640BC001B297D(::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem a1, ::Il2CppArray<::UnityEngine::ParticleSystem_Particle>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem, ::Il2CppArray<::UnityEngine::ParticleSystem_Particle>*&))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_8C5640BC001B297D_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::UnityEngine::ParticleSystem_Particle>* Method_3_367B828F03288F81(::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem a1)
		{
			return ((::Il2CppArray<::UnityEngine::ParticleSystem_Particle>*(*)(::PVOID, ::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_367B828F03288F81_OFFSET))(this, a1);
		}

		::System::Void Method_3_772D67C1BB94E51A(::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_772D67C1BB94E51A_OFFSET))(this, a1);
		}

		::System::Void Method_3_B61816188D411E7A(::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_B61816188D411E7A_OFFSET))(this, a1);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_3_772D67C1BB94E51A_1(::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_772D67C1BB94E51A_1_OFFSET))(this, a1);
		}

		::System::Void Method_3_46B69F9383394A79(::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_46B69F9383394A79_OFFSET))(this, a1);
		}

		::System::Void Method_3_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
		}
	};
}
