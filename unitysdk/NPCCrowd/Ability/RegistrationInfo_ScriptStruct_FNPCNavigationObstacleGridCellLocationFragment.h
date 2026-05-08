#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0xCE57A60)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xCE578A0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_FNPCNavigationObstacleGridCellLocationFragment_TypeDefinitionIndex = 48801;

	class RegistrationInfo_ScriptStruct_FNPCNavigationObstacleGridCellLocationFragment : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FNPCNavigationObstacleGridCellLocationFragment_TypeDefinitionIndex)->GetStaticField(0x47D20);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FNPCNavigationObstacleGridCellLocationFragment_TypeDefinitionIndex)->GetStaticField(0x47D28);
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
