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

#define SIMPLEJSON_JSONNODE_ADD_1_OFFSET UNITYSDK_OFFSET(0x1AC26640)
#define SIMPLEJSON_JSONNODE_ADD_OFFSET UNITYSDK_OFFSET(0x1AC27020)
#define SIMPLEJSON_JSONNODE_CLONE_OFFSET UNITYSDK_OFFSET(0x1AC27360)
#define SIMPLEJSON_JSONNODE_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x1AC270C0)
#define SIMPLEJSON_JSONNODE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1AC2B380)
#define SIMPLEJSON_JSONNODE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AC27650)
#define SIMPLEJSON_JSONNODE_ESCAPE_OFFSET UNITYSDK_OFFSET(0x1AC23E90)
#define SIMPLEJSON_JSONNODE_FASTPARSE_OFFSET UNITYSDK_OFFSET(0x1AC27660)
#define SIMPLEJSON_JSONNODE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AC269B0)
#define SIMPLEJSON_JSONNODE_GET_ASARRAY_OFFSET UNITYSDK_OFFSET(0x1AC27530)
#define SIMPLEJSON_JSONNODE_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1AC26420)
#define SIMPLEJSON_JSONNODE_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1AC26360)
#define SIMPLEJSON_JSONNODE_GET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x1AC262A0)
#define SIMPLEJSON_JSONNODE_GET_ASINT_OFFSET UNITYSDK_OFFSET(0x1AC26200)
#define SIMPLEJSON_JSONNODE_GET_ASOBJECT_OFFSET UNITYSDK_OFFSET(0x1AC27570)
#define SIMPLEJSON_JSONNODE_GET_CHILDS_OFFSET UNITYSDK_OFFSET(0x1AC27170)
#define SIMPLEJSON_JSONNODE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1AC27090)
#define SIMPLEJSON_JSONNODE_GET_DEEPCHILDS_OFFSET UNITYSDK_OFFSET(0x1AC271E0)
#define SIMPLEJSON_JSONNODE_GET_ISBOOL_OFFSET UNITYSDK_OFFSET(0x1AC274D0)
#define SIMPLEJSON_JSONNODE_GET_ISDOUBLE_OFFSET UNITYSDK_OFFSET(0x1AC27470)
#define SIMPLEJSON_JSONNODE_GET_ISFLOAT_OFFSET UNITYSDK_OFFSET(0x1AC27410)
#define SIMPLEJSON_JSONNODE_GET_ISINT_OFFSET UNITYSDK_OFFSET(0x1AC273B0)
#define SIMPLEJSON_JSONNODE_GET_ISSTRING_OFFSET UNITYSDK_OFFSET(0x1AC270A0)
#define SIMPLEJSON_JSONNODE_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1AC27050)
#define SIMPLEJSON_JSONNODE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AC27030)
#define SIMPLEJSON_JSONNODE_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1AC27100)
#define SIMPLEJSON_JSONNODE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1AC27070)
#define SIMPLEJSON_JSONNODE_LOADFROMBASE64_OFFSET UNITYSDK_OFFSET(0x1AC2BA40)
#define SIMPLEJSON_JSONNODE_LOADFROMCOMPRESSEDBASE64_OFFSET UNITYSDK_OFFSET(0x1AC2B7B0)
#define SIMPLEJSON_JSONNODE_LOADFROMCOMPRESSEDFILE_OFFSET UNITYSDK_OFFSET(0x1AC2B710)
#define SIMPLEJSON_JSONNODE_LOADFROMCOMPRESSEDSTREAM_OFFSET UNITYSDK_OFFSET(0x1AC2B760)
#define SIMPLEJSON_JSONNODE_LOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x1AC2B940)
#define SIMPLEJSON_JSONNODE_LOADFROMSTREAM_OFFSET UNITYSDK_OFFSET(0x1AC2B800)
#define SIMPLEJSON_JSONNODE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1AC24DF0)
#define SIMPLEJSON_JSONNODE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1AC275D0)
#define SIMPLEJSON_JSONNODE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1AC275B0)
#define SIMPLEJSON_JSONNODE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1AC27610)
#define SIMPLEJSON_JSONNODE_PARSEWITHCONMMENT_OFFSET UNITYSDK_OFFSET(0x1AC29000)
#define SIMPLEJSON_JSONNODE_PARSE_OFFSET UNITYSDK_OFFSET(0x1AC20800)
#define SIMPLEJSON_JSONNODE_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1AC270E0)
#define SIMPLEJSON_JSONNODE_REMOVE_2_OFFSET UNITYSDK_OFFSET(0x1AC270F0)
#define SIMPLEJSON_JSONNODE_REMOVE_OFFSET UNITYSDK_OFFSET(0x1AC270D0)
#define SIMPLEJSON_JSONNODE_SAVETOBASE64_OFFSET UNITYSDK_OFFSET(0x1AC2B150)
#define SIMPLEJSON_JSONNODE_SAVETOCOMPRESSEDBASE64_OFFSET UNITYSDK_OFFSET(0x1AC2AEA0)
#define SIMPLEJSON_JSONNODE_SAVETOCOMPRESSEDFILE_OFFSET UNITYSDK_OFFSET(0x1AC2AE50)
#define SIMPLEJSON_JSONNODE_SAVETOCOMPRESSEDSTREAM_OFFSET UNITYSDK_OFFSET(0x1AC2AE00)
#define SIMPLEJSON_JSONNODE_SAVETOFILE_OFFSET UNITYSDK_OFFSET(0x1AC2AEF0)
#define SIMPLEJSON_JSONNODE_SAVETOSTREAM_OFFSET UNITYSDK_OFFSET(0x1AC2AD50)
#define SIMPLEJSON_JSONNODE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1AC2AD40)
#define SIMPLEJSON_JSONNODE_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1AC25860)
#define SIMPLEJSON_JSONNODE_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1AC257D0)
#define SIMPLEJSON_JSONNODE_SET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x1AC25730)
#define SIMPLEJSON_JSONNODE_SET_ASINT_OFFSET UNITYSDK_OFFSET(0x1AC258E0)
#define SIMPLEJSON_JSONNODE_SET_ISSTRING_OFFSET UNITYSDK_OFFSET(0x1AC270B0)
#define SIMPLEJSON_JSONNODE_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1AC27060)
#define SIMPLEJSON_JSONNODE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AC27040)
#define SIMPLEJSON_JSONNODE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1AC27080)
#define SIMPLEJSON_JSONNODE_TOSTRINGWITHCOMMENT_OFFSET UNITYSDK_OFFSET(0x1AC27320)
#define SIMPLEJSON_JSONNODE_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1AC272A0)
#define SIMPLEJSON_JSONNODE_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x1AC272E0)
#define SIMPLEJSON_JSONNODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AC27260)
#define SIMPLEJSON_JSONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC22CE0)

namespace SimpleJSON
{
	inline static constexpr unsigned int JSONNode_TypeDefinitionIndex = 9601;

	class JSONNode : public ::System::Object
	{
	public:
		::System::String* FileName; // 0x10
		::System::String* Comment; // 0x18
		::System::Int32 LineNumber; // 0x20
		::System::Boolean _IsString_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE__CTOR_OFFSET))(this);
		}

		::System::Void Add(::System::String* a1, ::SimpleJSON::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_ADD_OFFSET))(this, a1, a2);
		}

		::SimpleJSON::JSONNode* get_Item(::System::Int32 a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::SimpleJSON::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::SimpleJSON::JSONNode* get_Item_1(::System::String* a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_ITEM_1_OFFSET))(this, a1);
		}

		::System::Void set_Item_1(::System::String* a1, ::SimpleJSON::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SET_ITEM_1_OFFSET))(this, a1, a2);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsString()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_ISSTRING_OFFSET))(this);
		}

		::System::Void set_IsString(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SET_ISSTRING_OFFSET))(this, a1);
		}

		::System::Void Add_1(::SimpleJSON::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_ADD_1_OFFSET))(this, a1);
		}

		::System::Boolean ContainsKey(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_CONTAINSKEY_OFFSET))(this, a1);
		}

		::SimpleJSON::JSONNode* Remove(::System::String* a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_REMOVE_OFFSET))(this, a1);
		}

		::SimpleJSON::JSONNode* Remove_1(::System::Int32 a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_REMOVE_1_OFFSET))(this, a1);
		}

		::SimpleJSON::JSONNode* Remove_2(::SimpleJSON::JSONNode* a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_REMOVE_2_OFFSET))(this, a1);
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

		::System::String* ToString_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_TOSTRING_1_OFFSET))(this, a1);
		}

		::System::String* ToString_2(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_TOSTRING_2_OFFSET))(this, a1);
		}

		::System::String* ToStringWithComment(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_TOSTRINGWITHCOMMENT_OFFSET))(this, a1);
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

		::System::Void set_AsInt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SET_ASINT_OFFSET))(this, a1);
		}

		::System::Single get_AsFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_ASFLOAT_OFFSET))(this);
		}

		::System::Void set_AsFloat(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SET_ASFLOAT_OFFSET))(this, a1);
		}

		::System::Double get_AsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_ASDOUBLE_OFFSET))(this);
		}

		::System::Void set_AsDouble(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SET_ASDOUBLE_OFFSET))(this, a1);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SET_ASBOOL_OFFSET))(this, a1);
		}

		::SimpleJSON::JSONArray* get_AsArray()
		{
			return ((::SimpleJSON::JSONArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_ASARRAY_OFFSET))(this);
		}

		::SimpleJSON::JSONClass* get_AsObject()
		{
			return ((::SimpleJSON::JSONClass*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GET_ASOBJECT_OFFSET))(this);
		}

		static ::SimpleJSON::JSONNode* op_Implicit(::System::String* a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::String* op_Implicit_1(::SimpleJSON::JSONNode* a1)
		{
			return ((::System::String*(*)(::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_OP_IMPLICIT_1_OFFSET))(a1);
		}

		static ::System::Boolean op_Equality(::SimpleJSON::JSONNode* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Object*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::SimpleJSON::JSONNode* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Object*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::String* Escape(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_ESCAPE_OFFSET))(a1);
		}

		static ::SimpleJSON::JSONNode* Parse(::System::String* a1, ::System::String* a2)
		{
			return ((::SimpleJSON::JSONNode*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_PARSE_OFFSET))(a1, a2);
		}

		static ::SimpleJSON::JSONNode* FastParse(::System::String* a1, ::System::String* a2)
		{
			return ((::SimpleJSON::JSONNode*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_FASTPARSE_OFFSET))(a1, a2);
		}

		static ::SimpleJSON::JSONNode* ParseWithConmment(::System::String* a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_PARSEWITHCONMMENT_OFFSET))(a1);
		}

		::System::Void Serialize(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SERIALIZE_OFFSET))(this, a1);
		}

		::System::Void SaveToStream(::System::IO::Stream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SAVETOSTREAM_OFFSET))(this, a1);
		}

		::System::Void SaveToCompressedStream(::System::IO::Stream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SAVETOCOMPRESSEDSTREAM_OFFSET))(this, a1);
		}

		::System::Void SaveToCompressedFile(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SAVETOCOMPRESSEDFILE_OFFSET))(this, a1);
		}

		::System::String* SaveToCompressedBase64()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SAVETOCOMPRESSEDBASE64_OFFSET))(this);
		}

		::System::Void SaveToFile(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SAVETOFILE_OFFSET))(this, a1);
		}

		::System::String* SaveToBase64()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_SAVETOBASE64_OFFSET))(this);
		}

		static ::SimpleJSON::JSONNode* Deserialize(::System::IO::BinaryReader* a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_DESERIALIZE_OFFSET))(a1);
		}

		static ::SimpleJSON::JSONNode* LoadFromCompressedFile(::System::String* a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_LOADFROMCOMPRESSEDFILE_OFFSET))(a1);
		}

		static ::SimpleJSON::JSONNode* LoadFromCompressedStream(::System::IO::Stream* a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_LOADFROMCOMPRESSEDSTREAM_OFFSET))(a1);
		}

		static ::SimpleJSON::JSONNode* LoadFromCompressedBase64(::System::String* a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_LOADFROMCOMPRESSEDBASE64_OFFSET))(a1);
		}

		static ::SimpleJSON::JSONNode* LoadFromStream(::System::IO::Stream* a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_LOADFROMSTREAM_OFFSET))(a1);
		}

		static ::SimpleJSON::JSONNode* LoadFromFile(::System::String* a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_LOADFROMFILE_OFFSET))(a1);
		}

		static ::SimpleJSON::JSONNode* LoadFromBase64(::System::String* a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONNODE_LOADFROMBASE64_OFFSET))(a1);
		}
	};
}
