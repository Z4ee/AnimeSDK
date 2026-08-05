#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_RANDOMVECTOR3INSPHERETASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A686680)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_RANDOMVECTOR3INSPHERETASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A686510)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_RandomVector3InSphereTask_TypeDefinitionIndex = 72825;

	class RegistrationInfo_ScriptStruct_RandomVector3InSphereTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_RandomVector3InSphereTask_TypeDefinitionIndex)->GetStaticField(0x34110);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_RandomVector3InSphereTask_TypeDefinitionIndex)->GetStaticField(0x34118);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_RANDOMVECTOR3INSPHERETASK__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_RANDOMVECTOR3INSPHERETASK_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
