#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class FloatPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_RANDOMVALUEFLOATTASKINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x13458670)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_RANDOMVALUEFLOATTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x13458400)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_RandomValueFloatTaskInstanceData_TypeDefinitionIndex = 59088;

	class RegistrationInfo_ScriptStruct_RandomValueFloatTaskInstanceData : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_RandomValueFloatTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x3DC80);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_RandomValueFloatTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x3DC88);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_RandomValueFloatTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x3DC90);
		}
		static ::UnrealTypes::FloatPropertyParams** StaticGet_Property_RandomValue()
		{
			return (::UnrealTypes::FloatPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_RandomValueFloatTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x3DC98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_RANDOMVALUEFLOATTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_RANDOMVALUEFLOATTASKINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
