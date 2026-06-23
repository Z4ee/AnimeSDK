#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DELAYSECONDSTASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A0E59D0)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DELAYSECONDSTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0E5860)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_DelaySecondsTask_TypeDefinitionIndex = 55248;

	class RegistrationInfo_ScriptStruct_DelaySecondsTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_DelaySecondsTask_TypeDefinitionIndex)->GetStaticField(0x4A4D0);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_DelaySecondsTask_TypeDefinitionIndex)->GetStaticField(0x4A4D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DELAYSECONDSTASK__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DELAYSECONDSTASK_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
