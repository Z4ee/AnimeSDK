#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONArray; }
namespace SimpleJSON { class JSONClass; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }
namespace System::IO { class Stream; }
namespace System::Text { class StringBuilder; }

#define SIMPLEJSON_JSONNODE_ADD_1_OFFSET UNITYSDK_OFFSET(0x1D907D60)
#define SIMPLEJSON_JSONNODE_ADD_OFFSET UNITYSDK_OFFSET(0x1D907C90)
#define SIMPLEJSON_JSONNODE_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x1D907DB0)
#define SIMPLEJSON_JSONNODE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D90BCE0)
#define SIMPLEJSON_JSONNODE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D9089C0)
#define SIMPLEJSON_JSONNODE_ESCAPE_OFFSET UNITYSDK_OFFSET(0x1D908BD0)
#define SIMPLEJSON_JSONNODE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D9089D0)
#define SIMPLEJSON_JSONNODE_GET_ASARRAY_OFFSET UNITYSDK_OFFSET(0x1D908660)
#define SIMPLEJSON_JSONNODE_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1D908410)
#define SIMPLEJSON_JSONNODE_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1D908370)
#define SIMPLEJSON_JSONNODE_GET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x1D9082D0)
#define SIMPLEJSON_JSONNODE_GET_ASINT_OFFSET UNITYSDK_OFFSET(0x1D9081B0)
#define SIMPLEJSON_JSONNODE_GET_ASLONG_OFFSET UNITYSDK_OFFSET(0x1D908540)
#define SIMPLEJSON_JSONNODE_GET_ASOBJECT_OFFSET UNITYSDK_OFFSET(0x1D9086D0)
#define SIMPLEJSON_JSONNODE_GET_ASUINT_OFFSET UNITYSDK_OFFSET(0x1D908240)
#define SIMPLEJSON_JSONNODE_GET_ASULONG_OFFSET UNITYSDK_OFFSET(0x1D9085D0)
#define SIMPLEJSON_JSONNODE_GET_CHILDS_OFFSET UNITYSDK_OFFSET(0x1D907E40)
#define SIMPLEJSON_JSONNODE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1D907D30)
#define SIMPLEJSON_JSONNODE_GET_DEEPCHILDS_OFFSET UNITYSDK_OFFSET(0x1D907E90)
#define SIMPLEJSON_JSONNODE_GET_ESCAPEBUILDER_OFFSET UNITYSDK_OFFSET(0x1D9089E0)
#define SIMPLEJSON_JSONNODE_GET_ISBOOL_OFFSET UNITYSDK_OFFSET(0x1D908130)
#define SIMPLEJSON_JSONNODE_GET_ISDOUBLE_OFFSET UNITYSDK_OFFSET(0x1D9080D0)
#define SIMPLEJSON_JSONNODE_GET_ISFLOAT_OFFSET UNITYSDK_OFFSET(0x1D908070)
#define SIMPLEJSON_JSONNODE_GET_ISINT_OFFSET UNITYSDK_OFFSET(0x1D907FB0)
#define SIMPLEJSON_JSONNODE_GET_ISLONG_OFFSET UNITYSDK_OFFSET(0x1D908010)
#define SIMPLEJSON_JSONNODE_GET_ISSTRING_OFFSET UNITYSDK_OFFSET(0x1D907D40)
#define SIMPLEJSON_JSONNODE_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1D907CC0)
#define SIMPLEJSON_JSONNODE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D907CA0)
#define SIMPLEJSON_JSONNODE_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1D907DF0)
#define SIMPLEJSON_JSONNODE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D907CE0)
#define SIMPLEJSON_JSONNODE_LOADFROMBASE64_OFFSET UNITYSDK_OFFSET(0x1D90C690)
#define SIMPLEJSON_JSONNODE_LOADFROMCOMPRESSEDBASE64_OFFSET UNITYSDK_OFFSET(0x1D90C380)
#define SIMPLEJSON_JSONNODE_LOADFROMCOMPRESSEDFILE_OFFSET UNITYSDK_OFFSET(0x1D90C2E0)
#define SIMPLEJSON_JSONNODE_LOADFROMCOMPRESSEDSTREAM_OFFSET UNITYSDK_OFFSET(0x1D90C330)
#define SIMPLEJSON_JSONNODE_LOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x1D90C550)
#define SIMPLEJSON_JSONNODE_LOADFROMSTREAM_OFFSET UNITYSDK_OFFSET(0x1D90C3D0)
#define SIMPLEJSON_JSONNODE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D908890)
#define SIMPLEJSON_JSONNODE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1D9087D0)
#define SIMPLEJSON_JSONNODE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D908740)
#define SIMPLEJSON_JSONNODE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1D908900)
#define SIMPLEJSON_JSONNODE_PARSE_OFFSET UNITYSDK_OFFSET(0x1D908EA0)
#define SIMPLEJSON_JSONNODE_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1D907DD0)
#define SIMPLEJSON_JSONNODE_REMOVE_2_OFFSET UNITYSDK_OFFSET(0x1D907DE0)
#define SIMPLEJSON_JSONNODE_REMOVE_OFFSET UNITYSDK_OFFSET(0x1D907DC0)
#define SIMPLEJSON_JSONNODE_SAVETOBASE64_OFFSET UNITYSDK_OFFSET(0x1D90BA10)
#define SIMPLEJSON_JSONNODE_SAVETOCOMPRESSEDBASE64_OFFSET UNITYSDK_OFFSET(0x1D90B790)
#define SIMPLEJSON_JSONNODE_SAVETOCOMPRESSEDFILE_OFFSET UNITYSDK_OFFSET(0x1D90B740)
#define SIMPLEJSON_JSONNODE_SAVETOCOMPRESSEDSTREAM_OFFSET UNITYSDK_OFFSET(0x1D90B6F0)
#define SIMPLEJSON_JSONNODE_SAVETOFILE_OFFSET UNITYSDK_OFFSET(0x1D90B7E0)
#define SIMPLEJSON_JSONNODE_SAVETOSTREAM_OFFSET UNITYSDK_OFFSET(0x1D90B600)
#define SIMPLEJSON_JSONNODE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D90B5F0)
#define SIMPLEJSON_JSONNODE_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1D9084D0)
#define SIMPLEJSON_JSONNODE_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1D9083C0)
#define SIMPLEJSON_JSONNODE_SET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x1D908320)
#define SIMPLEJSON_JSONNODE_SET_ASINT_OFFSET UNITYSDK_OFFSET(0x1D908200)
#define SIMPLEJSON_JSONNODE_SET_ASLONG_OFFSET UNITYSDK_OFFSET(0x1D908590)
#define SIMPLEJSON_JSONNODE_SET_ASUINT_OFFSET UNITYSDK_OFFSET(0x1D908290)
#define SIMPLEJSON_JSONNODE_SET_ASULONG_OFFSET UNITYSDK_OFFSET(0x1D908620)
#define SIMPLEJSON_JSONNODE_SET_ISSTRING_OFFSET UNITYSDK_OFFSET(0x1D907D50)
#define SIMPLEJSON_JSONNODE_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1D907CD0)
#define SIMPLEJSON_JSONNODE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D907CB0)
#define SIMPLEJSON_JSONNODE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D907D20)
#define SIMPLEJSON_JSONNODE_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1D907F30)
#define SIMPLEJSON_JSONNODE_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x1D907F70)
#define SIMPLEJSON_JSONNODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D907EF0)
#define SIMPLEJSON_JSONNODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D90C750)
#define SIMPLEJSON_JSONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D90C740)

namespace SimpleJSON
{
	inline static constexpr unsigned int JSONNode_TypeDefinitionIndex = 8144;

	class JSONNode : public ::System::Object
	{
	public:
		static ::System::Text::StringBuilder** StaticGet_Token()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x6830);
		}
		static ::System::Collections::Generic::Stack_1<::SimpleJSON::JSONNode*>** StaticGet_stack()
		{
			return (::System::Collections::Generic::Stack_1<::SimpleJSON::JSONNode*>**)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x6838);
		}
		static ::System::Text::StringBuilder** StaticGet_m_EscapeBuilder()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Boolean _IsString_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE__CCTOR_OFFSET))();
		}

		::System::Void Add(::System::String* aKey, ::SimpleJSON::JSONNode* aItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_ADD_OFFSET))(this, aKey, aItem);
		}

		::SimpleJSON::JSONNode* get_Item(::System::Int32 aIndex)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_ITEM_OFFSET))(this, aIndex);
		}

		::System::Void set_Item(::System::Int32 aIndex, ::SimpleJSON::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SET_ITEM_OFFSET))(this, aIndex, value);
		}

		::SimpleJSON::JSONNode* get_Item_1(::System::String* aKey)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_ITEM_1_OFFSET))(this, aKey);
		}

		::System::Void set_Item_1(::System::String* aKey, ::SimpleJSON::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SET_ITEM_1_OFFSET))(this, aKey, value);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SET_VALUE_OFFSET))(this, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsString()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_ISSTRING_OFFSET))(this);
		}

		::System::Void set_IsString(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SET_ISSTRING_OFFSET))(this, value);
		}

		::System::Void Add_1(::SimpleJSON::JSONNode* aItem)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_ADD_1_OFFSET))(this, aItem);
		}

		::System::Boolean ContainsKey(::System::String* aKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_CONTAINSKEY_OFFSET))(this, aKey);
		}

		::SimpleJSON::JSONNode* Remove(::System::String* aKey)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_REMOVE_OFFSET))(this, aKey);
		}

		::SimpleJSON::JSONNode* Remove_1(::System::Int32 aIndex)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_REMOVE_1_OFFSET))(this, aIndex);
		}

		::SimpleJSON::JSONNode* Remove_2(::SimpleJSON::JSONNode* aNode)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_REMOVE_2_OFFSET))(this, aNode);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* get_Keys()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_KEYS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::SimpleJSON::JSONNode*>* get_Childs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::SimpleJSON::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_CHILDS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::SimpleJSON::JSONNode*>* get_DeepChilds()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::SimpleJSON::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_DEEPCHILDS_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* aPrefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_TOSTRING_1_OFFSET))(this, aPrefix);
		}

		::System::String* ToString_2(::System::Boolean escape)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_TOSTRING_2_OFFSET))(this, escape);
		}

		::System::Boolean get_IsInt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_ISINT_OFFSET))(this);
		}

		::System::Boolean get_IsLong()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_ISLONG_OFFSET))(this);
		}

		::System::Boolean get_IsFloat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_ISFLOAT_OFFSET))(this);
		}

		::System::Boolean get_IsDouble()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_ISDOUBLE_OFFSET))(this);
		}

		::System::Boolean get_IsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_ISBOOL_OFFSET))(this);
		}

		::System::Int32 get_AsInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_ASINT_OFFSET))(this);
		}

		::System::Void set_AsInt(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SET_ASINT_OFFSET))(this, value);
		}

		::System::UInt32 get_AsUInt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_ASUINT_OFFSET))(this);
		}

		::System::Void set_AsUInt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SET_ASUINT_OFFSET))(this, value);
		}

		::System::Single get_AsFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_ASFLOAT_OFFSET))(this);
		}

		::System::Void set_AsFloat(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SET_ASFLOAT_OFFSET))(this, value);
		}

		::System::Double get_AsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_ASDOUBLE_OFFSET))(this);
		}

		::System::Void set_AsDouble(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SET_ASDOUBLE_OFFSET))(this, value);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SET_ASBOOL_OFFSET))(this, value);
		}

		::System::Int64 get_AsLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_ASLONG_OFFSET))(this);
		}

		::System::Void set_AsLong(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SET_ASLONG_OFFSET))(this, value);
		}

		::System::UInt64 get_AsULong()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_ASULONG_OFFSET))(this);
		}

		::System::Void set_AsULong(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SET_ASULONG_OFFSET))(this, value);
		}

		::SimpleJSON::JSONArray* get_AsArray()
		{
			return ((::SimpleJSON::JSONArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_ASARRAY_OFFSET))(this);
		}

		::SimpleJSON::JSONClass* get_AsObject()
		{
			return ((::SimpleJSON::JSONClass*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_ASOBJECT_OFFSET))(this);
		}

		static ::SimpleJSON::JSONNode* op_Implicit(::System::String* s)
		{
			return ((::SimpleJSON::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_OP_IMPLICIT_OFFSET))(s);
		}

		static ::System::String* op_Implicit_1(::SimpleJSON::JSONNode* d)
		{
			return ((::System::String*(*)(::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_OP_IMPLICIT_1_OFFSET))(d);
		}

		static ::System::Boolean op_Equality(::SimpleJSON::JSONNode* a, ::System::Object* b)
		{
			return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Object*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::SimpleJSON::JSONNode* a, ::System::Object* b)
		{
			return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Object*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Text::StringBuilder* get_EscapeBuilder()
		{
			return ((::System::Text::StringBuilder*(*)())((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_ESCAPEBUILDER_OFFSET))();
		}

		static ::System::String* Escape(::System::String* aText)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_ESCAPE_OFFSET))(aText);
		}

		static ::SimpleJSON::JSONNode* Parse(::System::String* aJSON)
		{
			return ((::SimpleJSON::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_PARSE_OFFSET))(aJSON);
		}

		::System::Void Serialize(::System::IO::BinaryWriter* aWriter)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SERIALIZE_OFFSET))(this, aWriter);
		}

		::System::Void SaveToStream(::System::IO::Stream* aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SAVETOSTREAM_OFFSET))(this, aData);
		}

		::System::Void SaveToCompressedStream(::System::IO::Stream* aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SAVETOCOMPRESSEDSTREAM_OFFSET))(this, aData);
		}

		::System::Void SaveToCompressedFile(::System::String* aFileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SAVETOCOMPRESSEDFILE_OFFSET))(this, aFileName);
		}

		::System::String* SaveToCompressedBase64()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SAVETOCOMPRESSEDBASE64_OFFSET))(this);
		}

		::System::Void SaveToFile(::System::String* aFileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SAVETOFILE_OFFSET))(this, aFileName);
		}

		::System::String* SaveToBase64()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SAVETOBASE64_OFFSET))(this);
		}

		static ::SimpleJSON::JSONNode* Deserialize(::System::IO::BinaryReader* aReader)
		{
			return ((::SimpleJSON::JSONNode*(*)(::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_DESERIALIZE_OFFSET))(aReader);
		}

		static ::SimpleJSON::JSONNode* LoadFromCompressedFile(::System::String* aFileName)
		{
			return ((::SimpleJSON::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_LOADFROMCOMPRESSEDFILE_OFFSET))(aFileName);
		}

		static ::SimpleJSON::JSONNode* LoadFromCompressedStream(::System::IO::Stream* aData)
		{
			return ((::SimpleJSON::JSONNode*(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_LOADFROMCOMPRESSEDSTREAM_OFFSET))(aData);
		}

		static ::SimpleJSON::JSONNode* LoadFromCompressedBase64(::System::String* aBase64)
		{
			return ((::SimpleJSON::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_LOADFROMCOMPRESSEDBASE64_OFFSET))(aBase64);
		}

		static ::SimpleJSON::JSONNode* LoadFromStream(::System::IO::Stream* aData)
		{
			return ((::SimpleJSON::JSONNode*(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_LOADFROMSTREAM_OFFSET))(aData);
		}

		static ::SimpleJSON::JSONNode* LoadFromFile(::System::String* aFileName)
		{
			return ((::SimpleJSON::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_LOADFROMFILE_OFFSET))(aFileName);
		}

		static ::SimpleJSON::JSONNode* LoadFromBase64(::System::String* aBase64)
		{
			return ((::SimpleJSON::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_LOADFROMBASE64_OFFSET))(aBase64);
		}
	};
}
