#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Converters/XObjectWrapper.h"

namespace System { class String; }
namespace System::Xml::Linq { class XProcessingInstruction; }

#define NEWTONSOFT_JSON_CONVERTERS_XPROCESSINGINSTRUCTIONWRAPPER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x17A60830)
#define NEWTONSOFT_JSON_CONVERTERS_XPROCESSINGINSTRUCTIONWRAPPER_GET_PROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x17A607C0)
#define NEWTONSOFT_JSON_CONVERTERS_XPROCESSINGINSTRUCTIONWRAPPER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x17A608A0)
#define NEWTONSOFT_JSON_CONVERTERS_XPROCESSINGINSTRUCTIONWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A5E340)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XProcessingInstructionWrapper_TypeDefinitionIndex = 8588;

	class XProcessingInstructionWrapper : public ::Newtonsoft::Json::Converters::XObjectWrapper
	{
	public:
		::System::Void _ctor(::System::Xml::Linq::XProcessingInstruction* processingInstruction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XProcessingInstruction*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XPROCESSINGINSTRUCTIONWRAPPER__CTOR_OFFSET))(this, processingInstruction);
		}

		::System::Xml::Linq::XProcessingInstruction* get_ProcessingInstruction()
		{
			return ((::System::Xml::Linq::XProcessingInstruction*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XPROCESSINGINSTRUCTIONWRAPPER_GET_PROCESSINGINSTRUCTION_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XPROCESSINGINSTRUCTIONWRAPPER_GET_LOCALNAME_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XPROCESSINGINSTRUCTIONWRAPPER_GET_VALUE_OFFSET))(this);
		}
	};
}
