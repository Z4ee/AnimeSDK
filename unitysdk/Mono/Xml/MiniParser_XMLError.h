#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define MONO_XML_MINIPARSER_XMLERROR_GET_COLUMN_OFFSET UNITYSDK_OFFSET(0x1FBD7050)
#define MONO_XML_MINIPARSER_XMLERROR_GET_LINE_OFFSET UNITYSDK_OFFSET(0x1FBD7040)
#define MONO_XML_MINIPARSER_XMLERROR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FBD7060)
#define MONO_XML_MINIPARSER_XMLERROR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBD6F00)
#define MONO_XML_MINIPARSER_XMLERROR__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1FBD6FA0)
#define MONO_XML_MINIPARSER_XMLERROR__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBD6E20)

namespace Mono::Xml
{
	inline static constexpr unsigned int MiniParser_XMLError_TypeDefinitionIndex = 2269;

	class MiniParser_XMLError : public ::System::Exception
	{
	public:
		::System::String* descr; // 0x88
		::System::Int32 line; // 0x90
		::System::Int32 column; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_XMLERROR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* descr)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_XMLERROR__CTOR_1_OFFSET))(this, descr);
		}

		::System::Void _ctor_2(::System::String* descr, ::System::Int32 line, ::System::Int32 column)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_XMLERROR__CTOR_2_OFFSET))(this, descr, line, column);
		}

		::System::Int32 get_Line()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_XMLERROR_GET_LINE_OFFSET))(this);
		}

		::System::Int32 get_Column()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_XMLERROR_GET_COLUMN_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_XMLERROR_TOSTRING_OFFSET))(this);
		}
	};
}
