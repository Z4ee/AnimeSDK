#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class EnumParams; }

#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREEEXTERNALDATAREQUIREMENT_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E7899A0)
#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREEEXTERNALDATAREQUIREMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E789890)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_Enum_StateTreeExternalDataRequirement_TypeDefinitionIndex = 31103;

	class RegistrationInfo_Enum_StateTreeExternalDataRequirement : public ::System::Object
	{
	public:
		static ::UnrealTypes::Enum** StaticGet_Enum()
		{
			return (::UnrealTypes::Enum**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeExternalDataRequirement_TypeDefinitionIndex)->GetStaticField(0x25360);
		}
		static ::UnrealTypes::EnumParams** StaticGet_EnumParams()
		{
			return (::UnrealTypes::EnumParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeExternalDataRequirement_TypeDefinitionIndex)->GetStaticField(0x25368);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREEEXTERNALDATAREQUIREMENT__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREEEXTERNALDATAREQUIREMENT_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
