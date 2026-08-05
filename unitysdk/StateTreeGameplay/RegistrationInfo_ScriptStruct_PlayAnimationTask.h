#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Int32PropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_PLAYANIMATIONTASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x18C5BA70)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_PLAYANIMATIONTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C5B7D0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_PlayAnimationTask_TypeDefinitionIndex = 47642;

	class RegistrationInfo_ScriptStruct_PlayAnimationTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_PlayAnimationTask_TypeDefinitionIndex)->GetStaticField(0x3B2D0);
		}
		static ::UnrealTypes::Int32PropertyParams** StaticGet_Property_AnimationID()
		{
			return (::UnrealTypes::Int32PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_PlayAnimationTask_TypeDefinitionIndex)->GetStaticField(0x3B2D8);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_PlayAnimationTask_TypeDefinitionIndex)->GetStaticField(0x3B2E0);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_PlayAnimationTask_TypeDefinitionIndex)->GetStaticField(0x3B2E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_PLAYANIMATIONTASK__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_PLAYANIMATIONTASK_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
