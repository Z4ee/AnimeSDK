#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_RANDOMVECTOR3INCIRCLETASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x134587F0)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_RANDOMVECTOR3INCIRCLETASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x13458680)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_RandomVector3InCircleTask_TypeDefinitionIndex = 82551;

	class RegistrationInfo_ScriptStruct_RandomVector3InCircleTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_RandomVector3InCircleTask_TypeDefinitionIndex)->GetStaticField(0x3DCB0);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_RandomVector3InCircleTask_TypeDefinitionIndex)->GetStaticField(0x3DCB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_RANDOMVECTOR3INCIRCLETASK__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_RANDOMVECTOR3INCIRCLETASK_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
