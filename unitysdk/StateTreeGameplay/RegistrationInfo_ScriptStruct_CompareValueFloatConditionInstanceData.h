#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class FloatPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATCONDITIONINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x18C5B600)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATCONDITIONINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C5B290)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_CompareValueFloatConditionInstanceData_TypeDefinitionIndex = 57548;

	class RegistrationInfo_ScriptStruct_CompareValueFloatConditionInstanceData : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompareValueFloatConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0x3B270);
		}
		static ::UnrealTypes::FloatPropertyParams** StaticGet_Property_Right()
		{
			return (::UnrealTypes::FloatPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompareValueFloatConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0x3B278);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompareValueFloatConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0x3B280);
		}
		static ::UnrealTypes::FloatPropertyParams** StaticGet_Property_Left()
		{
			return (::UnrealTypes::FloatPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompareValueFloatConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0x3B288);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompareValueFloatConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0x3B290);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATCONDITIONINSTANCEDATA__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATCONDITIONINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
