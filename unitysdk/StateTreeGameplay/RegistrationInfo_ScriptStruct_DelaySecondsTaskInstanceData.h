#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class FloatPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DELAYSECONDSTASKINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C3E9420)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DELAYSECONDSTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3E91B0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_DelaySecondsTaskInstanceData_TypeDefinitionIndex = 51545;

	class RegistrationInfo_ScriptStruct_DelaySecondsTaskInstanceData : public ::System::Object
	{
	public:
		static ::UnrealTypes::FloatPropertyParams** StaticGet_Property_DelaySeconds()
		{
			return (::UnrealTypes::FloatPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_DelaySecondsTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x3DC00);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_DelaySecondsTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x3DC08);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_DelaySecondsTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x3DC10);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_DelaySecondsTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x3DC18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DELAYSECONDSTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DELAYSECONDSTASKINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
