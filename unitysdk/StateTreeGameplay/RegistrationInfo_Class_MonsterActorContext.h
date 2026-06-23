#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_MONSTERACTORCONTEXT_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x16832200)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_MONSTERACTORCONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x168320F0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_Class_MonsterActorContext_TypeDefinitionIndex = 66401;

	class RegistrationInfo_Class_MonsterActorContext : public ::System::Object
	{
	public:
		static ::UnrealTypes::ClassParams** StaticGet_ClassParams()
		{
			return (::UnrealTypes::ClassParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_MonsterActorContext_TypeDefinitionIndex)->GetStaticField(0x4A4F0);
		}
		static ::UnrealTypes::Class** StaticGet_Class()
		{
			return (::UnrealTypes::Class**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_MonsterActorContext_TypeDefinitionIndex)->GetStaticField(0x4A4F8);
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
