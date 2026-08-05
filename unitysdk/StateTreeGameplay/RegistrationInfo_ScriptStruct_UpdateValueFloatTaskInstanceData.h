#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class FloatPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class StructPropertyParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_UPDATEVALUEFLOATTASKINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1BC41BD0)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_UPDATEVALUEFLOATTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC41840)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_UpdateValueFloatTaskInstanceData_TypeDefinitionIndex = 70185;

	class RegistrationInfo_ScriptStruct_UpdateValueFloatTaskInstanceData : public ::System::Object
	{
	public:
		static ::UnrealTypes::FloatPropertyParams** StaticGet_Property_Value()
		{
			return (::UnrealTypes::FloatPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_UpdateValueFloatTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x3B330);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_UpdateValueFloatTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x3B338);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_UpdateValueFloatTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x3B340);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_UpdateValueFloatTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x3B348);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_FloatRef()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_UpdateValueFloatTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x3B350);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_UPDATEVALUEFLOATTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_UPDATEVALUEFLOATTASKINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
