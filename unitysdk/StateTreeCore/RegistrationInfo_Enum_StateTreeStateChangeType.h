#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class EnumParams; }

#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREESTATECHANGETYPE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1F97BF00)
#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREESTATECHANGETYPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F97BDF0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_Enum_StateTreeStateChangeType_TypeDefinitionIndex = 31565;

	class RegistrationInfo_Enum_StateTreeStateChangeType : public ::System::Object
	{
	public:
		static ::UnrealTypes::EnumParams** StaticGet_EnumParams()
		{
			return (::UnrealTypes::EnumParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeStateChangeType_TypeDefinitionIndex)->GetStaticField(0x26480);
		}
		static ::UnrealTypes::Enum** StaticGet_Enum()
		{
			return (::UnrealTypes::Enum**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeStateChangeType_TypeDefinitionIndex)->GetStaticField(0x26488);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREESTATECHANGETYPE__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREESTATECHANGETYPE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
