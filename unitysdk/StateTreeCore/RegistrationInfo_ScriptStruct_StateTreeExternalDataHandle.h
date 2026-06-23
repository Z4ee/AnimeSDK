#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class StructPropertyParams; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEEXTERNALDATAHANDLE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E85B8D0)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEEXTERNALDATAHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E85B630)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreeExternalDataHandle_TypeDefinitionIndex = 30963;

	class RegistrationInfo_ScriptStruct_StateTreeExternalDataHandle : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeExternalDataHandle_TypeDefinitionIndex)->GetStaticField(0x253E0);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeExternalDataHandle_TypeDefinitionIndex)->GetStaticField(0x253E8);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeExternalDataHandle_TypeDefinitionIndex)->GetStaticField(0x253F0);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_DataHandle()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeExternalDataHandle_TypeDefinitionIndex)->GetStaticField(0x253F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEEXTERNALDATAHANDLE__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEEXTERNALDATAHANDLE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
