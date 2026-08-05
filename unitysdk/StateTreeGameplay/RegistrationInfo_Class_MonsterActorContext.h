#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_MONSTERACTORCONTEXT_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D5D26C0)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_MONSTERACTORCONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5D25B0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_Class_MonsterActorContext_TypeDefinitionIndex = 68959;

	class RegistrationInfo_Class_MonsterActorContext : public ::System::Object
	{
	public:
		static ::UnrealTypes::ClassParams** StaticGet_ClassParams()
		{
			return (::UnrealTypes::ClassParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_MonsterActorContext_TypeDefinitionIndex)->GetStaticField(0x45A30);
		}
		static ::UnrealTypes::Class** StaticGet_Class()
		{
			return (::UnrealTypes::Class**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_MonsterActorContext_TypeDefinitionIndex)->GetStaticField(0x45A38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_MONSTERACTORCONTEXT__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_MONSTERACTORCONTEXT_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
