#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class EnumParams; }

#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREEUPDATEPHASE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1BEED0D0)
#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREEUPDATEPHASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEECFC0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_Enum_StateTreeUpdatePhase_TypeDefinitionIndex = 28309;

	class RegistrationInfo_Enum_StateTreeUpdatePhase : public ::System::Object
	{
	public:
		static ::UnrealTypes::EnumParams** StaticGet_EnumParams()
		{
			return (::UnrealTypes::EnumParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeUpdatePhase_TypeDefinitionIndex)->GetStaticField(0x21990);
		}
		static ::UnrealTypes::Enum** StaticGet_Enum()
		{
			return (::UnrealTypes::Enum**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeUpdatePhase_TypeDefinitionIndex)->GetStaticField(0x21998);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREEUPDATEPHASE__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREEUPDATEPHASE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
