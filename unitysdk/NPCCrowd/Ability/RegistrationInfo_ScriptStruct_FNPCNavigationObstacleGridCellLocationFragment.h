#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0xD5C3B60)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xD5C39A0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_FNPCNavigationObstacleGridCellLocationFragment_TypeDefinitionIndex = 55081;

	class RegistrationInfo_ScriptStruct_FNPCNavigationObstacleGridCellLocationFragment : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FNPCNavigationObstacleGridCellLocationFragment_TypeDefinitionIndex)->GetStaticField(0x4A250);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FNPCNavigationObstacleGridCellLocationFragment_TypeDefinitionIndex)->GetStaticField(0x4A258);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
