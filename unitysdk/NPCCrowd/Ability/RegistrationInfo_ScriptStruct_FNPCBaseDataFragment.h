#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FNPCBASEDATAFRAGMENT_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0xF602740)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FNPCBASEDATAFRAGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xF602580)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_FNPCBaseDataFragment_TypeDefinitionIndex = 68492;

	class RegistrationInfo_ScriptStruct_FNPCBaseDataFragment : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FNPCBaseDataFragment_TypeDefinitionIndex)->GetStaticField(0x37540);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FNPCBaseDataFragment_TypeDefinitionIndex)->GetStaticField(0x37548);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FNPCBASEDATAFRAGMENT__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FNPCBASEDATAFRAGMENT_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
