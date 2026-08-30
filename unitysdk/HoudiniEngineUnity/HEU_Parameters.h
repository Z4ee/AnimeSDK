#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_NodeInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ParmChoiceInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_TransformEuler.h"
#include "unitysdk/HoudiniEngineUnity/HEU_HoudiniRampInterpolationTypeWrapper.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace HoudiniEngineUnity { class HEU_ColorRampPointWrapper; }
namespace HoudiniEngineUnity { class HEU_FloatRampPointWrapper; }
namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace HoudiniEngineUnity { class HEU_InputNode; }
namespace HoudiniEngineUnity { class HEU_ParameterData; }
namespace HoudiniEngineUnity { class HEU_ParameterModifier; }
namespace HoudiniEngineUnity { class HEU_ParameterTupleWrapper; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_PARAMETERS_AREPARAMETERSVALID_OFFSET UNITYSDK_OFFSET(0x1B45C540)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1B405220)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_CLEARINSTANCESFROMMULTIPARM_OFFSET UNITYSDK_OFFSET(0x1B4651A0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_DOWNLOADASDEFAULTPRESETDATA_OFFSET UNITYSDK_OFFSET(0x1B40FFF0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_DOWNLOADPRESETDATA_OFFSET UNITYSDK_OFFSET(0x1B41C140)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETASSETREFPARAMETERVALUES_OFFSET UNITYSDK_OFFSET(0x1B45E6B0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETASSETREFPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x1B45B590)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETBOOLPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x1B4562B0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETCHOICEPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x1B45AA00)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETCOLORPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x1B45BA10)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETCOLORRAMPPARAMETERPOINTS_OFFSET UNITYSDK_OFFSET(0x1B463450)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETCOLORRAMPPARAMETERPOINTVALUE_OFFSET UNITYSDK_OFFSET(0x1B462400)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETDEFAULTPRESETDATA_OFFSET UNITYSDK_OFFSET(0x1B45C510)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETFLOATPARAMETERVALUES_OFFSET UNITYSDK_OFFSET(0x1B4580B0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETFLOATPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x1B4579A0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETFLOATRAMPPARAMETERPOINTS_OFFSET UNITYSDK_OFFSET(0x1B461320)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETFLOATRAMPPARAMETERPOINTVALUE_OFFSET UNITYSDK_OFFSET(0x1B4603E0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETINPUTNODECONNECTIONOBJECTS_OFFSET UNITYSDK_OFFSET(0x1B420A60)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETINTPARAMETERVALUES_OFFSET UNITYSDK_OFFSET(0x1B45D050)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETINTPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x1B456B90)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETPARAMETERDATAFORUIRESTORE_OFFSET UNITYSDK_OFFSET(0x1B419810)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1B45C5D0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETPARAMETERTUPLES_OFFSET UNITYSDK_OFFSET(0x1B4646C0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETPARAMETERWITHPARMID_OFFSET UNITYSDK_OFFSET(0x1B45C630)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETPARAMETER_1_OFFSET UNITYSDK_OFFSET(0x1B441350)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETPARAMETER_OFFSET UNITYSDK_OFFSET(0x1B45C5E0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETPRESETDATA_OFFSET UNITYSDK_OFFSET(0x1B45C4F0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETRAMPPARAMETERNUMPOINTS_OFFSET UNITYSDK_OFFSET(0x1B45F550)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETSESSION_OFFSET UNITYSDK_OFFSET(0x1B45C550)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETSTRINGPARAMETERVALUES_OFFSET UNITYSDK_OFFSET(0x1B45DCC0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GETSTRINGPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x1B459560)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GET_NODEID_OFFSET UNITYSDK_OFFSET(0x1B45C490)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GET_PARAMETERMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1B45C4C0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GET_PARENTASSET_OFFSET UNITYSDK_OFFSET(0x1B45C460)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GET_RECACHEUI_OFFSET UNITYSDK_OFFSET(0x1B45C520)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GET_REQUIRESREGENERATION_OFFSET UNITYSDK_OFFSET(0x1B45C4D0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GET_ROOTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1B45C4B0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_GET_SHOWPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1B45C470)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_HASMODIFIERSPENDING_OFFSET UNITYSDK_OFFSET(0x1B413EB0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_HAVEPARAMETERSCHANGED_OFFSET UNITYSDK_OFFSET(0x1B418AF0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B419A10)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_INSERTINSTANCETOMULTIPARM_OFFSET UNITYSDK_OFFSET(0x1B45F2F0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1B465410)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_PROCESSMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1B413ED0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_RECOOK_OFFSET UNITYSDK_OFFSET(0x1B45C5C0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_REMOVEINSTANCESFROMMULTIPARM_OFFSET UNITYSDK_OFFSET(0x1B45F420)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_REMOVEPARAMETER_OFFSET UNITYSDK_OFFSET(0x1B45C720)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_RESETALLTODEFAULT_1_OFFSET UNITYSDK_OFFSET(0x1B40A3F0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_RESETALLTODEFAULT_OFFSET UNITYSDK_OFFSET(0x1B45C7C0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SETASSETREFPARAMETERVALUES_OFFSET UNITYSDK_OFFSET(0x1B45E180)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SETASSETREFPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x1B45B090)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SETBOOLPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x1B456720)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SETCHOICEPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x1B45A380)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SETCOLORPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x1B45BE90)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SETCOLORRAMPPARAMETERPOINTS_OFFSET UNITYSDK_OFFSET(0x1B462F90)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SETCOLORRAMPPARAMETERPOINTVALUE_OFFSET UNITYSDK_OFFSET(0x1B461890)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SETFLOATPARAMETERVALUES_OFFSET UNITYSDK_OFFSET(0x1B458D10)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SETFLOATPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x1B458610)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SETFLOATRAMPPARAMETERPOINTS_OFFSET UNITYSDK_OFFSET(0x1B460E70)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SETFLOATRAMPPARAMETERPOINTVALUE_OFFSET UNITYSDK_OFFSET(0x1B45F980)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SETINTPARAMETERVALUES_OFFSET UNITYSDK_OFFSET(0x1B45C860)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SETINTPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x1B4572A0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SETPARAMETERTUPLES_OFFSET UNITYSDK_OFFSET(0x1B463FF0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SETPRESETDATA_OFFSET UNITYSDK_OFFSET(0x1B45C500)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SETRAMPPARAMETERNUMPOINTS_OFFSET UNITYSDK_OFFSET(0x1B45EBB0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SETSTRINGPARAMETERVALUES_OFFSET UNITYSDK_OFFSET(0x1B45D540)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SETSTRINGPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x1B459C80)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SETUPRAMPPARAMETER_OFFSET UNITYSDK_OFFSET(0x1B464B60)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SET_NODEID_OFFSET UNITYSDK_OFFSET(0x1B45C4A0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SET_RECACHEUI_OFFSET UNITYSDK_OFFSET(0x1B45C530)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SET_REQUIRESREGENERATION_OFFSET UNITYSDK_OFFSET(0x1B45C4E0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SET_SHOWPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1B45C480)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SYNCINTERNALPARAMETERSFORUNDOCOMPARE_OFFSET UNITYSDK_OFFSET(0x1B426100)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_SYNCPARAMETERFROMHOUDINI_OFFSET UNITYSDK_OFFSET(0x1B465310)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_TRIGGERBUTTONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1B4639B0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_UPDATETRANSFORMPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1B4652C0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_UPLOADPARAMETERINPUTS_OFFSET UNITYSDK_OFFSET(0x1B41C450)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_UPLOADPRESETDATA_OFFSET UNITYSDK_OFFSET(0x1B41C1F0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_UPLOADVALUESTOHOUDINI_OFFSET UNITYSDK_OFFSET(0x1B414DD0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B465740)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Parameters_TypeDefinitionIndex = 39255;

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
		::HoudiniEngineUnity::HEU_HoudiniAsset* _parentAsset; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS__CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_HoudiniAsset* get_ParentAsset()
		{
			return ((::HoudiniEngineUnity::HEU_HoudiniAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GET_PARENTASSET_OFFSET))(this);
		}

		::System::Boolean get_ShowParameters()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GET_SHOWPARAMETERS_OFFSET))(this);
		}

		::System::Void set_ShowParameters(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SET_SHOWPARAMETERS_OFFSET))(this, a1);
		}

		::System::Int32 get_NodeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GET_NODEID_OFFSET))(this);
		}

		::System::Void set_NodeID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SET_NODEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_RootParameters()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GET_ROOTPARAMETERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterModifier*>* get_ParameterModifiers()
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterModifier*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GET_PARAMETERMODIFIERS_OFFSET))(this);
		}

		::System::Boolean get_RequiresRegeneration()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GET_REQUIRESREGENERATION_OFFSET))(this);
		}

		::System::Void set_RequiresRegeneration(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SET_REQUIRESREGENERATION_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* GetPresetData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETPRESETDATA_OFFSET))(this);
		}

		::System::Void SetPresetData(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SETPRESETDATA_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* GetDefaultPresetData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETDEFAULTPRESETDATA_OFFSET))(this);
		}

		::System::Boolean get_RecacheUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GET_RECACHEUI_OFFSET))(this);
		}

		::System::Void set_RecacheUI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SET_RECACHEUI_OFFSET))(this, a1);
		}

		::System::Boolean AreParametersValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_AREPARAMETERSVALID_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_SessionBase* GetSession()
		{
			return ((::HoudiniEngineUnity::HEU_SessionBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETSESSION_OFFSET))(this);
		}

		::System::Void Recook()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_RECOOK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterData*>* GetParameters()
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETPARAMETERS_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_ParameterData* GetParameter(::System::Int32 a1)
		{
			return ((::HoudiniEngineUnity::HEU_ParameterData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETPARAMETER_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::HEU_ParameterData* GetParameter_1(::System::String* a1)
		{
			return ((::HoudiniEngineUnity::HEU_ParameterData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETPARAMETER_1_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::HEU_ParameterData* GetParameterWithParmID(::System::Int32 a1)
		{
			return ((::HoudiniEngineUnity::HEU_ParameterData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETPARAMETERWITHPARMID_OFFSET))(this, a1);
		}

		::System::Void RemoveParameter(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_REMOVEPARAMETER_OFFSET))(this, a1);
		}

		::System::Boolean HaveParametersChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_HAVEPARAMETERSCHANGED_OFFSET))(this);
		}

		::System::Boolean ResetAllToDefault(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_RESETALLTODEFAULT_OFFSET))(this, a1);
		}

		::System::Boolean SetFloatParameterValue(::System::String* a1, ::System::Single a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SETFLOATPARAMETERVALUE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean GetFloatParameterValue(::System::String* a1, ::System::Single& a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single&, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETFLOATPARAMETERVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean SetFloatParameterValues(::System::String* a1, ::Il2CppArray<::System::Single>* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Single>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SETFLOATPARAMETERVALUES_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GetFloatParameterValues(::System::String* a1, ::Il2CppArray<::System::Single>*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Single>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETFLOATPARAMETERVALUES_OFFSET))(this, a1, a2);
		}

		::System::Boolean SetColorParameterValue(::System::String* a1, ::UnityEngine::Color a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Color, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SETCOLORPARAMETERVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GetColorParameterValue(::System::String* a1, ::UnityEngine::Color& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETCOLORPARAMETERVALUE_OFFSET))(this, a1, a2);
		}

		::System::Boolean SetIntParameterValue(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SETINTPARAMETERVALUE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean GetIntParameterValue(::System::String* a1, ::System::Int32& a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETINTPARAMETERVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean SetIntParameterValues(::System::String* a1, ::Il2CppArray<::System::Int32>* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SETINTPARAMETERVALUES_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GetIntParameterValues(::System::String* a1, ::Il2CppArray<::System::Int32>*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Int32>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETINTPARAMETERVALUES_OFFSET))(this, a1, a2);
		}

		::System::Boolean SetChoiceParameterValue(::System::String* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SETCHOICEPARAMETERVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GetChoiceParameterValue(::System::String* a1, ::System::Int32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETCHOICEPARAMETERVALUE_OFFSET))(this, a1, a2);
		}

		::System::Boolean SetBoolParameterValue(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SETBOOLPARAMETERVALUE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean GetBoolParameterValue(::System::String* a1, ::System::Boolean& a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean&, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETBOOLPARAMETERVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean SetStringParameterValue(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SETSTRINGPARAMETERVALUE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean GetStringParameterValue(::System::String* a1, ::System::String*& a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETSTRINGPARAMETERVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean SetStringParameterValues(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SETSTRINGPARAMETERVALUES_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GetStringParameterValues(::System::String* a1, ::Il2CppArray<::System::String*>*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETSTRINGPARAMETERVALUES_OFFSET))(this, a1, a2);
		}

		::System::Boolean SetAssetRefParameterValue(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SETASSETREFPARAMETERVALUE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean SetAssetRefParameterValues(::System::String* a1, ::Il2CppArray<::UnityEngine::GameObject*>* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Il2CppArray<::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SETASSETREFPARAMETERVALUES_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GetAssetRefParameterValue(::System::String* a1, ::UnityEngine::GameObject*& a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*&, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETASSETREFPARAMETERVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GetAssetRefParameterValues(::System::String* a1, ::Il2CppArray<::UnityEngine::GameObject*>*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Il2CppArray<::UnityEngine::GameObject*>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETASSETREFPARAMETERVALUES_OFFSET))(this, a1, a2);
		}

		::System::Boolean SetRampParameterNumPoints(::System::String* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SETRAMPPARAMETERNUMPOINTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GetRampParameterNumPoints(::System::String* a1, ::System::Int32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETRAMPPARAMETERNUMPOINTS_OFFSET))(this, a1, a2);
		}

		::System::Boolean SetFloatRampParameterPointValue(::System::String* a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::HoudiniEngineUnity::HEU_HoudiniRampInterpolationTypeWrapper a5, ::System::Boolean a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Single, ::System::Single, ::HoudiniEngineUnity::HEU_HoudiniRampInterpolationTypeWrapper, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SETFLOATRAMPPARAMETERPOINTVALUE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean GetFloatRampParameterPointValue(::System::String* a1, ::System::Int32 a2, ::System::Single& a3, ::System::Single& a4, ::HoudiniEngineUnity::HEU_HoudiniRampInterpolationTypeWrapper& a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Single&, ::System::Single&, ::HoudiniEngineUnity::HEU_HoudiniRampInterpolationTypeWrapper&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETFLOATRAMPPARAMETERPOINTVALUE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean SetFloatRampParameterPoints(::System::String* a1, ::Il2CppArray<::HoudiniEngineUnity::HEU_FloatRampPointWrapper*>* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Il2CppArray<::HoudiniEngineUnity::HEU_FloatRampPointWrapper*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SETFLOATRAMPPARAMETERPOINTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GetFloatRampParameterPoints(::System::String* a1, ::Il2CppArray<::HoudiniEngineUnity::HEU_FloatRampPointWrapper*>*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Il2CppArray<::HoudiniEngineUnity::HEU_FloatRampPointWrapper*>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETFLOATRAMPPARAMETERPOINTS_OFFSET))(this, a1, a2);
		}

		::System::Boolean SetColorRampParameterPointValue(::System::String* a1, ::System::Int32 a2, ::System::Single a3, ::UnityEngine::Color a4, ::HoudiniEngineUnity::HEU_HoudiniRampInterpolationTypeWrapper a5, ::System::Boolean a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Single, ::UnityEngine::Color, ::HoudiniEngineUnity::HEU_HoudiniRampInterpolationTypeWrapper, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SETCOLORRAMPPARAMETERPOINTVALUE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean GetColorRampParameterPointValue(::System::String* a1, ::System::Int32 a2, ::System::Single& a3, ::UnityEngine::Color& a4, ::HoudiniEngineUnity::HEU_HoudiniRampInterpolationTypeWrapper& a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Single&, ::UnityEngine::Color&, ::HoudiniEngineUnity::HEU_HoudiniRampInterpolationTypeWrapper&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETCOLORRAMPPARAMETERPOINTVALUE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean SetColorRampParameterPoints(::System::String* a1, ::Il2CppArray<::HoudiniEngineUnity::HEU_ColorRampPointWrapper*>* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Il2CppArray<::HoudiniEngineUnity::HEU_ColorRampPointWrapper*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SETCOLORRAMPPARAMETERPOINTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GetColorRampParameterPoints(::System::String* a1, ::Il2CppArray<::HoudiniEngineUnity::HEU_ColorRampPointWrapper*>*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Il2CppArray<::HoudiniEngineUnity::HEU_ColorRampPointWrapper*>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETCOLORRAMPPARAMETERPOINTS_OFFSET))(this, a1, a2);
		}

		::System::Boolean TriggerButtonParameter(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_TRIGGERBUTTONPARAMETER_OFFSET))(this, a1);
		}

		::System::Boolean SetParameterTuples(::System::Collections::Generic::Dictionary_2<::System::String*, ::HoudiniEngineUnity::HEU_ParameterTupleWrapper*>* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::HoudiniEngineUnity::HEU_ParameterTupleWrapper*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SETPARAMETERTUPLES_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetParameterTuples(::System::Collections::Generic::Dictionary_2<::System::String*, ::HoudiniEngineUnity::HEU_ParameterTupleWrapper*>*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::HoudiniEngineUnity::HEU_ParameterTupleWrapper*>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETPARAMETERTUPLES_OFFSET))(this, a1);
		}

		::System::Boolean Initialize(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::HoudiniEngineUnity::HAPI_NodeInfo& a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::HoudiniEngineUnity::HEU_ParameterData*>* a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::HoudiniEngineUnity::HEU_InputNode*>* a5, ::HoudiniEngineUnity::HEU_HoudiniAsset* a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::HoudiniEngineUnity::HAPI_NodeInfo&, ::System::Collections::Generic::Dictionary_2<::System::String*, ::HoudiniEngineUnity::HEU_ParameterData*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::HoudiniEngineUnity::HEU_InputNode*>*, ::HoudiniEngineUnity::HEU_HoudiniAsset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_INITIALIZE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetupRampParameter(::HoudiniEngineUnity::HEU_ParameterData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_ParameterData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SETUPRAMPPARAMETER_OFFSET))(this, a1);
		}

		::System::Boolean UploadValuesToHoudini(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_HoudiniAsset* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_UPLOADVALUESTOHOUDINI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void InsertInstanceToMultiParm(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_INSERTINSTANCETOMULTIPARM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveInstancesFromMultiParm(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_REMOVEINSTANCESFROMMULTIPARM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ClearInstancesFromMultiParm(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_CLEARINSTANCESFROMMULTIPARM_OFFSET))(this, a1);
		}

		::System::Boolean HasModifiersPending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_HASMODIFIERSPENDING_OFFSET))(this);
		}

		::System::Void ProcessModifiers(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_PROCESSMODIFIERS_OFFSET))(this, a1);
		}

		::System::Void GetParameterDataForUIRestore(::System::Collections::Generic::Dictionary_2<::System::String*, ::HoudiniEngineUnity::HEU_ParameterData*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::HoudiniEngineUnity::HEU_InputNode*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::HoudiniEngineUnity::HEU_ParameterData*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::HoudiniEngineUnity::HEU_InputNode*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETPARAMETERDATAFORUIRESTORE_OFFSET))(this, a1, a2);
		}

		::System::Void GetInputNodeConnectionObjects(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_GETINPUTNODECONNECTIONOBJECTS_OFFSET))(this, a1);
		}

		::System::Void DownloadPresetData(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_DOWNLOADPRESETDATA_OFFSET))(this, a1);
		}

		::System::Void UploadPresetData(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_UPLOADPRESETDATA_OFFSET))(this, a1);
		}

		::System::Void DownloadAsDefaultPresetData(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_DOWNLOADASDEFAULTPRESETDATA_OFFSET))(this, a1);
		}

		::System::Void UploadParameterInputs(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_HoudiniAsset* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_UPLOADPARAMETERINPUTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateTransformParameters(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HAPI_TransformEuler& a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_TransformEuler&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_UPDATETRANSFORMPARAMETERS_OFFSET))(this, a1, a2);
		}

		::System::Void SyncParameterFromHoudini(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SYNCPARAMETERFROMHOUDINI_OFFSET))(this, a1, a2);
		}

		::System::Void SyncInternalParametersForUndoCompare(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_SYNCINTERNALPARAMETERSFORUNDOCOMPARE_OFFSET))(this, a1);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_CLEANUP_OFFSET))(this);
		}

		::System::Void ResetAllToDefault_1(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_RESETALLTODEFAULT_1_OFFSET))(this, a1);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::HEU_Parameters* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_Parameters*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
