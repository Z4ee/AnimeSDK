#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class IMessage; }
namespace Google::Protobuf { class JsonFormatter_Settings; }
namespace Google::Protobuf::Reflection { class IFieldAccessor; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }
namespace System::Collections { class IDictionary; }
namespace System::Collections { class IList; }
namespace System::IO { class TextWriter; }

#define GOOGLE_PROTOBUF_JSONFORMATTER_FORMAT_1_OFFSET UNITYSDK_OFFSET(0x170DD710)
#define GOOGLE_PROTOBUF_JSONFORMATTER_FORMAT_OFFSET UNITYSDK_OFFSET(0x170DD6B0)
#define GOOGLE_PROTOBUF_JSONFORMATTER_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x170DBCE0)
#define GOOGLE_PROTOBUF_JSONFORMATTER_GET_DIAGNOSTICONLY_OFFSET UNITYSDK_OFFSET(0x170DD650)
#define GOOGLE_PROTOBUF_JSONFORMATTER_HEXENCODEUTF16CODEUNIT_OFFSET UNITYSDK_OFFSET(0x170E3410)
#define GOOGLE_PROTOBUF_JSONFORMATTER_ISDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x170DEB60)
#define GOOGLE_PROTOBUF_JSONFORMATTER_TODIAGNOSTICSTRING_OFFSET UNITYSDK_OFFSET(0x170DE3E0)
#define GOOGLE_PROTOBUF_JSONFORMATTER_TOJSONNAME_OFFSET UNITYSDK_OFFSET(0x170DFE90)
#define GOOGLE_PROTOBUF_JSONFORMATTER_WRITEANY_OFFSET UNITYSDK_OFFSET(0x170E2880)
#define GOOGLE_PROTOBUF_JSONFORMATTER_WRITEDIAGNOSTICONLYANY_OFFSET UNITYSDK_OFFSET(0x170E2E60)
#define GOOGLE_PROTOBUF_JSONFORMATTER_WRITEDICTIONARY_OFFSET UNITYSDK_OFFSET(0x170E0140)
#define GOOGLE_PROTOBUF_JSONFORMATTER_WRITEDURATION_OFFSET UNITYSDK_OFFSET(0x170E14F0)
#define GOOGLE_PROTOBUF_JSONFORMATTER_WRITEFIELDMASK_OFFSET UNITYSDK_OFFSET(0x170E19B0)
#define GOOGLE_PROTOBUF_JSONFORMATTER_WRITELIST_OFFSET UNITYSDK_OFFSET(0x170E0790)
#define GOOGLE_PROTOBUF_JSONFORMATTER_WRITEMESSAGEFIELDS_OFFSET UNITYSDK_OFFSET(0x170DE550)
#define GOOGLE_PROTOBUF_JSONFORMATTER_WRITEMESSAGE_OFFSET UNITYSDK_OFFSET(0x170DE1C0)
#define GOOGLE_PROTOBUF_JSONFORMATTER_WRITENULL_OFFSET UNITYSDK_OFFSET(0x170DE520)
#define GOOGLE_PROTOBUF_JSONFORMATTER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x170DF390)
#define GOOGLE_PROTOBUF_JSONFORMATTER_WRITESTRUCTFIELDVALUE_OFFSET UNITYSDK_OFFSET(0x170E2330)
#define GOOGLE_PROTOBUF_JSONFORMATTER_WRITESTRUCT_OFFSET UNITYSDK_OFFSET(0x170E1C50)
#define GOOGLE_PROTOBUF_JSONFORMATTER_WRITETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x170E1030)
#define GOOGLE_PROTOBUF_JSONFORMATTER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x170DF870)
#define GOOGLE_PROTOBUF_JSONFORMATTER_WRITEWELLKNOWNTYPEVALUE_OFFSET UNITYSDK_OFFSET(0x170DDB00)
#define GOOGLE_PROTOBUF_JSONFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x170DBD40)
#define GOOGLE_PROTOBUF_JSONFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x170DD640)

namespace Google::Protobuf
{
	inline static constexpr unsigned int JsonFormatter_TypeDefinitionIndex = 6199;

	class JsonFormatter : public ::System::Object
	{
	public:
		static ::Google::Protobuf::JsonFormatter** StaticGet__Default_k__BackingField()
		{
			return (::Google::Protobuf::JsonFormatter**)Il2CppClass::FromTypeDefinitionIndex(JsonFormatter_TypeDefinitionIndex)->GetStaticField(0x1970);
		}
		static ::Google::Protobuf::JsonFormatter** StaticGet_diagnosticFormatter()
		{
			return (::Google::Protobuf::JsonFormatter**)Il2CppClass::FromTypeDefinitionIndex(JsonFormatter_TypeDefinitionIndex)->GetStaticField(0x1978);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_CommonRepresentations()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(JsonFormatter_TypeDefinitionIndex)->GetStaticField(0x1980);
		}
		::Google::Protobuf::JsonFormatter_Settings* settings; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::Google::Protobuf::JsonFormatter_Settings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::JsonFormatter_Settings*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER__CTOR_OFFSET))(this, settings);
		}

		static ::Google::Protobuf::JsonFormatter* get_Default()
		{
			return ((::Google::Protobuf::JsonFormatter*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_GET_DEFAULT_OFFSET))();
		}

		::System::Boolean get_DiagnosticOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_GET_DIAGNOSTICONLY_OFFSET))(this);
		}

		::System::String* Format(::Google::Protobuf::IMessage* message)
		{
			return ((::System::String*(*)(::PVOID, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_FORMAT_OFFSET))(this, message);
		}

		::System::Void Format_1(::Google::Protobuf::IMessage* message, ::System::IO::TextWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::IMessage*, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_FORMAT_1_OFFSET))(this, message, writer);
		}

		static ::System::String* ToDiagnosticString(::Google::Protobuf::IMessage* message)
		{
			return ((::System::String*(*)(::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_TODIAGNOSTICSTRING_OFFSET))(message);
		}

		::System::Void WriteMessage(::System::IO::TextWriter* writer, ::Google::Protobuf::IMessage* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_WRITEMESSAGE_OFFSET))(this, writer, message);
		}

		::System::Boolean WriteMessageFields(::System::IO::TextWriter* writer, ::Google::Protobuf::IMessage* message, ::System::Boolean assumeFirstFieldWritten)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IO::TextWriter*, ::Google::Protobuf::IMessage*, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_WRITEMESSAGEFIELDS_OFFSET))(this, writer, message, assumeFirstFieldWritten);
		}

		static ::System::String* ToJsonName(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_TOJSONNAME_OFFSET))(name);
		}

		static ::System::Void WriteNull(::System::IO::TextWriter* writer)
		{
			return ((::System::Void(*)(::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_WRITENULL_OFFSET))(writer);
		}

		static ::System::Boolean IsDefaultValue(::Google::Protobuf::Reflection::IFieldAccessor* accessor, ::System::Object* value)
		{
			return ((::System::Boolean(*)(::Google::Protobuf::Reflection::IFieldAccessor*, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_ISDEFAULTVALUE_OFFSET))(accessor, value);
		}

		::System::Void WriteValue(::System::IO::TextWriter* writer, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_WRITEVALUE_OFFSET))(this, writer, value);
		}

		::System::Void WriteWellKnownTypeValue(::System::IO::TextWriter* writer, ::Google::Protobuf::Reflection::MessageDescriptor* descriptor, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::Google::Protobuf::Reflection::MessageDescriptor*, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_WRITEWELLKNOWNTYPEVALUE_OFFSET))(this, writer, descriptor, value);
		}

		::System::Void WriteTimestamp(::System::IO::TextWriter* writer, ::Google::Protobuf::IMessage* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_WRITETIMESTAMP_OFFSET))(this, writer, value);
		}

		::System::Void WriteDuration(::System::IO::TextWriter* writer, ::Google::Protobuf::IMessage* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_WRITEDURATION_OFFSET))(this, writer, value);
		}

		::System::Void WriteFieldMask(::System::IO::TextWriter* writer, ::Google::Protobuf::IMessage* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_WRITEFIELDMASK_OFFSET))(this, writer, value);
		}

		::System::Void WriteAny(::System::IO::TextWriter* writer, ::Google::Protobuf::IMessage* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_WRITEANY_OFFSET))(this, writer, value);
		}

		::System::Void WriteDiagnosticOnlyAny(::System::IO::TextWriter* writer, ::Google::Protobuf::IMessage* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_WRITEDIAGNOSTICONLYANY_OFFSET))(this, writer, value);
		}

		::System::Void WriteStruct(::System::IO::TextWriter* writer, ::Google::Protobuf::IMessage* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_WRITESTRUCT_OFFSET))(this, writer, message);
		}

		::System::Void WriteStructFieldValue(::System::IO::TextWriter* writer, ::Google::Protobuf::IMessage* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_WRITESTRUCTFIELDVALUE_OFFSET))(this, writer, message);
		}

		::System::Void WriteList(::System::IO::TextWriter* writer, ::System::Collections::IList* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_WRITELIST_OFFSET))(this, writer, list);
		}

		::System::Void WriteDictionary(::System::IO::TextWriter* writer, ::System::Collections::IDictionary* dictionary)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_WRITEDICTIONARY_OFFSET))(this, writer, dictionary);
		}

		static ::System::Void WriteString(::System::IO::TextWriter* writer, ::System::String* text)
		{
			return ((::System::Void(*)(::System::IO::TextWriter*, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_WRITESTRING_OFFSET))(writer, text);
		}

		static ::System::Void HexEncodeUtf16CodeUnit(::System::IO::TextWriter* writer, ::System::Char c)
		{
			return ((::System::Void(*)(::System::IO::TextWriter*, ::System::Char))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_HEXENCODEUTF16CODEUNIT_OFFSET))(writer, c);
		}
	};
}
