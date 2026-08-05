#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_CLASS_CROWDSCHEMA_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0xF85FF80)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_CLASS_CROWDSCHEMA__CCTOR_OFFSET UNITYSDK_OFFSET(0xF85FE70)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_Class_CrowdSchema_TypeDefinitionIndex = 83483;

	class RegistrationInfo_Class_CrowdSchema : public ::System::Object
	{
	public:
		static ::UnrealTypes::ClassParams** StaticGet_ClassParams()
		{
			return (::UnrealTypes::ClassParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_CrowdSchema_TypeDefinitionIndex)->GetStaticField(0x40E60);
		}
		static ::UnrealTypes::Class** StaticGet_Class()
		{
			return (::UnrealTypes::Class**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_CrowdSchema_TypeDefinitionIndex)->GetStaticField(0x40E68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_CLASS_CROWDSCHEMA__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_CLASS_CROWDSCHEMA_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
