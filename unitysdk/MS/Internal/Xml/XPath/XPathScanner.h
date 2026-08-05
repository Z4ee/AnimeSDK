#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MS/Internal/Xml/XPath/XPathScanner_LexKind.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/XmlCharType.h"

namespace System { class String; }

#define MS_INTERNAL_XML_XPATH_XPATHSCANNER_NEXTCHAR_OFFSET UNITYSDK_OFFSET(0x1D559CE0)
#define MS_INTERNAL_XML_XPATH_XPATHSCANNER_NEXTLEX_OFFSET UNITYSDK_OFFSET(0x1D558A40)
#define MS_INTERNAL_XML_XPATH_XPATHSCANNER_SCANFRACTION_OFFSET UNITYSDK_OFFSET(0x1D559EB0)
#define MS_INTERNAL_XML_XPATH_XPATHSCANNER_SCANNAME_OFFSET UNITYSDK_OFFSET(0x1D55A4F0)
#define MS_INTERNAL_XML_XPATH_XPATHSCANNER_SCANNUMBER_OFFSET UNITYSDK_OFFSET(0x1D55A250)
#define MS_INTERNAL_XML_XPATH_XPATHSCANNER_SCANSTRING_OFFSET UNITYSDK_OFFSET(0x1D559FF0)
#define MS_INTERNAL_XML_XPATH_XPATHSCANNER_SKIPSPACE_OFFSET UNITYSDK_OFFSET(0x1D559D80)
#define MS_INTERNAL_XML_XPATH_XPATHSCANNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D555E80)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int XPathScanner_TypeDefinitionIndex = 1652;

	class XPathScanner : public ::System::Object
	{
	public:
		::System::String* xpathExpr; // 0x10
		::System::Xml::XmlCharType xmlCharType; // 0x18
		::System::String* stringValue; // 0x20
		::System::String* prefix; // 0x28
		::System::String* name; // 0x30
		::System::Int32 xpathExprIndex; // 0x38
		::System::Char currentChar; // 0x3C
		::System::Boolean canBeFunction; // 0x3E
		::MS::Internal::Xml::XPath::XPathScanner_LexKind kind; // 0x40
		::System::Double numberValue; // 0x48

		::System::Void _ctor(::System::String* xpathExpr)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSCANNER__CTOR_OFFSET))(this, xpathExpr);
		}

		::System::Boolean NextChar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSCANNER_NEXTCHAR_OFFSET))(this);
		}

		::System::Void SkipSpace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSCANNER_SKIPSPACE_OFFSET))(this);
		}

		::System::Boolean NextLex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSCANNER_NEXTLEX_OFFSET))(this);
		}

		::System::Double ScanNumber()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSCANNER_SCANNUMBER_OFFSET))(this);
		}

		::System::Double ScanFraction()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSCANNER_SCANFRACTION_OFFSET))(this);
		}

		::System::String* ScanString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSCANNER_SCANSTRING_OFFSET))(this);
		}

		::System::String* ScanName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSCANNER_SCANNAME_OFFSET))(this);
		}
	};
}
