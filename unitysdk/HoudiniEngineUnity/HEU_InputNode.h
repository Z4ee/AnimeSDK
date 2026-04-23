#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_InputNode_InputNodeType.h"
#include "unitysdk/HoudiniEngineUnity/HEU_InputNode_InputObjectType.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace HoudiniEngineUnity { class HEU_InputHDAInfo; }
namespace HoudiniEngineUnity { class HEU_InputNodeUICache; }
namespace HoudiniEngineUnity { class HEU_InputObjectInfo; }
namespace HoudiniEngineUnity { class HEU_InputPreset; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_INPUTNODE_ADDINPUTENTRYATENDMESH_OFFSET UNITYSDK_OFFSET(0x8C8F0B0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_ADDINPUTENTRYATEND_OFFSET UNITYSDK_OFFSET(0x8C8ED80)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_AREANYINPUTHDASCONNECTED_OFFSET UNITYSDK_OFFSET(0x8C8F200)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_CHANGEINPUTTYPE_OFFSET UNITYSDK_OFFSET(0x8C8E490)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_CLEARCONNECTEDINPUTHDAS_OFFSET UNITYSDK_OFFSET(0x8C8F4E0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_CLEARUICACHE_OFFSET UNITYSDK_OFFSET(0x8C8E110)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_CONNECTTOMERGEOBJECT_OFFSET UNITYSDK_OFFSET(0x8C8FCF0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_COPYINPUTVALUESTO_OFFSET UNITYSDK_OFFSET(0x8C83B50)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_CREATEINPUTHDAINFO_OFFSET UNITYSDK_OFFSET(0x8C8E9B0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_CREATEINPUTOBJECTINFO_OFFSET UNITYSDK_OFFSET(0x8C8E900)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_CREATESETUPINPUT_OFFSET UNITYSDK_OFFSET(0x8C75B80)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_DESTROYALLDATA_OFFSET UNITYSDK_OFFSET(0x8C72B60)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_DISCONNECTANDDESTROYINPUTS_OFFSET UNITYSDK_OFFSET(0x8C8E120)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_DISCONNECTCONNECTEDMERGENODE_OFFSET UNITYSDK_OFFSET(0x8C8F320)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_FINDADDTOINPUTHDA_OFFSET UNITYSDK_OFFSET(0x8C90DF0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GETCONNECTEDINPUTCOUNT_OFFSET UNITYSDK_OFFSET(0x8C90590)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GETCONNECTEDNODEID_OFFSET UNITYSDK_OFFSET(0x8C905D0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GETINPUTENTRYGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x8C8EA00)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_INPUTNAME_OFFSET UNITYSDK_OFFSET(0x8C8E070)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_INPUTNODEID_OFFSET UNITYSDK_OFFSET(0x8C8E020)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_INPUTTYPE_OFFSET UNITYSDK_OFFSET(0x8C8DFE0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_KEEPWORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x8C8E0B0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_LABELNAME_OFFSET UNITYSDK_OFFSET(0x8C8E080)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_PACKGEOMETRYBEFOREMERGING_OFFSET UNITYSDK_OFFSET(0x8C8E0D0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_PARAMNAME_OFFSET UNITYSDK_OFFSET(0x8C8E090)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_PARENTASSET_OFFSET UNITYSDK_OFFSET(0x8C8E0F0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_PENDINGINPUTOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x8C8E000)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_REQUIRESCOOK_OFFSET UNITYSDK_OFFSET(0x8C8E030)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_REQUIRESUPLOAD_OFFSET UNITYSDK_OFFSET(0x8C8E050)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_THISINPUTOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x8C8DFF0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_HANDLESELECTEDOBJECTSFORINPUTHDAS_OFFSET UNITYSDK_OFFSET(0x8C91320)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_HANDLESELECTEDOBJECTSFORINPUTOBJECTS_OFFSET UNITYSDK_OFFSET(0x8C91030)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_HASINPUTNODETRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x8C71C00)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_INSERTINPUTENTRY_OFFSET UNITYSDK_OFFSET(0x8C8E4C0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_INTERNALADDINPUTHDAATEND_OFFSET UNITYSDK_OFFSET(0x8C8F020)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_INTERNALADDINPUTOBJECTATEND_OFFSET UNITYSDK_OFFSET(0x8C8EF20)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_ISASSETINPUT_OFFSET UNITYSDK_OFFSET(0x8C7E2C0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_LOADPRESET_OFFSET UNITYSDK_OFFSET(0x8C822C0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_NOTIFYPARENTREMOVEDINPUT_OFFSET UNITYSDK_OFFSET(0x8C90FB0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_NUMINPUTENTRIES_OFFSET UNITYSDK_OFFSET(0x8C8F1C0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_POPULATEINPUTPRESET_OFFSET UNITYSDK_OFFSET(0x8C815E0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_RECONNECTTOUPSTREAMASSET_OFFSET UNITYSDK_OFFSET(0x8C7BDC0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_REMOVEALLINPUTENTRIES_OFFSET UNITYSDK_OFFSET(0x8C8E370)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_RESETCONNECTIONFORFORCEUPDATE_OFFSET UNITYSDK_OFFSET(0x8C75D00)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_RESETINPUTNODE_OFFSET UNITYSDK_OFFSET(0x8C814B0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_RESETINPUTOBJECTTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x8C8E3E0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_SETINPUTNODEID_OFFSET UNITYSDK_OFFSET(0x8C8E100)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_SET_KEEPWORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x8C8E0C0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_SET_PACKGEOMETRYBEFOREMERGING_OFFSET UNITYSDK_OFFSET(0x8C8E0E0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_SET_PARAMNAME_OFFSET UNITYSDK_OFFSET(0x8C8E0A0)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_SET_PENDINGINPUTOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x8C8E010)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_SET_REQUIRESCOOK_OFFSET UNITYSDK_OFFSET(0x8C8E040)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_SET_REQUIRESUPLOAD_OFFSET UNITYSDK_OFFSET(0x8C8E060)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_UPDATEONASSETRECREATION_OFFSET UNITYSDK_OFFSET(0x8C7BB10)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_UPLOADINPUTOBJECTTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x8C90670)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_UPLOADINPUT_OFFSET UNITYSDK_OFFSET(0x8C75D40)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_UPLOADOBJECTMERGEPACKGEOMETRY_OFFSET UNITYSDK_OFFSET(0x8C8FF70)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE_UPLOADOBJECTMERGETRANSFORMTYPE_OFFSET UNITYSDK_OFFSET(0x8C8FE10)
#define HOUDINIENGINEUNITY_HEU_INPUTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x8C915A0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputNode_TypeDefinitionIndex = 43505;

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
		::HoudiniEngineUnity::HEU_InputNodeUICache* _uiCache; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE__CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_InputNode_InputNodeType get_InputType()
		{
			return ((::HoudiniEngineUnity::HEU_InputNode_InputNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_INPUTTYPE_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_InputNode_InputObjectType get_ThisInputObjectType()
		{
			return ((::HoudiniEngineUnity::HEU_InputNode_InputObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_THISINPUTOBJECTTYPE_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_InputNode_InputObjectType get_PendingInputObjectType()
		{
			return ((::HoudiniEngineUnity::HEU_InputNode_InputObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_PENDINGINPUTOBJECTTYPE_OFFSET))(this);
		}

		::System::Void set_PendingInputObjectType(::HoudiniEngineUnity::HEU_InputNode_InputObjectType value)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_InputNode_InputObjectType))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_SET_PENDINGINPUTOBJECTTYPE_OFFSET))(this, value);
		}

		::System::Int32 get_InputNodeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_INPUTNODEID_OFFSET))(this);
		}

		::System::Boolean get_RequiresCook()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_REQUIRESCOOK_OFFSET))(this);
		}

		::System::Void set_RequiresCook(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_SET_REQUIRESCOOK_OFFSET))(this, value);
		}

		::System::Boolean get_RequiresUpload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_REQUIRESUPLOAD_OFFSET))(this);
		}

		::System::Void set_RequiresUpload(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_SET_REQUIRESUPLOAD_OFFSET))(this, value);
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

		::System::Void set_ParamName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_SET_PARAMNAME_OFFSET))(this, value);
		}

		::System::Boolean get_KeepWorldTransform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_KEEPWORLDTRANSFORM_OFFSET))(this);
		}

		::System::Void set_KeepWorldTransform(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_SET_KEEPWORLDTRANSFORM_OFFSET))(this, value);
		}

		::System::Boolean get_PackGeometryBeforeMerging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_PACKGEOMETRYBEFOREMERGING_OFFSET))(this);
		}

		::System::Void set_PackGeometryBeforeMerging(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_SET_PACKGEOMETRYBEFOREMERGING_OFFSET))(this, value);
		}

		::HoudiniEngineUnity::HEU_HoudiniAsset* get_ParentAsset()
		{
			return ((::HoudiniEngineUnity::HEU_HoudiniAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GET_PARENTASSET_OFFSET))(this);
		}

		::System::Boolean IsAssetInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_ISASSETINPUT_OFFSET))(this);
		}

		static ::HoudiniEngineUnity::HEU_InputNode* CreateSetupInput(::System::Int32 nodeID, ::System::Int32 inputIndex, ::System::String* inputName, ::System::String* labelName, ::HoudiniEngineUnity::HEU_InputNode_InputNodeType inputNodeType, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset)
		{
			return ((::HoudiniEngineUnity::HEU_InputNode*(*)(::System::Int32, ::System::Int32, ::System::String*, ::System::String*, ::HoudiniEngineUnity::HEU_InputNode_InputNodeType, ::HoudiniEngineUnity::HEU_HoudiniAsset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_CREATESETUPINPUT_OFFSET))(nodeID, inputIndex, inputName, labelName, inputNodeType, parentAsset);
		}

		::System::Void SetInputNodeID(::System::Int32 nodeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_SETINPUTNODEID_OFFSET))(this, nodeID);
		}

		::System::Void DestroyAllData(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_DESTROYALLDATA_OFFSET))(this, session);
		}

		::System::Void ResetInputObjectTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_RESETINPUTOBJECTTRANSFORMS_OFFSET))(this);
		}

		::System::Void ResetInputNode(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_RESETINPUTNODE_OFFSET))(this, session);
		}

		::System::Void InsertInputEntry(::System::Int32 index, ::UnityEngine::GameObject* newInputGameObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_INSERTINPUTENTRY_OFFSET))(this, index, newInputGameObject);
		}

		::UnityEngine::GameObject* GetInputEntryGameObject(::System::Int32 index)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GETINPUTENTRYGAMEOBJECT_OFFSET))(this, index);
		}

		::System::Void AddInputEntryAtEnd(::UnityEngine::GameObject* newEntryGameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_ADDINPUTENTRYATEND_OFFSET))(this, newEntryGameObject);
		}

		::HoudiniEngineUnity::HEU_InputObjectInfo* AddInputEntryAtEndMesh(::UnityEngine::GameObject* newEntryGameObject)
		{
			return ((::HoudiniEngineUnity::HEU_InputObjectInfo*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_ADDINPUTENTRYATENDMESH_OFFSET))(this, newEntryGameObject);
		}

		::System::Void RemoveAllInputEntries()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_REMOVEALLINPUTENTRIES_OFFSET))(this);
		}

		::System::Int32 NumInputEntries()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_NUMINPUTENTRIES_OFFSET))(this);
		}

		::System::Void ChangeInputType(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_InputNode_InputObjectType newType)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_InputNode_InputObjectType))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_CHANGEINPUTTYPE_OFFSET))(this, session, newType);
		}

		::System::Void ResetConnectionForForceUpdate(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_RESETCONNECTIONFORFORCEUPDATE_OFFSET))(this, session);
		}

		::System::Void UploadInput(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_UPLOADINPUT_OFFSET))(this, session);
		}

		::System::Boolean AreAnyInputHDAsConnected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_AREANYINPUTHDASCONNECTED_OFFSET))(this);
		}

		::System::Void ReconnectToUpstreamAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_RECONNECTTOUPSTREAMASSET_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_InputObjectInfo* CreateInputObjectInfo(::UnityEngine::GameObject* inputGameObject)
		{
			return ((::HoudiniEngineUnity::HEU_InputObjectInfo*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_CREATEINPUTOBJECTINFO_OFFSET))(this, inputGameObject);
		}

		::HoudiniEngineUnity::HEU_InputHDAInfo* CreateInputHDAInfo(::UnityEngine::GameObject* inputGameObject)
		{
			return ((::HoudiniEngineUnity::HEU_InputHDAInfo*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_CREATEINPUTHDAINFO_OFFSET))(this, inputGameObject);
		}

		::HoudiniEngineUnity::HEU_InputObjectInfo* InternalAddInputObjectAtEnd(::UnityEngine::GameObject* newInputGameObject)
		{
			return ((::HoudiniEngineUnity::HEU_InputObjectInfo*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_INTERNALADDINPUTOBJECTATEND_OFFSET))(this, newInputGameObject);
		}

		::HoudiniEngineUnity::HEU_InputHDAInfo* InternalAddInputHDAAtEnd(::UnityEngine::GameObject* newInputHDA)
		{
			return ((::HoudiniEngineUnity::HEU_InputHDAInfo*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_INTERNALADDINPUTHDAATEND_OFFSET))(this, newInputHDA);
		}

		::System::Void DisconnectConnectedMergeNode(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_DISCONNECTCONNECTEDMERGENODE_OFFSET))(this, session);
		}

		::System::Void ClearConnectedInputHDAs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_CLEARCONNECTEDINPUTHDAS_OFFSET))(this);
		}

		::System::Void ConnectToMergeObject(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_CONNECTTOMERGEOBJECT_OFFSET))(this, session);
		}

		::System::Void DisconnectAndDestroyInputs(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_DISCONNECTANDDESTROYINPUTS_OFFSET))(this, session);
		}

		::System::Int32 GetConnectedInputCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GETCONNECTEDINPUTCOUNT_OFFSET))(this);
		}

		::System::Int32 GetConnectedNodeID(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_GETCONNECTEDNODEID_OFFSET))(this, index);
		}

		::System::Boolean UploadObjectMergeTransformType(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_UPLOADOBJECTMERGETRANSFORMTYPE_OFFSET))(this, session);
		}

		::System::Boolean UploadObjectMergePackGeometry(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_UPLOADOBJECTMERGEPACKGEOMETRY_OFFSET))(this, session);
		}

		::System::Boolean HasInputNodeTransformChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_HASINPUTNODETRANSFORMCHANGED_OFFSET))(this);
		}

		::System::Void UploadInputObjectTransforms(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_UPLOADINPUTOBJECTTRANSFORMS_OFFSET))(this, session);
		}

		::System::Void UpdateOnAssetRecreation(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_UPDATEONASSETRECREATION_OFFSET))(this, session);
		}

		::System::Void CopyInputValuesTo(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_InputNode* destInputNode)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_InputNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_COPYINPUTVALUESTO_OFFSET))(this, session, destInputNode);
		}

		::System::Void PopulateInputPreset(::HoudiniEngineUnity::HEU_InputPreset* inputPreset)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_InputPreset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_POPULATEINPUTPRESET_OFFSET))(this, inputPreset);
		}

		::System::Void LoadPreset(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_InputPreset* inputPreset)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_InputPreset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_LOADPRESET_OFFSET))(this, session, inputPreset);
		}

		::System::Boolean FindAddToInputHDA(::System::String* gameObjectName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_FINDADDTOINPUTHDA_OFFSET))(this, gameObjectName);
		}

		::System::Void NotifyParentRemovedInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_NOTIFYPARENTREMOVEDINPUT_OFFSET))(this);
		}

		::System::Void ClearUICache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_CLEARUICACHE_OFFSET))(this);
		}

		::System::Void HandleSelectedObjectsForInputObjects(::Il2CppArray<::UnityEngine::GameObject*>* selectedObjects)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_HANDLESELECTEDOBJECTSFORINPUTOBJECTS_OFFSET))(this, selectedObjects);
		}

		::System::Void HandleSelectedObjectsForInputHDAs(::Il2CppArray<::UnityEngine::GameObject*>* selectedObjects)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODE_HANDLESELECTEDOBJECTSFORINPUTHDAS_OFFSET))(this, selectedObjects);
		}
	};
}
