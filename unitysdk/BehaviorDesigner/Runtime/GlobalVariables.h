#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace BehaviorDesigner::Runtime { class SharedVariable; }
namespace BehaviorDesigner::Runtime { class VariableSerializationData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_CHECKFORSERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1E3E0B50)
#define BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_DOMAINRESET_OFFSET UNITYSDK_OFFSET(0x1E3E15A0)
#define BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_GETALLVARIABLES_OFFSET UNITYSDK_OFFSET(0x1E3E10C0)
#define BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_GETVARIABLE_OFFSET UNITYSDK_OFFSET(0x1E3E0F50)
#define BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1E3E0800)
#define BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_GET_VARIABLEDATA_OFFSET UNITYSDK_OFFSET(0x1E3E0F10)
#define BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_GET_VARIABLES_OFFSET UNITYSDK_OFFSET(0x1E3E0CA0)
#define BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1E3E0F30)
#define BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_SETALLVARIABLES_OFFSET UNITYSDK_OFFSET(0x1E3E1550)
#define BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_SETVARIABLEVALUE_OFFSET UNITYSDK_OFFSET(0x1E3E1450)
#define BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_SETVARIABLE_OFFSET UNITYSDK_OFFSET(0x1E3E1110)
#define BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_SET_VARIABLEDATA_OFFSET UNITYSDK_OFFSET(0x1E3E0F20)
#define BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_SET_VARIABLES_OFFSET UNITYSDK_OFFSET(0x1E3E0CB0)
#define BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1E3E0F40)
#define BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_UPDATEVARIABLENAME_OFFSET UNITYSDK_OFFSET(0x1E3E14E0)
#define BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_UPDATEVARIABLESINDEX_OFFSET UNITYSDK_OFFSET(0x1E3E0D00)
#define BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3E1650)
#define BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E15F0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int GlobalVariables_TypeDefinitionIndex = 33242;

	class GlobalVariables : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::BehaviorDesigner::Runtime::GlobalVariables** StaticGet_instance()
		{
			return (::BehaviorDesigner::Runtime::GlobalVariables**)Il2CppClass::FromTypeDefinitionIndex(GlobalVariables_TypeDefinitionIndex)->GetStaticField(0x27590);
		}
		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::SharedVariable*>* mVariables; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* mSharedVariableIndex; // 0x20
		::BehaviorDesigner::Runtime::VariableSerializationData* mVariableData; // 0x28
		::System::String* mVersion; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES__CCTOR_OFFSET))();
		}

		static ::BehaviorDesigner::Runtime::GlobalVariables* get_Instance()
		{
			return ((::BehaviorDesigner::Runtime::GlobalVariables*(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_GET_INSTANCE_OFFSET))();
		}

		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::SharedVariable*>* get_Variables()
		{
			return ((::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::SharedVariable*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_GET_VARIABLES_OFFSET))(this);
		}

		::System::Void set_Variables(::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::SharedVariable*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::SharedVariable*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_SET_VARIABLES_OFFSET))(this, value);
		}

		::BehaviorDesigner::Runtime::VariableSerializationData* get_VariableData()
		{
			return ((::BehaviorDesigner::Runtime::VariableSerializationData*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_GET_VARIABLEDATA_OFFSET))(this);
		}

		::System::Void set_VariableData(::BehaviorDesigner::Runtime::VariableSerializationData* value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::VariableSerializationData*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_SET_VARIABLEDATA_OFFSET))(this, value);
		}

		::System::String* get_Version()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_SET_VERSION_OFFSET))(this, value);
		}

		::System::Void CheckForSerialization(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_CHECKFORSERIALIZATION_OFFSET))(this, force);
		}

		::BehaviorDesigner::Runtime::SharedVariable* GetVariable(::System::String* name)
		{
			return ((::BehaviorDesigner::Runtime::SharedVariable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_GETVARIABLE_OFFSET))(this, name);
		}

		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::SharedVariable*>* GetAllVariables()
		{
			return ((::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::SharedVariable*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_GETALLVARIABLES_OFFSET))(this);
		}

		::System::Void SetVariable(::System::String* name, ::BehaviorDesigner::Runtime::SharedVariable* sharedVariable)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::BehaviorDesigner::Runtime::SharedVariable*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_SETVARIABLE_OFFSET))(this, name, sharedVariable);
		}

		::System::Void SetVariableValue(::System::String* name, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_SETVARIABLEVALUE_OFFSET))(this, name, value);
		}

		::System::Void UpdateVariableName(::BehaviorDesigner::Runtime::SharedVariable* sharedVariable, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::SharedVariable*, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_UPDATEVARIABLENAME_OFFSET))(this, sharedVariable, name);
		}

		::System::Void SetAllVariables(::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::SharedVariable*>* variables)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::SharedVariable*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_SETALLVARIABLES_OFFSET))(this, variables);
		}

		::System::Void UpdateVariablesIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_UPDATEVARIABLESINDEX_OFFSET))(this);
		}

		static ::System::Void DomainReset()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_GLOBALVARIABLES_DOMAINRESET_OFFSET))();
		}
	};
}
