#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Ease.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/UnityEngine/Bounds.h"

class MonoSceneMap3DConfig_LiftPosInfo;
namespace MoleMole { class MapLayerOrderInfo; }
namespace MoleMole { class MapOverrideBounds; }
namespace MoleMole { class SerializableDecalAreaData; }
namespace MoleMole { class UIThreeDMapConfig; }
namespace MoleMole { class UrbanMapMeshLayerInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUIURBANMAP_GETCONFIGBYKEY_OFFSET UNITYSDK_OFFSET(0xFB18690)
#define MOLEMOLE_CONFIGUIURBANMAP_TRYGETURBANMAPMESHLAYERINFO_OFFSET UNITYSDK_OFFSET(0xFB181E0)
#define MOLEMOLE_CONFIGUIURBANMAP_TRYGETURBANMAPMESHLAYEROVERRIDEBOUNDS_OFFSET UNITYSDK_OFFSET(0xFB18050)
#define MOLEMOLE_CONFIGUIURBANMAP__CTOR_OFFSET UNITYSDK_OFFSET(0xFB18840)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIUrbanMap_TypeDefinitionIndex = 64992;

	class ConfigUIUrbanMap : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		// static const ::System::String* ConfigPath; // 0x0
		::System::Collections::Generic::List_1<::MoleMole::UIThreeDMapConfig*>* MapConfigs; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::UrbanMapMeshLayerInfo*>* MeshLayerInfos; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::UrbanMapMeshLayerInfo*>* OverrideMeshLayerInfos; // 0x68
		::System::Collections::Generic::List_1<::MoleMole::MapOverrideBounds*>* MapOverrideBoundsList; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::UrbanMapMeshLayerInfo*>* _meshLayerInfoDict; // 0x78
		::System::Single CheckGroupDis; // 0x80
		::System::Single StartScaleRate; // 0x84
		::System::Single StartDuration; // 0x88
		::DG::Tweening::Ease StartEase; // 0x8C
		::System::Single ExitTargetScaleRate; // 0x90
		::System::Single ExitDuration; // 0x94
		::DG::Tweening::Ease ExitEase; // 0x98
		::System::Single WaitGlichTime; // 0x9C
		::System::Single ExWaitTime; // 0xA0
		::System::Collections::Generic::List_1<::MoleMole::SerializableDecalAreaData*>* DecalAreaDataProfile; // 0xA8
		::System::Collections::Generic::List_1<::MonoSceneMap3DConfig_LiftPosInfo*>* LiftPosInfos; // 0xB0
		::System::Collections::Generic::List_1<::MoleMole::MapLayerOrderInfo*>* LayerOrderInfos; // 0xB8
		::System::Collections::Generic::List_1<::MoleMole::MapLayerOrderInfo*>* RadarLayerOrderInfos; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIURBANMAP__CTOR_OFFSET))(this);
		}

		::System::Boolean TryGetUrbanMapMeshLayerOverrideBounds(::System::Int32 areaId, ::System::Int32 layer, ::UnityEngine::Bounds& bounds)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIURBANMAP_TRYGETURBANMAPMESHLAYEROVERRIDEBOUNDS_OFFSET))(this, areaId, layer, bounds);
		}

		::System::Boolean TryGetUrbanMapMeshLayerInfo(::System::String* key, ::MoleMole::UrbanMapMeshLayerInfo*& meshLayerInfo, ::System::Boolean forceClear)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::UrbanMapMeshLayerInfo*&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIURBANMAP_TRYGETURBANMAPMESHLAYERINFO_OFFSET))(this, key, meshLayerInfo, forceClear);
		}

		::MoleMole::UIThreeDMapConfig* GetConfigByKey(::System::String* key)
		{
			return ((::MoleMole::UIThreeDMapConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIURBANMAP_GETCONFIGBYKEY_OFFSET))(this, key);
		}
	};
}
