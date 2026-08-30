#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_AssetInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_AttributeInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_AttributeOwner.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_CookOptions.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_GeoInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_NodeInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ObjectInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_PartType.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_SessionSyncInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_Transform.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_TransformEuler.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_Viewport.h"
#include "unitysdk/HoudiniEngineUnity/HEU_AssetTypeWrapper.h"
#include "unitysdk/HoudiniEngineUnity/HEU_HoudiniAsset_HEU_AssetType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAssetRoot; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_APPLYLOCALTRANSFROMFROMHOUDINITOUNITYFORINSTANCE_OFFSET UNITYSDK_OFFSET(0x1B3D3470)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_APPLYLOCALTRANSFROMFROMHOUDINITOUNITY_OFFSET UNITYSDK_OFFSET(0x1B3D0920)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_APPLYMATRIXTOLOCALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B3E2340)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_APPLYWORLDTRANSFROMFROMHOUDINITOUNITY_OFFSET UNITYSDK_OFFSET(0x1B3FE870)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CONTAINSSOPNODES_OFFSET UNITYSDK_OFFSET(0x1B400260)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CONVERTPOSITIONUNITYTOHOUDINI_1_OFFSET UNITYSDK_OFFSET(0x1B3DC650)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CONVERTPOSITIONUNITYTOHOUDINI_2_OFFSET UNITYSDK_OFFSET(0x1B3DDFD0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CONVERTPOSITIONUNITYTOHOUDINI_3_OFFSET UNITYSDK_OFFSET(0x1B402630)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CONVERTPOSITIONUNITYTOHOUDINI_4_OFFSET UNITYSDK_OFFSET(0x1B3D88F0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CONVERTPOSITIONUNITYTOHOUDINI_OFFSET UNITYSDK_OFFSET(0x1B402620)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CONVERTROTATIONUNITYTOHOUDINI_1_OFFSET UNITYSDK_OFFSET(0x1B3DC680)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CONVERTROTATIONUNITYTOHOUDINI_2_OFFSET UNITYSDK_OFFSET(0x1B402760)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CONVERTROTATIONUNITYTOHOUDINI_3_OFFSET UNITYSDK_OFFSET(0x1B402890)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CONVERTROTATIONUNITYTOHOUDINI_OFFSET UNITYSDK_OFFSET(0x1B402650)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CONVERTSCALEUNITYTOHOUDINI_1_OFFSET UNITYSDK_OFFSET(0x1B3DC7F0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CONVERTSCALEUNITYTOHOUDINI_2_OFFSET UNITYSDK_OFFSET(0x1B4029B0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CONVERTSCALEUNITYTOHOUDINI_3_OFFSET UNITYSDK_OFFSET(0x1B4029D0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CONVERTSCALEUNITYTOHOUDINI_OFFSET UNITYSDK_OFFSET(0x1B4029A0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_COOKNODEINHOUDINIWITHOPTIONS_OFFSET UNITYSDK_OFFSET(0x1B3DCB00)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_COOKNODEINHOUDINI_OFFSET UNITYSDK_OFFSET(0x1B3BCD90)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CREATEANDCOOKASSETNODE_OFFSET UNITYSDK_OFFSET(0x1B3FC920)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CREATEANDCOOKCURVEASSET_OFFSET UNITYSDK_OFFSET(0x1B3FD4A0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CREATEANDCOOKINPUTASSET_OFFSET UNITYSDK_OFFSET(0x1B3FD7F0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CREATENEWASSET_1_OFFSET UNITYSDK_OFFSET(0x1B3FDBE0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CREATENEWASSET_OFFSET UNITYSDK_OFFSET(0x1B3FDBB0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CREATENEWCURVEASSET_OFFSET UNITYSDK_OFFSET(0x1B3FE100)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CREATENEWINPUTASSET_OFFSET UNITYSDK_OFFSET(0x1B3FE130)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_DESTROYCHILDREN_OFFSET UNITYSDK_OFFSET(0x1B3FE170)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_DESTROYGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B3D8120)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_DOESGEOPARTHAVEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B4000A0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_DOESMAPPEDPATHEXIST_OFFSET UNITYSDK_OFFSET(0x1B3FC0E0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_FINDHOUDINIASSETFILEINPATHWITHEXT_OFFSET UNITYSDK_OFFSET(0x1B3FC260)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GATHERALLASSETGEOINFOS_OFFSET UNITYSDK_OFFSET(0x1B400620)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GATHERALLASSETOUTPUTS_OFFSET UNITYSDK_OFFSET(0x1B400F40)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GATHERALLOBJECTGEOINFOS_OFFSET UNITYSDK_OFFSET(0x1B401B90)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETASSETINSCENE_OFFSET UNITYSDK_OFFSET(0x1B3FE750)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETDEFAULTCOOKOPTIONS_OFFSET UNITYSDK_OFFSET(0x1B3DCAC0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETENVIRONMENTPATH_OFFSET UNITYSDK_OFFSET(0x1B3FBDB0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETHAPITRANSFORMFROMMATRIX_OFFSET UNITYSDK_OFFSET(0x1B3FF0E0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETHAPITRANSFORMQUATFROMMATRIX_OFFSET UNITYSDK_OFFSET(0x1B3FF680)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETHAPITRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B3FF4B0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETHOUDINIENGINEINSTALLATIONINFO_OFFSET UNITYSDK_OFFSET(0x1B3FBDA0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETMATRIX4X4_OFFSET UNITYSDK_OFFSET(0x1B3FFAB0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETMATRIXFROMHAPITRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B3FEDC0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETOBJECTINFOS_OFFSET UNITYSDK_OFFSET(0x1B3B99A0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETOUTPUTINDEX_OFFSET UNITYSDK_OFFSET(0x1B400530)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETPARENTNODEID_OFFSET UNITYSDK_OFFSET(0x1B400190)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1B3FEB20)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETQUATERNION_OFFSET UNITYSDK_OFFSET(0x1B3FEB40)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETREALPATHFROMHFSPATH_OFFSET UNITYSDK_OFFSET(0x1B3FBEB0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETSCALE_OFFSET UNITYSDK_OFFSET(0x1B3FECD0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_INSTANTIATEHDA_OFFSET UNITYSDK_OFFSET(0x1B3B83A0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISEQUALTOL_OFFSET UNITYSDK_OFFSET(0x1B3FFD60)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISHOUDINIASSETFILE_OFFSET UNITYSDK_OFFSET(0x1B3FC180)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISNODEVALIDINHOUDINI_OFFSET UNITYSDK_OFFSET(0x1B3BCC40)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISOBJNODEFULLYVISIBLE_OFFSET UNITYSDK_OFFSET(0x1B400330)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISSAMETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B3FFBC0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISSESSIONSYNCEQUAL_OFFSET UNITYSDK_OFFSET(0x1B400080)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISSUPPORTEDPOLYGONTYPE_OFFSET UNITYSDK_OFFSET(0x1B3C8C10)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISTRANSFORMEQUAL_OFFSET UNITYSDK_OFFSET(0x1B3FFD80)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISVIEWPORTEQUAL_OFFSET UNITYSDK_OFFSET(0x1B3FFF80)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_LOADGEOWITHNEWGEOSYNC_OFFSET UNITYSDK_OFFSET(0x1B3FE160)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_LOADHDAFILE_OFFSET UNITYSDK_OFFSET(0x1B3FC5F0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_LOCATEVALIDFILEPATH_1_OFFSET UNITYSDK_OFFSET(0x1B3FC5E0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_LOCATEVALIDFILEPATH_OFFSET UNITYSDK_OFFSET(0x1B3FC5A0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1B3FC590)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1B3FC580)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_LOG_OFFSET UNITYSDK_OFFSET(0x1B3FC500)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_PROCESSHOUDINICOOKSTATUS_OFFSET UNITYSDK_OFFSET(0x1B3FCD10)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_SETANIMATIONCURVETANGENTMODES_OFFSET UNITYSDK_OFFSET(0x1B400180)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_SETMATRIXPOSITION_OFFSET UNITYSDK_OFFSET(0x1B3FF080)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_TOHAPIVARIABLENAME_OFFSET UNITYSDK_OFFSET(0x1B4023E0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_HAPIUtility_TypeDefinitionIndex = 39137;

	class HEU_HAPIUtility : public ::System::Object
	{
	public:
		static ::System::String* GetHoudiniEngineInstallationInfo()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETHOUDINIENGINEINSTALLATIONINFO_OFFSET))();
		}

		static ::System::String* GetEnvironmentPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETENVIRONMENTPATH_OFFSET))();
		}

		static ::System::String* GetRealPathFromHFSPath(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETREALPATHFROMHFSPATH_OFFSET))(a1);
		}

		static ::System::Boolean DoesMappedPathExist(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_DOESMAPPEDPATHEXIST_OFFSET))(a1);
		}

		static ::System::Boolean IsHoudiniAssetFile(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISHOUDINIASSETFILE_OFFSET))(a1);
		}

		static ::System::String* FindHoudiniAssetFileInPathWithExt(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_FINDHOUDINIASSETFILEINPATHWITHEXT_OFFSET))(a1);
		}

		static ::System::Void Log(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_LOG_OFFSET))(a1);
		}

		static ::System::Void LogWarning(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_LOGWARNING_OFFSET))(a1);
		}

		static ::System::Void LogError(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_LOGERROR_OFFSET))(a1);
		}

		static ::System::String* LocateValidFilePath(::UnityEngine::Object* a1)
		{
			return ((::System::String*(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_LOCATEVALIDFILEPATH_OFFSET))(a1);
		}

		static ::System::String* LocateValidFilePath_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_LOCATEVALIDFILEPATH_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::GameObject* InstantiateHDA(::System::String* a1, ::UnityEngine::Vector3 a2, ::HoudiniEngineUnity::HEU_SessionBase* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::UnityEngine::GameObject* a7)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Vector3, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_INSTANTIATEHDA_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean LoadHDAFile(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::String* a2, ::System::Int32& a3, ::Il2CppArray<::System::String*>*& a4)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::String*, ::System::Int32&, ::Il2CppArray<::System::String*>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_LOADHDAFILE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean CreateAndCookAssetNode(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32& a4)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::String*, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CREATEANDCOOKASSETNODE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean CreateAndCookCurveAsset(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32& a4)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::String*, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CREATEANDCOOKCURVEASSET_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean CreateAndCookInputAsset(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32& a4)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::String*, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CREATEANDCOOKINPUTASSET_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean CookNodeInHoudini(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::String* a4)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_COOKNODEINHOUDINI_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean CookNodeInHoudiniWithOptions(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::HoudiniEngineUnity::HAPI_CookOptions a3, ::System::String* a4)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::HoudiniEngineUnity::HAPI_CookOptions, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_COOKNODEINHOUDINIWITHOPTIONS_OFFSET))(a1, a2, a3, a4);
		}

		static ::HoudiniEngineUnity::HAPI_CookOptions GetDefaultCookOptions(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::HoudiniEngineUnity::HAPI_CookOptions(*)(::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETDEFAULTCOOKOPTIONS_OFFSET))(a1);
		}

		static ::System::Boolean ProcessHoudiniCookStatus(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_PROCESSHOUDINICOOKSTATUS_OFFSET))(a1, a2);
		}

		static ::UnityEngine::GameObject* CreateNewAsset(::HoudiniEngineUnity::HEU_AssetTypeWrapper a1, ::System::String* a2, ::UnityEngine::Transform* a3, ::HoudiniEngineUnity::HEU_SessionBase* a4, ::System::Boolean a5, ::UnityEngine::GameObject* a6)
		{
			return ((::UnityEngine::GameObject*(*)(::HoudiniEngineUnity::HEU_AssetTypeWrapper, ::System::String*, ::UnityEngine::Transform*, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Boolean, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CREATENEWASSET_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::GameObject* CreateNewAsset_1(::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType a1, ::System::String* a2, ::UnityEngine::Transform* a3, ::HoudiniEngineUnity::HEU_SessionBase* a4, ::System::Boolean a5, ::UnityEngine::GameObject* a6)
		{
			return ((::UnityEngine::GameObject*(*)(::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType, ::System::String*, ::UnityEngine::Transform*, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Boolean, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CREATENEWASSET_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::GameObject* CreateNewCurveAsset(::System::String* a1, ::UnityEngine::Transform* a2, ::HoudiniEngineUnity::HEU_SessionBase* a3, ::System::Boolean a4, ::UnityEngine::GameObject* a5)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Transform*, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Boolean, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CREATENEWCURVEASSET_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::GameObject* CreateNewInputAsset(::System::String* a1, ::UnityEngine::Transform* a2, ::HoudiniEngineUnity::HEU_SessionBase* a3, ::System::Boolean a4, ::UnityEngine::GameObject* a5)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Transform*, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Boolean, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CREATENEWINPUTASSET_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::GameObject* LoadGeoWithNewGeoSync(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_LOADGEOWITHNEWGEOSYNC_OFFSET))(a1);
		}

		static ::System::Void DestroyChildren(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_DESTROYCHILDREN_OFFSET))(a1);
		}

		static ::System::Void DestroyGameObject(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_DESTROYGAMEOBJECT_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsNodeValidInHoudini(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISNODEVALIDINHOUDINI_OFFSET))(a1, a2);
		}

		static ::HoudiniEngineUnity::HEU_HoudiniAssetRoot* GetAssetInScene(::System::Int32 a1)
		{
			return ((::HoudiniEngineUnity::HEU_HoudiniAssetRoot*(*)(::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETASSETINSCENE_OFFSET))(a1);
		}

		static ::System::Void ApplyWorldTransfromFromHoudiniToUnity(::HoudiniEngineUnity::HAPI_Transform& a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HAPI_Transform&, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_APPLYWORLDTRANSFROMFROMHOUDINITOUNITY_OFFSET))(a1, a2);
		}

		static ::System::Void ApplyLocalTransfromFromHoudiniToUnity(::HoudiniEngineUnity::HAPI_Transform& a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HAPI_Transform&, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_APPLYLOCALTRANSFROMFROMHOUDINITOUNITY_OFFSET))(a1, a2);
		}

		static ::System::Void ApplyLocalTransfromFromHoudiniToUnityForInstance(::HoudiniEngineUnity::HAPI_Transform& a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HAPI_Transform&, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_APPLYLOCALTRANSFROMFROMHOUDINITOUNITYFORINSTANCE_OFFSET))(a1, a2);
		}

		static ::System::Void ApplyMatrixToLocalTransform(::UnityEngine::Matrix4x4& a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_APPLYMATRIXTOLOCALTRANSFORM_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Matrix4x4 GetMatrixFromHAPITransform(::HoudiniEngineUnity::HAPI_Transform& a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Matrix4x4(*)(::HoudiniEngineUnity::HAPI_Transform&, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETMATRIXFROMHAPITRANSFORM_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Quaternion GetQuaternion(::UnityEngine::Matrix4x4& a1)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETQUATERNION_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 GetPosition(::UnityEngine::Matrix4x4& a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETPOSITION_OFFSET))(a1);
		}

		static ::System::Void SetMatrixPosition(::UnityEngine::Matrix4x4& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_SETMATRIXPOSITION_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 GetScale(::UnityEngine::Matrix4x4& a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETSCALE_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::HAPI_TransformEuler GetHAPITransformFromMatrix(::UnityEngine::Matrix4x4& a1)
		{
			return ((::HoudiniEngineUnity::HAPI_TransformEuler(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETHAPITRANSFORMFROMMATRIX_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::HAPI_TransformEuler GetHAPITransform(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::HoudiniEngineUnity::HAPI_TransformEuler(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETHAPITRANSFORM_OFFSET))(a1, a2, a3);
		}

		static ::HoudiniEngineUnity::HAPI_Transform GetHAPITransformQuatFromMatrix(::UnityEngine::Matrix4x4& a1)
		{
			return ((::HoudiniEngineUnity::HAPI_Transform(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETHAPITRANSFORMQUATFROMMATRIX_OFFSET))(a1);
		}

		static ::UnityEngine::Matrix4x4 GetMatrix4x4(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETMATRIX4X4_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsSameTransform(::UnityEngine::Matrix4x4& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISSAMETRANSFORM_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean IsEqualTol(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISEQUALTOL_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsTransformEqual(::HoudiniEngineUnity::HAPI_Transform& a1, ::HoudiniEngineUnity::HAPI_Transform& a2)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HAPI_Transform&, ::HoudiniEngineUnity::HAPI_Transform&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISTRANSFORMEQUAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsViewportEqual(::HoudiniEngineUnity::HAPI_Viewport& a1, ::HoudiniEngineUnity::HAPI_Viewport& a2)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HAPI_Viewport&, ::HoudiniEngineUnity::HAPI_Viewport&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISVIEWPORTEQUAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsSessionSyncEqual(::HoudiniEngineUnity::HAPI_SessionSyncInfo& a1, ::HoudiniEngineUnity::HAPI_SessionSyncInfo& a2)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HAPI_SessionSyncInfo&, ::HoudiniEngineUnity::HAPI_SessionSyncInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISSESSIONSYNCEQUAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DoesGeoPartHaveAttribute(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::HoudiniEngineUnity::HAPI_AttributeOwner a5, ::HoudiniEngineUnity::HAPI_AttributeInfo& a6)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::HoudiniEngineUnity::HAPI_AttributeOwner, ::HoudiniEngineUnity::HAPI_AttributeInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_DOESGEOPARTHAVEATTRIBUTE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void SetAnimationCurveTangentModes(::UnityEngine::AnimationCurve* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_SETANIMATIONCURVETANGENTMODES_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsSupportedPolygonType(::HoudiniEngineUnity::HAPI_PartType a1)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HAPI_PartType))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISSUPPORTEDPOLYGONTYPE_OFFSET))(a1);
		}

		static ::System::Int32 GetParentNodeID(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETPARENTNODEID_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetObjectInfos(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::HoudiniEngineUnity::HAPI_NodeInfo& a3, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ObjectInfo>*& a4, ::Il2CppArray<::HoudiniEngineUnity::HAPI_Transform>*& a5)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::HoudiniEngineUnity::HAPI_NodeInfo&, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ObjectInfo>*&, ::Il2CppArray<::HoudiniEngineUnity::HAPI_Transform>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETOBJECTINFOS_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean ContainsSopNodes(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CONTAINSSOPNODES_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsObjNodeFullyVisible(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISOBJNODEFULLYVISIBLE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean GetOutputIndex(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETOUTPUTINDEX_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GatherAllAssetGeoInfos(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HAPI_AssetInfo a2, ::HoudiniEngineUnity::HAPI_ObjectInfo a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_GeoInfo>*& a6)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_AssetInfo, ::HoudiniEngineUnity::HAPI_ObjectInfo, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_GeoInfo>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GATHERALLASSETGEOINFOS_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void GatherAllObjectGeoInfos(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_GeoInfo>*& a4)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_GeoInfo>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GATHERALLOBJECTGEOINFOS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void GatherAllAssetOutputs(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_GeoInfo>*& a5)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_GeoInfo>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GATHERALLASSETOUTPUTS_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::String* ToHapiVariableName(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_TOHAPIVARIABLENAME_OFFSET))(a1);
		}

		static ::System::Void ConvertPositionUnityToHoudini(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CONVERTPOSITIONUNITYTOHOUDINI_OFFSET))(a1);
		}

		static ::System::Void ConvertPositionUnityToHoudini_1(::UnityEngine::Vector3 a1, ::System::Single& a2, ::System::Single& a3, ::System::Single& a4)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CONVERTPOSITIONUNITYTOHOUDINI_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector3 ConvertPositionUnityToHoudini_2(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CONVERTPOSITIONUNITYTOHOUDINI_2_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 ConvertPositionUnityToHoudini_3(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CONVERTPOSITIONUNITYTOHOUDINI_3_OFFSET))(a1);
		}

		static ::System::Void ConvertPositionUnityToHoudini_4(::System::Single a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector3& a4)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CONVERTPOSITIONUNITYTOHOUDINI_4_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ConvertRotationUnityToHoudini(::UnityEngine::Quaternion& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CONVERTROTATIONUNITYTOHOUDINI_OFFSET))(a1);
		}

		static ::System::Void ConvertRotationUnityToHoudini_1(::UnityEngine::Quaternion a1, ::System::Single& a2, ::System::Single& a3, ::System::Single& a4, ::System::Single& a5)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CONVERTROTATIONUNITYTOHOUDINI_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Quaternion ConvertRotationUnityToHoudini_2(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::Quaternion(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CONVERTROTATIONUNITYTOHOUDINI_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Quaternion ConvertRotationUnityToHoudini_3(::UnityEngine::Quaternion a1)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CONVERTROTATIONUNITYTOHOUDINI_3_OFFSET))(a1);
		}

		static ::System::Void ConvertScaleUnityToHoudini(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CONVERTSCALEUNITYTOHOUDINI_OFFSET))(a1);
		}

		static ::System::Void ConvertScaleUnityToHoudini_1(::UnityEngine::Vector3 a1, ::System::Single& a2, ::System::Single& a3, ::System::Single& a4)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CONVERTSCALEUNITYTOHOUDINI_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector3 ConvertScaleUnityToHoudini_2(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CONVERTSCALEUNITYTOHOUDINI_2_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 ConvertScaleUnityToHoudini_3(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CONVERTSCALEUNITYTOHOUDINI_3_OFFSET))(a1);
		}
	};
}
