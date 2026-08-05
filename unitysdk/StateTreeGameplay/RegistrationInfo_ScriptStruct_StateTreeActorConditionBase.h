#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEACTORCONDITIONBASE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E506E50)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEACTORCONDITIONBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E506CE0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreeActorConditionBase_TypeDefinitionIndex = 49041;

	class RegistrationInfo_ScriptStruct_StateTreeActorConditionBase : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeActorConditionBase_TypeDefinitionIndex)->GetStaticField(0x4B440);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeActorConditionBase_TypeDefinitionIndex)->GetStaticField(0x4B448);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEACTORCONDITIONBASE__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEACTORCONDITIONBASE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
