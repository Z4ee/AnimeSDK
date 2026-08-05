#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class DoublePropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DEBUGLOGVALUEDOUBLETASKINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E352390)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DEBUGLOGVALUEDOUBLETASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E352120)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_DebugLogValueDoubleTaskInstanceData_TypeDefinitionIndex = 64746;

	class RegistrationInfo_ScriptStruct_DebugLogValueDoubleTaskInstanceData : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_DebugLogValueDoubleTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x4C9F0);
		}
		static ::UnrealTypes::DoublePropertyParams** StaticGet_Property_Value()
		{
			return (::UnrealTypes::DoublePropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_DebugLogValueDoubleTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x4C9F8);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_DebugLogValueDoubleTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x4CA00);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_DebugLogValueDoubleTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x4CA08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DEBUGLOGVALUEDOUBLETASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_DEBUGLOGVALUEDOUBLETASKINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
