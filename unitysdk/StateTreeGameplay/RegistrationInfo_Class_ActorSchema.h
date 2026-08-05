#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }
namespace UnrealTypes { class ClassPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_ACTORSCHEMA_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E82A070)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_ACTORSCHEMA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E829E10)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_Class_ActorSchema_TypeDefinitionIndex = 87217;

	class RegistrationInfo_Class_ActorSchema : public ::System::Object
	{
	public:
		static ::UnrealTypes::ClassParams** StaticGet_ClassParams()
		{
			return (::UnrealTypes::ClassParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_ActorSchema_TypeDefinitionIndex)->GetStaticField(0x512C0);
		}
		static ::UnrealTypes::Class** StaticGet_Class()
		{
			return (::UnrealTypes::Class**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_ActorSchema_TypeDefinitionIndex)->GetStaticField(0x512C8);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_ActorSchema_TypeDefinitionIndex)->GetStaticField(0x512D0);
		}
		static ::UnrealTypes::ClassPropertyParams** StaticGet_Property_ActorClass()
		{
			return (::UnrealTypes::ClassPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_ActorSchema_TypeDefinitionIndex)->GetStaticField(0x512D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_ACTORSCHEMA__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_ACTORSCHEMA_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
