#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Xml { class MiniParser_IHandler; }
namespace Mono::Xml { class MiniParser_IReader; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MONO_XML_MINIPARSER_FATALERR_OFFSET UNITYSDK_OFFSET(0x1FADAAC0)
#define MONO_XML_MINIPARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x1FADACB0)
#define MONO_XML_MINIPARSER_RESET_OFFSET UNITYSDK_OFFSET(0x1FADA9B0)
#define MONO_XML_MINIPARSER_STREQUALS_OFFSET UNITYSDK_OFFSET(0x1FADA9C0)
#define MONO_XML_MINIPARSER_XLAT_OFFSET UNITYSDK_OFFSET(0x1FADAB20)
#define MONO_XML_MINIPARSER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FADD410)
#define MONO_XML_MINIPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FADA950)

namespace Mono::Xml
{
	inline static constexpr unsigned int MiniParser_TypeDefinitionIndex = 2260;

	class MiniParser : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_errors()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiniParser_TypeDefinitionIndex)->GetStaticField(0x2570);
		}
		static ::Il2CppArray<::System::UInt16>** StaticGet_tbl()
		{
			return (::Il2CppArray<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(MiniParser_TypeDefinitionIndex)->GetStaticField(0x2578);
		}
		static ::System::Int32* StaticGet_INPUT_RANGE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MiniParser_TypeDefinitionIndex)->GetStaticField(0xF80);
		}
		::Il2CppArray<::System::Int32>* twoCharBuff; // 0x10
		::System::Int32 line; // 0x18
		::System::Boolean splitCData; // 0x1C
		::System::Int32 col; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER__CCTOR_OFFSET))();
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_RESET_OFFSET))(this);
		}

		static ::System::Boolean StrEquals(::System::String* str, ::System::Text::StringBuilder* sb, ::System::Int32 sbStart, ::System::Int32 len)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_STREQUALS_OFFSET))(str, sb, sbStart, len);
		}

		::System::Void FatalErr(::System::String* descr)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_FATALERR_OFFSET))(this, descr);
		}

		static ::System::Int32 Xlat(::System::Int32 charCode, ::System::Int32 state)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_XLAT_OFFSET))(charCode, state);
		}

		::System::Void Parse(::Mono::Xml::MiniParser_IReader* reader, ::Mono::Xml::MiniParser_IHandler* handler)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::MiniParser_IReader*, ::Mono::Xml::MiniParser_IHandler*))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_PARSE_OFFSET))(this, reader, handler);
		}
	};
}
