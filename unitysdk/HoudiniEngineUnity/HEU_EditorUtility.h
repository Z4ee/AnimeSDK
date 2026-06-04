#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_EditorUtility_HEU_ReplacePrefabOptions.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAssetRoot; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_BAKEANDREPLACEALLINSCENE_OFFSET UNITYSDK_OFFSET(0x17EBFB90)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_BAKEANDREPLACEASSETS_OFFSET UNITYSDK_OFFSET(0x17EBFB20)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_BAKEANDREPLACESELECTEDINSCENE_OFFSET UNITYSDK_OFFSET(0x17EBFA50)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_CLEARPROGRESSBAR_OFFSET UNITYSDK_OFFSET(0x17EBF370)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_COLLECTDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x17EBF270)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_COOKALL_OFFSET UNITYSDK_OFFSET(0x17EBF7B0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_COOKASSETS_OFFSET UNITYSDK_OFFSET(0x17EBF770)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_COOKSELECTED_OFFSET UNITYSDK_OFFSET(0x17EBF6D0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_DISCONNECTPREFABINSTANCE_OFFSET UNITYSDK_OFFSET(0x17EBF210)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_DISPLAYDIALOG_OFFSET UNITYSDK_OFFSET(0x17EBF3C0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_DISPLAYERRORDIALOG_OFFSET UNITYSDK_OFFSET(0x17EBF4A0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_DISPLAYPROGRESSBAR_OFFSET UNITYSDK_OFFSET(0x17EBF330)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_EDITORSAVEFOLDERPANEL_OFFSET UNITYSDK_OFFSET(0x17EBFED0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_EXPORTALLASSETSTOGEOFILES_OFFSET UNITYSDK_OFFSET(0x17EBFE30)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_EXPORTASSETSTOGEOFILES_OFFSET UNITYSDK_OFFSET(0x17EBFD30)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_EXPORTSELECTEDASSETSTOGEOFILES_OFFSET UNITYSDK_OFFSET(0x17EBFCC0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETALLASSETROOTS_OFFSET UNITYSDK_OFFSET(0x17EBF630)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETOBJECTPARENTFOLDERHELPER_OFFSET UNITYSDK_OFFSET(0x17EBFF30)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETOBJECTPARENTFOLDER_OFFSET UNITYSDK_OFFSET(0x17EBFF20)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETPREFABASSETPATH_OFFSET UNITYSDK_OFFSET(0x17EBF1D0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETPREFABASSET_OFFSET UNITYSDK_OFFSET(0x17EBF190)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETSELECTEDASSETROOTS_OFFSET UNITYSDK_OFFSET(0x17EBF5D0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETSELECTEDOBJECTSMEANPOSITION_OFFSET UNITYSDK_OFFSET(0x17EBF060)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETSELECTEDOBJECTSMEANTRANSFORM_OFFSET UNITYSDK_OFFSET(0x17EBF080)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETSELECTEDOBJECTS_OFFSET UNITYSDK_OFFSET(0x17EBF5C0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETUNIQUENAMEFORSIBLING_OFFSET UNITYSDK_OFFSET(0x17EBF2F0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_INSTANTIATEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x17EB37D0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_INSTANTIATEPREFAB_OFFSET UNITYSDK_OFFSET(0x17EB3790)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_ISDISCONNECTEDPREFABINSTANCE_OFFSET UNITYSDK_OFFSET(0x17EBF150)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_ISEDITINGINPREFABMODE_OFFSET UNITYSDK_OFFSET(0x17EBF140)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_ISEDITORNOTINPLAYMODEANDNOTGOINGTOPLAYMODE_OFFSET UNITYSDK_OFFSET(0x17EBF3B0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_ISEDITORPLAYING_OFFSET UNITYSDK_OFFSET(0x17EBD770)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_ISPERSISTANT_OFFSET UNITYSDK_OFFSET(0x17EBF2B0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_ISPREFABASSET_OFFSET UNITYSDK_OFFSET(0x17EB3750)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_ISPREFABINSTANCE_OFFSET UNITYSDK_OFFSET(0x17EBF100)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_MARKSCENEDIRTY_OFFSET UNITYSDK_OFFSET(0x17EBF040)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_PREFABISADDEDCOMPONENTOVERRIDE_OFFSET UNITYSDK_OFFSET(0x17EBF0B0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_QUERYSELECTEDMESHTOPOLOGY_OFFSET UNITYSDK_OFFSET(0x17EBFF10)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_REBUILDALL_OFFSET UNITYSDK_OFFSET(0x17EBF970)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_REBUILDASSETS_OFFSET UNITYSDK_OFFSET(0x17EBF930)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_REBUILDSELECTED_OFFSET UNITYSDK_OFFSET(0x17EBF890)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_RELEASEDMOUSE_OFFSET UNITYSDK_OFFSET(0x17EBFF60)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_REPAINTSCENE_OFFSET UNITYSDK_OFFSET(0x17EBFF40)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_REPLACEPREFAB_OFFSET UNITYSDK_OFFSET(0x17EBF0C0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_REVEALINFINDER_OFFSET UNITYSDK_OFFSET(0x17EBF580)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_SAVEASPREFABASSET_OFFSET UNITYSDK_OFFSET(0x17EAEAC0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_SELECTOBJECTS_OFFSET UNITYSDK_OFFSET(0x17EBF050)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_SELECTOBJECT_OFFSET UNITYSDK_OFFSET(0x17E9B0E0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_SETISHIDDEN_OFFSET UNITYSDK_OFFSET(0x17EBF5B0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_SETOBJECTDIRTYFOREDITORUPDATE_OFFSET UNITYSDK_OFFSET(0x17EBF590)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_SETSTATIC_OFFSET UNITYSDK_OFFSET(0x17EBF5A0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_SETTEXTURETONORMALMAP_OFFSET UNITYSDK_OFFSET(0x17EBFF50)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_UNDOCOLLAPSECURRENTGROUP_OFFSET UNITYSDK_OFFSET(0x17EBF260)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_UNDORECORDOBJECT_OFFSET UNITYSDK_OFFSET(0x17EBF250)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_EditorUtility_TypeDefinitionIndex = 37657;

	class HEU_EditorUtility : public ::System::Object
	{
	public:
		static ::System::Void MarkSceneDirty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_MARKSCENEDIRTY_OFFSET))();
		}

		static ::System::Void SelectObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_SELECTOBJECT_OFFSET))(a1);
		}

		static ::System::Void SelectObjects(::Il2CppArray<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_SELECTOBJECTS_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 GetSelectedObjectsMeanPosition()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETSELECTEDOBJECTSMEANPOSITION_OFFSET))();
		}

		static ::UnityEngine::Matrix4x4 GetSelectedObjectsMeanTransform()
		{
			return ((::UnityEngine::Matrix4x4(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETSELECTEDOBJECTSMEANTRANSFORM_OFFSET))();
		}

		static ::UnityEngine::GameObject* SaveAsPrefabAsset(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_SAVEASPREFABASSET_OFFSET))(a1, a2);
		}

		static ::System::Boolean PrefabIsAddedComponentOverride(::UnityEngine::Component* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_PREFABISADDEDCOMPONENTOVERRIDE_OFFSET))(a1);
		}

		static ::System::Boolean IsEditorPlaying()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_ISEDITORPLAYING_OFFSET))();
		}

		static ::UnityEngine::GameObject* ReplacePrefab(::UnityEngine::GameObject* a1, ::UnityEngine::Object* a2, ::HoudiniEngineUnity::HEU_EditorUtility_HEU_ReplacePrefabOptions a3)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::UnityEngine::Object*, ::HoudiniEngineUnity::HEU_EditorUtility_HEU_ReplacePrefabOptions))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_REPLACEPREFAB_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsPrefabInstance(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_ISPREFABINSTANCE_OFFSET))(a1);
		}

		static ::System::Boolean IsPrefabAsset(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_ISPREFABASSET_OFFSET))(a1);
		}

		static ::System::Boolean IsEditingInPrefabMode(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_ISEDITINGINPREFABMODE_OFFSET))(a1);
		}

		static ::System::Boolean IsDisconnectedPrefabInstance(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_ISDISCONNECTEDPREFABINSTANCE_OFFSET))(a1);
		}

		static ::UnityEngine::Object* GetPrefabAsset(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETPREFABASSET_OFFSET))(a1);
		}

		static ::System::String* GetPrefabAssetPath(::UnityEngine::Object* a1)
		{
			return ((::System::String*(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETPREFABASSETPATH_OFFSET))(a1);
		}

		static ::System::Void DisconnectPrefabInstance(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_DISCONNECTPREFABINSTANCE_OFFSET))(a1);
		}

		static ::UnityEngine::Object* InstantiatePrefab(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_INSTANTIATEPREFAB_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* InstantiateGameObject(::UnityEngine::GameObject* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_INSTANTIATEGAMEOBJECT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void UndoRecordObject(::UnityEngine::Object* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_UNDORECORDOBJECT_OFFSET))(a1, a2);
		}

		static ::System::Void UndoCollapseCurrentGroup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_UNDOCOLLAPSECURRENTGROUP_OFFSET))();
		}

		static ::Il2CppArray<::UnityEngine::Object*>* CollectDependencies(::UnityEngine::Object* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_COLLECTDEPENDENCIES_OFFSET))(a1);
		}

		static ::System::Boolean IsPersistant(::UnityEngine::Object* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_ISPERSISTANT_OFFSET))(a1);
		}

		static ::System::String* GetUniqueNameForSibling(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETUNIQUENAMEFORSIBLING_OFFSET))(a1, a2);
		}

		static ::System::Void DisplayProgressBar(::System::String* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_DISPLAYPROGRESSBAR_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ClearProgressBar()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_CLEARPROGRESSBAR_OFFSET))();
		}

		static ::System::Boolean IsEditorNotInPlayModeAndNotGoingToPlayMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_ISEDITORNOTINPLAYMODEANDNOTGOINGTOPLAYMODE_OFFSET))();
		}

		static ::System::Boolean DisplayDialog(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_DISPLAYDIALOG_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean DisplayErrorDialog(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_DISPLAYERRORDIALOG_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void RevealInFinder(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_REVEALINFINDER_OFFSET))(a1);
		}

		static ::System::Void SetObjectDirtyForEditorUpdate(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_SETOBJECTDIRTYFOREDITORUPDATE_OFFSET))(a1);
		}

		static ::System::Void SetStatic(::UnityEngine::GameObject* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_SETSTATIC_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetIsHidden(::UnityEngine::GameObject* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_SETISHIDDEN_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::UnityEngine::GameObject*>* GetSelectedObjects()
		{
			return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETSELECTEDOBJECTS_OFFSET))();
		}

		static ::Il2CppArray<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>* GetSelectedAssetRoots()
		{
			return ((::Il2CppArray<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETSELECTEDASSETROOTS_OFFSET))();
		}

		static ::Il2CppArray<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>* GetAllAssetRoots()
		{
			return ((::Il2CppArray<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETALLASSETROOTS_OFFSET))();
		}

		static ::System::Void CookSelected()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_COOKSELECTED_OFFSET))();
		}

		static ::System::Void CookAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_COOKALL_OFFSET))();
		}

		static ::System::Void CookAssets(::Il2CppArray<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_COOKASSETS_OFFSET))(a1);
		}

		static ::System::Void RebuildSelected()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_REBUILDSELECTED_OFFSET))();
		}

		static ::System::Void RebuildAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_REBUILDALL_OFFSET))();
		}

		static ::System::Void RebuildAssets(::Il2CppArray<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_REBUILDASSETS_OFFSET))(a1);
		}

		static ::System::Void BakeAndReplaceSelectedInScene()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_BAKEANDREPLACESELECTEDINSCENE_OFFSET))();
		}

		static ::System::Void BakeAndReplaceAllInScene()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_BAKEANDREPLACEALLINSCENE_OFFSET))();
		}

		static ::System::Void BakeAndReplaceAssets(::Il2CppArray<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_BAKEANDREPLACEASSETS_OFFSET))(a1);
		}

		static ::System::Void ExportSelectedAssetsToGeoFiles()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_EXPORTSELECTEDASSETSTOGEOFILES_OFFSET))();
		}

		static ::System::Void ExportAllAssetsToGeoFiles()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_EXPORTALLASSETSTOGEOFILES_OFFSET))();
		}

		static ::System::Void ExportAssetsToGeoFiles(::Il2CppArray<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_EXPORTASSETSTOGEOFILES_OFFSET))(a1);
		}

		static ::System::String* EditorSaveFolderPanel(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_EDITORSAVEFOLDERPANEL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void QuerySelectedMeshTopology()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_QUERYSELECTEDMESHTOPOLOGY_OFFSET))();
		}

		static ::System::String* GetObjectParentFolder(::UnityEngine::GameObject* a1, ::System::Collections::Generic::HashSet_1<::UnityEngine::Material*>* a2)
		{
			return ((::System::String*(*)(::UnityEngine::GameObject*, ::System::Collections::Generic::HashSet_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETOBJECTPARENTFOLDER_OFFSET))(a1, a2);
		}

		static ::System::String* GetObjectParentFolderHelper(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETOBJECTPARENTFOLDERHELPER_OFFSET))(a1);
		}

		static ::System::Void RepaintScene()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_REPAINTSCENE_OFFSET))();
		}

		static ::System::Void SetTextureToNormalMap(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_SETTEXTURETONORMALMAP_OFFSET))(a1);
		}

		static ::System::Boolean ReleasedMouse()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_RELEASEDMOUSE_OFFSET))();
		}
	};
}
