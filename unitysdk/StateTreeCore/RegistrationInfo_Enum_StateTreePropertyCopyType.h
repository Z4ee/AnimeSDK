#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class EnumParams; }

#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREEPROPERTYCOPYTYPE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FC02D20)
#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREEPROPERTYCOPYTYPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC02C10)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_Enum_StateTreePropertyCopyType_TypeDefinitionIndex = 31642;

	class RegistrationInfo_Enum_StateTreePropertyCopyType : public ::System::Object
	{
	public:
		static ::UnrealTypes::EnumParams** StaticGet_EnumParams()
		{
			return (::UnrealTypes::EnumParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreePropertyCopyType_TypeDefinitionIndex)->GetStaticField(0x26A50);
		}
		static ::UnrealTypes::Enum** StaticGet_Enum()
		{
			return (::UnrealTypes::Enum**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreePropertyCopyType_TypeDefinitionIndex)->GetStaticField(0x26A58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREEPROPERTYCOPYTYPE__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREEPROPERTYCOPYTYPE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
