#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSGLOBALCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E733CD0)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsGlobalConfig_TypeDefinitionIndex = 30932;

	class fsGlobalConfig : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Type*>** StaticGet_SerializeAttributes()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(fsGlobalConfig_TypeDefinitionIndex)->GetStaticField(0x25070);
		}
		static ::Il2CppArray<::System::Type*>** StaticGet_IgnoreSerializeAttributes()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(fsGlobalConfig_TypeDefinitionIndex)->GetStaticField(0x25078);
		}
		static ::System::String** StaticGet_CustomDateTimeFormatString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(fsGlobalConfig_TypeDefinitionIndex)->GetStaticField(0x25080);
		}
		static ::System::Boolean* StaticGet_IsCaseSensitive()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(fsGlobalConfig_TypeDefinitionIndex)->GetStaticField(0x7A20);
		}
		static ::System::Boolean* StaticGet_SerializeEnumsAsInteger()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(fsGlobalConfig_TypeDefinitionIndex)->GetStaticField(0x7A21);
		}
		static ::System::Boolean* StaticGet_Serialize64BitIntegerAsString()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(fsGlobalConfig_TypeDefinitionIndex)->GetStaticField(0x7A22);
		}
		static ::System::Boolean* StaticGet_SerializeDefaultValues()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(fsGlobalConfig_TypeDefinitionIndex)->GetStaticField(0x7A23);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSGLOBALCONFIG__CCTOR_OFFSET))();
		}
	};
}
