#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/SystemException.h"

namespace System { class String; }

#define MONO_XML_SMALLXMLPARSEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A591610)

namespace Mono::Xml
{
	inline static constexpr unsigned int SmallXmlParserException_TypeDefinitionIndex = 31;

	class SmallXmlParserException : public ::System::SystemException
	{
	public:
		::System::Int32 column; // 0x88
		::System::Int32 line; // 0x8C

		::System::Void _ctor(::System::String* msg, ::System::Int32 line, ::System::Int32 column)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSEREXCEPTION__CTOR_OFFSET))(this, msg, line, column);
		}
	};
}
