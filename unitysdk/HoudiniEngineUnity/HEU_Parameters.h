#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_NodeInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ParmChoiceInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_TransformEuler.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace HoudiniEngineUnity { class HEU_InputNode; }
namespace HoudiniEngineUnity { class HEU_ParameterData; }
namespace HoudiniEngineUnity { class HEU_ParameterModifier; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_PARAMETERS_AREPARAMETERSVALID_OFFSET UNITYSDK_OFFSET(0x8478A40)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_CLEANUP_OFFSET UNITYSDK_OFFSET(0x844A380)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_CLEARINSTANCESFROMMULTIPARM_OFFSET UNITYSDK_OFFSET(0x8479490)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_DOWNLOADASDEFAULTPRESETDATA_OFFSET UNITYSDK_OFFSET(0x8442780)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_DOWNLOADPRESETDATA_OFFSET UNITYSDK_OFFSET(0x844CF20)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETCHOSENINDEXFROMCHOICELIST_OFFSET UNITYSDK_OFFSET(0x8479180)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETDEFAULTPRESETDATA_OFFSET UNITYSDK_OFFSET(0x8478A30)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETINPUTNODECONNECTIONOBJECTS_OFFSET UNITYSDK_OFFSET(0x84539C0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETPARAMETERDATAFORUIRESTORE_OFFSET UNITYSDK_OFFSET(0x844AB10)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x84790F0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETPARAMETERWITHPARMID_OFFSET UNITYSDK_OFFSET(0x843E0B0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETPARAMETER_1_OFFSET UNITYSDK_OFFSET(0x8468310)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETPARAMETER_OFFSET UNITYSDK_OFFSET(0x843E200)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETPRESETDATA_OFFSET UNITYSDK_OFFSET(0x8478A10)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETSTRINGFROMPARAMETER_OFFSET UNITYSDK_OFFSET(0x8479270)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GET_PARAMETERMODIFIERS_OFFSET UNITYSDK_OFFSET(0x84789D0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GET_RECACHEUI_OFFSET UNITYSDK_OFFSET(0x8478A70)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GET_REQUIRESREGENERATION_OFFSET UNITYSDK_OFFSET(0x84789F0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GET_ROOTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x84789B0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GET_SHOWPARAMETERS_OFFSET UNITYSDK_OFFSET(0x8478A50)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_HASMODIFIERSPENDING_OFFSET UNITYSDK_OFFSET(0x84457E0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_HAVEPARAMETERSCHANGED_OFFSET UNITYSDK_OFFSET(0x84495F0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x844AD10)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_INSERTINSTANCETOMULTIPARM_OFFSET UNITYSDK_OFFSET(0x8479310)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_PROCESSMODIFIERS_OFFSET UNITYSDK_OFFSET(0x8445800)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_REMOVEINSTANCESFROMMULTIPARM_OFFSET UNITYSDK_OFFSET(0x84793D0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_REMOVEPARAMETER_OFFSET UNITYSDK_OFFSET(0x8479100)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_RESETALLTODEFAULT_OFFSET UNITYSDK_OFFSET(0x8459210)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SETPRESETDATA_OFFSET UNITYSDK_OFFSET(0x8478A20)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SETSTRINGTOPARAMETER_OFFSET UNITYSDK_OFFSET(0x84792C0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SETUPRAMPPARAMETER_OFFSET UNITYSDK_OFFSET(0x8478AA0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SET_PARAMETERMODIFIERS_OFFSET UNITYSDK_OFFSET(0x84789E0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SET_RECACHEUI_OFFSET UNITYSDK_OFFSET(0x8478A80)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SET_REQUIRESREGENERATION_OFFSET UNITYSDK_OFFSET(0x8478A00)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SET_ROOTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x84789C0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SET_SHOWPARAMETERS_OFFSET UNITYSDK_OFFSET(0x8478A60)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SYNCINTERNALPARAMETERSFORUNDOCOMPARE_OFFSET UNITYSDK_OFFSET(0x845ADB0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SYNCPARAMETERFROMHOUDINI_OFFSET UNITYSDK_OFFSET(0x84796C0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_UPDATETRANSFORMPARAMETERS_OFFSET UNITYSDK_OFFSET(0x8479540)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_UPLOADPARAMETERINPUTS_OFFSET UNITYSDK_OFFSET(0x844CFC0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_UPLOADPRESETDATA_OFFSET UNITYSDK_OFFSET(0x844CF70)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_UPLOADVALUESTOHOUDINI_OFFSET UNITYSDK_OFFSET(0x8446110)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x8479750)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Parameters_TypeDefinitionIndex = 37760;

	class HEU_Parameters : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Int32 _nodeID; // 0x18
		::System::String* _uiLabel; // 0x20
		::Il2CppArray<::System::Int32>* _paramInts; // 0x28
		::Il2CppArray<::System::Single>* _paramFloats; // 0x30
		::Il2CppArray<::System::String*>* _paramStrings; // 0x38
		::Il2CppArray<::HoudiniEngineUnity::HAPI_ParmChoiceInfo>* _paramChoices; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* _rootParameters; // 0x48
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterData*>* _parameterList; // 0x50
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterModifier*>* _parameterModifiers; // 0x58
		::System::Boolean _regenerateParameters; // 0x60
		::Il2CppArray<::System::Byte>* _presetData; // 0x68
		::Il2CppArray<::System::Byte>* _defaultPresetData; // 0x70
		::System::Boolean _validParameters; // 0x78
		::System::Boolean _showParameters; // 0x79
		::System::Boolean _recacheUI; // 0x7A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_RootParameters()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GET_ROOTPARAMETERS_OFFSET))(this);
		}

		::System::Void set_RootParameters(::System::Collections::Generic::List_1<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SET_ROOTPARAMETERS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterModifier*>* get_ParameterModifiers()
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterModifier*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GET_PARAMETERMODIFIERS_OFFSET))(this);
		}

		::System::Void set_ParameterModifiers(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterModifier*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterModifier*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SET_PARAMETERMODIFIERS_OFFSET))(this, value);
		}

		::System::Boolean get_RequiresRegeneration()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GET_REQUIRESREGENERATION_OFFSET))(this);
		}

		::System::Void set_RequiresRegeneration(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SET_REQUIRESREGENERATION_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* GetPresetData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETPRESETDATA_OFFSET))(this);
		}

		::System::Void SetPresetData(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SETPRESETDATA_OFFSET))(this, data);
		}

		::Il2CppArray<::System::Byte>* GetDefaultPresetData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETDEFAULTPRESETDATA_OFFSET))(this);
		}

		::System::Boolean AreParametersValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_AREPARAMETERSVALID_OFFSET))(this);
		}

		::System::Boolean get_ShowParameters()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GET_SHOWPARAMETERS_OFFSET))(this);
		}

		::System::Void set_ShowParameters(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SET_SHOWPARAMETERS_OFFSET))(this, value);
		}

		::System::Boolean get_RecacheUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GET_RECACHEUI_OFFSET))(this);
		}

		::System::Void set_RecacheUI(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SET_RECACHEUI_OFFSET))(this, value);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_CLEANUP_OFFSET))(this);
		}

		::System::Boolean Initialize(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 nodeID, ::HoudiniEngineUnity::HAPI_NodeInfo& nodeInfo, ::System::Collections::Generic::Dictionary_2<::System::String*, ::HoudiniEngineUnity::HEU_ParameterData*>* previousParamFolders, ::System::Collections::Generic::Dictionary_2<::System::String*, ::HoudiniEngineUnity::HEU_InputNode*>* previousParamInputNodes, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::HoudiniEngineUnity::HAPI_NodeInfo&, ::System::Collections::Generic::Dictionary_2<::System::String*, ::HoudiniEngineUnity::HEU_ParameterData*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::HoudiniEngineUnity::HEU_InputNode*>*, ::HoudiniEngineUnity::HEU_HoudiniAsset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_INITIALIZE_OFFSET))(this, session, nodeID, nodeInfo, previousParamFolders, previousParamInputNodes, parentAsset);
		}

		::System::Void SetupRampParameter(::HoudiniEngineUnity::HEU_ParameterData* rampParameter)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_ParameterData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SETUPRAMPPARAMETER_OFFSET))(this, rampParameter);
		}

		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterData*>* GetParameters()
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETPARAMETERS_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_ParameterData* GetParameter(::System::Int32 listIndex)
		{
			return ((::HoudiniEngineUnity::HEU_ParameterData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETPARAMETER_OFFSET))(this, listIndex);
		}

		::HoudiniEngineUnity::HEU_ParameterData* GetParameter_1(::System::String* name)
		{
			return ((::HoudiniEngineUnity::HEU_ParameterData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETPARAMETER_1_OFFSET))(this, name);
		}

		::HoudiniEngineUnity::HEU_ParameterData* GetParameterWithParmID(::System::Int32 parmID)
		{
			return ((::HoudiniEngineUnity::HEU_ParameterData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETPARAMETERWITHPARMID_OFFSET))(this, parmID);
		}

		::System::Void RemoveParameter(::System::Int32 listIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_REMOVEPARAMETER_OFFSET))(this, listIndex);
		}

		::System::Int32 GetChosenIndexFromChoiceList(::HoudiniEngineUnity::HEU_ParameterData* inChoiceParameter)
		{
			return ((::System::Int32(*)(::PVOID, ::HoudiniEngineUnity::HEU_ParameterData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETCHOSENINDEXFROMCHOICELIST_OFFSET))(this, inChoiceParameter);
		}

		::System::String* GetStringFromParameter(::System::String* paramName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETSTRINGFROMPARAMETER_OFFSET))(this, paramName);
		}

		::System::Void SetStringToParameter(::System::String* paramName, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SETSTRINGTOPARAMETER_OFFSET))(this, paramName, value);
		}

		::System::Boolean HaveParametersChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_HAVEPARAMETERSCHANGED_OFFSET))(this);
		}

		::System::Boolean UploadValuesToHoudini(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset, ::System::Boolean bDoCheck, ::System::Boolean bForceUploadInputs)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_UPLOADVALUESTOHOUDINI_OFFSET))(this, session, parentAsset, bDoCheck, bForceUploadInputs);
		}

		::System::Void InsertInstanceToMultiParm(::System::Int32 unityParamIndex, ::System::Int32 instanceIndex, ::System::Int32 numInstancesToAdd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_INSERTINSTANCETOMULTIPARM_OFFSET))(this, unityParamIndex, instanceIndex, numInstancesToAdd);
		}

		::System::Void RemoveInstancesFromMultiParm(::System::Int32 unityParamIndex, ::System::Int32 instanceIndex, ::System::Int32 numInstancesToRemove)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_REMOVEINSTANCESFROMMULTIPARM_OFFSET))(this, unityParamIndex, instanceIndex, numInstancesToRemove);
		}

		::System::Void ClearInstancesFromMultiParm(::System::Int32 unityParamIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_CLEARINSTANCESFROMMULTIPARM_OFFSET))(this, unityParamIndex);
		}

		::System::Boolean HasModifiersPending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_HASMODIFIERSPENDING_OFFSET))(this);
		}

		::System::Void ProcessModifiers(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_PROCESSMODIFIERS_OFFSET))(this, session);
		}

		::System::Void GetParameterDataForUIRestore(::System::Collections::Generic::Dictionary_2<::System::String*, ::HoudiniEngineUnity::HEU_ParameterData*>* folderParams, ::System::Collections::Generic::Dictionary_2<::System::String*, ::HoudiniEngineUnity::HEU_InputNode*>* inputNodeParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::HoudiniEngineUnity::HEU_ParameterData*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::HoudiniEngineUnity::HEU_InputNode*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETPARAMETERDATAFORUIRESTORE_OFFSET))(this, folderParams, inputNodeParams);
		}

		::System::Void GetInputNodeConnectionObjects(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* inputNodeObjects)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETINPUTNODECONNECTIONOBJECTS_OFFSET))(this, inputNodeObjects);
		}

		::System::Void DownloadPresetData(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_DOWNLOADPRESETDATA_OFFSET))(this, session);
		}

		::System::Void UploadPresetData(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_UPLOADPRESETDATA_OFFSET))(this, session);
		}

		::System::Void DownloadAsDefaultPresetData(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_DOWNLOADASDEFAULTPRESETDATA_OFFSET))(this, session);
		}

		::System::Void UploadParameterInputs(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset, ::System::Boolean bForceUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_UPLOADPARAMETERINPUTS_OFFSET))(this, session, parentAsset, bForceUpdate);
		}

		::System::Void UpdateTransformParameters(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HAPI_TransformEuler& HAPITransform)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_TransformEuler&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_UPDATETRANSFORMPARAMETERS_OFFSET))(this, session, HAPITransform);
		}

		::System::Void SyncParameterFromHoudini(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::String* parameterName)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SYNCPARAMETERFROMHOUDINI_OFFSET))(this, session, parameterName);
		}

		::System::Void SyncInternalParametersForUndoCompare(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SYNCINTERNALPARAMETERSFORUNDOCOMPARE_OFFSET))(this, session);
		}

		::System::Void ResetAllToDefault(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_RESETALLTODEFAULT_OFFSET))(this, session);
		}
	};
}
