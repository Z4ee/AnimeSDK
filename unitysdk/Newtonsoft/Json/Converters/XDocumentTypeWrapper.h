#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Converters/XObjectWrapper.h"

namespace System { class String; }
namespace System::Xml::Linq { class XDocumentType; }

#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTTYPEWRAPPER_GET_INTERNALSUBSET_OFFSET UNITYSDK_OFFSET(0x1BE778F0)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTTYPEWRAPPER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1BE77910)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTTYPEWRAPPER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1BE77890)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTTYPEWRAPPER_GET_PUBLIC_OFFSET UNITYSDK_OFFSET(0x1BE778D0)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTTYPEWRAPPER_GET_SYSTEM_OFFSET UNITYSDK_OFFSET(0x1BE778B0)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTTYPEWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE77580)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XDocumentTypeWrapper_TypeDefinitionIndex = 9778;

	class XDocumentTypeWrapper : public ::Newtonsoft::Json::Converters::XObjectWrapper
	{
	public:
		::System::Xml::Linq::XDocumentType* _documentType; // 0x18

		::System::Void _ctor(::System::Xml::Linq::XDocumentType* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XDocumentType*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTTYPEWRAPPER__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTTYPEWRAPPER_GET_NAME_OFFSET))(this);
		}

		::System::String* get_System()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTTYPEWRAPPER_GET_SYSTEM_OFFSET))(this);
		}

		::System::String* get_Public()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTTYPEWRAPPER_GET_PUBLIC_OFFSET))(this);
		}

		::System::String* get_InternalSubset()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTTYPEWRAPPER_GET_INTERNALSUBSET_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTTYPEWRAPPER_GET_LOCALNAME_OFFSET))(this);
		}
	};
}
