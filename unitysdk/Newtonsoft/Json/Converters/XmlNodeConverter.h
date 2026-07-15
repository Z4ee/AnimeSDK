#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonConverter.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json::Converters { class IXmlDocument; }
namespace Newtonsoft::Json::Converters { class IXmlElement; }
namespace Newtonsoft::Json::Converters { class IXmlNode; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Xml { class XmlNamespaceManager; }

#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x165E5910)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ADDJSONARRAYATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x165E7C70)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ALLSAMENAME_OFFSET UNITYSDK_OFFSET(0x165DFA40)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x165E8270)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CONVERTTOKENTOXMLVALUE_OFFSET UNITYSDK_OFFSET(0x165E6F90)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CREATEDOCUMENTTYPE_OFFSET UNITYSDK_OFFSET(0x165E3A70)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CREATEELEMENT_1_OFFSET UNITYSDK_OFFSET(0x165E6BA0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CREATEELEMENT_OFFSET UNITYSDK_OFFSET(0x165E5F10)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CREATEINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x165E2DB0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_DESERIALIZENODE_OFFSET UNITYSDK_OFFSET(0x165E0F00)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_DESERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x165E2080)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_GETPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x165DE670)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_GET_DESERIALIZEROOTELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x165D9C80)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_GET_OMITROOTOBJECT_OFFSET UNITYSDK_OFFSET(0x165D9CA0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_GET_WRITEARRAYATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x165D9C90)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ISARRAY_OFFSET UNITYSDK_OFFSET(0x165DEC30)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ISNAMESPACEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x165E81B0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_PUSHPARENTNAMESPACES_OFFSET UNITYSDK_OFFSET(0x165D9FC0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_READARRAYELEMENTS_OFFSET UNITYSDK_OFFSET(0x165E45E0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_READATTRIBUTEELEMENTS_OFFSET UNITYSDK_OFFSET(0x165E4C00)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_READELEMENT_OFFSET UNITYSDK_OFFSET(0x165E0AE0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x165E00C0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_RESOLVEFULLNAME_OFFSET UNITYSDK_OFFSET(0x165DDF80)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_SERIALIZEGROUPEDNODES_OFFSET UNITYSDK_OFFSET(0x165DF250)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_SERIALIZENODE_OFFSET UNITYSDK_OFFSET(0x165DAC40)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_VALUEATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x165DFE60)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_WRAPXML_OFFSET UNITYSDK_OFFSET(0x165D9EE0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x165D9CB0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x165E83E0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XmlNodeConverter_TypeDefinitionIndex = 9508;

	class XmlNodeConverter : public ::Newtonsoft::Json::JsonConverter
	{
	public:
		::System::String* _DeserializeRootElementName_k__BackingField; // 0x10
		::System::Boolean _OmitRootObject_k__BackingField; // 0x18
		::System::Boolean _WriteArrayAttribute_k__BackingField; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER__CTOR_OFFSET))(this);
		}

		::System::String* get_DeserializeRootElementName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_GET_DESERIALIZEROOTELEMENTNAME_OFFSET))(this);
		}

		::System::Boolean get_WriteArrayAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_GET_WRITEARRAYATTRIBUTE_OFFSET))(this);
		}

		::System::Boolean get_OmitRootObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_GET_OMITROOTOBJECT_OFFSET))(this);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* a1, ::System::Object* a2, ::Newtonsoft::Json::JsonSerializer* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_WRITEJSON_OFFSET))(this, a1, a2, a3);
		}

		::Newtonsoft::Json::Converters::IXmlNode* WrapXml(::System::Object* a1)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_WRAPXML_OFFSET))(this, a1);
		}

		::System::Void PushParentNamespaces(::Newtonsoft::Json::Converters::IXmlNode* a1, ::System::Xml::XmlNamespaceManager* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Converters::IXmlNode*, ::System::Xml::XmlNamespaceManager*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_PUSHPARENTNAMESPACES_OFFSET))(this, a1, a2);
		}

		::System::String* ResolveFullName(::Newtonsoft::Json::Converters::IXmlNode* a1, ::System::Xml::XmlNamespaceManager* a2)
		{
			return ((::System::String*(*)(::PVOID, ::Newtonsoft::Json::Converters::IXmlNode*, ::System::Xml::XmlNamespaceManager*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_RESOLVEFULLNAME_OFFSET))(this, a1, a2);
		}

		::System::String* GetPropertyName(::Newtonsoft::Json::Converters::IXmlNode* a1, ::System::Xml::XmlNamespaceManager* a2)
		{
			return ((::System::String*(*)(::PVOID, ::Newtonsoft::Json::Converters::IXmlNode*, ::System::Xml::XmlNamespaceManager*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_GETPROPERTYNAME_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsArray(::Newtonsoft::Json::Converters::IXmlNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Converters::IXmlNode*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ISARRAY_OFFSET))(this, a1);
		}

		::System::Void SerializeGroupedNodes(::Newtonsoft::Json::JsonWriter* a1, ::Newtonsoft::Json::Converters::IXmlNode* a2, ::System::Xml::XmlNamespaceManager* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Converters::IXmlNode*, ::System::Xml::XmlNamespaceManager*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_SERIALIZEGROUPEDNODES_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SerializeNode(::Newtonsoft::Json::JsonWriter* a1, ::Newtonsoft::Json::Converters::IXmlNode* a2, ::System::Xml::XmlNamespaceManager* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Converters::IXmlNode*, ::System::Xml::XmlNamespaceManager*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_SERIALIZENODE_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Boolean AllSameName(::Newtonsoft::Json::Converters::IXmlNode* a1)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Converters::IXmlNode*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ALLSAMENAME_OFFSET))(a1);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* a1, ::System::Type* a2, ::System::Object* a3, ::Newtonsoft::Json::JsonSerializer* a4)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_READJSON_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DeserializeValue(::Newtonsoft::Json::JsonReader* a1, ::Newtonsoft::Json::Converters::IXmlDocument* a2, ::System::Xml::XmlNamespaceManager* a3, ::System::String* a4, ::Newtonsoft::Json::Converters::IXmlNode* a5)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::System::Xml::XmlNamespaceManager*, ::System::String*, ::Newtonsoft::Json::Converters::IXmlNode*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_DESERIALIZEVALUE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ReadElement(::Newtonsoft::Json::JsonReader* a1, ::Newtonsoft::Json::Converters::IXmlDocument* a2, ::Newtonsoft::Json::Converters::IXmlNode* a3, ::System::String* a4, ::System::Xml::XmlNamespaceManager* a5)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::Newtonsoft::Json::Converters::IXmlNode*, ::System::String*, ::System::Xml::XmlNamespaceManager*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_READELEMENT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void CreateElement(::Newtonsoft::Json::JsonReader* a1, ::Newtonsoft::Json::Converters::IXmlDocument* a2, ::Newtonsoft::Json::Converters::IXmlNode* a3, ::System::String* a4, ::System::Xml::XmlNamespaceManager* a5, ::System::String* a6, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a7)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::Newtonsoft::Json::Converters::IXmlNode*, ::System::String*, ::System::Xml::XmlNamespaceManager*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CREATEELEMENT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void AddAttribute(::Newtonsoft::Json::JsonReader* a1, ::Newtonsoft::Json::Converters::IXmlDocument* a2, ::Newtonsoft::Json::Converters::IXmlNode* a3, ::System::String* a4, ::System::Xml::XmlNamespaceManager* a5, ::System::String* a6)
		{
			return ((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::Newtonsoft::Json::Converters::IXmlNode*, ::System::String*, ::System::Xml::XmlNamespaceManager*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ADDATTRIBUTE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::String* ConvertTokenToXmlValue(::Newtonsoft::Json::JsonReader* a1)
		{
			return ((::System::String*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CONVERTTOKENTOXMLVALUE_OFFSET))(this, a1);
		}

		::System::Void ReadArrayElements(::Newtonsoft::Json::JsonReader* a1, ::Newtonsoft::Json::Converters::IXmlDocument* a2, ::System::String* a3, ::Newtonsoft::Json::Converters::IXmlNode* a4, ::System::Xml::XmlNamespaceManager* a5)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::System::String*, ::Newtonsoft::Json::Converters::IXmlNode*, ::System::Xml::XmlNamespaceManager*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_READARRAYELEMENTS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void AddJsonArrayAttribute(::Newtonsoft::Json::Converters::IXmlElement* a1, ::Newtonsoft::Json::Converters::IXmlDocument* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Converters::IXmlElement*, ::Newtonsoft::Json::Converters::IXmlDocument*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ADDJSONARRAYATTRIBUTE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* ReadAttributeElements(::Newtonsoft::Json::JsonReader* a1, ::System::Xml::XmlNamespaceManager* a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Xml::XmlNamespaceManager*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_READATTRIBUTEELEMENTS_OFFSET))(this, a1, a2);
		}

		::System::Void CreateInstruction(::Newtonsoft::Json::JsonReader* a1, ::Newtonsoft::Json::Converters::IXmlDocument* a2, ::Newtonsoft::Json::Converters::IXmlNode* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::Newtonsoft::Json::Converters::IXmlNode*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CREATEINSTRUCTION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CreateDocumentType(::Newtonsoft::Json::JsonReader* a1, ::Newtonsoft::Json::Converters::IXmlDocument* a2, ::Newtonsoft::Json::Converters::IXmlNode* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::Newtonsoft::Json::Converters::IXmlNode*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CREATEDOCUMENTTYPE_OFFSET))(this, a1, a2, a3);
		}

		::Newtonsoft::Json::Converters::IXmlElement* CreateElement_1(::System::String* a1, ::Newtonsoft::Json::Converters::IXmlDocument* a2, ::System::String* a3, ::System::Xml::XmlNamespaceManager* a4)
		{
			return ((::Newtonsoft::Json::Converters::IXmlElement*(*)(::PVOID, ::System::String*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::System::String*, ::System::Xml::XmlNamespaceManager*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CREATEELEMENT_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DeserializeNode(::Newtonsoft::Json::JsonReader* a1, ::Newtonsoft::Json::Converters::IXmlDocument* a2, ::System::Xml::XmlNamespaceManager* a3, ::Newtonsoft::Json::Converters::IXmlNode* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::System::Xml::XmlNamespaceManager*, ::Newtonsoft::Json::Converters::IXmlNode*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_DESERIALIZENODE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IsNamespaceAttribute(::System::String* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ISNAMESPACEATTRIBUTE_OFFSET))(this, a1, a2);
		}

		::System::Boolean ValueAttributes(::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_VALUEATTRIBUTES_OFFSET))(this, a1);
		}

		::System::Boolean CanConvert(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CANCONVERT_OFFSET))(this, a1);
		}
	};
}
