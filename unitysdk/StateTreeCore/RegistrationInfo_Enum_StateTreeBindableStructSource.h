#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class EnumParams; }

#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREEBINDABLESTRUCTSOURCE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FA53C60)
#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREEBINDABLESTRUCTSOURCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA53B50)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_Enum_StateTreeBindableStructSource_TypeDefinitionIndex = 31628;

	class RegistrationInfo_Enum_StateTreeBindableStructSource : public ::System::Object
	{
	public:
		static ::UnrealTypes::EnumParams** StaticGet_EnumParams()
		{
			return (::UnrealTypes::EnumParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeBindableStructSource_TypeDefinitionIndex)->GetStaticField(0x26D60);
		}
		static ::UnrealTypes::Enum** StaticGet_Enum()
		{
			return (::UnrealTypes::Enum**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeBindableStructSource_TypeDefinitionIndex)->GetStaticField(0x26D68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREEBINDABLESTRUCTSOURCE__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREEBINDABLESTRUCTSOURCE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
