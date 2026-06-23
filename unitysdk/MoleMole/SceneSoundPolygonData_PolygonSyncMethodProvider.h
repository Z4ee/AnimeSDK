#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D840400A176259F3;
namespace MoleMole { class SceneSoundPolygonData; }

#define MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONSYNCMETHODPROVIDER_APPLYSYNCTOWWISE_OFFSET UNITYSDK_OFFSET(0x191777F0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONSYNCMETHODPROVIDER_CHECKACTIVE_OFFSET UNITYSDK_OFFSET(0x19177DE0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONSYNCMETHODPROVIDER_COMPUTESYNC_OFFSET UNITYSDK_OFFSET(0x19176C10)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONSYNCMETHODPROVIDER_CREATE_OFFSET UNITYSDK_OFFSET(0x19178810)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONSYNCMETHODPROVIDER_INIT_OFFSET UNITYSDK_OFFSET(0x19178380)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONSYNCMETHODPROVIDER_ONSYNC_OFFSET UNITYSDK_OFFSET(0x191786A0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONSYNCMETHODPROVIDER_POLISH_OFFSET UNITYSDK_OFFSET(0x19178720)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONSYNCMETHODPROVIDER_RECYCLE_OFFSET UNITYSDK_OFFSET(0x19178770)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONSYNCMETHODPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x191788B0)

namespace MoleMole
{
	inline static constexpr unsigned int SceneSoundPolygonData_PolygonSyncMethodProvider_TypeDefinitionIndex = 84601;

	class SceneSoundPolygonData_PolygonSyncMethodProvider : public ::System::Object
	{
	public:
		::MoleMole::SceneSoundPolygonData* polygon; // 0x10
		::System::UInt32 pendingId; // 0x18
		::UnityEngine::Vector3 cachePos; // 0x1C
		::System::Boolean _computedIsInArea; // 0x28
		::System::Boolean _computedInvalid; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONSYNCMETHODPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Void ComputeSync(::Class_1_D840400A176259F3* emitter, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONSYNCMETHODPROVIDER_COMPUTESYNC_OFFSET))(this, emitter, deltaTime);
		}

		::System::Void ApplySyncToWwise(::Class_1_D840400A176259F3* emitter)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONSYNCMETHODPROVIDER_APPLYSYNCTOWWISE_OFFSET))(this, emitter);
		}

		::System::Void Init(::Class_1_D840400A176259F3* emitter)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONSYNCMETHODPROVIDER_INIT_OFFSET))(this, emitter);
		}

		::System::Void OnSync(::Class_1_D840400A176259F3* emitter, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONSYNCMETHODPROVIDER_ONSYNC_OFFSET))(this, emitter, deltaTime);
		}

		::System::Void CheckActive(::Class_1_D840400A176259F3* emitter)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONSYNCMETHODPROVIDER_CHECKACTIVE_OFFSET))(this, emitter);
		}

		::System::Void Polish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONSYNCMETHODPROVIDER_POLISH_OFFSET))(this);
		}

		::System::Void Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONSYNCMETHODPROVIDER_RECYCLE_OFFSET))(this);
		}

		static ::MoleMole::SceneSoundPolygonData_PolygonSyncMethodProvider* Create(::MoleMole::SceneSoundPolygonData* polygon)
		{
			return ((::MoleMole::SceneSoundPolygonData_PolygonSyncMethodProvider*(*)(::MoleMole::SceneSoundPolygonData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_POLYGONSYNCMETHODPROVIDER_CREATE_OFFSET))(polygon);
		}
	};
}
