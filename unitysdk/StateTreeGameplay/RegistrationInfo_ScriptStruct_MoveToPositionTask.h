#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_MOVETOPOSITIONTASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x19E37730)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_MOVETOPOSITIONTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E375C0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_MoveToPositionTask_TypeDefinitionIndex = 73946;

	class RegistrationInfo_ScriptStruct_MoveToPositionTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_MoveToPositionTask_TypeDefinitionIndex)->GetStaticField(0x3AEA0);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_MoveToPositionTask_TypeDefinitionIndex)->GetStaticField(0x3AEA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_MOVETOPOSITIONTASK__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_MOVETOPOSITIONTASK_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
