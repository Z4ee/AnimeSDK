#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FNPCATTRACTORCONTROLFRAGMENT_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0xF602540)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FNPCATTRACTORCONTROLFRAGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xF602380)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_FNPCAttractorControlFragment_TypeDefinitionIndex = 79261;

	class RegistrationInfo_ScriptStruct_FNPCAttractorControlFragment : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FNPCAttractorControlFragment_TypeDefinitionIndex)->GetStaticField(0x3D860);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FNPCAttractorControlFragment_TypeDefinitionIndex)->GetStaticField(0x3D868);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FNPCATTRACTORCONTROLFRAGMENT__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FNPCATTRACTORCONTROLFRAGMENT_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
