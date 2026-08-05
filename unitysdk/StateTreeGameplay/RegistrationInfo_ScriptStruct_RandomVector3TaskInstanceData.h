#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class FloatPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class StructPropertyParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_RANDOMVECTOR3TASKINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C13E760)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_RANDOMVECTOR3TASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C13E2C0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_RandomVector3TaskInstanceData_TypeDefinitionIndex = 50239;

	class RegistrationInfo_ScriptStruct_RandomVector3TaskInstanceData : public ::System::Object
	{
	public:
		static ::UnrealTypes::FloatPropertyParams** StaticGet_Property_Radius()
		{
			return (::UnrealTypes::FloatPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_RandomVector3TaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x3B1C0);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_RandomVector3TaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x3B1C8);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_RandomVector()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_RandomVector3TaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x3B1D0);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_RandomVector3TaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x3B1D8);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_Center()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_RandomVector3TaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x3B1E0);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_RandomVector3TaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x3B1E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_RANDOMVECTOR3TASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_RANDOMVECTOR3TASKINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
