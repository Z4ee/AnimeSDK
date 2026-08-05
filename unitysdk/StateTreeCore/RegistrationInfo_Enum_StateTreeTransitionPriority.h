#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class EnumParams; }

#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREETRANSITIONPRIORITY_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FC35190)
#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREETRANSITIONPRIORITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC35080)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_Enum_StateTreeTransitionPriority_TypeDefinitionIndex = 31707;

	class RegistrationInfo_Enum_StateTreeTransitionPriority : public ::System::Object
	{
	public:
		static ::UnrealTypes::Enum** StaticGet_Enum()
		{
			return (::UnrealTypes::Enum**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeTransitionPriority_TypeDefinitionIndex)->GetStaticField(0x26BF0);
		}
		static ::UnrealTypes::EnumParams** StaticGet_EnumParams()
		{
			return (::UnrealTypes::EnumParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeTransitionPriority_TypeDefinitionIndex)->GetStaticField(0x26BF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREETRANSITIONPRIORITY__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREETRANSITIONPRIORITY_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
