#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_AssetInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_NodeInfo.h"
#include "unitysdk/HoudiniEngineUnity/HEU_AssetCookResultWrapper.h"
#include "unitysdk/HoudiniEngineUnity/HEU_AssetCookStatusWrapper.h"
#include "unitysdk/HoudiniEngineUnity/HEU_AssetTypeWrapper.h"
#include "unitysdk/HoudiniEngineUnity/HEU_CurveDrawCollisionWrapper.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class HEU_AssetPreset; }
namespace HoudiniEngineUnity { class HEU_BakedDataEvent; }
namespace HoudiniEngineUnity { class HEU_CookedDataEvent; }
namespace HoudiniEngineUnity { class HEU_Curve; }
namespace HoudiniEngineUnity { class HEU_GeneratedOutput; }
namespace HoudiniEngineUnity { class HEU_GeoNode; }
namespace HoudiniEngineUnity { class HEU_InputNode; }
namespace HoudiniEngineUnity { class HEU_MaterialData; }
namespace HoudiniEngineUnity { class HEU_ObjectNode; }
namespace HoudiniEngineUnity { class HEU_PDGAssetLink; }
namespace HoudiniEngineUnity { class HEU_Parameters; }
namespace HoudiniEngineUnity { class HEU_PartData; }
namespace HoudiniEngineUnity { class HEU_PreAssetEvent; }
namespace HoudiniEngineUnity { class HEU_ReloadDataEvent; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace HoudiniEngineUnity { class HEU_VolumeCache; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int IHEU_HoudiniAsset_TypeDefinitionIndex = 38404;

	class IHEU_HoudiniAsset
	{
	public:
	};
}
