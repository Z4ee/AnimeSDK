#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/RPG/Client/TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class TSCMaterialReferenceCache; }
namespace RPG::Client { class TimeSpaceCrisscrossGroupBehavior; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPMONOPLUGIN_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xE214840)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPMONOPLUGIN_DISABLETESTMODE_OFFSET UNITYSDK_OFFSET(0xE2146C0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPMONOPLUGIN_ENABLETESTMODE_OFFSET UNITYSDK_OFFSET(0xE214630)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPMONOPLUGIN_METHOD_7_491027A35182E1D6_OFFSET UNITYSDK_OFFSET(0xE214320)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPMONOPLUGIN_ONENTERMAP_OFFSET UNITYSDK_OFFSET(0xE2144D0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPMONOPLUGIN_ONLIGHTMOVE_OFFSET UNITYSDK_OFFSET(0xE214230)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPMONOPLUGIN_ONTSCCHANGE_OFFSET UNITYSDK_OFFSET(0xE214270)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPMONOPLUGIN_OVERRIDESECONDEDGE_OFFSET UNITYSDK_OFFSET(0xE211990)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPMONOPLUGIN_REGISTERRENDERER_OFFSET UNITYSDK_OFFSET(0xE214510)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPMONOPLUGIN_SETEDGEPARAM_OFFSET UNITYSDK_OFFSET(0xE2143D0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPMONOPLUGIN_SETEDGESCALE_OFFSET UNITYSDK_OFFSET(0xE211CB0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPMONOPLUGIN_SPAWNED_OFFSET UNITYSDK_OFFSET(0xE2147F0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPMONOPLUGIN_UNREGISTERRENDERER_OFFSET UNITYSDK_OFFSET(0xE2145B0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xE214890)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeSpaceCrisscrossGroupMonoPlugin_TypeDefinitionIndex = 70187;

	class TimeSpaceCrisscrossGroupMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::TimeSpaceCrisscrossGroupBehavior*>
	{
	public:
		::UnityEngine::Vector3 ConePotisionA; // 0x30
		::UnityEngine::Vector3 ConeDirectionA; // 0x3C
		::System::Single ConeAngleA; // 0x48
		::System::Single ConeDistanceA; // 0x4C
		::System::Boolean EnableConeA; // 0x50
		::UnityEngine::Vector3 ConePotisionB; // 0x54
		::UnityEngine::Vector3 ConeDirectionB; // 0x60
		::System::Single ConeAngleB; // 0x6C
		::System::Single ConeDistanceB; // 0x70
		::System::Boolean EnableConeB; // 0x74
		::UnityEngine::Vector3 ConePotisionC; // 0x78
		::UnityEngine::Vector3 ConeDirectionC; // 0x84
		::System::Single ConeAngleC; // 0x90
		::System::Single ConeDistanceC; // 0x94
		::System::Boolean EnableConeC; // 0x98
		::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState TSCState; // 0x9C
		::UnityEngine::Material* TSCSpecialFixMat; // 0xA0
		::UnityEngine::Material* TSCSimpFixMat; // 0xA8
		::RPG::Client::TSCMaterialReferenceCache* TSCMatRefCache; // 0xB0
		::System::Boolean OptForceIRINoneInLod2; // 0xB8
		::System::Boolean SkipLod2WhenSaving; // 0xB9
		::System::Boolean EnableOptForceIRINone; // 0xBA
		::System::Boolean ShowWarningInfo; // 0xBB
		::System::Single TSCNoiseScale; // 0xBC
		::System::Boolean EnableSecondEdge; // 0xC0
		::System::Int32 SecondEdgeConeID; // 0xC4
		::System::Single SecondEdgeAngle; // 0xC8
		::UnityEngine::Color SecondEdgeColor; // 0xCC
		::System::Single SecondEdgeWidthScale; // 0xDC
		::System::Single SecondEdgeCylinderRadius; // 0xE0
		::UnityEngine::Coroutine* ABOGAIIGECL; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void OnLightMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPMONOPLUGIN_ONLIGHTMOVE_OFFSET))(this);
		}

		::System::Void OnTSCChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPMONOPLUGIN_ONTSCCHANGE_OFFSET))(this);
		}

		::System::Void SetEdgeScale(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPMONOPLUGIN_SETEDGESCALE_OFFSET))(this, a1, a2);
		}

		::System::Void SetEdgeParam(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPMONOPLUGIN_SETEDGEPARAM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnEnterMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPMONOPLUGIN_ONENTERMAP_OFFSET))(this);
		}

		::System::Void RegisterRenderer(::UnityEngine::Renderer* a1, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPMONOPLUGIN_REGISTERRENDERER_OFFSET))(this, a1, a2);
		}

		::System::Void UnregisterRenderer(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPMONOPLUGIN_UNREGISTERRENDERER_OFFSET))(this, a1);
		}

		::System::Void EnableTestMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPMONOPLUGIN_ENABLETESTMODE_OFFSET))(this);
		}

		::System::Void DisableTestMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPMONOPLUGIN_DISABLETESTMODE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_7_491027A35182E1D6(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPMONOPLUGIN_METHOD_7_491027A35182E1D6_OFFSET))(this, a1, a2);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPMONOPLUGIN_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPMONOPLUGIN_DESPAWNED_OFFSET))(this);
		}

		::System::Void OverrideSecondEdge(::System::Boolean a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPMONOPLUGIN_OVERRIDESECONDEDGE_OFFSET))(this, a1, a2, a3);
		}
	};
}
