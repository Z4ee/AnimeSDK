#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_InputNodeTypeWrapper.h"
#include "unitysdk/HoudiniEngineUnity/HEU_InputNode_InputNodeType.h"
#include "unitysdk/HoudiniEngineUnity/HEU_InputNode_InputObjectType.h"
#include "unitysdk/HoudiniEngineUnity/HEU_InputNode_InternalObjectType.h"
#include "unitysdk/HoudiniEngineUnity/HEU_InputObjectTypeWrapper.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace HoudiniEngineUnity { class HEU_InputHDAInfo; }
namespace HoudiniEngineUnity { class HEU_InputInterfaceMeshSettings; }
namespace HoudiniEngineUnity { class HEU_InputInterfaceSplineSettings; }
namespace HoudiniEngineUnity { class HEU_InputNodeUICache; }
namespace HoudiniEngineUnity { class HEU_InputObjectInfo; }
namespace HoudiniEngineUnity { class HEU_InputPreset; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_INPUTNODE_ADDINPUTENTRYATENDHDA_OFFSET UNITYSDK_OFFSET(0x17F18E20)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_ADDINPUTENTRYATENDMESH_OFFSET UNITYSDK_OFFSET(0x17F18D60)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_ADDINPUTENTRYATEND_OFFSET UNITYSDK_OFFSET(0x17F173B0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_AREANYINPUTHDASCONNECTED_OFFSET UNITYSDK_OFFSET(0x17F18760)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_CHANGEINPUTTYPE_1_OFFSET UNITYSDK_OFFSET(0x17F178F0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_CHANGEINPUTTYPE_OFFSET UNITYSDK_OFFSET(0x17F17830)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_CLEARCONNECTEDINPUTHDAS_OFFSET UNITYSDK_OFFSET(0x17F19160)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_CLEARUICACHE_OFFSET UNITYSDK_OFFSET(0x17F18A40)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_CONNECTTOMERGEOBJECT_OFFSET UNITYSDK_OFFSET(0x17F1A370)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_COPYINPUTVALUESTO_OFFSET UNITYSDK_OFFSET(0x17F04720)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_CREATEINPUTHDAINFO_OFFSET UNITYSDK_OFFSET(0x17F16D70)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_CREATEINPUTOBJECTINFO_OFFSET UNITYSDK_OFFSET(0x17F16C50)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_CREATESETUPINPUT_OFFSET UNITYSDK_OFFSET(0x17EF9390)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_DESTROYALLDATA_OFFSET UNITYSDK_OFFSET(0x17EF5DD0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_DISCONNECTANDDESTROYINPUTS_OFFSET UNITYSDK_OFFSET(0x17F18A50)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_DISCONNECTCONNECTEDMERGENODE_OFFSET UNITYSDK_OFFSET(0x17F18E40)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_FINDADDTOINPUTHDA_OFFSET UNITYSDK_OFFSET(0x17F1BE40)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GETCONNECTEDINPUTCOUNT_OFFSET UNITYSDK_OFFSET(0x17F18860)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GETCONNECTEDNODEID_OFFSET UNITYSDK_OFFSET(0x17F188B0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GETINPUTENTRYGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x17F16450)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GETINPUTENTRYGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x17F15E80)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GETINTERNALOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x17F15E60)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GETSESSION_OFFSET UNITYSDK_OFFSET(0x17F15D90)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_INPUTASSETINFOS_OFFSET UNITYSDK_OFFSET(0x17F15D40)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_INPUTNAME_OFFSET UNITYSDK_OFFSET(0x17F15CD0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_INPUTNODEID_OFFSET UNITYSDK_OFFSET(0x17F15CC0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_INPUTOBJECTS_OFFSET UNITYSDK_OFFSET(0x17F15D30)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_INPUTTYPE_OFFSET UNITYSDK_OFFSET(0x17F15D20)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_KEEPWORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x17F15BB0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_LABELNAME_OFFSET UNITYSDK_OFFSET(0x17F15CE0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_MESHSETTINGS_OFFSET UNITYSDK_OFFSET(0x17F15D00)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x17F15BF0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_OBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x17F15C20)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_PACKGEOMETRYBEFOREMERGING_OFFSET UNITYSDK_OFFSET(0x17F15BD0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_PARAMNAME_OFFSET UNITYSDK_OFFSET(0x17F15CF0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_PARENTASSET_OFFSET UNITYSDK_OFFSET(0x17F15BA0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_PENDINGOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x17F15C60)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_REQUIRESCOOK_OFFSET UNITYSDK_OFFSET(0x17F15D50)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_REQUIRESUPLOAD_OFFSET UNITYSDK_OFFSET(0x17F15D70)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_SPLINESETTINGS_OFFSET UNITYSDK_OFFSET(0x17F15D10)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_HANDLESELECTEDOBJECTSFORINPUTHDAS_OFFSET UNITYSDK_OFFSET(0x17F1C3A0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_HANDLESELECTEDOBJECTSFORINPUTOBJECTS_OFFSET UNITYSDK_OFFSET(0x17F1C0F0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_HASINPUTNODETRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x17EF5680)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_INPUTNODETYPE_INTERNALTOWRAPPER_1_OFFSET UNITYSDK_OFFSET(0x17F1C980)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_INPUTNODETYPE_INTERNALTOWRAPPER_OFFSET UNITYSDK_OFFSET(0x17F15C10)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_INPUTOBJECTTYPE_INTERNALTOWRAPPER_OFFSET UNITYSDK_OFFSET(0x17F15C40)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_INPUTOBJECTTYPE_WRAPPERTOINTERNAL_OFFSET UNITYSDK_OFFSET(0x17F15CA0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_INSERTINPUTENTRY_OFFSET UNITYSDK_OFFSET(0x17F16DC0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_INTERNALADDINPUTHDAATEND_OFFSET UNITYSDK_OFFSET(0x17F176B0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_INTERNALADDINPUTOBJECTATEND_OFFSET UNITYSDK_OFFSET(0x17F17600)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_ISASSETINPUT_OFFSET UNITYSDK_OFFSET(0x17EE6C30)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x17F1C520)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_LOADPRESET_1_OFFSET UNITYSDK_OFFSET(0x17F01B20)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_LOADPRESET_OFFSET UNITYSDK_OFFSET(0x17F18960)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_NOTIFYPARENTREMOVEDINPUT_OFFSET UNITYSDK_OFFSET(0x17F1C070)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_NUMINPUTENTRIES_OFFSET UNITYSDK_OFFSET(0x17F15E10)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_POPULATEINPUTPRESET_OFFSET UNITYSDK_OFFSET(0x17EE8BB0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_RECONNECTTOUPSTREAMASSET_OFFSET UNITYSDK_OFFSET(0x17EFD8E0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_RECOOK_OFFSET UNITYSDK_OFFSET(0x17F15E00)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_REMOVEALLINPUTENTRIES_OFFSET UNITYSDK_OFFSET(0x17F17F30)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_REMOVEINPUTENTRY_OFFSET UNITYSDK_OFFSET(0x17F17920)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_RESETCONNECTIONFORFORCEUPDATE_OFFSET UNITYSDK_OFFSET(0x17EF95E0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_RESETINPUTNODE_1_OFFSET UNITYSDK_OFFSET(0x17EE7B50)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_RESETINPUTNODE_OFFSET UNITYSDK_OFFSET(0x17F177A0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_RESETINPUTOBJECTTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x17F18C40)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_SETINPUTENTRYOBJECTTRANSFORMROTATEOFFSET_OFFSET UNITYSDK_OFFSET(0x17F18380)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_SETINPUTENTRYOBJECTTRANSFORMSCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x17F18570)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_SETINPUTENTRYOBJECTTRANSFORMTRANSLATEOFFSET_OFFSET UNITYSDK_OFFSET(0x17F181A0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_SETINPUTENTRYOBJECTUSETRANSFORMOFFSET_OFFSET UNITYSDK_OFFSET(0x17F17FC0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_SETINPUTENTRY_OFFSET UNITYSDK_OFFSET(0x17F16630)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_SETINPUTNODEID_OFFSET UNITYSDK_OFFSET(0x17F18A30)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_SET_KEEPWORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x17F15BC0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_SET_PACKGEOMETRYBEFOREMERGING_OFFSET UNITYSDK_OFFSET(0x17F15BE0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_SET_PENDINGOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x17F15C80)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_SET_REQUIRESCOOK_OFFSET UNITYSDK_OFFSET(0x17F15D60)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_SET_REQUIRESUPLOAD_OFFSET UNITYSDK_OFFSET(0x17F15D80)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_UPDATEONASSETRECREATION_OFFSET UNITYSDK_OFFSET(0x17EFD6D0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_UPLOADHDAINPUT_OFFSET UNITYSDK_OFFSET(0x17F19400)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_UPLOADINPUTOBJECTTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x17F1B630)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_UPLOADINPUT_OFFSET UNITYSDK_OFFSET(0x17EF9620)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_UPLOADOBJECTMERGEPACKGEOMETRY_OFFSET UNITYSDK_OFFSET(0x17F1A830)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_UPLOADOBJECTMERGETRANSFORMTYPE_OFFSET UNITYSDK_OFFSET(0x17F1A6D0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_UPLOADUNITYINPUT_OFFSET UNITYSDK_OFFSET(0x17F196A0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x17F1C990)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputNode_TypeDefinitionIndex = 37438;

	class HEU_InputNode : public ::UnityEngine::ScriptableObject
	{
	public:
		::HoudiniEngineUnity::HEU_InputNode_InputNodeType _inputNodeType; // 0x18
		::HoudiniEngineUnity::HEU_InputNode_InputObjectType _inputObjectType; // 0x1C
		::HoudiniEngineUnity::HEU_InputNode_InputObjectType _pendingInputObjectType; // 0x20
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>* _inputObjects; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* _inputObjectsConnectedAssetIDs; // 0x30
		::UnityEngine::GameObject* _inputAsset; // 0x38
		::UnityEngine::GameObject* _connectedInputAsset; // 0x40
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>* _inputAssetInfos; // 0x48
		::System::Int32 _nodeID; // 0x50
		::System::Int32 _inputIndex; // 0x54
		::System::Boolean _requiresCook; // 0x58
		::System::Boolean _requiresUpload; // 0x59
		::System::String* _inputName; // 0x60
		::System::String* _labelName; // 0x68
		::System::String* _paramName; // 0x70
		::System::Int32 _connectedNodeID; // 0x78
		::System::Boolean _keepWorldTransform; // 0x7C
		::System::Boolean _packGeometryBeforeMerging; // 0x7D
		::HoudiniEngineUnity::HEU_HoudiniAsset* _parentAsset; // 0x80
		::HoudiniEngineUnity::HEU_InputInterfaceMeshSettings* _meshSettings; // 0x88
		::HoudiniEngineUnity::HEU_InputInterfaceSplineSettings* _splineSettings; // 0x90
		::System::Boolean _usingSelectFromHierarchy; // 0x98
		::HoudiniEngineUnity::HEU_InputNodeUICache* _uiCache; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE__CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_HoudiniAsset* get_ParentAsset()
		{
			return ((::HoudiniEngineUnity::HEU_HoudiniAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_PARENTASSET_OFFSET))(this);
		}

		::System::Boolean get_KeepWorldTransform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_KEEPWORLDTRANSFORM_OFFSET))(this);
		}

		::System::Void set_KeepWorldTransform(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_SET_KEEPWORLDTRANSFORM_OFFSET))(this, a1);
		}

		::System::Boolean get_PackGeometryBeforeMerging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_PACKGEOMETRYBEFOREMERGING_OFFSET))(this);
		}

		::System::Void set_PackGeometryBeforeMerging(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_SET_PACKGEOMETRYBEFOREMERGING_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::HEU_InputNodeTypeWrapper get_NodeType()
		{
			return ((::HoudiniEngineUnity::HEU_InputNodeTypeWrapper(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_NODETYPE_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_InputObjectTypeWrapper get_ObjectType()
		{
			return ((::HoudiniEngineUnity::HEU_InputObjectTypeWrapper(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_OBJECTTYPE_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_InputObjectTypeWrapper get_PendingObjectType()
		{
			return ((::HoudiniEngineUnity::HEU_InputObjectTypeWrapper(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_PENDINGOBJECTTYPE_OFFSET))(this);
		}

		::System::Void set_PendingObjectType(::HoudiniEngineUnity::HEU_InputObjectTypeWrapper a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_InputObjectTypeWrapper))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_SET_PENDINGOBJECTTYPE_OFFSET))(this, a1);
		}

		::System::Int32 get_InputNodeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_INPUTNODEID_OFFSET))(this);
		}

		::System::String* get_InputName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_INPUTNAME_OFFSET))(this);
		}

		::System::String* get_LabelName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_LABELNAME_OFFSET))(this);
		}

		::System::String* get_ParamName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_PARAMNAME_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_InputInterfaceMeshSettings* get_MeshSettings()
		{
			return ((::HoudiniEngineUnity::HEU_InputInterfaceMeshSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_MESHSETTINGS_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_InputInterfaceSplineSettings* get_SplineSettings()
		{
			return ((::HoudiniEngineUnity::HEU_InputInterfaceSplineSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_SPLINESETTINGS_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_InputNode_InputNodeType get_InputType()
		{
			return ((::HoudiniEngineUnity::HEU_InputNode_InputNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_INPUTTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>* get_InputObjects()
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_INPUTOBJECTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>* get_InputAssetInfos()
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_INPUTASSETINFOS_OFFSET))(this);
		}

		::System::Boolean get_RequiresCook()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_REQUIRESCOOK_OFFSET))(this);
		}

		::System::Void set_RequiresCook(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_SET_REQUIRESCOOK_OFFSET))(this, a1);
		}

		::System::Boolean get_RequiresUpload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_REQUIRESUPLOAD_OFFSET))(this);
		}

		::System::Void set_RequiresUpload(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_SET_REQUIRESUPLOAD_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::HEU_SessionBase* GetSession()
		{
			return ((::HoudiniEngineUnity::HEU_SessionBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GETSESSION_OFFSET))(this);
		}

		::System::Void Recook()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_RECOOK_OFFSET))(this);
		}

		::System::Boolean IsAssetInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_ISASSETINPUT_OFFSET))(this);
		}

		::System::Int32 NumInputEntries()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_NUMINPUTENTRIES_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetInputEntryGameObject(::System::Int32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GETINPUTENTRYGAMEOBJECT_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::GameObject*>* GetInputEntryGameObjects()
		{
			return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GETINPUTENTRYGAMEOBJECTS_OFFSET))(this);
		}

		::System::Void SetInputEntry(::System::Int32 a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_SETINPUTENTRY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InsertInputEntry(::System::Int32 a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_INSERTINPUTENTRY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddInputEntryAtEnd(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_ADDINPUTENTRYATEND_OFFSET))(this, a1, a2);
		}

		::System::Void ResetInputNode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_RESETINPUTNODE_OFFSET))(this, a1);
		}

		::System::Void ChangeInputType(::HoudiniEngineUnity::HEU_InputObjectTypeWrapper a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_InputObjectTypeWrapper, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_CHANGEINPUTTYPE_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveInputEntry(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_REMOVEINPUTENTRY_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveAllInputEntries(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_REMOVEALLINPUTENTRIES_OFFSET))(this, a1);
		}

		::System::Void SetInputEntryObjectUseTransformOffset(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_SETINPUTENTRYOBJECTUSETRANSFORMOFFSET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetInputEntryObjectTransformTranslateOffset(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_SETINPUTENTRYOBJECTTRANSFORMTRANSLATEOFFSET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetInputEntryObjectTransformRotateOffset(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_SETINPUTENTRYOBJECTTRANSFORMROTATEOFFSET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetInputEntryObjectTransformScaleOffset(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_SETINPUTENTRYOBJECTTRANSFORMSCALEOFFSET_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AreAnyInputHDAsConnected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_AREANYINPUTHDASCONNECTED_OFFSET))(this);
		}

		::System::Int32 GetConnectedInputCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GETCONNECTEDINPUTCOUNT_OFFSET))(this);
		}

		::System::Int32 GetConnectedNodeID(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GETCONNECTEDNODEID_OFFSET))(this, a1);
		}

		::System::Void LoadPreset(::HoudiniEngineUnity::HEU_InputPreset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_InputPreset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_LOADPRESET_OFFSET))(this, a1);
		}

		::System::Void PopulateInputPreset(::HoudiniEngineUnity::HEU_InputPreset* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_InputPreset*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_POPULATEINPUTPRESET_OFFSET))(this, a1, a2);
		}

		static ::HoudiniEngineUnity::HEU_InputNode* CreateSetupInput(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::String* a4, ::HoudiniEngineUnity::HEU_InputNode_InputNodeType a5, ::HoudiniEngineUnity::HEU_HoudiniAsset* a6)
		{
			return ((::HoudiniEngineUnity::HEU_InputNode*(*)(::System::Int32, ::System::Int32, ::System::String*, ::System::String*, ::HoudiniEngineUnity::HEU_InputNode_InputNodeType, ::HoudiniEngineUnity::HEU_HoudiniAsset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_CREATESETUPINPUT_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetInputNodeID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_SETINPUTNODEID_OFFSET))(this, a1);
		}

		::System::Void DestroyAllData(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_DESTROYALLDATA_OFFSET))(this, a1);
		}

		::System::Void ResetInputObjectTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_RESETINPUTOBJECTTRANSFORMS_OFFSET))(this);
		}

		::System::Void ResetInputNode_1(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_RESETINPUTNODE_1_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::HEU_InputObjectInfo* AddInputEntryAtEndMesh(::UnityEngine::GameObject* a1)
		{
			return ((::HoudiniEngineUnity::HEU_InputObjectInfo*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_ADDINPUTENTRYATENDMESH_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::HEU_InputHDAInfo* AddInputEntryAtEndHDA(::UnityEngine::GameObject* a1)
		{
			return ((::HoudiniEngineUnity::HEU_InputHDAInfo*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_ADDINPUTENTRYATENDHDA_OFFSET))(this, a1);
		}

		::System::Void ChangeInputType_1(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_InputNode_InputObjectType a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_InputNode_InputObjectType))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_CHANGEINPUTTYPE_1_OFFSET))(this, a1, a2);
		}

		::System::Void ResetConnectionForForceUpdate(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_RESETCONNECTIONFORFORCEUPDATE_OFFSET))(this, a1);
		}

		::System::Void UploadInput(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_UPLOADINPUT_OFFSET))(this, a1);
		}

		::System::Void UploadHDAInput(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_UPLOADHDAINPUT_OFFSET))(this, a1);
		}

		::System::Void UploadUnityInput(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_UPLOADUNITYINPUT_OFFSET))(this, a1);
		}

		::System::Void ReconnectToUpstreamAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_RECONNECTTOUPSTREAMASSET_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_InputObjectInfo* CreateInputObjectInfo(::UnityEngine::GameObject* a1)
		{
			return ((::HoudiniEngineUnity::HEU_InputObjectInfo*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_CREATEINPUTOBJECTINFO_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::HEU_InputHDAInfo* CreateInputHDAInfo(::UnityEngine::GameObject* a1)
		{
			return ((::HoudiniEngineUnity::HEU_InputHDAInfo*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_CREATEINPUTHDAINFO_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::HEU_InputObjectInfo* InternalAddInputObjectAtEnd(::UnityEngine::GameObject* a1)
		{
			return ((::HoudiniEngineUnity::HEU_InputObjectInfo*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_INTERNALADDINPUTOBJECTATEND_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::HEU_InputHDAInfo* InternalAddInputHDAAtEnd(::UnityEngine::GameObject* a1)
		{
			return ((::HoudiniEngineUnity::HEU_InputHDAInfo*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_INTERNALADDINPUTHDAATEND_OFFSET))(this, a1);
		}

		::System::Void DisconnectConnectedMergeNode(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_DISCONNECTCONNECTEDMERGENODE_OFFSET))(this, a1);
		}

		::System::Void ClearConnectedInputHDAs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_CLEARCONNECTEDINPUTHDAS_OFFSET))(this);
		}

		::System::Void ConnectToMergeObject(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_CONNECTTOMERGEOBJECT_OFFSET))(this, a1);
		}

		::System::Void DisconnectAndDestroyInputs(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_DISCONNECTANDDESTROYINPUTS_OFFSET))(this, a1);
		}

		::System::Boolean UploadObjectMergeTransformType(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_UPLOADOBJECTMERGETRANSFORMTYPE_OFFSET))(this, a1);
		}

		::System::Boolean UploadObjectMergePackGeometry(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_UPLOADOBJECTMERGEPACKGEOMETRY_OFFSET))(this, a1);
		}

		::System::Boolean HasInputNodeTransformChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_HASINPUTNODETRANSFORMCHANGED_OFFSET))(this);
		}

		::System::Void UploadInputObjectTransforms(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_UPLOADINPUTOBJECTTRANSFORMS_OFFSET))(this, a1);
		}

		::System::Void UpdateOnAssetRecreation(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_UPDATEONASSETRECREATION_OFFSET))(this, a1);
		}

		::System::Void CopyInputValuesTo(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_InputNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_InputNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_COPYINPUTVALUESTO_OFFSET))(this, a1, a2);
		}

		::System::Void LoadPreset_1(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_InputPreset* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_InputPreset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_LOADPRESET_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean FindAddToInputHDA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_FINDADDTOINPUTHDA_OFFSET))(this, a1);
		}

		::System::Void NotifyParentRemovedInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_NOTIFYPARENTREMOVEDINPUT_OFFSET))(this);
		}

		::System::Void ClearUICache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_CLEARUICACHE_OFFSET))(this);
		}

		::System::Void HandleSelectedObjectsForInputObjects(::Il2CppArray<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_HANDLESELECTEDOBJECTSFORINPUTOBJECTS_OFFSET))(this, a1);
		}

		::System::Void HandleSelectedObjectsForInputHDAs(::Il2CppArray<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_HANDLESELECTEDOBJECTSFORINPUTHDAS_OFFSET))(this, a1);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::HEU_InputNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_InputNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_ISEQUIVALENTTO_OFFSET))(this, a1);
		}

		static ::HoudiniEngineUnity::HEU_InputNode_InternalObjectType GetInternalObjectType(::HoudiniEngineUnity::HEU_InputNode_InputObjectType a1)
		{
			return ((::HoudiniEngineUnity::HEU_InputNode_InternalObjectType(*)(::HoudiniEngineUnity::HEU_InputNode_InputObjectType))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GETINTERNALOBJECTTYPE_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::HEU_InputNodeTypeWrapper InputNodeType_InternalToWrapper(::HoudiniEngineUnity::HEU_InputNode_InputNodeType a1)
		{
			return ((::HoudiniEngineUnity::HEU_InputNodeTypeWrapper(*)(::HoudiniEngineUnity::HEU_InputNode_InputNodeType))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_INPUTNODETYPE_INTERNALTOWRAPPER_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::HEU_InputNode_InputNodeType InputNodeType_InternalToWrapper_1(::HoudiniEngineUnity::HEU_InputNodeTypeWrapper a1)
		{
			return ((::HoudiniEngineUnity::HEU_InputNode_InputNodeType(*)(::HoudiniEngineUnity::HEU_InputNodeTypeWrapper))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_INPUTNODETYPE_INTERNALTOWRAPPER_1_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::HEU_InputObjectTypeWrapper InputObjectType_InternalToWrapper(::HoudiniEngineUnity::HEU_InputNode_InputObjectType a1)
		{
			return ((::HoudiniEngineUnity::HEU_InputObjectTypeWrapper(*)(::HoudiniEngineUnity::HEU_InputNode_InputObjectType))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_INPUTOBJECTTYPE_INTERNALTOWRAPPER_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::HEU_InputNode_InputObjectType InputObjectType_WrapperToInternal(::HoudiniEngineUnity::HEU_InputObjectTypeWrapper a1)
		{
			return ((::HoudiniEngineUnity::HEU_InputNode_InputObjectType(*)(::HoudiniEngineUnity::HEU_InputObjectTypeWrapper))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_INPUTOBJECTTYPE_WRAPPERTOINTERNAL_OFFSET))(a1);
		}
	};
}
