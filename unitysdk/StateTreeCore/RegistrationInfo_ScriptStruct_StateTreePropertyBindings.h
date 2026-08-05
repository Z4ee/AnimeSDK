#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ArrayPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class StructPropertyParams; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYBINDINGS_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FA55500)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYBINDINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA54650)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex = 31649;

	class RegistrationInfo_ScriptStruct_StateTreePropertyBindings : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_PropertyReferencePaths_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x268B0);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_PropertyCopies()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x268B8);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_PropertyAccesses_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x268C0);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_PropertyCopies_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x268C8);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_PropertyReferencePaths()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x268D0);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_PropertyPathBindings()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x268D8);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_SourceStructs()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x268E0);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_PropertyIndirections()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x268E8);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x268F0);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_PropertyAccesses()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x268F8);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_PropertyPathBindings_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x26900);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_PropertyIndirections_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x26908);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x26910);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_CopyBatches()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x26918);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_CopyBatches_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x26920);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x26928);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_SourceStructs_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x26930);
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
