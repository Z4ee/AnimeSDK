#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class EnumParams; }

#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREETRANSITIONSOURCETYPE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FA53D80)
#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREETRANSITIONSOURCETYPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA53C70)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_Enum_StateTreeTransitionSourceType_TypeDefinitionIndex = 31571;

	class RegistrationInfo_Enum_StateTreeTransitionSourceType : public ::System::Object
	{
	public:
		static ::UnrealTypes::EnumParams** StaticGet_EnumParams()
		{
			return (::UnrealTypes::EnumParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeTransitionSourceType_TypeDefinitionIndex)->GetStaticField(0x26D70);
		}
		static ::UnrealTypes::Enum** StaticGet_Enum()
		{
			return (::UnrealTypes::Enum**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeTransitionSourceType_TypeDefinitionIndex)->GetStaticField(0x26D78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREETRANSITIONSOURCETYPE__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREETRANSITIONSOURCETYPE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
