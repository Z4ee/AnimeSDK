#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class EnumParams; }

#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREECONDITIONEVALUATIONMODE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C2A3CD0)
#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREECONDITIONEVALUATIONMODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2A3BC0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_Enum_StateTreeConditionEvaluationMode_TypeDefinitionIndex = 28312;

	class RegistrationInfo_Enum_StateTreeConditionEvaluationMode : public ::System::Object
	{
	public:
		static ::UnrealTypes::EnumParams** StaticGet_EnumParams()
		{
			return (::UnrealTypes::EnumParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeConditionEvaluationMode_TypeDefinitionIndex)->GetStaticField(0x20FB0);
		}
		static ::UnrealTypes::Enum** StaticGet_Enum()
		{
			return (::UnrealTypes::Enum**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeConditionEvaluationMode_TypeDefinitionIndex)->GetStaticField(0x20FB8);
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
