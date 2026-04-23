#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONArray; }
namespace SimpleJSON { class JSONClass; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }
namespace System::IO { class Stream; }

#define SIMPLEJSON_JSONNODE_ADD_1_OFFSET UNITYSDK_OFFSET(0x19DA9AB0)
#define SIMPLEJSON_JSONNODE_ADD_OFFSET UNITYSDK_OFFSET(0x19DAA490)
#define SIMPLEJSON_JSONNODE_CLONE_OFFSET UNITYSDK_OFFSET(0x19DAA7D0)
#define SIMPLEJSON_JSONNODE_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x19DAA530)
#define SIMPLEJSON_JSONNODE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x19DAE330)
#define SIMPLEJSON_JSONNODE_EQUALS_OFFSET UNITYSDK_OFFSET(0x19DAAAC0)
#define SIMPLEJSON_JSONNODE_ESCAPE_OFFSET UNITYSDK_OFFSET(0x19DA7060)
#define SIMPLEJSON_JSONNODE_FASTPARSE_OFFSET UNITYSDK_OFFSET(0x19DAAAD0)
#define SIMPLEJSON_JSONNODE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19DA9E20)
#define SIMPLEJSON_JSONNODE_GET_ASARRAY_OFFSET UNITYSDK_OFFSET(0x19DAA9A0)
#define SIMPLEJSON_JSONNODE_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x19DA9890)
#define SIMPLEJSON_JSONNODE_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x19DA97D0)
#define SIMPLEJSON_JSONNODE_GET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x19DA9710)
#define SIMPLEJSON_JSONNODE_GET_ASINT_OFFSET UNITYSDK_OFFSET(0x19DA9670)
#define SIMPLEJSON_JSONNODE_GET_ASOBJECT_OFFSET UNITYSDK_OFFSET(0x19DAA9E0)
#define SIMPLEJSON_JSONNODE_GET_CHILDS_OFFSET UNITYSDK_OFFSET(0x19DAA5E0)
#define SIMPLEJSON_JSONNODE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x19DAA500)
#define SIMPLEJSON_JSONNODE_GET_DEEPCHILDS_OFFSET UNITYSDK_OFFSET(0x19DAA650)
#define SIMPLEJSON_JSONNODE_GET_ISBOOL_OFFSET UNITYSDK_OFFSET(0x19DAA940)
#define SIMPLEJSON_JSONNODE_GET_ISDOUBLE_OFFSET UNITYSDK_OFFSET(0x19DAA8E0)
#define SIMPLEJSON_JSONNODE_GET_ISFLOAT_OFFSET UNITYSDK_OFFSET(0x19DAA880)
#define SIMPLEJSON_JSONNODE_GET_ISINT_OFFSET UNITYSDK_OFFSET(0x19DAA820)
#define SIMPLEJSON_JSONNODE_GET_ISSTRING_OFFSET UNITYSDK_OFFSET(0x19DAA510)
#define SIMPLEJSON_JSONNODE_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x19DAA4C0)
#define SIMPLEJSON_JSONNODE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19DAA4A0)
#define SIMPLEJSON_JSONNODE_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x19DAA570)
#define SIMPLEJSON_JSONNODE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x19DAA4E0)
#define SIMPLEJSON_JSONNODE_LOADFROMBASE64_OFFSET UNITYSDK_OFFSET(0x19DAE9D0)
#define SIMPLEJSON_JSONNODE_LOADFROMCOMPRESSEDBASE64_OFFSET UNITYSDK_OFFSET(0x19DAE760)
#define SIMPLEJSON_JSONNODE_LOADFROMCOMPRESSEDFILE_OFFSET UNITYSDK_OFFSET(0x19DAE6C0)
#define SIMPLEJSON_JSONNODE_LOADFROMCOMPRESSEDSTREAM_OFFSET UNITYSDK_OFFSET(0x19DAE710)
#define SIMPLEJSON_JSONNODE_LOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x19DAE8D0)
#define SIMPLEJSON_JSONNODE_LOADFROMSTREAM_OFFSET UNITYSDK_OFFSET(0x19DAE7B0)
#define SIMPLEJSON_JSONNODE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x19DA8220)
#define SIMPLEJSON_JSONNODE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x19DAAA40)
#define SIMPLEJSON_JSONNODE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x19DAAA20)
#define SIMPLEJSON_JSONNODE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x19DAAA80)
#define SIMPLEJSON_JSONNODE_PARSEWITHCONMMENT_OFFSET UNITYSDK_OFFSET(0x19DAC020)
#define SIMPLEJSON_JSONNODE_PARSE_OFFSET UNITYSDK_OFFSET(0x19DA3B80)
#define SIMPLEJSON_JSONNODE_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x19DAA550)
#define SIMPLEJSON_JSONNODE_REMOVE_2_OFFSET UNITYSDK_OFFSET(0x19DAA560)
#define SIMPLEJSON_JSONNODE_REMOVE_OFFSET UNITYSDK_OFFSET(0x19DAA540)
#define SIMPLEJSON_JSONNODE_SAVETOBASE64_OFFSET UNITYSDK_OFFSET(0x19DAE120)
#define SIMPLEJSON_JSONNODE_SAVETOCOMPRESSEDBASE64_OFFSET UNITYSDK_OFFSET(0x19DADE90)
#define SIMPLEJSON_JSONNODE_SAVETOCOMPRESSEDFILE_OFFSET UNITYSDK_OFFSET(0x19DADE40)
#define SIMPLEJSON_JSONNODE_SAVETOCOMPRESSEDSTREAM_OFFSET UNITYSDK_OFFSET(0x19DADDF0)
#define SIMPLEJSON_JSONNODE_SAVETOFILE_OFFSET UNITYSDK_OFFSET(0x19DADEE0)
#define SIMPLEJSON_JSONNODE_SAVETOSTREAM_OFFSET UNITYSDK_OFFSET(0x19DADD60)
#define SIMPLEJSON_JSONNODE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x19DADD50)
#define SIMPLEJSON_JSONNODE_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x19DA8BF0)
#define SIMPLEJSON_JSONNODE_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x19DA8B60)
#define SIMPLEJSON_JSONNODE_SET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x19DA8AC0)
#define SIMPLEJSON_JSONNODE_SET_ASINT_OFFSET UNITYSDK_OFFSET(0x19DA8C70)
#define SIMPLEJSON_JSONNODE_SET_ISSTRING_OFFSET UNITYSDK_OFFSET(0x19DAA520)
#define SIMPLEJSON_JSONNODE_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x19DAA4D0)
#define SIMPLEJSON_JSONNODE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x19DAA4B0)
#define SIMPLEJSON_JSONNODE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x19DAA4F0)
#define SIMPLEJSON_JSONNODE_TOSTRINGWITHCOMMENT_OFFSET UNITYSDK_OFFSET(0x19DAA790)
#define SIMPLEJSON_JSONNODE_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x19DAA710)
#define SIMPLEJSON_JSONNODE_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x19DAA750)
#define SIMPLEJSON_JSONNODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19DAA6D0)
#define SIMPLEJSON_JSONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19DA5F20)

namespace SimpleJSON
{
	inline static constexpr unsigned int JSONNode_TypeDefinitionIndex = 9774;

	class JSONNode : public ::System::Object
	{
	public:
		::System::String* Comment; // 0x10
		::System::String* FileName; // 0x18
		::System::Boolean _IsString_k__BackingField; // 0x20
		::System::Int32 LineNumber; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE__CTOR_OFFSET))(this);
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

		::System::String* ToStringWithComment(::System::String* aPrefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_TOSTRINGWITHCOMMENT_OFFSET))(this, aPrefix);
		}

		::SimpleJSON::JSONNode* Clone()
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_CLONE_OFFSET))(this);
		}

		::System::Boolean get_IsInt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_ISINT_OFFSET))(this);
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

		static ::System::String* Escape(::System::String* aText)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_ESCAPE_OFFSET))(aText);
		}

		static ::SimpleJSON::JSONNode* Parse(::System::String* aJSON, ::System::String* srcJsonPath)
		{
			return ((::SimpleJSON::JSONNode*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_PARSE_OFFSET))(aJSON, srcJsonPath);
		}

		static ::SimpleJSON::JSONNode* FastParse(::System::String* aJSON, ::System::String* srcJsonPath)
		{
			return ((::SimpleJSON::JSONNode*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_FASTPARSE_OFFSET))(aJSON, srcJsonPath);
		}

		static ::SimpleJSON::JSONNode* ParseWithConmment(::System::String* aJSON)
		{
			return ((::SimpleJSON::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_PARSEWITHCONMMENT_OFFSET))(aJSON);
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
