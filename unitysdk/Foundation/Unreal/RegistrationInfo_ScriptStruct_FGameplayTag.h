#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class NamePropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define FOUNDATION_UNREAL_REGISTRATIONINFO_SCRIPTSTRUCT_FGAMEPLAYTAG_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E381CB0)
#define FOUNDATION_UNREAL_REGISTRATIONINFO_SCRIPTSTRUCT_FGAMEPLAYTAG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E381520)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_FGameplayTag_TypeDefinitionIndex = 28270;

	class RegistrationInfo_ScriptStruct_FGameplayTag : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FGameplayTag_TypeDefinitionIndex)->GetStaticField(0x23EA0);
		}
		static ::UnrealTypes::NamePropertyParams** StaticGet_Property_tagName()
		{
			return (::UnrealTypes::NamePropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FGameplayTag_TypeDefinitionIndex)->GetStaticField(0x23EA8);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FGameplayTag_TypeDefinitionIndex)->GetStaticField(0x23EB0);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FGameplayTag_TypeDefinitionIndex)->GetStaticField(0x23EB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_REGISTRATIONINFO_SCRIPTSTRUCT_FGAMEPLAYTAG__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_REGISTRATIONINFO_SCRIPTSTRUCT_FGAMEPLAYTAG_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
