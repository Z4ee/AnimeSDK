#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class IBytesArrayPool; }

#define GOOGLE_PROTOBUF_ARRAYPOOLMANAGER_GETARRAY_OFFSET UNITYSDK_OFFSET(0x1B34B280)
#define GOOGLE_PROTOBUF_ARRAYPOOLMANAGER_GETBYTESARRAYPOOL_OFFSET UNITYSDK_OFFSET(0x1B34B270)
#define GOOGLE_PROTOBUF_ARRAYPOOLMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B34B240)
#define GOOGLE_PROTOBUF_ARRAYPOOLMANAGER_RETURNARRAY_OFFSET UNITYSDK_OFFSET(0x1B34B2C0)
#define GOOGLE_PROTOBUF_ARRAYPOOLMANAGER_SETBYTESARRAYPOOL_OFFSET UNITYSDK_OFFSET(0x1B34B260)
#define GOOGLE_PROTOBUF_ARRAYPOOLMANAGER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B34B250)

namespace Google::Protobuf
{
	inline static constexpr unsigned int ArrayPoolManager_TypeDefinitionIndex = 5388;

	class ArrayPoolManager : public ::System::Object
	{
	public:
		static ::Google::Protobuf::IBytesArrayPool** StaticGet__Instance_k__BackingField()
		{
			return (::Google::Protobuf::IBytesArrayPool**)Il2CppClass::FromTypeDefinitionIndex(ArrayPoolManager_TypeDefinitionIndex)->GetStaticField(0x1C690);
		}

		static ::Google::Protobuf::IBytesArrayPool* get_Instance()
		{
			return ((::Google::Protobuf::IBytesArrayPool*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_ARRAYPOOLMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::Google::Protobuf::IBytesArrayPool* a1)
		{
			return ((::System::Void(*)(::Google::Protobuf::IBytesArrayPool*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_ARRAYPOOLMANAGER_SET_INSTANCE_OFFSET))(a1);
		}

		static ::System::Void SetBytesArrayPool(::Google::Protobuf::IBytesArrayPool* a1)
		{
			return ((::System::Void(*)(::Google::Protobuf::IBytesArrayPool*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_ARRAYPOOLMANAGER_SETBYTESARRAYPOOL_OFFSET))(a1);
		}

		static ::Google::Protobuf::IBytesArrayPool* GetBytesArrayPool()
		{
			return ((::Google::Protobuf::IBytesArrayPool*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_ARRAYPOOLMANAGER_GETBYTESARRAYPOOL_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* GetArray(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_ARRAYPOOLMANAGER_GETARRAY_OFFSET))(a1);
		}

		static ::System::Void ReturnArray(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_ARRAYPOOLMANAGER_RETURNARRAY_OFFSET))(a1);
		}
	};
}
