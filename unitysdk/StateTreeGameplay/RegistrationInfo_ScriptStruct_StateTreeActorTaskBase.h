#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEACTORTASKBASE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C3E95A0)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEACTORTASKBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3E9430)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreeActorTaskBase_TypeDefinitionIndex = 82598;

	class RegistrationInfo_ScriptStruct_StateTreeActorTaskBase : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeActorTaskBase_TypeDefinitionIndex)->GetStaticField(0x3B2F0);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeActorTaskBase_TypeDefinitionIndex)->GetStaticField(0x3B2F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEACTORTASKBASE__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEACTORTASKBASE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
