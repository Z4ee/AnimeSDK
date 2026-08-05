#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FNPCMONTAGEDATAFRAGMENT_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0xF602940)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FNPCMONTAGEDATAFRAGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xF602780)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_FNPCMontageDataFragment_TypeDefinitionIndex = 77119;

	class RegistrationInfo_ScriptStruct_FNPCMontageDataFragment : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FNPCMontageDataFragment_TypeDefinitionIndex)->GetStaticField(0x3D890);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FNPCMontageDataFragment_TypeDefinitionIndex)->GetStaticField(0x3D898);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FNPCMONTAGEDATAFRAGMENT__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FNPCMONTAGEDATAFRAGMENT_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
