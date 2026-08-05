#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class EnumParams; }

#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREESTATETYPE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FC26370)
#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREESTATETYPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC26260)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_Enum_StateTreeStateType_TypeDefinitionIndex = 31704;

	class RegistrationInfo_Enum_StateTreeStateType : public ::System::Object
	{
	public:
		static ::UnrealTypes::EnumParams** StaticGet_EnumParams()
		{
			return (::UnrealTypes::EnumParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeStateType_TypeDefinitionIndex)->GetStaticField(0x26D20);
		}
		static ::UnrealTypes::Enum** StaticGet_Enum()
		{
			return (::UnrealTypes::Enum**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeStateType_TypeDefinitionIndex)->GetStaticField(0x26D28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREESTATETYPE__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREESTATETYPE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
