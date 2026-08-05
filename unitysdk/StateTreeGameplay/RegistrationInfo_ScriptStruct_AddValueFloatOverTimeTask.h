#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_ADDVALUEFLOATOVERTIMETASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D5D2840)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_ADDVALUEFLOATOVERTIMETASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5D26D0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_AddValueFloatOverTimeTask_TypeDefinitionIndex = 67917;

	class RegistrationInfo_ScriptStruct_AddValueFloatOverTimeTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_AddValueFloatOverTimeTask_TypeDefinitionIndex)->GetStaticField(0x45A40);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_AddValueFloatOverTimeTask_TypeDefinitionIndex)->GetStaticField(0x45A48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_ADDVALUEFLOATOVERTIMETASK__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_ADDVALUEFLOATOVERTIMETASK_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
