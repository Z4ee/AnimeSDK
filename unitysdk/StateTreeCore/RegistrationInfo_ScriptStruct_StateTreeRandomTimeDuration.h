#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class UInt16PropertyParams; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREERANDOMTIMEDURATION_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E1D4710)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREERANDOMTIMEDURATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1D43A0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreeRandomTimeDuration_TypeDefinitionIndex = 31094;

	class RegistrationInfo_ScriptStruct_StateTreeRandomTimeDuration : public ::System::Object
	{
	public:
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_randomVariance()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeRandomTimeDuration_TypeDefinitionIndex)->GetStaticField(0x25430);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_duration()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeRandomTimeDuration_TypeDefinitionIndex)->GetStaticField(0x25438);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeRandomTimeDuration_TypeDefinitionIndex)->GetStaticField(0x25440);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeRandomTimeDuration_TypeDefinitionIndex)->GetStaticField(0x25448);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeRandomTimeDuration_TypeDefinitionIndex)->GetStaticField(0x25450);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREERANDOMTIMEDURATION__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREERANDOMTIMEDURATION_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
