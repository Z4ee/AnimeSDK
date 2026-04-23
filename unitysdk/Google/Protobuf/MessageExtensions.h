#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class ExtensionRegistry; }
namespace Google::Protobuf { class IMessage; }
namespace System::IO { class Stream; }

#define GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x170E5040)
#define GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x170E4320)
#define GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_2_OFFSET UNITYSDK_OFFSET(0x170E44F0)
#define GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_3_OFFSET UNITYSDK_OFFSET(0x170E4160)
#define GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_4_OFFSET UNITYSDK_OFFSET(0x170E4340)
#define GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_5_OFFSET UNITYSDK_OFFSET(0x170E4500)
#define GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x170E4150)
#define GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_TOBYTEARRAYFROMPOOL_OFFSET UNITYSDK_OFFSET(0x170E49C0)
#define GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_TOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x170E46E0)
#define GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_TOBYTESTRING_OFFSET UNITYSDK_OFFSET(0x170E4F60)
#define GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_WRITETO_OFFSET UNITYSDK_OFFSET(0x170E4CC0)

namespace Google::Protobuf
{
	inline static constexpr unsigned int MessageExtensions_TypeDefinitionIndex = 6203;

	class MessageExtensions : public ::System::Object
	{
	public:
		static ::System::Void MergeFrom(::Google::Protobuf::IMessage* message, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::Google::Protobuf::IMessage*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_OFFSET))(message, data);
		}

		static ::System::Void MergeFrom_1(::Google::Protobuf::IMessage* message, ::Il2CppArray<::System::Byte>* data, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Void(*)(::Google::Protobuf::IMessage*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_1_OFFSET))(message, data, offset, length);
		}

		static ::System::Void MergeFrom_2(::Google::Protobuf::IMessage* message, ::Google::Protobuf::ByteString* data)
		{
			return ((::System::Void(*)(::Google::Protobuf::IMessage*, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_2_OFFSET))(message, data);
		}

		static ::Il2CppArray<::System::Byte>* ToByteArray(::Google::Protobuf::IMessage* message)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_TOBYTEARRAY_OFFSET))(message);
		}

		static ::Il2CppArray<::System::Byte>* ToByteArrayFromPool(::Google::Protobuf::IMessage* message, ::System::Int32& size)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Google::Protobuf::IMessage*, ::System::Int32&))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_TOBYTEARRAYFROMPOOL_OFFSET))(message, size);
		}

		static ::System::Void WriteTo(::Google::Protobuf::IMessage* message, ::System::IO::Stream* output, ::System::Boolean leaveOpen)
		{
			return ((::System::Void(*)(::Google::Protobuf::IMessage*, ::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_WRITETO_OFFSET))(message, output, leaveOpen);
		}

		static ::Google::Protobuf::ByteString* ToByteString(::Google::Protobuf::IMessage* message)
		{
			return ((::Google::Protobuf::ByteString*(*)(::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_TOBYTESTRING_OFFSET))(message);
		}

		static ::System::Boolean IsInitialized(::Google::Protobuf::IMessage* message)
		{
			return ((::System::Boolean(*)(::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_ISINITIALIZED_OFFSET))(message);
		}

		static ::System::Void MergeFrom_3(::Google::Protobuf::IMessage* message, ::Il2CppArray<::System::Byte>* data, ::System::Boolean discardUnknownFields, ::Google::Protobuf::ExtensionRegistry* registry)
		{
			return ((::System::Void(*)(::Google::Protobuf::IMessage*, ::Il2CppArray<::System::Byte>*, ::System::Boolean, ::Google::Protobuf::ExtensionRegistry*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_3_OFFSET))(message, data, discardUnknownFields, registry);
		}

		static ::System::Void MergeFrom_4(::Google::Protobuf::IMessage* message, ::Il2CppArray<::System::Byte>* data, ::System::Int32 offset, ::System::Int32 length, ::System::Boolean discardUnknownFields, ::Google::Protobuf::ExtensionRegistry* registry)
		{
			return ((::System::Void(*)(::Google::Protobuf::IMessage*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::Google::Protobuf::ExtensionRegistry*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_4_OFFSET))(message, data, offset, length, discardUnknownFields, registry);
		}

		static ::System::Void MergeFrom_5(::Google::Protobuf::IMessage* message, ::Google::Protobuf::ByteString* data, ::System::Boolean discardUnknownFields, ::Google::Protobuf::ExtensionRegistry* registry)
		{
			return ((::System::Void(*)(::Google::Protobuf::IMessage*, ::Google::Protobuf::ByteString*, ::System::Boolean, ::Google::Protobuf::ExtensionRegistry*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_5_OFFSET))(message, data, discardUnknownFields, registry);
		}
	};
}
