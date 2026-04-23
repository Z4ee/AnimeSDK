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

#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x17A682F0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ADDJSONARRAYATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x17A69630)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ALLSAMENAME_OFFSET UNITYSDK_OFFSET(0x17A64ED0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x17A69A70)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CONVERTTOKENTOXMLVALUE_OFFSET UNITYSDK_OFFSET(0x17A69090)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CREATEDOCUMENTTYPE_OFFSET UNITYSDK_OFFSET(0x17A67310)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CREATEELEMENT_1_OFFSET UNITYSDK_OFFSET(0x17A68E10)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CREATEELEMENT_OFFSET UNITYSDK_OFFSET(0x17A68680)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CREATEINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x17A66DA0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_DESERIALIZENODE_OFFSET UNITYSDK_OFFSET(0x17A65DE0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_DESERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x17A66610)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_GETPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x17A640A0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_GET_DESERIALIZEROOTELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x17A61630)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_GET_OMITROOTOBJECT_OFFSET UNITYSDK_OFFSET(0x17A61650)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_GET_WRITEARRAYATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x17A61640)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ISARRAY_OFFSET UNITYSDK_OFFSET(0x17A64510)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ISNAMESPACEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x17A699B0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_PUSHPARENTNAMESPACES_OFFSET UNITYSDK_OFFSET(0x17A618A0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_READARRAYELEMENTS_OFFSET UNITYSDK_OFFSET(0x17A67740)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_READATTRIBUTEELEMENTS_OFFSET UNITYSDK_OFFSET(0x17A67BA0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_READELEMENT_OFFSET UNITYSDK_OFFSET(0x17A65AA0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x17A653E0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_RESOLVEFULLNAME_OFFSET UNITYSDK_OFFSET(0x17A63C30)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_SERIALIZEGROUPEDNODES_OFFSET UNITYSDK_OFFSET(0x17A64980)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_SERIALIZENODE_OFFSET UNITYSDK_OFFSET(0x17A620B0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_VALUEATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x17A651F0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_WRAPXML_OFFSET UNITYSDK_OFFSET(0x17A617D0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x17A61660)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A69B20)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XmlNodeConverter_TypeDefinitionIndex = 8593;

	class XmlNodeConverter : public ::Newtonsoft::Json::JsonConverter
	{
	public:
		::System::String* _DeserializeRootElementName_k__BackingField; // 0x10
		::System::Boolean _WriteArrayAttribute_k__BackingField; // 0x18
		::System::Boolean _OmitRootObject_k__BackingField; // 0x19

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

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_WRITEJSON_OFFSET))(this, writer, value, serializer);
		}

		::Newtonsoft::Json::Converters::IXmlNode* WrapXml(::System::Object* value)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_WRAPXML_OFFSET))(this, value);
		}

		::System::Void PushParentNamespaces(::Newtonsoft::Json::Converters::IXmlNode* node, ::System::Xml::XmlNamespaceManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Converters::IXmlNode*, ::System::Xml::XmlNamespaceManager*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_PUSHPARENTNAMESPACES_OFFSET))(this, node, manager);
		}

		::System::String* ResolveFullName(::Newtonsoft::Json::Converters::IXmlNode* node, ::System::Xml::XmlNamespaceManager* manager)
		{
			return ((::System::String*(*)(::PVOID, ::Newtonsoft::Json::Converters::IXmlNode*, ::System::Xml::XmlNamespaceManager*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_RESOLVEFULLNAME_OFFSET))(this, node, manager);
		}

		::System::String* GetPropertyName(::Newtonsoft::Json::Converters::IXmlNode* node, ::System::Xml::XmlNamespaceManager* manager)
		{
			return ((::System::String*(*)(::PVOID, ::Newtonsoft::Json::Converters::IXmlNode*, ::System::Xml::XmlNamespaceManager*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_GETPROPERTYNAME_OFFSET))(this, node, manager);
		}

		::System::Boolean IsArray(::Newtonsoft::Json::Converters::IXmlNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Converters::IXmlNode*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ISARRAY_OFFSET))(this, node);
		}

		::System::Void SerializeGroupedNodes(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Converters::IXmlNode* node, ::System::Xml::XmlNamespaceManager* manager, ::System::Boolean writePropertyName)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Converters::IXmlNode*, ::System::Xml::XmlNamespaceManager*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_SERIALIZEGROUPEDNODES_OFFSET))(this, writer, node, manager, writePropertyName);
		}

		::System::Void SerializeNode(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Converters::IXmlNode* node, ::System::Xml::XmlNamespaceManager* manager, ::System::Boolean writePropertyName)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Converters::IXmlNode*, ::System::Xml::XmlNamespaceManager*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_SERIALIZENODE_OFFSET))(this, writer, node, manager, writePropertyName);
		}

		static ::System::Boolean AllSameName(::Newtonsoft::Json::Converters::IXmlNode* node)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Converters::IXmlNode*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ALLSAMENAME_OFFSET))(node);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_READJSON_OFFSET))(this, reader, objectType, existingValue, serializer);
		}

		::System::Void DeserializeValue(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Converters::IXmlDocument* document, ::System::Xml::XmlNamespaceManager* manager, ::System::String* propertyName, ::Newtonsoft::Json::Converters::IXmlNode* currentNode)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::System::Xml::XmlNamespaceManager*, ::System::String*, ::Newtonsoft::Json::Converters::IXmlNode*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_DESERIALIZEVALUE_OFFSET))(this, reader, document, manager, propertyName, currentNode);
		}

		::System::Void ReadElement(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Converters::IXmlDocument* document, ::Newtonsoft::Json::Converters::IXmlNode* currentNode, ::System::String* propertyName, ::System::Xml::XmlNamespaceManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::Newtonsoft::Json::Converters::IXmlNode*, ::System::String*, ::System::Xml::XmlNamespaceManager*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_READELEMENT_OFFSET))(this, reader, document, currentNode, propertyName, manager);
		}

		::System::Void CreateElement(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Converters::IXmlDocument* document, ::Newtonsoft::Json::Converters::IXmlNode* currentNode, ::System::String* elementName, ::System::Xml::XmlNamespaceManager* manager, ::System::String* elementPrefix, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* attributeNameValues)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::Newtonsoft::Json::Converters::IXmlNode*, ::System::String*, ::System::Xml::XmlNamespaceManager*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CREATEELEMENT_OFFSET))(this, reader, document, currentNode, elementName, manager, elementPrefix, attributeNameValues);
		}

		static ::System::Void AddAttribute(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Converters::IXmlDocument* document, ::Newtonsoft::Json::Converters::IXmlNode* currentNode, ::System::String* attributeName, ::System::Xml::XmlNamespaceManager* manager, ::System::String* attributePrefix)
		{
			return ((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::Newtonsoft::Json::Converters::IXmlNode*, ::System::String*, ::System::Xml::XmlNamespaceManager*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ADDATTRIBUTE_OFFSET))(reader, document, currentNode, attributeName, manager, attributePrefix);
		}

		::System::String* ConvertTokenToXmlValue(::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::String*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CONVERTTOKENTOXMLVALUE_OFFSET))(this, reader);
		}

		::System::Void ReadArrayElements(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Converters::IXmlDocument* document, ::System::String* propertyName, ::Newtonsoft::Json::Converters::IXmlNode* currentNode, ::System::Xml::XmlNamespaceManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::System::String*, ::Newtonsoft::Json::Converters::IXmlNode*, ::System::Xml::XmlNamespaceManager*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_READARRAYELEMENTS_OFFSET))(this, reader, document, propertyName, currentNode, manager);
		}

		::System::Void AddJsonArrayAttribute(::Newtonsoft::Json::Converters::IXmlElement* element, ::Newtonsoft::Json::Converters::IXmlDocument* document)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Converters::IXmlElement*, ::Newtonsoft::Json::Converters::IXmlDocument*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ADDJSONARRAYATTRIBUTE_OFFSET))(this, element, document);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* ReadAttributeElements(::Newtonsoft::Json::JsonReader* reader, ::System::Xml::XmlNamespaceManager* manager)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Xml::XmlNamespaceManager*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_READATTRIBUTEELEMENTS_OFFSET))(this, reader, manager);
		}

		::System::Void CreateInstruction(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Converters::IXmlDocument* document, ::Newtonsoft::Json::Converters::IXmlNode* currentNode, ::System::String* propertyName)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::Newtonsoft::Json::Converters::IXmlNode*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CREATEINSTRUCTION_OFFSET))(this, reader, document, currentNode, propertyName);
		}

		::System::Void CreateDocumentType(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Converters::IXmlDocument* document, ::Newtonsoft::Json::Converters::IXmlNode* currentNode)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::Newtonsoft::Json::Converters::IXmlNode*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CREATEDOCUMENTTYPE_OFFSET))(this, reader, document, currentNode);
		}

		::Newtonsoft::Json::Converters::IXmlElement* CreateElement_1(::System::String* elementName, ::Newtonsoft::Json::Converters::IXmlDocument* document, ::System::String* elementPrefix, ::System::Xml::XmlNamespaceManager* manager)
		{
			return ((::Newtonsoft::Json::Converters::IXmlElement*(*)(::PVOID, ::System::String*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::System::String*, ::System::Xml::XmlNamespaceManager*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CREATEELEMENT_1_OFFSET))(this, elementName, document, elementPrefix, manager);
		}

		::System::Void DeserializeNode(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Converters::IXmlDocument* document, ::System::Xml::XmlNamespaceManager* manager, ::Newtonsoft::Json::Converters::IXmlNode* currentNode)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::System::Xml::XmlNamespaceManager*, ::Newtonsoft::Json::Converters::IXmlNode*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_DESERIALIZENODE_OFFSET))(this, reader, document, manager, currentNode);
		}

		::System::Boolean IsNamespaceAttribute(::System::String* attributeName, ::System::String*& prefix)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ISNAMESPACEATTRIBUTE_OFFSET))(this, attributeName, prefix);
		}

		::System::Boolean ValueAttributes(::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_VALUEATTRIBUTES_OFFSET))(this, c);
		}

		::System::Boolean CanConvert(::System::Type* valueType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CANCONVERT_OFFSET))(this, valueType);
		}
	};
}
