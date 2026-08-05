#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class EnumParams; }

#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREEUPDATEPHASE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1F6D3200)
#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREEUPDATEPHASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6D30F0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_Enum_StateTreeUpdatePhase_TypeDefinitionIndex = 31563;

	class RegistrationInfo_Enum_StateTreeUpdatePhase : public ::System::Object
	{
	public:
		static ::UnrealTypes::EnumParams** StaticGet_EnumParams()
		{
			return (::UnrealTypes::EnumParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeUpdatePhase_TypeDefinitionIndex)->GetStaticField(0x26ED0);
		}
		static ::UnrealTypes::Enum** StaticGet_Enum()
		{
			return (::UnrealTypes::Enum**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeUpdatePhase_TypeDefinitionIndex)->GetStaticField(0x26ED8);
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
