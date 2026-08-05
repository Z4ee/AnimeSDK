#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class EnumParams; }

#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREEPROPERTYACCESSTYPE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1ED74EB0)
#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREEPROPERTYACCESSTYPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED74DA0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_Enum_StateTreePropertyAccessType_TypeDefinitionIndex = 31637;

	class RegistrationInfo_Enum_StateTreePropertyAccessType : public ::System::Object
	{
	public:
		static ::UnrealTypes::Enum** StaticGet_Enum()
		{
			return (::UnrealTypes::Enum**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreePropertyAccessType_TypeDefinitionIndex)->GetStaticField(0x266F0);
		}
		static ::UnrealTypes::EnumParams** StaticGet_EnumParams()
		{
			return (::UnrealTypes::EnumParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreePropertyAccessType_TypeDefinitionIndex)->GetStaticField(0x266F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREEPROPERTYACCESSTYPE__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREEPROPERTYACCESSTYPE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
