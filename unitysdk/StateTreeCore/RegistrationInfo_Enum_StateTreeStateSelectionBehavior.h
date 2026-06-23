#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class EnumParams; }

#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREESTATESELECTIONBEHAVIOR_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E73FF80)
#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREESTATESELECTIONBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E73FE70)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_Enum_StateTreeStateSelectionBehavior_TypeDefinitionIndex = 31086;

	class RegistrationInfo_Enum_StateTreeStateSelectionBehavior : public ::System::Object
	{
	public:
		static ::UnrealTypes::EnumParams** StaticGet_EnumParams()
		{
			return (::UnrealTypes::EnumParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeStateSelectionBehavior_TypeDefinitionIndex)->GetStaticField(0x25420);
		}
		static ::UnrealTypes::Enum** StaticGet_Enum()
		{
			return (::UnrealTypes::Enum**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeStateSelectionBehavior_TypeDefinitionIndex)->GetStaticField(0x25428);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREESTATESELECTIONBEHAVIOR__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREESTATESELECTIONBEHAVIOR_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
