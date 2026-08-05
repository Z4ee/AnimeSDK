#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class EnumParams; }

#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREETRANSITIONTYPE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FC1A730)
#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREETRANSITIONTYPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC1A620)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_Enum_StateTreeTransitionType_TypeDefinitionIndex = 31702;

	class RegistrationInfo_Enum_StateTreeTransitionType : public ::System::Object
	{
	public:
		static ::UnrealTypes::EnumParams** StaticGet_EnumParams()
		{
			return (::UnrealTypes::EnumParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeTransitionType_TypeDefinitionIndex)->GetStaticField(0x263D0);
		}
		static ::UnrealTypes::Enum** StaticGet_Enum()
		{
			return (::UnrealTypes::Enum**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeTransitionType_TypeDefinitionIndex)->GetStaticField(0x263D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREETRANSITIONTYPE__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREETRANSITIONTYPE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
