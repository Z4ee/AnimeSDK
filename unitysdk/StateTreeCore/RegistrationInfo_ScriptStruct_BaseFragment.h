#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_BASEFRAGMENT_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E67E770)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_BASEFRAGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E67E630)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_BaseFragment_TypeDefinitionIndex = 30978;

	class RegistrationInfo_ScriptStruct_BaseFragment : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_BaseFragment_TypeDefinitionIndex)->GetStaticField(0x24F40);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_BaseFragment_TypeDefinitionIndex)->GetStaticField(0x24F48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_BASEFRAGMENT__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_BASEFRAGMENT_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
