#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class EnumParams; }

#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREESTATESELECTIONBEHAVIOR_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FB15450)
#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREESTATESELECTIONBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB15340)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_Enum_StateTreeStateSelectionBehavior_TypeDefinitionIndex = 31705;

	class RegistrationInfo_Enum_StateTreeStateSelectionBehavior : public ::System::Object
	{
	public:
		static ::UnrealTypes::EnumParams** StaticGet_EnumParams()
		{
			return (::UnrealTypes::EnumParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeStateSelectionBehavior_TypeDefinitionIndex)->GetStaticField(0x26BA0);
		}
		static ::UnrealTypes::Enum** StaticGet_Enum()
		{
			return (::UnrealTypes::Enum**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeStateSelectionBehavior_TypeDefinitionIndex)->GetStaticField(0x26BA8);
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
