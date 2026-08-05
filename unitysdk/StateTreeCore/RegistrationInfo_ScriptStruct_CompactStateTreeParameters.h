#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class StructPropertyParams; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREEPARAMETERS_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FB527E0)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREEPARAMETERS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB52550)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_CompactStateTreeParameters_TypeDefinitionIndex = 31720;

	class RegistrationInfo_ScriptStruct_CompactStateTreeParameters : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_Parameters()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeParameters_TypeDefinitionIndex)->GetStaticField(0x269F0);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeParameters_TypeDefinitionIndex)->GetStaticField(0x269F8);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeParameters_TypeDefinitionIndex)->GetStaticField(0x26A00);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeParameters_TypeDefinitionIndex)->GetStaticField(0x26A08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREEPARAMETERS__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREEPARAMETERS_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
