#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class IMessage; }
namespace MiHoYo::SDK::Protobuf { class JsonFormatter_Settings; }
namespace MiHoYo::SDK::Protobuf::Reflection { class IFieldAccessor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }
namespace System::Collections { class IDictionary; }
namespace System::Collections { class IList; }
namespace System::IO { class TextWriter; }

#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_FORMAT_1_OFFSET UNITYSDK_OFFSET(0x1B0D55D0)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_FORMAT_OFFSET UNITYSDK_OFFSET(0x1B0D5570)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1B0D45F0)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_GET_DIAGNOSTICONLY_OFFSET UNITYSDK_OFFSET(0x1B0D5510)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_HEXENCODEUTF16CODEUNIT_OFFSET UNITYSDK_OFFSET(0x1B0DCF00)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_ISDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1B0D6FD0)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_TOCAMELCASE_OFFSET UNITYSDK_OFFSET(0x1B0D8460)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_TODIAGNOSTICSTRING_OFFSET UNITYSDK_OFFSET(0x1B0D6500)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEANY_OFFSET UNITYSDK_OFFSET(0x1B0DBC00)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEDIAGNOSTICONLYANY_OFFSET UNITYSDK_OFFSET(0x1B0DC580)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1B0D8A80)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEDURATION_OFFSET UNITYSDK_OFFSET(0x1B0DA480)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEFIELDMASK_OFFSET UNITYSDK_OFFSET(0x1B0DA980)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITELIST_OFFSET UNITYSDK_OFFSET(0x1B0D9490)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEMESSAGEFIELDS_OFFSET UNITYSDK_OFFSET(0x1B0D66E0)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B0D6130)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITENULL_OFFSET UNITYSDK_OFFSET(0x1B0D6640)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x1B0D7670)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITESTRUCTFIELDVALUE_OFFSET UNITYSDK_OFFSET(0x1B0DB650)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITESTRUCT_OFFSET UNITYSDK_OFFSET(0x1B0DAC70)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1B0D9F80)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1B0D7CC0)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEWELLKNOWNTYPEVALUE_OFFSET UNITYSDK_OFFSET(0x1B0D59E0)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0D4650)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0D5500)

namespace MiHoYo::SDK::Protobuf
{
	inline static constexpr unsigned int JsonFormatter_TypeDefinitionIndex = 35056;

	class JsonFormatter : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_CommonRepresentations()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(JsonFormatter_TypeDefinitionIndex)->GetStaticField(0xD00);
		}
		static ::MiHoYo::SDK::Protobuf::JsonFormatter** StaticGet__Default_k__BackingField()
		{
			return (::MiHoYo::SDK::Protobuf::JsonFormatter**)Il2CppClass::FromTypeDefinitionIndex(JsonFormatter_TypeDefinitionIndex)->GetStaticField(0xD08);
		}
		static ::MiHoYo::SDK::Protobuf::JsonFormatter** StaticGet_diagnosticFormatter()
		{
			return (::MiHoYo::SDK::Protobuf::JsonFormatter**)Il2CppClass::FromTypeDefinitionIndex(JsonFormatter_TypeDefinitionIndex)->GetStaticField(0xD10);
		}
		::MiHoYo::SDK::Protobuf::JsonFormatter_Settings* settings; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::MiHoYo::SDK::Protobuf::JsonFormatter_Settings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::JsonFormatter_Settings*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER__CTOR_OFFSET))(this, a1);
		}

		static ::MiHoYo::SDK::Protobuf::JsonFormatter* get_Default()
		{
			return ((::MiHoYo::SDK::Protobuf::JsonFormatter*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_GET_DEFAULT_OFFSET))();
		}

		::System::Boolean get_DiagnosticOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_GET_DIAGNOSTICONLY_OFFSET))(this);
		}

		::System::String* Format(::MiHoYo::SDK::Protobuf::IMessage* a1)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_FORMAT_OFFSET))(this, a1);
		}

		::System::Void Format_1(::MiHoYo::SDK::Protobuf::IMessage* a1, ::System::IO::TextWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::IMessage*, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_FORMAT_1_OFFSET))(this, a1, a2);
		}

		static ::System::String* ToDiagnosticString(::MiHoYo::SDK::Protobuf::IMessage* a1)
		{
			return ((::System::String*(*)(::MiHoYo::SDK::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_TODIAGNOSTICSTRING_OFFSET))(a1);
		}

		::System::Void WriteMessage(::System::IO::TextWriter* a1, ::MiHoYo::SDK::Protobuf::IMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::MiHoYo::SDK::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Boolean WriteMessageFields(::System::IO::TextWriter* a1, ::MiHoYo::SDK::Protobuf::IMessage* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IO::TextWriter*, ::MiHoYo::SDK::Protobuf::IMessage*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEMESSAGEFIELDS_OFFSET))(this, a1, a2, a3);
		}

		static ::System::String* ToCamelCase(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_TOCAMELCASE_OFFSET))(a1);
		}

		static ::System::Void WriteNull(::System::IO::TextWriter* a1)
		{
			return ((::System::Void(*)(::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITENULL_OFFSET))(a1);
		}

		static ::System::Boolean IsDefaultValue(::MiHoYo::SDK::Protobuf::Reflection::IFieldAccessor* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::Protobuf::Reflection::IFieldAccessor*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_ISDEFAULTVALUE_OFFSET))(a1, a2);
		}

		::System::Void WriteValue(::System::IO::TextWriter* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void WriteWellKnownTypeValue(::System::IO::TextWriter* a1, ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEWELLKNOWNTYPEVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteTimestamp(::System::IO::TextWriter* a1, ::MiHoYo::SDK::Protobuf::IMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::MiHoYo::SDK::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITETIMESTAMP_OFFSET))(this, a1, a2);
		}

		::System::Void WriteDuration(::System::IO::TextWriter* a1, ::MiHoYo::SDK::Protobuf::IMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::MiHoYo::SDK::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEDURATION_OFFSET))(this, a1, a2);
		}

		::System::Void WriteFieldMask(::System::IO::TextWriter* a1, ::MiHoYo::SDK::Protobuf::IMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::MiHoYo::SDK::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEFIELDMASK_OFFSET))(this, a1, a2);
		}

		::System::Void WriteAny(::System::IO::TextWriter* a1, ::MiHoYo::SDK::Protobuf::IMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::MiHoYo::SDK::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEANY_OFFSET))(this, a1, a2);
		}

		::System::Void WriteDiagnosticOnlyAny(::System::IO::TextWriter* a1, ::MiHoYo::SDK::Protobuf::IMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::MiHoYo::SDK::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEDIAGNOSTICONLYANY_OFFSET))(this, a1, a2);
		}

		::System::Void WriteStruct(::System::IO::TextWriter* a1, ::MiHoYo::SDK::Protobuf::IMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::MiHoYo::SDK::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITESTRUCT_OFFSET))(this, a1, a2);
		}

		::System::Void WriteStructFieldValue(::System::IO::TextWriter* a1, ::MiHoYo::SDK::Protobuf::IMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::MiHoYo::SDK::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITESTRUCTFIELDVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void WriteList(::System::IO::TextWriter* a1, ::System::Collections::IList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITELIST_OFFSET))(this, a1, a2);
		}

		::System::Void WriteDictionary(::System::IO::TextWriter* a1, ::System::Collections::IDictionary* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEDICTIONARY_OFFSET))(this, a1, a2);
		}

		static ::System::Void WriteString(::System::IO::TextWriter* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::IO::TextWriter*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITESTRING_OFFSET))(a1, a2);
		}

		static ::System::Void HexEncodeUtf16CodeUnit(::System::IO::TextWriter* a1, ::System::Char a2)
		{
			return ((::System::Void(*)(::System::IO::TextWriter*, ::System::Char))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_HEXENCODEUTF16CODEUNIT_OFFSET))(a1, a2);
		}
	};
}
