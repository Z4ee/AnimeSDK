#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class FloatPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_RANDOMVALUEFLOATTASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D33D5A0)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_RANDOMVALUEFLOATTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D33D200)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_RandomValueFloatTask_TypeDefinitionIndex = 60491;

	class RegistrationInfo_ScriptStruct_RandomValueFloatTask : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_RandomValueFloatTask_TypeDefinitionIndex)->GetStaticField(0x47930);
		}
		static ::UnrealTypes::FloatPropertyParams** StaticGet_Property_MinValue()
		{
			return (::UnrealTypes::FloatPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_RandomValueFloatTask_TypeDefinitionIndex)->GetStaticField(0x47938);
		}
		static ::UnrealTypes::FloatPropertyParams** StaticGet_Property_MaxValue()
		{
			return (::UnrealTypes::FloatPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_RandomValueFloatTask_TypeDefinitionIndex)->GetStaticField(0x47940);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_RandomValueFloatTask_TypeDefinitionIndex)->GetStaticField(0x47948);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_RandomValueFloatTask_TypeDefinitionIndex)->GetStaticField(0x47950);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_RANDOMVALUEFLOATTASK__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_RANDOMVALUEFLOATTASK_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
