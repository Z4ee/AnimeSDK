#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_AssetInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_AttributeInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_AttributeOwner.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_Transform.h"
#include "unitysdk/HoudiniEngineUnity/TransformData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class HEU_Handle; }
namespace HoudiniEngineUnity { class HEU_HoudiniAssetRoot; }
namespace HoudiniEngineUnity { class HEU_OutputAttribute; }
namespace HoudiniEngineUnity { class HEU_Parameters; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace HoudiniEngineUnity { template <typename T1, typename T2, typename T3> class HEU_GeneralUtility_GetArray3ArgDel_3; }
namespace HoudiniEngineUnity { template <typename T1, typename T2> class HEU_GeneralUtility_GetArray2ArgDel_2; }
namespace HoudiniEngineUnity { template <typename T> class HEU_GeneralUtility_GetArray1ArgDel_1; }
namespace HoudiniEngineUnity { template <typename T> class HEU_GeneralUtility_GetAttributeArrayInputFunc_1; }
namespace HoudiniEngineUnity { template <typename T> class HEU_GeneralUtility_SetAttributeArrayFunc_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshCollider; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_APPLYTRANSFORMTO_OFFSET UNITYSDK_OFFSET(0x841D220)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_ASSIGNUNITYLAYER_OFFSET UNITYSDK_OFFSET(0x8418250)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_ASSIGNUNITYTAG_OFFSET UNITYSDK_OFFSET(0x8417ED0)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_ATTACHSCRIPTWITHINVOKEFUNCTION_OFFSET UNITYSDK_OFFSET(0x8421380)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_CHECKATTRIBUTEEXISTS_OFFSET UNITYSDK_OFFSET(0x841CAF0)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_COLORTOSTRING_OFFSET UNITYSDK_OFFSET(0x841F820)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_COPYCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x8421E70)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_COPYFLAGS_OFFSET UNITYSDK_OFFSET(0x84177F0)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_COPYHAPITRANSFORM_OFFSET UNITYSDK_OFFSET(0x8422420)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_COPYLOCALTRANSFORMVALUES_OFFSET UNITYSDK_OFFSET(0x841D620)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_COPYWORLDTRANSFORMVALUES_OFFSET UNITYSDK_OFFSET(0x841D130)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_CREATEOUTPUTATTRIBUTEHELPER_OFFSET UNITYSDK_OFFSET(0x841D0C0)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_CREATEOUTPUTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x841CC70)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_DESTROYBAKEDGAMEOBJECTSWITHENDNAME_OFFSET UNITYSDK_OFFSET(0x841E790)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_DESTROYBAKEDGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x841E780)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_DESTROYGENERATEDCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x841E320)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_DESTROYGENERATEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x841F290)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_DESTROYGENERATEDMESHCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x841E3C0)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_DESTROYGENERATEDMESHMATERIALSLODGROUPS_OFFSET UNITYSDK_OFFSET(0x841E930)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_DESTROYIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x8417320)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_DESTROYLODGROUP_OFFSET UNITYSDK_OFFSET(0x841EC50)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_DESTROYMESHCOLLIDER_OFFSET UNITYSDK_OFFSET(0x841F590)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_DESTROYTERRAINCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x841E430)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_DOESUNITYTAGEXIST_OFFSET UNITYSDK_OFFSET(0x841FD00)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_FINDORGENERATEHANDLES_OFFSET UNITYSDK_OFFSET(0x84217A0)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETATTRIBUTECOLORSINGLE_OFFSET UNITYSDK_OFFSET(0x84210C0)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETATTRIBUTEFLOATSINGLE_OFFSET UNITYSDK_OFFSET(0x8420DA0)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETATTRIBUTEINFO_OFFSET UNITYSDK_OFFSET(0x841CB50)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETATTRIBUTEINTSINGLE_OFFSET UNITYSDK_OFFSET(0x8420F30)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETATTRIBUTESTRINGDATAHELPER_OFFSET UNITYSDK_OFFSET(0x841C750)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETATTRIBUTESTRINGDATA_OFFSET UNITYSDK_OFFSET(0x841C9B0)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETATTRIBUTESTRINGVALUESINGLESTRICT_OFFSET UNITYSDK_OFFSET(0x8420770)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETATTRIBUTESTRINGVALUESINGLE_OFFSET UNITYSDK_OFFSET(0x8420340)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETCHILDGAMEOBJECTSWITHNAMEPATTERN_OFFSET UNITYSDK_OFFSET(0x841DA30)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETCHILDGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x841D710)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETGAMEOBJECTBYNAMEINPROJECTONLY_OFFSET UNITYSDK_OFFSET(0x841DF60)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETGAMEOBJECTBYNAMEINSCENE_OFFSET UNITYSDK_OFFSET(0x841E1C0)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETGAMEOBJECTBYNAME_OFFSET UNITYSDK_OFFSET(0x841DE40)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETHDABYGAMEOBJECTNAMEINSCENE_OFFSET UNITYSDK_OFFSET(0x841E270)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETINSTANCECHILDOBJECTS_OFFSET UNITYSDK_OFFSET(0x841DDC0)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETLODTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x841EF10)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETMATERIALATTRIBUTEVALUEFROMPART_OFFSET UNITYSDK_OFFSET(0x84225A0)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETNONINSTANCECHILDOBJECTS_OFFSET UNITYSDK_OFFSET(0x841DE00)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETSYSTEMTYPEBYNAME_OFFSET UNITYSDK_OFFSET(0x8420020)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETUNITYSCRIPTATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x84200D0)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_HASATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x8421300)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_HASVALIDINSTANCEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x841CBD0)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_ISGAMEOBJECTINPROJECT_OFFSET UNITYSDK_OFFSET(0x841E110)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_ISINCAMERAVIEW_OFFSET UNITYSDK_OFFSET(0x8421710)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_ISMOUSEOVERRECT_OFFSET UNITYSDK_OFFSET(0x841FFB0)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_ISMOUSEWITHINSCENEVIEW_OFFSET UNITYSDK_OFFSET(0x841FF30)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_LOADTEXTUREFROMFILE_OFFSET UNITYSDK_OFFSET(0x8421E80)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_MAKESTATICIFHASATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x8418590)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_MAKETEXTURE_OFFSET UNITYSDK_OFFSET(0x84220F0)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_REPLACECOLLIDERMESHFROMMESHCOLLIDER_OFFSET UNITYSDK_OFFSET(0x84227D0)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_REPLACECOLLIDERMESHFROMMESHFILTER_OFFSET UNITYSDK_OFFSET(0x84175B0)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_REPLACEFIRSTOCCURRENCE_OFFSET UNITYSDK_OFFSET(0x8422300)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_SETGAMEOBJECTCHILDRENCOLLIDERSTATE_OFFSET UNITYSDK_OFFSET(0x8417E30)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_SETGAMEOBJECTCHILDRENRENDERVISIBILITY_OFFSET UNITYSDK_OFFSET(0x8417CC0)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_SETGAMEOBJECTCOLLIDERSTATE_OFFSET UNITYSDK_OFFSET(0x8417D60)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_SETGAMEOBJECTRENDERVISIBLITY_OFFSET UNITYSDK_OFFSET(0x8417C20)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_SETLAYER_OFFSET UNITYSDK_OFFSET(0x841FD10)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_SETLODTRANSFORMVALUES_OFFSET UNITYSDK_OFFSET(0x841F080)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_SETPARENTWITHCLEANTRANSFORM_OFFSET UNITYSDK_OFFSET(0x8422390)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_SETTAG_OFFSET UNITYSDK_OFFSET(0x841FE20)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_STRINGTOCOLOR_OFFSET UNITYSDK_OFFSET(0x841FBB0)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY_UPDATEGENERATEDATTRIBUTESTORE_OFFSET UNITYSDK_OFFSET(0x8414A20)
#define HOUDINIENGINEUNITY_HEU_GENERALUTILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x8422970)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_GeneralUtility_TypeDefinitionIndex = 37806;

	class HEU_GeneralUtility : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void GetAttributeStringDataHelper(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::String* name, ::HoudiniEngineUnity::HAPI_AttributeInfo& info, ::Il2CppArray<::System::Int32>*& data)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::HoudiniEngineUnity::HAPI_AttributeInfo&, ::Il2CppArray<::System::Int32>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETATTRIBUTESTRINGDATAHELPER_OFFSET))(session, geoID, partID, name, info, data);
		}

		static ::Il2CppArray<::System::String*>* GetAttributeStringData(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::String* name, ::HoudiniEngineUnity::HAPI_AttributeInfo& attrInfo)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::HoudiniEngineUnity::HAPI_AttributeInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETATTRIBUTESTRINGDATA_OFFSET))(session, geoID, partID, name, attrInfo);
		}

		static ::System::Boolean CheckAttributeExists(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::String* attribName, ::HoudiniEngineUnity::HAPI_AttributeOwner attribOwner)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::HoudiniEngineUnity::HAPI_AttributeOwner))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_CHECKATTRIBUTEEXISTS_OFFSET))(session, geoID, partID, attribName, attribOwner);
		}

		static ::System::Boolean GetAttributeInfo(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::String* attribName, ::HoudiniEngineUnity::HAPI_AttributeInfo& attribInfo)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::HoudiniEngineUnity::HAPI_AttributeInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETATTRIBUTEINFO_OFFSET))(session, geoID, partID, attribName, attribInfo);
		}

		static ::System::Boolean HasValidInstanceAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::String* attribName)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_HASVALIDINSTANCEATTRIBUTE_OFFSET))(session, geoID, partID, attribName);
		}

		static ::System::Void UpdateGeneratedAttributeStore(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_UPDATEGENERATEDATTRIBUTESTORE_OFFSET))(session, geoID, partID, go);
		}

		static ::HoudiniEngineUnity::HEU_OutputAttribute* CreateOutputAttributeHelper(::System::String* attrName, ::HoudiniEngineUnity::HAPI_AttributeInfo& attrInfo)
		{
			return ((::HoudiniEngineUnity::HEU_OutputAttribute*(*)(::System::String*, ::HoudiniEngineUnity::HAPI_AttributeInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_CREATEOUTPUTATTRIBUTEHELPER_OFFSET))(attrName, attrInfo);
		}

		static ::HoudiniEngineUnity::HEU_OutputAttribute* CreateOutputAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::String* attrName, ::HoudiniEngineUnity::HAPI_AttributeInfo& attrInfo)
		{
			return ((::HoudiniEngineUnity::HEU_OutputAttribute*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::HoudiniEngineUnity::HAPI_AttributeInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_CREATEOUTPUTATTRIBUTE_OFFSET))(session, geoID, partID, attrName, attrInfo);
		}

		static ::System::Void CopyWorldTransformValues(::UnityEngine::Transform* src, ::UnityEngine::Transform* dest)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_COPYWORLDTRANSFORMVALUES_OFFSET))(src, dest);
		}

		static ::System::Void ApplyTransformTo(::UnityEngine::Transform* src, ::UnityEngine::Transform* target)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_APPLYTRANSFORMTO_OFFSET))(src, target);
		}

		static ::System::Void CopyLocalTransformValues(::UnityEngine::Transform* src, ::UnityEngine::Transform* dest)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_COPYLOCALTRANSFORMVALUES_OFFSET))(src, dest);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetChildGameObjects(::UnityEngine::GameObject* parentGO)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETCHILDGAMEOBJECTS_OFFSET))(parentGO);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetChildGameObjectsWithNamePattern(::UnityEngine::GameObject* parentGO, ::System::String* pattern, ::System::Boolean bExclude)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::UnityEngine::GameObject*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETCHILDGAMEOBJECTSWITHNAMEPATTERN_OFFSET))(parentGO, pattern, bExclude);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetInstanceChildObjects(::UnityEngine::GameObject* parentGO)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETINSTANCECHILDOBJECTS_OFFSET))(parentGO);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetNonInstanceChildObjects(::UnityEngine::GameObject* parentGO)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETNONINSTANCECHILDOBJECTS_OFFSET))(parentGO);
		}

		static ::UnityEngine::GameObject* GetGameObjectByName(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* goList, ::System::String* name)
		{
			return ((::UnityEngine::GameObject*(*)(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETGAMEOBJECTBYNAME_OFFSET))(goList, name);
		}

		static ::UnityEngine::GameObject* GetGameObjectByNameInProjectOnly(::System::String* name)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETGAMEOBJECTBYNAMEINPROJECTONLY_OFFSET))(name);
		}

		static ::System::Boolean IsGameObjectInProject(::UnityEngine::GameObject* go)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_ISGAMEOBJECTINPROJECT_OFFSET))(go);
		}

		static ::UnityEngine::GameObject* GetGameObjectByNameInScene(::System::String* name)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETGAMEOBJECTBYNAMEINSCENE_OFFSET))(name);
		}

		static ::HoudiniEngineUnity::HEU_HoudiniAssetRoot* GetHDAByGameObjectNameInScene(::System::String* name)
		{
			return ((::HoudiniEngineUnity::HEU_HoudiniAssetRoot*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETHDABYGAMEOBJECTNAMEINSCENE_OFFSET))(name);
		}

		static ::System::Void DestroyGeneratedComponents(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_DESTROYGENERATEDCOMPONENTS_OFFSET))(gameObject);
		}

		static ::System::Void DestroyGeneratedMeshComponents(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_DESTROYGENERATEDMESHCOMPONENTS_OFFSET))(gameObject);
		}

		static ::System::Void DestroyTerrainComponents(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_DESTROYTERRAINCOMPONENTS_OFFSET))(gameObject);
		}

		static ::System::Void DestroyImmediate(::UnityEngine::Object* obj, ::System::Boolean bAllowDestroyingAssets, ::System::Boolean bRegisterUndo)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_DESTROYIMMEDIATE_OFFSET))(obj, bAllowDestroyingAssets, bRegisterUndo);
		}

		static ::System::Void DestroyBakedGameObjects(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* gameObjectsToDestroy)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_DESTROYBAKEDGAMEOBJECTS_OFFSET))(gameObjectsToDestroy);
		}

		static ::System::Void DestroyBakedGameObjectsWithEndName(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* gameObjectsToDestroy, ::System::String* endName)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_DESTROYBAKEDGAMEOBJECTSWITHENDNAME_OFFSET))(gameObjectsToDestroy, endName);
		}

		static ::System::Void DestroyLODGroup(::UnityEngine::GameObject* targetGO, ::System::Boolean bDontDeletePersistantResources)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_DESTROYLODGROUP_OFFSET))(targetGO, bDontDeletePersistantResources);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* GetLODTransforms(::UnityEngine::GameObject* targetGO)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETLODTRANSFORMS_OFFSET))(targetGO);
		}

		static ::System::Void SetLODTransformValues(::UnityEngine::GameObject* targetGO, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* transformData)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_SETLODTRANSFORMVALUES_OFFSET))(targetGO, transformData);
		}

		static ::System::Void DestroyGeneratedMeshMaterialsLODGroups(::UnityEngine::GameObject* targetGO, ::System::Boolean bDontDeletePersistantResources)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_DESTROYGENERATEDMESHMATERIALSLODGROUPS_OFFSET))(targetGO, bDontDeletePersistantResources);
		}

		static ::System::Void DestroyGeneratedMaterial(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_DESTROYGENERATEDMATERIAL_OFFSET))(material);
		}

		static ::System::Void DestroyMeshCollider(::UnityEngine::MeshCollider* meshCollider, ::System::Boolean bDontDeletePersistantResources)
		{
			return ((::System::Void(*)(::UnityEngine::MeshCollider*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_DESTROYMESHCOLLIDER_OFFSET))(meshCollider, bDontDeletePersistantResources);
		}

		static ::System::Void SetGameObjectRenderVisiblity(::UnityEngine::GameObject* gameObject, ::System::Boolean bVisible)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_SETGAMEOBJECTRENDERVISIBLITY_OFFSET))(gameObject, bVisible);
		}

		static ::System::Void SetGameObjectChildrenRenderVisibility(::UnityEngine::GameObject* gameObject, ::System::Boolean bVisible)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_SETGAMEOBJECTCHILDRENRENDERVISIBILITY_OFFSET))(gameObject, bVisible);
		}

		static ::System::Void SetGameObjectColliderState(::UnityEngine::GameObject* gameObject, ::System::Boolean bEnabled)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_SETGAMEOBJECTCOLLIDERSTATE_OFFSET))(gameObject, bEnabled);
		}

		static ::System::Void SetGameObjectChildrenColliderState(::UnityEngine::GameObject* gameObject, ::System::Boolean bVisible)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_SETGAMEOBJECTCHILDRENCOLLIDERSTATE_OFFSET))(gameObject, bVisible);
		}

		static ::System::String* ColorToString(::UnityEngine::Color c)
		{
			return ((::System::String*(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_COLORTOSTRING_OFFSET))(c);
		}

		static ::UnityEngine::Color StringToColor(::System::String* colorString)
		{
			return ((::UnityEngine::Color(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_STRINGTOCOLOR_OFFSET))(colorString);
		}

		static ::System::Boolean DoesUnityTagExist(::System::String* tagName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_DOESUNITYTAGEXIST_OFFSET))(tagName);
		}

		static ::System::Void SetLayer(::UnityEngine::GameObject* rootGO, ::System::Int32 layer, ::System::Boolean bIncludeChildren)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_SETLAYER_OFFSET))(rootGO, layer, bIncludeChildren);
		}

		static ::System::Void SetTag(::UnityEngine::GameObject* rootGO, ::System::String* tag, ::System::Boolean bIncludeChildren)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_SETTAG_OFFSET))(rootGO, tag, bIncludeChildren);
		}

		static ::System::Void CopyFlags(::UnityEngine::GameObject* srcGO, ::UnityEngine::GameObject* dstGO, ::System::Boolean bIncludeChildren)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_COPYFLAGS_OFFSET))(srcGO, dstGO, bIncludeChildren);
		}

		static ::System::Boolean IsMouseWithinSceneView(::UnityEngine::Camera* camera, ::UnityEngine::Vector2 mousePosition)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_ISMOUSEWITHINSCENEVIEW_OFFSET))(camera, mousePosition);
		}

		static ::System::Boolean IsMouseOverRect(::UnityEngine::Camera* camera, ::UnityEngine::Vector2 mousePosition, ::UnityEngine::Rect& rect)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Vector2, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_ISMOUSEOVERRECT_OFFSET))(camera, mousePosition, rect);
		}

		static ::System::Type* GetSystemTypeByName(::System::String* typeName)
		{
			return ((::System::Type*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETSYSTEMTYPEBYNAME_OFFSET))(typeName);
		}

		static ::System::Void AssignUnityTag(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_ASSIGNUNITYTAG_OFFSET))(session, geoID, partID, gameObject);
		}

		static ::System::Void AssignUnityLayer(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_ASSIGNUNITYLAYER_OFFSET))(session, geoID, partID, gameObject);
		}

		static ::System::Void MakeStaticIfHasAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_MAKESTATICIFHASATTRIBUTE_OFFSET))(session, geoID, partID, gameObject);
		}

		static ::System::String* GetUnityScriptAttributeValue(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID)
		{
			return ((::System::String*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETUNITYSCRIPTATTRIBUTEVALUE_OFFSET))(session, geoID, partID);
		}

		static ::System::String* GetAttributeStringValueSingle(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::String* attrName, ::HoudiniEngineUnity::HAPI_AttributeOwner attrOwner)
		{
			return ((::System::String*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::HoudiniEngineUnity::HAPI_AttributeOwner))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETATTRIBUTESTRINGVALUESINGLE_OFFSET))(session, geoID, partID, attrName, attrOwner);
		}

		static ::System::String* GetAttributeStringValueSingleStrict(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::String* attrName, ::HoudiniEngineUnity::HAPI_AttributeOwner attrOwner)
		{
			return ((::System::String*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::HoudiniEngineUnity::HAPI_AttributeOwner))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETATTRIBUTESTRINGVALUESINGLESTRICT_OFFSET))(session, geoID, partID, attrName, attrOwner);
		}

		static ::System::Boolean GetAttributeFloatSingle(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::String* attrName, ::System::Single& value)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETATTRIBUTEFLOATSINGLE_OFFSET))(session, geoID, partID, attrName, value);
		}

		static ::System::Boolean GetAttributeIntSingle(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::String* attrName, ::System::Int32& value)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETATTRIBUTEINTSINGLE_OFFSET))(session, geoID, partID, attrName, value);
		}

		static ::System::Boolean GetAttributeColorSingle(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::String* attrName, ::UnityEngine::Color& value)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETATTRIBUTECOLORSINGLE_OFFSET))(session, geoID, partID, attrName, value);
		}

		static ::System::Boolean HasAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::String* attrName, ::HoudiniEngineUnity::HAPI_AttributeOwner attrOwner)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::HoudiniEngineUnity::HAPI_AttributeOwner))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_HASATTRIBUTE_OFFSET))(session, geoID, partID, attrName, attrOwner);
		}

		static ::System::Void AttachScriptWithInvokeFunction(::System::String* scriptSet, ::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_ATTACHSCRIPTWITHINVOKEFUNCTION_OFFSET))(scriptSet, gameObject);
		}

		static ::System::Boolean IsInCameraView(::UnityEngine::Camera* camera, ::UnityEngine::Vector3 point)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_ISINCAMERAVIEW_OFFSET))(camera, point);
		}

		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Handle*>* FindOrGenerateHandles(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HAPI_AssetInfo& assetInfo, ::System::Int32 assetID, ::System::String* assetName, ::HoudiniEngineUnity::HEU_Parameters* parameters, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Handle*>* currentHandles)
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Handle*>*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_AssetInfo&, ::System::Int32, ::System::String*, ::HoudiniEngineUnity::HEU_Parameters*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Handle*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_FINDORGENERATEHANDLES_OFFSET))(session, assetInfo, assetID, assetName, parameters, currentHandles);
		}

		static ::System::Void CopyComponents(::UnityEngine::GameObject* srcGO, ::UnityEngine::GameObject* destGO)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_COPYCOMPONENTS_OFFSET))(srcGO, destGO);
		}

		static ::UnityEngine::Texture* LoadTextureFromFile(::System::String* filePath)
		{
			return ((::UnityEngine::Texture*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_LOADTEXTUREFROMFILE_OFFSET))(filePath);
		}

		static ::UnityEngine::Texture2D* MakeTexture(::System::Int32 width, ::System::Int32 height, ::UnityEngine::Color color)
		{
			return ((::UnityEngine::Texture2D*(*)(::System::Int32, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_MAKETEXTURE_OFFSET))(width, height, color);
		}

		static ::System::String* ReplaceFirstOccurrence(::System::String* srcStr, ::System::String* searchStr, ::System::String* replaceStr)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_REPLACEFIRSTOCCURRENCE_OFFSET))(srcStr, searchStr, replaceStr);
		}

		static ::System::Void SetParentWithCleanTransform(::UnityEngine::Transform* parentTransform, ::UnityEngine::Transform* childTransform)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_SETPARENTWITHCLEANTRANSFORM_OFFSET))(parentTransform, childTransform);
		}

		static ::System::Void CopyHAPITransform(::HoudiniEngineUnity::HAPI_Transform& src, ::HoudiniEngineUnity::HAPI_Transform& dest)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HAPI_Transform&, ::HoudiniEngineUnity::HAPI_Transform&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_COPYHAPITRANSFORM_OFFSET))(src, dest);
		}

		static ::System::String* GetMaterialAttributeValueFromPart(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID)
		{
			return ((::System::String*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_GETMATERIALATTRIBUTEVALUEFROMPART_OFFSET))(session, geoID, partID);
		}

		static ::System::Void ReplaceColliderMeshFromMeshFilter(::UnityEngine::GameObject* targetGO, ::UnityEngine::GameObject* sourceColliderGO)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_REPLACECOLLIDERMESHFROMMESHFILTER_OFFSET))(targetGO, sourceColliderGO);
		}

		static ::System::Void ReplaceColliderMeshFromMeshCollider(::UnityEngine::GameObject* targetGO, ::UnityEngine::GameObject* sourceColliderGO)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERALUTILITY_REPLACECOLLIDERMESHFROMMESHCOLLIDER_OFFSET))(targetGO, sourceColliderGO);
		}
	};
}
