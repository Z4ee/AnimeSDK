#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Int32PropertyParams; }
namespace UnrealTypes { class NamePropertyParams; }
namespace UnrealTypes { class ObjectPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYPATHSEGMENT_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E8603A0)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYPATHSEGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E85FF00)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreePropertyPathSegment_TypeDefinitionIndex = 31025;

	class RegistrationInfo_ScriptStruct_StateTreePropertyPathSegment : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyPathSegment_TypeDefinitionIndex)->GetStaticField(0x25520);
		}
		static ::UnrealTypes::Int32PropertyParams** StaticGet_Property_ArrayIndex()
		{
			return (::UnrealTypes::Int32PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyPathSegment_TypeDefinitionIndex)->GetStaticField(0x25528);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyPathSegment_TypeDefinitionIndex)->GetStaticField(0x25530);
		}
		static ::UnrealTypes::ObjectPropertyParams** StaticGet_Property_InstanceStruct()
		{
			return (::UnrealTypes::ObjectPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyPathSegment_TypeDefinitionIndex)->GetStaticField(0x25538);
		}
		static ::UnrealTypes::NamePropertyParams** StaticGet_Property_Name()
		{
			return (::UnrealTypes::NamePropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyPathSegment_TypeDefinitionIndex)->GetStaticField(0x25540);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyPathSegment_TypeDefinitionIndex)->GetStaticField(0x25548);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYPATHSEGMENT__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYPATHSEGMENT_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
