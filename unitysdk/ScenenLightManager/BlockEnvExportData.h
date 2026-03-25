#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/LightTypeID.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace ScenenLightManager { class BaseSceneLightExportData; }
namespace ScenenLightManager { class BillboardController_SceneLightExportData; }
namespace ScenenLightManager { class CharacterLineLightGroup_SceneLightExportData; }
namespace ScenenLightManager { class EasyFog_SceneLightExportData; }
namespace ScenenLightManager { class EngineLight_SceneLightExportData; }
namespace ScenenLightManager { class EngineReflectionProbe_SceneLightExportData; }
namespace ScenenLightManager { class IrradianceCache_SceneLightExportData; }
namespace ScenenLightManager { class LightWeightPrefab_SceneLightExportData; }
namespace ScenenLightManager { class LineGlow_SceneLightExportData; }
namespace ScenenLightManager { class LocalAmbientVolume_SceneLightExportData; }
namespace ScenenLightManager { class LocalFogSphereInstance_SceneLightExportData; }
namespace ScenenLightManager { class VolumetricLightBeam_SceneLightExportData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SCENENLIGHTMANAGER_BLOCKENVEXPORTDATA_FINALIZE_OFFSET UNITYSDK_OFFSET(0xABBE310)
#define SCENENLIGHTMANAGER_BLOCKENVEXPORTDATA_METHOD_3_16E2BC73E2904F2F_OFFSET UNITYSDK_OFFSET(0xABBFAC0)
#define SCENENLIGHTMANAGER_BLOCKENVEXPORTDATA_METHOD_3_9B4CB6A2D6A8932F_OFFSET UNITYSDK_OFFSET(0xABBF7A0)
#define SCENENLIGHTMANAGER_BLOCKENVEXPORTDATA_METHOD_3_DAF6BB5E3A6072BA_OFFSET UNITYSDK_OFFSET(0xABBE320)
#define SCENENLIGHTMANAGER_BLOCKENVEXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xABBE180)

namespace ScenenLightManager
{
	inline static constexpr unsigned int BlockEnvExportData_TypeDefinitionIndex = 39754;

	class BlockEnvExportData : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::ScenenLightManager::LocalAmbientVolume_SceneLightExportData*>* data0; // 0x18
		::System::Collections::Generic::List_1<::ScenenLightManager::VolumetricLightBeam_SceneLightExportData*>* data1; // 0x20
		::System::Collections::Generic::List_1<::ScenenLightManager::BillboardController_SceneLightExportData*>* data2; // 0x28
		::System::Collections::Generic::List_1<::ScenenLightManager::EngineLight_SceneLightExportData*>* data3; // 0x30
		::System::Collections::Generic::List_1<::ScenenLightManager::EngineReflectionProbe_SceneLightExportData*>* data4; // 0x38
		::System::Collections::Generic::List_1<::ScenenLightManager::CharacterLineLightGroup_SceneLightExportData*>* data5; // 0x40
		::System::Collections::Generic::List_1<::ScenenLightManager::LocalFogSphereInstance_SceneLightExportData*>* data6; // 0x48
		::System::Collections::Generic::List_1<::ScenenLightManager::LineGlow_SceneLightExportData*>* data7; // 0x50
		::System::Collections::Generic::List_1<::ScenenLightManager::LightWeightPrefab_SceneLightExportData*>* data8; // 0x58
		::System::Collections::Generic::List_1<::ScenenLightManager::EasyFog_SceneLightExportData*>* data9; // 0x60
		::System::Collections::Generic::List_1<::ScenenLightManager::IrradianceCache_SceneLightExportData*>* data10; // 0x68
		::System::String* blockName; // 0x70
		::System::String* envName; // 0x78
		::System::Int32 blockDataID; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_BLOCKENVEXPORTDATA__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_BLOCKENVEXPORTDATA_FINALIZE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::ScenenLightManager::BaseSceneLightExportData*>* Method_3_DAF6BB5E3A6072BA()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::ScenenLightManager::BaseSceneLightExportData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_BLOCKENVEXPORTDATA_METHOD_3_DAF6BB5E3A6072BA_OFFSET))(this);
		}

		::System::Boolean Method_3_9B4CB6A2D6A8932F(::ScenenLightManager::LightTypeID a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ScenenLightManager::LightTypeID, ::System::Object*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_BLOCKENVEXPORTDATA_METHOD_3_9B4CB6A2D6A8932F_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::ScenenLightManager::BaseSceneLightExportData*>* Method_3_16E2BC73E2904F2F(::ScenenLightManager::LightTypeID a1)
		{
			return ((::System::Collections::Generic::List_1<::ScenenLightManager::BaseSceneLightExportData*>*(*)(::PVOID, ::ScenenLightManager::LightTypeID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_BLOCKENVEXPORTDATA_METHOD_3_16E2BC73E2904F2F_OFFSET))(this, a1);
		}
	};
}
