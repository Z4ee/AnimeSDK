#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x10298530)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x102983F0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_WaitingSlotMoveToSlotTaskInstanceData_TypeDefinitionIndex = 67102;

	class RegistrationInfo_ScriptStruct_WaitingSlotMoveToSlotTaskInstanceData : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_WaitingSlotMoveToSlotTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x33A10);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_WaitingSlotMoveToSlotTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x33A18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
