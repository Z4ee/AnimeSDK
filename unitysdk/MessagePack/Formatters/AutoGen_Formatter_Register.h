#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { class DeserializeFunc; }
namespace MessagePack::Formatters { class IMessagePackFormatter; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MESSAGEPACK_FORMATTERS_AUTOGEN_FORMATTER_REGISTER_AUTOATTACH_OFFSET UNITYSDK_OFFSET(0x141CE500)
#define MESSAGEPACK_FORMATTERS_AUTOGEN_FORMATTER_REGISTER_TST_OFFSET UNITYSDK_OFFSET(0x141CE5C0)
#define MESSAGEPACK_FORMATTERS_AUTOGEN_FORMATTER_REGISTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x141CE7D0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int AutoGen_Formatter_Register_TypeDefinitionIndex = 61514;

	class AutoGen_Formatter_Register : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::MessagePack::Formatters::IMessagePackFormatter*>** StaticGet_formatters()
		{
			return (::System::Collections::Generic::List_1<::MessagePack::Formatters::IMessagePackFormatter*>**)Il2CppClass::FromTypeDefinitionIndex(AutoGen_Formatter_Register_TypeDefinitionIndex)->GetStaticField(0x43090);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::MessagePack::Formatters::DeserializeFunc*>** StaticGet_callFuncFormatters()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::MessagePack::Formatters::DeserializeFunc*>**)Il2CppClass::FromTypeDefinitionIndex(AutoGen_Formatter_Register_TypeDefinitionIndex)->GetStaticField(0x43098);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>** StaticGet_hashToFormatterIndex()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AutoGen_Formatter_Register_TypeDefinitionIndex)->GetStaticField(0x430A0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Type*>** StaticGet_hashToObjectType()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AutoGen_Formatter_Register_TypeDefinitionIndex)->GetStaticField(0x430A8);
		}
		static ::System::Boolean* StaticGet__isAttached()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AutoGen_Formatter_Register_TypeDefinitionIndex)->GetStaticField(0x10240);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_AUTOGEN_FORMATTER_REGISTER__CCTOR_OFFSET))();
		}

		static ::System::Void AutoAttach()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_AUTOGEN_FORMATTER_REGISTER_AUTOATTACH_OFFSET))();
		}

		static ::System::Void Tst()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_AUTOGEN_FORMATTER_REGISTER_TST_OFFSET))();
		}
	};
}
