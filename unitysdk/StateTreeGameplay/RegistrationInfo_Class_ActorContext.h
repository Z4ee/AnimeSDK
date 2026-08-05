#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_ACTORCONTEXT_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C13E010)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_ACTORCONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C13DF00)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_Class_ActorContext_TypeDefinitionIndex = 87767;

	class RegistrationInfo_Class_ActorContext : public ::System::Object
	{
	public:
		static ::UnrealTypes::ClassParams** StaticGet_ClassParams()
		{
			return (::UnrealTypes::ClassParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_ActorContext_TypeDefinitionIndex)->GetStaticField(0x340A0);
		}
		static ::UnrealTypes::Class** StaticGet_Class()
		{
			return (::UnrealTypes::Class**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_ActorContext_TypeDefinitionIndex)->GetStaticField(0x340A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_ACTORCONTEXT__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_ACTORCONTEXT_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
