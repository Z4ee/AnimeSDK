#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class IBytesArrayPool; }

#define GOOGLE_PROTOBUF_ARRAYPOOLMANAGER_GETARRAY_OFFSET UNITYSDK_OFFSET(0x15AD7590)
#define GOOGLE_PROTOBUF_ARRAYPOOLMANAGER_GETBYTESARRAYPOOL_OFFSET UNITYSDK_OFFSET(0x15AD7580)
#define GOOGLE_PROTOBUF_ARRAYPOOLMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15AD7550)
#define GOOGLE_PROTOBUF_ARRAYPOOLMANAGER_RETURNARRAY_OFFSET UNITYSDK_OFFSET(0x15AD75D0)
#define GOOGLE_PROTOBUF_ARRAYPOOLMANAGER_SETBYTESARRAYPOOL_OFFSET UNITYSDK_OFFSET(0x15AD7570)
#define GOOGLE_PROTOBUF_ARRAYPOOLMANAGER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15AD7560)

namespace Google::Protobuf
{
	inline static constexpr unsigned int ArrayPoolManager_TypeDefinitionIndex = 6182;

	class ArrayPoolManager : public ::System::Object
	{
	public:
		static ::Google::Protobuf::IBytesArrayPool** StaticGet__Instance_k__BackingField()
		{
			return (::Google::Protobuf::IBytesArrayPool**)Il2CppClass::FromTypeDefinitionIndex(ArrayPoolManager_TypeDefinitionIndex)->GetStaticField(0xC6F0);
		}

		static ::Google::Protobuf::IBytesArrayPool* get_Instance()
		{
			return ((::Google::Protobuf::IBytesArrayPool*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_ARRAYPOOLMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::Google::Protobuf::IBytesArrayPool* value)
		{
			return ((::System::Void(*)(::Google::Protobuf::IBytesArrayPool*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_ARRAYPOOLMANAGER_SET_INSTANCE_OFFSET))(value);
		}

		static ::System::Void SetBytesArrayPool(::Google::Protobuf::IBytesArrayPool* pool)
		{
			return ((::System::Void(*)(::Google::Protobuf::IBytesArrayPool*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_ARRAYPOOLMANAGER_SETBYTESARRAYPOOL_OFFSET))(pool);
		}

		static ::Google::Protobuf::IBytesArrayPool* GetBytesArrayPool()
		{
			return ((::Google::Protobuf::IBytesArrayPool*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_ARRAYPOOLMANAGER_GETBYTESARRAYPOOL_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* GetArray(::System::Int32 size)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_ARRAYPOOLMANAGER_GETARRAY_OFFSET))(size);
		}

		static ::System::Void ReturnArray(::Il2CppArray<::System::Byte>* array)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_ARRAYPOOLMANAGER_RETURNARRAY_OFFSET))(array);
		}
	};
}
