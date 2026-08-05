#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class EnumParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_ENUM_STATETREECONDITIONCOMPAREOPERATOR_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E506740)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_ENUM_STATETREECONDITIONCOMPAREOPERATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E506630)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_Enum_StateTreeConditionCompareOperator_TypeDefinitionIndex = 46558;

	class RegistrationInfo_Enum_StateTreeConditionCompareOperator : public ::System::Object
	{
	public:
		static ::UnrealTypes::Enum** StaticGet_Enum()
		{
			return (::UnrealTypes::Enum**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeConditionCompareOperator_TypeDefinitionIndex)->GetStaticField(0x3B240);
		}
		static ::UnrealTypes::EnumParams** StaticGet_EnumParams()
		{
			return (::UnrealTypes::EnumParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeConditionCompareOperator_TypeDefinitionIndex)->GetStaticField(0x3B248);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_ENUM_STATETREECONDITIONCOMPAREOPERATOR__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_ENUM_STATETREECONDITIONCOMPAREOPERATOR_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
