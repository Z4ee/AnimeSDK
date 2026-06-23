#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FNPCAIBLACKBOARDFRAGMENT_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0xD413A60)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FNPCAIBLACKBOARDFRAGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xD4138A0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_FNPCAIBlackboardFragment_TypeDefinitionIndex = 54272;

	class RegistrationInfo_ScriptStruct_FNPCAIBlackboardFragment : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FNPCAIBlackboardFragment_TypeDefinitionIndex)->GetStaticField(0x455D0);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FNPCAIBlackboardFragment_TypeDefinitionIndex)->GetStaticField(0x455D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FNPCAIBLACKBOARDFRAGMENT__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FNPCAIBLACKBOARDFRAGMENT_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
