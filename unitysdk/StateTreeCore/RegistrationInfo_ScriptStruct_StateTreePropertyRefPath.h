#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class StructPropertyParams; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYREFPATH_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FB167F0)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYREFPATH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB16430)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreePropertyRefPath_TypeDefinitionIndex = 31647;

	class RegistrationInfo_ScriptStruct_StateTreePropertyRefPath : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyRefPath_TypeDefinitionIndex)->GetStaticField(0x26C60);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyRefPath_TypeDefinitionIndex)->GetStaticField(0x26C68);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyRefPath_TypeDefinitionIndex)->GetStaticField(0x26C70);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_SourcePropertyPath()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyRefPath_TypeDefinitionIndex)->GetStaticField(0x26C78);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_SourceDataHandle()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyRefPath_TypeDefinitionIndex)->GetStaticField(0x26C80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYREFPATH__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYREFPATH_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
