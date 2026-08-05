#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class BoolPropertyParams; }
namespace UnrealTypes { class EnumPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class UInt8PropertyParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREDISTANCECONDITION_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1878ECD0)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREDISTANCECONDITION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1878E840)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_CompareDistanceCondition_TypeDefinitionIndex = 80410;

	class RegistrationInfo_ScriptStruct_CompareDistanceCondition : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompareDistanceCondition_TypeDefinitionIndex)->GetStaticField(0x4DDF0);
		}
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_Operator()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompareDistanceCondition_TypeDefinitionIndex)->GetStaticField(0x4DDF8);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_Invert()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompareDistanceCondition_TypeDefinitionIndex)->GetStaticField(0x4DE00);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompareDistanceCondition_TypeDefinitionIndex)->GetStaticField(0x4DE08);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_Operator_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompareDistanceCondition_TypeDefinitionIndex)->GetStaticField(0x4DE10);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompareDistanceCondition_TypeDefinitionIndex)->GetStaticField(0x4DE18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREDISTANCECONDITION__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREDISTANCECONDITION_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
