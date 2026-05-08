#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class EnumParams; }

#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREERUNSTATUS_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C52D1A0)
#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREERUNSTATUS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C52D090)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_Enum_StateTreeRunStatus_TypeDefinitionIndex = 28310;

	class RegistrationInfo_Enum_StateTreeRunStatus : public ::System::Object
	{
	public:
		static ::UnrealTypes::EnumParams** StaticGet_EnumParams()
		{
			return (::UnrealTypes::EnumParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeRunStatus_TypeDefinitionIndex)->GetStaticField(0x21960);
		}
		static ::UnrealTypes::Enum** StaticGet_Enum()
		{
			return (::UnrealTypes::Enum**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeRunStatus_TypeDefinitionIndex)->GetStaticField(0x21968);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREERUNSTATUS__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREERUNSTATUS_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
