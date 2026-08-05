#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class FloatPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class StructPropertyParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREDISTANCECONDITIONINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1EC66F70)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREDISTANCECONDITIONINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC66AD0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_CompareDistanceConditionInstanceData_TypeDefinitionIndex = 72960;

	class RegistrationInfo_ScriptStruct_CompareDistanceConditionInstanceData : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_Second()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompareDistanceConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0x497C0);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompareDistanceConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0x497C8);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompareDistanceConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0x497D0);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompareDistanceConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0x497D8);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_First()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompareDistanceConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0x497E0);
		}
		static ::UnrealTypes::FloatPropertyParams** StaticGet_Property_Distance()
		{
			return (::UnrealTypes::FloatPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompareDistanceConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0x497E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREDISTANCECONDITIONINSTANCEDATA__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREDISTANCECONDITIONINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
