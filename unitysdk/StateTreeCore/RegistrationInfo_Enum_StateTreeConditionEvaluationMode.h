#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class EnumParams; }

#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREECONDITIONEVALUATIONMODE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1F97BDE0)
#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREECONDITIONEVALUATIONMODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F97BCD0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_Enum_StateTreeConditionEvaluationMode_TypeDefinitionIndex = 31566;

	class RegistrationInfo_Enum_StateTreeConditionEvaluationMode : public ::System::Object
	{
	public:
		static ::UnrealTypes::EnumParams** StaticGet_EnumParams()
		{
			return (::UnrealTypes::EnumParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeConditionEvaluationMode_TypeDefinitionIndex)->GetStaticField(0x26470);
		}
		static ::UnrealTypes::Enum** StaticGet_Enum()
		{
			return (::UnrealTypes::Enum**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeConditionEvaluationMode_TypeDefinitionIndex)->GetStaticField(0x26478);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREECONDITIONEVALUATIONMODE__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREECONDITIONEVALUATIONMODE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
