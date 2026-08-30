#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Converters/XObjectWrapper.h"

namespace System { class String; }
namespace System::Xml::Linq { class XProcessingInstruction; }

#define NEWTONSOFT_JSON_CONVERTERS_XPROCESSINGINSTRUCTIONWRAPPER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1BE79DF0)
#define NEWTONSOFT_JSON_CONVERTERS_XPROCESSINGINSTRUCTIONWRAPPER_GET_PROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1BE79D80)
#define NEWTONSOFT_JSON_CONVERTERS_XPROCESSINGINSTRUCTIONWRAPPER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1BE79E70)
#define NEWTONSOFT_JSON_CONVERTERS_XPROCESSINGINSTRUCTIONWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE774C0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XProcessingInstructionWrapper_TypeDefinitionIndex = 9782;

	class XProcessingInstructionWrapper : public ::Newtonsoft::Json::Converters::XObjectWrapper
	{
	public:
		::System::Void _ctor(::System::Xml::Linq::XProcessingInstruction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XProcessingInstruction*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XPROCESSINGINSTRUCTIONWRAPPER__CTOR_OFFSET))(this, a1);
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
