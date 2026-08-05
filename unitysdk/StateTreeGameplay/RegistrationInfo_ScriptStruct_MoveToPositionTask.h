#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class BoolPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_MOVETOPOSITIONTASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x134583F0)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_MOVETOPOSITIONTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x13458050)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_MoveToPositionTask_TypeDefinitionIndex = 91422;

	class RegistrationInfo_ScriptStruct_MoveToPositionTask : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_MoveToPositionTask_TypeDefinitionIndex)->GetStaticField(0x3DC40);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_UpdateTargetOnTick()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_MoveToPositionTask_TypeDefinitionIndex)->GetStaticField(0x3DC48);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_StopAtTarget()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_MoveToPositionTask_TypeDefinitionIndex)->GetStaticField(0x3DC50);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_MoveToPositionTask_TypeDefinitionIndex)->GetStaticField(0x3DC58);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_MoveToPositionTask_TypeDefinitionIndex)->GetStaticField(0x3DC60);
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
