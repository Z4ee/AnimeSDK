#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_CROWDNPCACTORCONTEXT_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x18C5ADE0)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_CROWDNPCACTORCONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C5ACD0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_Class_CrowdNpcActorContext_TypeDefinitionIndex = 73424;

	class RegistrationInfo_Class_CrowdNpcActorContext : public ::System::Object
	{
	public:
		static ::UnrealTypes::Class** StaticGet_Class()
		{
			return (::UnrealTypes::Class**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_CrowdNpcActorContext_TypeDefinitionIndex)->GetStaticField(0x3B200);
		}
		static ::UnrealTypes::ClassParams** StaticGet_ClassParams()
		{
			return (::UnrealTypes::ClassParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_CrowdNpcActorContext_TypeDefinitionIndex)->GetStaticField(0x3B208);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_CROWDNPCACTORCONTEXT__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_CROWDNPCACTORCONTEXT_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
