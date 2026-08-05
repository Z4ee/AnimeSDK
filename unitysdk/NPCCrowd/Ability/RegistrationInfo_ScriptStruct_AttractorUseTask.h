#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_ATTRACTORUSETASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0xF6021B0)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_ATTRACTORUSETASK__CCTOR_OFFSET UNITYSDK_OFFSET(0xF602040)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_AttractorUseTask_TypeDefinitionIndex = 86528;

	class RegistrationInfo_ScriptStruct_AttractorUseTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_AttractorUseTask_TypeDefinitionIndex)->GetStaticField(0x3AB90);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_AttractorUseTask_TypeDefinitionIndex)->GetStaticField(0x3AB98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_ATTRACTORUSETASK__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_ATTRACTORUSETASK_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
