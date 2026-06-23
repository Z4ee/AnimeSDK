#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace FlexBuffers { class IByteArray; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define FLEXBUFFERS_FLXMAP_COMPSTR_OFFSET UNITYSDK_OFFSET(0x9F8320)
#define FLEXBUFFERS_FLXMAP_COMP_1_OFFSET UNITYSDK_OFFSET(0x9F8310)
#define FLEXBUFFERS_FLXMAP_COMP_OFFSET UNITYSDK_OFFSET(0x9F82B0)
#define FLEXBUFFERS_FLXMAP_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9F8330)
#define FLEXBUFFERS_FLXMAP_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9F81D0)
#define FLEXBUFFERS_FLXMAP_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x9F8180)
#define FLEXBUFFERS_FLXMAP_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x2C3430)
#define FLEXBUFFERS_FLXMAP_GET_TOJSON_OFFSET UNITYSDK_OFFSET(0x9F8210)
#define FLEXBUFFERS_FLXMAP_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x9F81A0)
#define FLEXBUFFERS_FLXMAP_KEYINDEX_OFFSET UNITYSDK_OFFSET(0x9F8230)
#define FLEXBUFFERS_FLXMAP_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9F8330)
#define FLEXBUFFERS_FLXMAP_TOPRETTYJSON_OFFSET UNITYSDK_OFFSET(0x9F8220)
#define FLEXBUFFERS_FLXMAP_VALUEBYINDEX_OFFSET UNITYSDK_OFFSET(0x9F81F0)
#define FLEXBUFFERS_FLXMAP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5FD350)
#define FLEXBUFFERS_FLXMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x9F8160)

namespace FlexBuffers
{
	inline static constexpr unsigned int FlxMap_TypeDefinitionIndex = 6754;

	struct alignas(8) FlxMap
	{
		static ::Il2CppArray<::System::Byte>** StaticGet__charBytes()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(FlxMap_TypeDefinitionIndex)->GetStaticField(0x5BC0);
		}
		static ::Il2CppArray<::System::Char>** StaticGet__chars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(FlxMap_TypeDefinitionIndex)->GetStaticField(0x5BC8);
		}
		::FlexBuffers::IByteArray* _buffer; // 0x10
		::System::Int32 _offset; // 0x18
		::System::Int32 _length; // 0x1C
		::System::Byte _byteWidth; // 0x20

		::System::Void _ctor(::FlexBuffers::IByteArray* buffer, ::System::Int32 offset, ::System::Byte byteWidth, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::IByteArray*, ::System::Int32, ::System::Byte, ::System::Int32))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXMAP__CTOR_OFFSET))(this, buffer, offset, byteWidth, length);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXMAP__CCTOR_OFFSET))();
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXMAP_GET_LENGTH_OFFSET))(this);
		}

		/*
		::FlexBuffers::FlxVector get_Keys()
		{
			return ((::FlexBuffers::FlxVector(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXMAP_GET_KEYS_OFFSET))(this);
		}
		*/

		/*
		::FlexBuffers::FlxVector get_Values()
		{
			return ((::FlexBuffers::FlxVector(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXMAP_GET_VALUES_OFFSET))(this);
		}
		*/

		/*
		::FlexBuffers::FlxValue get_Item(::System::String* key)
		{
			return ((::FlexBuffers::FlxValue(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXMAP_GET_ITEM_OFFSET))(this, key);
		}
		*/

		/*
		::FlexBuffers::FlxValue ValueByIndex(::System::Int32 keyIndex)
		{
			return ((::FlexBuffers::FlxValue(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXMAP_VALUEBYINDEX_OFFSET))(this, keyIndex);
		}
		*/

		::System::String* get_ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXMAP_GET_TOJSON_OFFSET))(this);
		}

		::System::String* ToPrettyJson(::System::String* left, ::System::Boolean childrenOnly)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXMAP_TOPRETTYJSON_OFFSET))(this, left, childrenOnly);
		}

		::System::Int32 KeyIndex(::System::String* key)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXMAP_KEYINDEX_OFFSET))(this, key);
		}

		::System::Int32 Comp(::System::Int32 i, ::System::String* key)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXMAP_COMP_OFFSET))(this, i, key);
		}

		::System::Int32 Comp_1(::System::Int32 i, ::Il2CppArray<::System::Byte>* key)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXMAP_COMP_1_OFFSET))(this, i, key);
		}

		::System::Int32 CompStr(::System::Int32 i, ::System::String* key)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXMAP_COMPSTR_OFFSET))(this, i, key);
		}

		/*
		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::FlexBuffers::FlxValue>>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::FlexBuffers::FlxValue>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXMAP_GETENUMERATOR_OFFSET))(this);
		}
		*/

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXMAP_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
