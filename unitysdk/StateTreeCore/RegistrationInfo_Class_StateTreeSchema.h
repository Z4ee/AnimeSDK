#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }

#define STATETREECORE_REGISTRATIONINFO_CLASS_STATETREESCHEMA_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E860FC0)
#define STATETREECORE_REGISTRATIONINFO_CLASS_STATETREESCHEMA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E860EB0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_Class_StateTreeSchema_TypeDefinitionIndex = 31053;

	class RegistrationInfo_Class_StateTreeSchema : public ::System::Object
	{
	public:
		static ::UnrealTypes::ClassParams** StaticGet_ClassParams()
		{
			return (::UnrealTypes::ClassParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_StateTreeSchema_TypeDefinitionIndex)->GetStaticField(0x24F80);
		}
		static ::UnrealTypes::Class** StaticGet_Class()
		{
			return (::UnrealTypes::Class**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_StateTreeSchema_TypeDefinitionIndex)->GetStaticField(0x24F88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_CLASS_STATETREESCHEMA__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_CLASS_STATETREESCHEMA_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
