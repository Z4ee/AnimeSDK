#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/RPG/Client/TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8345B8E9167A0BA3;
class EnvLocalVolume;
class LocalAmbientVolume;
class LocalFogSphereInstance;
namespace RPG::Client { class BillboardController; }
namespace RPG::Client { class EasyFog; }
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::Client { class LineGlowLightMonoPlugin; }
namespace RPG::Client { class TimeSpaceCrisscrossLightsBehavior_Class_1_157DF0DD0C4E4084; }
namespace RPG::Client { class TimeSpaceCrisscrossLightsBehavior_Class_1_EE2F3B4200B84801; }
namespace RPG::Client { class TimeSpaceCrisscrossLightsMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class FogEmissionBakeVolume; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace VLB { class VolumetricLightBeam; }

#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x178980D0)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_METHOD_3_0FF2EE63EA46287A_OFFSET UNITYSDK_OFFSET(0x17899C50)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_METHOD_3_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x1789C8B0)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_METHOD_3_374B037A82E90A24_OFFSET UNITYSDK_OFFSET(0x178988C0)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_METHOD_3_3CAB3F134E5CEF52_OFFSET UNITYSDK_OFFSET(0x178963A0)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1789CDB0)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1789CD50)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_METHOD_3_4805283D59625FD9_OFFSET UNITYSDK_OFFSET(0x178982E0)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_METHOD_3_4DF98D928623DEE3_OFFSET UNITYSDK_OFFSET(0x1789CE10)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_METHOD_3_8D57252FBA67B119_OFFSET UNITYSDK_OFFSET(0x178986C0)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_METHOD_3_9C73DA90A30983CE_OFFSET UNITYSDK_OFFSET(0x178997C0)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1789C3E0)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_METHOD_3_C6E4AB6C40FAF7DC_OFFSET UNITYSDK_OFFSET(0x1789CB40)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_METHOD_3_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0x1789C4E0)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1789D130)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeSpaceCrisscrossLightsBehavior_TypeDefinitionIndex = 67086;

	class TimeSpaceCrisscrossLightsBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Boolean _IsRegisted; // 0x38
		::RPG::Client::EnvironmentSystem* _EnvSystem; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::TimeSpaceCrisscrossLightsBehavior_Class_1_157DF0DD0C4E4084*>* _LightsGroupA; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::TimeSpaceCrisscrossLightsBehavior_Class_1_157DF0DD0C4E4084*>* _LightsGroupB; // 0x50
		::System::Int32 _TargetFollowConeID; // 0x58
		::Class_1_8345B8E9167A0BA3* _LightsQuadTreeA; // 0x60
		::Class_1_8345B8E9167A0BA3* _LightsQuadTreeB; // 0x68
		::Il2CppArray<::LocalFogSphereInstance*>* _LocalFogGroupA; // 0x70
		::Il2CppArray<::LocalFogSphereInstance*>* _LocalFogGroupB; // 0x78
		::Il2CppArray<::VLB::VolumetricLightBeam*>* _VLBGroupA; // 0x80
		::Il2CppArray<::VLB::VolumetricLightBeam*>* _VLBGroupB; // 0x88
		::Il2CppArray<::UnityEngine::ParticleSystemRenderer*>* _ParticleSystemRendererA; // 0x90
		::Il2CppArray<::UnityEngine::ParticleSystemRenderer*>* _ParticleSystemRendererB; // 0x98
		::Il2CppArray<::RPG::Client::LineGlowLightMonoPlugin*>* _LineGlowA; // 0xA0
		::Il2CppArray<::RPG::Client::LineGlowLightMonoPlugin*>* _LineGlowB; // 0xA8
		::Il2CppArray<::RPG::Client::EasyFog*>* _EasyFogA; // 0xB0
		::Il2CppArray<::RPG::Client::EasyFog*>* _EasyFogB; // 0xB8
		::Il2CppArray<::LocalAmbientVolume*>* _LavA; // 0xC0
		::Il2CppArray<::LocalAmbientVolume*>* _LavB; // 0xC8
		::Il2CppArray<::RPG::Client::BillboardController*>* _BillboardControllderA; // 0xD0
		::Il2CppArray<::RPG::Client::BillboardController*>* _BillboardControllderB; // 0xD8
		::Il2CppArray<::UnityEngine::FogEmissionBakeVolume*>* _FogEmissionBakeVolumeA; // 0xE0
		::Il2CppArray<::UnityEngine::FogEmissionBakeVolume*>* _FogEmissionBakeVolumeB; // 0xE8
		::Il2CppArray<::EnvLocalVolume*>* _EnvLocalVolumeA; // 0xF0
		::Il2CppArray<::EnvLocalVolume*>* _EnvLocalVolumeB; // 0xF8
		::System::Collections::Generic::List_1<::RPG::Client::TimeSpaceCrisscrossLightsBehavior_Class_1_157DF0DD0C4E4084*>* _QuadTreeQueryListA; // 0x100
		::System::Collections::Generic::List_1<::RPG::Client::TimeSpaceCrisscrossLightsBehavior_Class_1_157DF0DD0C4E4084*>* _QuadTreeQueryListB; // 0x108
		::Il2CppArray<::UnityEngine::Plane>* PlaneA; // 0x110
		::Il2CppArray<::UnityEngine::Plane>* PlaneB; // 0x118
		::Il2CppArray<::UnityEngine::Plane>* PlaneC; // 0x120
		::Il2CppArray<::UnityEngine::Plane>* PlaneAIns; // 0x128
		::Il2CppArray<::UnityEngine::Plane>* PlaneBIns; // 0x130
		::Il2CppArray<::UnityEngine::Plane>* PlaneCIns; // 0x138
		::Il2CppArray<::System::Single>* _QuadTreeConeRect; // 0x140
		::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState _TSCState; // 0x148
		::RPG::Client::TimeSpaceCrisscrossLightsBehavior_Class_1_EE2F3B4200B84801* _FogDataA; // 0x150
		::RPG::Client::TimeSpaceCrisscrossLightsBehavior_Class_1_EE2F3B4200B84801* _FogDataB; // 0x158

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_3CAB3F134E5CEF52()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_METHOD_3_3CAB3F134E5CEF52_OFFSET))(this);
		}

		::System::Void Method_3_4805283D59625FD9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_METHOD_3_4805283D59625FD9_OFFSET))(this);
		}

		::System::Void Method_3_8D57252FBA67B119(::RPG::Client::TimeSpaceCrisscrossLightsBehavior_Class_1_157DF0DD0C4E4084* a1, ::Il2CppArray<::UnityEngine::Plane>* a2, ::Il2CppArray<::UnityEngine::Plane>* a3, ::Il2CppArray<::UnityEngine::Plane>* a4, ::Il2CppArray<::UnityEngine::Plane>* a5, ::Il2CppArray<::UnityEngine::Plane>* a6, ::Il2CppArray<::UnityEngine::Plane>* a7, ::Il2CppArray<::UnityEngine::Vector3>* a8, ::Il2CppArray<::UnityEngine::Vector3>* a9, ::Il2CppArray<::UnityEngine::Vector3>* a10, ::Il2CppArray<::UnityEngine::Vector3>* a11, ::Il2CppArray<::UnityEngine::Vector3>* a12, ::Il2CppArray<::UnityEngine::Vector3>* a13, ::System::Boolean a14, ::System::Boolean a15, ::System::Boolean a16)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossLightsBehavior_Class_1_157DF0DD0C4E4084*, ::Il2CppArray<::UnityEngine::Plane>*, ::Il2CppArray<::UnityEngine::Plane>*, ::Il2CppArray<::UnityEngine::Plane>*, ::Il2CppArray<::UnityEngine::Plane>*, ::Il2CppArray<::UnityEngine::Plane>*, ::Il2CppArray<::UnityEngine::Plane>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_METHOD_3_8D57252FBA67B119_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
		}

		::System::Void Method_3_374B037A82E90A24(::RPG::Client::TimeSpaceCrisscrossLightsBehavior_Class_1_157DF0DD0C4E4084* a1, ::Il2CppArray<::UnityEngine::Plane>* a2, ::Il2CppArray<::UnityEngine::Plane>* a3, ::Il2CppArray<::UnityEngine::Plane>* a4, ::Il2CppArray<::UnityEngine::Plane>* a5, ::Il2CppArray<::UnityEngine::Plane>* a6, ::Il2CppArray<::UnityEngine::Plane>* a7, ::Il2CppArray<::UnityEngine::Vector3>* a8, ::Il2CppArray<::UnityEngine::Vector3>* a9, ::Il2CppArray<::UnityEngine::Vector3>* a10, ::Il2CppArray<::UnityEngine::Vector3>* a11, ::Il2CppArray<::UnityEngine::Vector3>* a12, ::Il2CppArray<::UnityEngine::Vector3>* a13, ::System::Boolean a14, ::System::Boolean a15, ::System::Boolean a16)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossLightsBehavior_Class_1_157DF0DD0C4E4084*, ::Il2CppArray<::UnityEngine::Plane>*, ::Il2CppArray<::UnityEngine::Plane>*, ::Il2CppArray<::UnityEngine::Plane>*, ::Il2CppArray<::UnityEngine::Plane>*, ::Il2CppArray<::UnityEngine::Plane>*, ::Il2CppArray<::UnityEngine::Plane>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_METHOD_3_374B037A82E90A24_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
		}

		::System::Void Method_3_9C73DA90A30983CE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_METHOD_3_9C73DA90A30983CE_OFFSET))(this, a1);
		}

		::System::Void Method_3_0FF2EE63EA46287A(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::System::Single a7, ::System::Single a8, ::UnityEngine::Vector3 a9, ::UnityEngine::Vector3 a10, ::System::Single a11, ::System::Single a12, ::System::Boolean a13, ::System::Boolean a14, ::System::Boolean a15, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState a16)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_METHOD_3_0FF2EE63EA46287A_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
		}

		::System::Void Method_3_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_3_CEA32FF190776922()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_METHOD_3_CEA32FF190776922_OFFSET))(this);
		}

		::System::Void Method_3_1E13A8A5C0FF7D62()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_METHOD_3_1E13A8A5C0FF7D62_OFFSET))(this);
		}

		::System::Void Method_3_C6E4AB6C40FAF7DC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_METHOD_3_C6E4AB6C40FAF7DC_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4DF98D928623DEE3(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_METHOD_3_4DF98D928623DEE3_OFFSET))(this, a1);
		}

		::RPG::Client::TimeSpaceCrisscrossLightsMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::TimeSpaceCrisscrossLightsMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}
