#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlexBuffers { class FlexBuffer; }
namespace System { class String; }
namespace System::Xml { class XmlNode; }

#define FLEXBUFFERS_XMLTOFLEXBUFFERCONVERTER_CONVERT_OFFSET UNITYSDK_OFFSET(0x1D603AC0)
#define FLEXBUFFERS_XMLTOFLEXBUFFERCONVERTER_PROCESS_OFFSET UNITYSDK_OFFSET(0x1D603CC0)

namespace FlexBuffers
{
	inline static constexpr unsigned int XmlToFlexBufferConverter_TypeDefinitionIndex = 6762;

	class XmlToFlexBufferConverter : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>* Convert(::System::String* xmlData)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_XMLTOFLEXBUFFERCONVERTER_CONVERT_OFFSET))(xmlData);
		}

		static ::System::Void Process(::FlexBuffers::FlexBuffer* flx, ::System::Xml::XmlNode* element)
		{
			return ((::System::Void(*)(::FlexBuffers::FlexBuffer*, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_XMLTOFLEXBUFFERCONVERTER_PROCESS_OFFSET))(flx, element);
		}
	};
}
