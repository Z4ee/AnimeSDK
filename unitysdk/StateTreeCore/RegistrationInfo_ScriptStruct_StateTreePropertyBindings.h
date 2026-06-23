#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ArrayPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class StructPropertyParams; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYBINDINGS_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E67FDB0)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYBINDINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E67EEF0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex = 31043;

	class RegistrationInfo_ScriptStruct_StateTreePropertyBindings : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_PropertyIndirections_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x25130);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_PropertyAccesses_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x25138);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_PropertyAccesses()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x25140);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_CopyBatches()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x25148);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x25150);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_SourceStructs()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x25158);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_PropertyCopies_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x25160);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_PropertyIndirections()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x25168);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_PropertyCopies()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x25170);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_PropertyReferencePaths_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x25178);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_SourceStructs_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x25180);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x25188);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_PropertyPathBindings_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x25190);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x25198);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_PropertyPathBindings()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x251A0);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_PropertyReferencePaths()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x251A8);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_CopyBatches_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x251B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYBINDINGS__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYBINDINGS_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
