#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FTRANSFORMFRAGMENT_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x10C92390)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FTRANSFORMFRAGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x10C921D0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_FTransformFragment_TypeDefinitionIndex = 85940;

	class RegistrationInfo_ScriptStruct_FTransformFragment : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FTransformFragment_TypeDefinitionIndex)->GetStaticField(0x4C7C0);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FTransformFragment_TypeDefinitionIndex)->GetStaticField(0x4C7C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FTRANSFORMFRAGMENT__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FTRANSFORMFRAGMENT_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
