#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ParmInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class HEU_InputNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GUIContent; }
namespace UnityEngine { class Gradient; }

#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_CHILDINDEX_OFFSET UNITYSDK_OFFSET(0x1B935B50)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_FLOATMAX_OFFSET UNITYSDK_OFFSET(0x1B935F00)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_FLOATMIN_OFFSET UNITYSDK_OFFSET(0x1B935EF0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_FLOATUIMAX_OFFSET UNITYSDK_OFFSET(0x1B935F20)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_FLOATUIMIN_OFFSET UNITYSDK_OFFSET(0x1B935F10)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_INTMAX_OFFSET UNITYSDK_OFFSET(0x1B935CB0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_INTMIN_OFFSET UNITYSDK_OFFSET(0x1B935BF0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_INTUIMAX_OFFSET UNITYSDK_OFFSET(0x1B935E30)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_INTUIMIN_OFFSET UNITYSDK_OFFSET(0x1B935D70)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_PARENTID_OFFSET UNITYSDK_OFFSET(0x1B935B40)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_PARMID_OFFSET UNITYSDK_OFFSET(0x1B922500)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_PARMSIZE_OFFSET UNITYSDK_OFFSET(0x1B935B60)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_HASMAX_OFFSET UNITYSDK_OFFSET(0x1B935BC0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_HASMIN_OFFSET UNITYSDK_OFFSET(0x1B935BB0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_HASUIMAX_OFFSET UNITYSDK_OFFSET(0x1B935BE0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_HASUIMIN_OFFSET UNITYSDK_OFFSET(0x1B935BD0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISASSETPATH_OFFSET UNITYSDK_OFFSET(0x1B936040)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISBUTTON_OFFSET UNITYSDK_OFFSET(0x1B935FC0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISCOLORRAMP_OFFSET UNITYSDK_OFFSET(0x1B935F80)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISCOLOR_OFFSET UNITYSDK_OFFSET(0x1B935FA0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISCONTAINER_OFFSET UNITYSDK_OFFSET(0x1B935F30)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1B936050)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISFLOATRAMP_OFFSET UNITYSDK_OFFSET(0x1B935F70)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISFLOAT_OFFSET UNITYSDK_OFFSET(0x1B935B80)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISFOLDER_OFFSET UNITYSDK_OFFSET(0x1B935FB0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISINT_OFFSET UNITYSDK_OFFSET(0x1B935B70)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISMULTIPARAM_OFFSET UNITYSDK_OFFSET(0x1B935F50)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISPATHFILE_OFFSET UNITYSDK_OFFSET(0x1B935BA0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISRAMP_OFFSET UNITYSDK_OFFSET(0x1B935F60)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISSTRING_OFFSET UNITYSDK_OFFSET(0x1B935B90)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISTOGGLE_OFFSET UNITYSDK_OFFSET(0x1B935F90)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_TOVECTOR3_OFFSET UNITYSDK_OFFSET(0x1B935FD0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9368E0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ParameterData_TypeDefinitionIndex = 40547;

	class HEU_ParameterData : public ::System::Object
	{
	public:
		::System::Int32 _unityIndex; // 0x10
		::System::String* _name; // 0x18
		::System::String* _labelName; // 0x20
		::System::String* _help; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* _childParameterIDs; // 0x30
		::System::Int32 _choiceValue; // 0x38
		::Il2CppArray<::System::Int32>* _intValues; // 0x40
		::Il2CppArray<::System::Single>* _floatValues; // 0x48
		::Il2CppArray<::System::String*>* _stringValues; // 0x50
		::System::Boolean _toggle; // 0x58
		::UnityEngine::Color _color; // 0x5C
		::UnityEngine::Gradient* _gradient; // 0x70
		::UnityEngine::AnimationCurve* _animCurve; // 0x78
		::Il2CppArray<::UnityEngine::GUIContent*>* _choiceLabels; // 0x80
		::Il2CppArray<::System::String*>* _choiceStringValues; // 0x88
		::Il2CppArray<::System::Int32>* _choiceIntValues; // 0x90
		::HoudiniEngineUnity::HAPI_ParmInfo _parmInfo; // 0x98
		::System::Boolean _showChildren; // 0x12C
		::System::String* _fileTypeInfo; // 0x130
		::System::Int32 _folderListChildrenProcessed; // 0x138
		::System::Int32 _tabSelectedIndex; // 0x13C
		::HoudiniEngineUnity::HEU_InputNode* _paramInputNode; // 0x140
		::System::Boolean _hasAssetPathTag; // 0x148

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ParmID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_PARMID_OFFSET))(this);
		}

		::System::Int32 get_ParentID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_PARENTID_OFFSET))(this);
		}

		::System::Int32 get_ChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_CHILDINDEX_OFFSET))(this);
		}

		::System::Int32 get_ParmSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_PARMSIZE_OFFSET))(this);
		}

		::System::Boolean IsInt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISINT_OFFSET))(this);
		}

		::System::Boolean IsFloat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISFLOAT_OFFSET))(this);
		}

		::System::Boolean IsString()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISSTRING_OFFSET))(this);
		}

		::System::Boolean IsPathFile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISPATHFILE_OFFSET))(this);
		}

		::System::Boolean HasMin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_HASMIN_OFFSET))(this);
		}

		::System::Boolean HasMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_HASMAX_OFFSET))(this);
		}

		::System::Boolean HasUIMin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_HASUIMIN_OFFSET))(this);
		}

		::System::Boolean HasUIMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_HASUIMAX_OFFSET))(this);
		}

		::System::Int32 get_IntMin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_INTMIN_OFFSET))(this);
		}

		::System::Int32 get_IntMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_INTMAX_OFFSET))(this);
		}

		::System::Int32 get_IntUIMin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_INTUIMIN_OFFSET))(this);
		}

		::System::Int32 get_IntUIMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_INTUIMAX_OFFSET))(this);
		}

		::System::Single get_FloatMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_FLOATMIN_OFFSET))(this);
		}

		::System::Single get_FloatMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_FLOATMAX_OFFSET))(this);
		}

		::System::Single get_FloatUIMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_FLOATUIMIN_OFFSET))(this);
		}

		::System::Single get_FloatUIMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_FLOATUIMAX_OFFSET))(this);
		}

		::System::Boolean IsContainer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISCONTAINER_OFFSET))(this);
		}

		::System::Boolean IsMultiParam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISMULTIPARAM_OFFSET))(this);
		}

		::System::Boolean IsRamp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISRAMP_OFFSET))(this);
		}

		::System::Boolean IsFloatRamp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISFLOATRAMP_OFFSET))(this);
		}

		::System::Boolean IsColorRamp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISCOLORRAMP_OFFSET))(this);
		}

		::System::Boolean IsToggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISTOGGLE_OFFSET))(this);
		}

		::System::Boolean IsColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISCOLOR_OFFSET))(this);
		}

		::System::Boolean IsFolder()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISFOLDER_OFFSET))(this);
		}

		::System::Boolean IsButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISBUTTON_OFFSET))(this);
		}

		::UnityEngine::Vector3 ToVector3()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_TOVECTOR3_OFFSET))(this);
		}

		::System::Boolean IsAssetPath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISASSETPATH_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::HEU_ParameterData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_ParameterData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
