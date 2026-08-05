#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_GETCONDITIONALVALUEFLOATTASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x13458040)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_GETCONDITIONALVALUEFLOATTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x13457ED0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_GetConditionalValueFloatTask_TypeDefinitionIndex = 45071;

	class RegistrationInfo_ScriptStruct_GetConditionalValueFloatTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_GetConditionalValueFloatTask_TypeDefinitionIndex)->GetStaticField(0x381A0);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_GetConditionalValueFloatTask_TypeDefinitionIndex)->GetStaticField(0x381A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_GETCONDITIONALVALUEFLOATTASK__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_GETCONDITIONALVALUEFLOATTASK_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
