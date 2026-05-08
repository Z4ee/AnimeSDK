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

#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_FORMAT_1_OFFSET UNITYSDK_OFFSET(0x1BEF7830)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_FORMAT_OFFSET UNITYSDK_OFFSET(0x1BEF77B0)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1BEF5C20)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_GET_DIAGNOSTICONLY_OFFSET UNITYSDK_OFFSET(0x1BEF7750)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_HEXENCODEUTF16CODEUNIT_OFFSET UNITYSDK_OFFSET(0x1BEFCC80)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_ISDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1BEF8A80)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_TOCAMELCASE_OFFSET UNITYSDK_OFFSET(0x1BEF9B00)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_TODIAGNOSTICSTRING_OFFSET UNITYSDK_OFFSET(0x1BEF8360)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEANY_OFFSET UNITYSDK_OFFSET(0x1BEFC1C0)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEDIAGNOSTICONLYANY_OFFSET UNITYSDK_OFFSET(0x1BEFC7A0)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1BEFA040)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEDURATION_OFFSET UNITYSDK_OFFSET(0x1BEFAE60)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEFIELDMASK_OFFSET UNITYSDK_OFFSET(0x1BEFB2B0)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITELIST_OFFSET UNITYSDK_OFFSET(0x1BEFA660)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEMESSAGEFIELDS_OFFSET UNITYSDK_OFFSET(0x1BEF8520)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1BEF8110)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITENULL_OFFSET UNITYSDK_OFFSET(0x1BEF84C0)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x1BEF8F50)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITESTRUCTFIELDVALUE_OFFSET UNITYSDK_OFFSET(0x1BEFBBA0)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITESTRUCT_OFFSET UNITYSDK_OFFSET(0x1BEFB520)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1BEFAA10)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1BEF94D0)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEWELLKNOWNTYPEVALUE_OFFSET UNITYSDK_OFFSET(0x1BEF7A80)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEF5C80)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEF7740)

namespace MiHoYo::SDK::Protobuf
{
	inline static constexpr unsigned int JsonFormatter_TypeDefinitionIndex = 25968;

	class JsonFormatter : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::JsonFormatter** StaticGet__Default_k__BackingField()
		{
			return (::MiHoYo::SDK::Protobuf::JsonFormatter**)Il2CppClass::FromTypeDefinitionIndex(JsonFormatter_TypeDefinitionIndex)->GetStaticField(0x1F4C0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_CommonRepresentations()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(JsonFormatter_TypeDefinitionIndex)->GetStaticField(0x1F4C8);
		}
		static ::MiHoYo::SDK::Protobuf::JsonFormatter** StaticGet_diagnosticFormatter()
		{
			return (::MiHoYo::SDK::Protobuf::JsonFormatter**)Il2CppClass::FromTypeDefinitionIndex(JsonFormatter_TypeDefinitionIndex)->GetStaticField(0x1F4D0);
		}
		::MiHoYo::SDK::Protobuf::JsonFormatter_Settings* settings; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::MiHoYo::SDK::Protobuf::JsonFormatter_Settings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::JsonFormatter_Settings*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER__CTOR_OFFSET))(this, settings);
		}

		static ::MiHoYo::SDK::Protobuf::JsonFormatter* get_Default()
		{
			return ((::MiHoYo::SDK::Protobuf::JsonFormatter*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_GET_DEFAULT_OFFSET))();
		}

		::System::Boolean get_DiagnosticOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_GET_DIAGNOSTICONLY_OFFSET))(this);
		}

		::System::String* Format(::MiHoYo::SDK::Protobuf::IMessage* message)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_FORMAT_OFFSET))(this, message);
		}

		::System::Void Format_1(::MiHoYo::SDK::Protobuf::IMessage* message, ::System::IO::TextWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::IMessage*, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_FORMAT_1_OFFSET))(this, message, writer);
		}

		static ::System::String* ToDiagnosticString(::MiHoYo::SDK::Protobuf::IMessage* message)
		{
			return ((::System::String*(*)(::MiHoYo::SDK::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_TODIAGNOSTICSTRING_OFFSET))(message);
		}

		::System::Void WriteMessage(::System::IO::TextWriter* writer, ::MiHoYo::SDK::Protobuf::IMessage* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::MiHoYo::SDK::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEMESSAGE_OFFSET))(this, writer, message);
		}

		::System::Boolean WriteMessageFields(::System::IO::TextWriter* writer, ::MiHoYo::SDK::Protobuf::IMessage* message, ::System::Boolean assumeFirstFieldWritten)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IO::TextWriter*, ::MiHoYo::SDK::Protobuf::IMessage*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEMESSAGEFIELDS_OFFSET))(this, writer, message, assumeFirstFieldWritten);
		}

		static ::System::String* ToCamelCase(::System::String* input)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_TOCAMELCASE_OFFSET))(input);
		}

		static ::System::Void WriteNull(::System::IO::TextWriter* writer)
		{
			return ((::System::Void(*)(::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITENULL_OFFSET))(writer);
		}

		static ::System::Boolean IsDefaultValue(::MiHoYo::SDK::Protobuf::Reflection::IFieldAccessor* accessor, ::System::Object* value)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::Protobuf::Reflection::IFieldAccessor*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_ISDEFAULTVALUE_OFFSET))(accessor, value);
		}

		::System::Void WriteValue(::System::IO::TextWriter* writer, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEVALUE_OFFSET))(this, writer, value);
		}

		::System::Void WriteWellKnownTypeValue(::System::IO::TextWriter* writer, ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* descriptor, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEWELLKNOWNTYPEVALUE_OFFSET))(this, writer, descriptor, value);
		}

		::System::Void WriteTimestamp(::System::IO::TextWriter* writer, ::MiHoYo::SDK::Protobuf::IMessage* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::MiHoYo::SDK::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITETIMESTAMP_OFFSET))(this, writer, value);
		}

		::System::Void WriteDuration(::System::IO::TextWriter* writer, ::MiHoYo::SDK::Protobuf::IMessage* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::MiHoYo::SDK::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEDURATION_OFFSET))(this, writer, value);
		}

		::System::Void WriteFieldMask(::System::IO::TextWriter* writer, ::MiHoYo::SDK::Protobuf::IMessage* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::MiHoYo::SDK::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEFIELDMASK_OFFSET))(this, writer, value);
		}

		::System::Void WriteAny(::System::IO::TextWriter* writer, ::MiHoYo::SDK::Protobuf::IMessage* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::MiHoYo::SDK::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEANY_OFFSET))(this, writer, value);
		}

		::System::Void WriteDiagnosticOnlyAny(::System::IO::TextWriter* writer, ::MiHoYo::SDK::Protobuf::IMessage* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::MiHoYo::SDK::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEDIAGNOSTICONLYANY_OFFSET))(this, writer, value);
		}

		::System::Void WriteStruct(::System::IO::TextWriter* writer, ::MiHoYo::SDK::Protobuf::IMessage* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::MiHoYo::SDK::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITESTRUCT_OFFSET))(this, writer, message);
		}

		::System::Void WriteStructFieldValue(::System::IO::TextWriter* writer, ::MiHoYo::SDK::Protobuf::IMessage* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::MiHoYo::SDK::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITESTRUCTFIELDVALUE_OFFSET))(this, writer, message);
		}

		::System::Void WriteList(::System::IO::TextWriter* writer, ::System::Collections::IList* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITELIST_OFFSET))(this, writer, list);
		}

		::System::Void WriteDictionary(::System::IO::TextWriter* writer, ::System::Collections::IDictionary* dictionary)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITEDICTIONARY_OFFSET))(this, writer, dictionary);
		}

		static ::System::Void WriteString(::System::IO::TextWriter* writer, ::System::String* text)
		{
			return ((::System::Void(*)(::System::IO::TextWriter*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_WRITESTRING_OFFSET))(writer, text);
		}

		static ::System::Void HexEncodeUtf16CodeUnit(::System::IO::TextWriter* writer, ::System::Char c)
		{
			return ((::System::Void(*)(::System::IO::TextWriter*, ::System::Char))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_HEXENCODEUTF16CODEUNIT_OFFSET))(writer, c);
		}
	};
}
