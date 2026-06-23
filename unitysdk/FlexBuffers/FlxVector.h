#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/Type.h"
#include "unitysdk/System/ValueType.h"

namespace FlexBuffers { class IByteArray; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define FLEXBUFFERS_FLXVECTOR_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9F8600)
#define FLEXBUFFERS_FLXVECTOR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9F85C0)
#define FLEXBUFFERS_FLXVECTOR_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x2C3430)
#define FLEXBUFFERS_FLXVECTOR_GET_TOJSON_OFFSET UNITYSDK_OFFSET(0x9F85E0)
#define FLEXBUFFERS_FLXVECTOR_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9F8600)
#define FLEXBUFFERS_FLXVECTOR_TOPRETTYJSON_OFFSET UNITYSDK_OFFSET(0x9F85F0)
#define FLEXBUFFERS_FLXVECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x9F85A0)

namespace FlexBuffers
{
	inline static constexpr unsigned int FlxVector_TypeDefinitionIndex = 6752;

	struct alignas(8) FlxVector
	{
		::FlexBuffers::IByteArray* _buffer; // 0x10
		::System::Int32 _offset; // 0x18
		::System::Int32 _length; // 0x1C
		::System::Byte _byteWidth; // 0x20
		::FlexBuffers::Type _type; // 0x21

		::System::Void _ctor(::FlexBuffers::IByteArray* buffer, ::System::Int32 offset, ::System::Byte byteWidth, ::FlexBuffers::Type type, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::IByteArray*, ::System::Int32, ::System::Byte, ::FlexBuffers::Type, ::System::Int32))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVECTOR__CTOR_OFFSET))(this, buffer, offset, byteWidth, type, length);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVECTOR_GET_LENGTH_OFFSET))(this);
		}

		/*
		::FlexBuffers::FlxValue get_Item(::System::Int32 index)
		{
			return ((::FlexBuffers::FlxValue(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVECTOR_GET_ITEM_OFFSET))(this, index);
		}
		*/

		::System::String* get_ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVECTOR_GET_TOJSON_OFFSET))(this);
		}

		::System::String* ToPrettyJson(::System::String* left, ::System::Boolean childrenOnly)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVECTOR_TOPRETTYJSON_OFFSET))(this, left, childrenOnly);
		}

		/*
		::System::Collections::Generic::IEnumerator_1<::FlexBuffers::FlxValue>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::FlexBuffers::FlxValue>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVECTOR_GETENUMERATOR_OFFSET))(this);
		}
		*/

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVECTOR_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
