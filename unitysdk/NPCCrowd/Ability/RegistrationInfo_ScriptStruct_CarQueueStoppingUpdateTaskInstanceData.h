#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x13DE7220)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x13DE70E0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_CarQueueStoppingUpdateTaskInstanceData_TypeDefinitionIndex = 45481;

	class RegistrationInfo_ScriptStruct_CarQueueStoppingUpdateTaskInstanceData : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CarQueueStoppingUpdateTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x4DC00);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CarQueueStoppingUpdateTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x4DC08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
