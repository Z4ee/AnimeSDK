#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class EnumParams; }

#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREEDATASOURCETYPE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FC1A610)
#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREEDATASOURCETYPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC1A500)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_Enum_StateTreeDataSourceType_TypeDefinitionIndex = 31710;

	class RegistrationInfo_Enum_StateTreeDataSourceType : public ::System::Object
	{
	public:
		static ::UnrealTypes::EnumParams** StaticGet_EnumParams()
		{
			return (::UnrealTypes::EnumParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeDataSourceType_TypeDefinitionIndex)->GetStaticField(0x263C0);
		}
		static ::UnrealTypes::Enum** StaticGet_Enum()
		{
			return (::UnrealTypes::Enum**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeDataSourceType_TypeDefinitionIndex)->GetStaticField(0x263C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREEDATASOURCETYPE__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREEDATASOURCETYPE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
