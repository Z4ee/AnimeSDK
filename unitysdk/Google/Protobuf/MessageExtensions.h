#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class ExtensionRegistry; }
namespace Google::Protobuf { class IMessage; }
namespace System::IO { class Stream; }

#define GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1B35FEB0)
#define GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1B35EFA0)
#define GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_2_OFFSET UNITYSDK_OFFSET(0x1B35F1A0)
#define GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_3_OFFSET UNITYSDK_OFFSET(0x1B35EDC0)
#define GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_4_OFFSET UNITYSDK_OFFSET(0x1B35EFC0)
#define GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_5_OFFSET UNITYSDK_OFFSET(0x1B35F1B0)
#define GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1B35EDB0)
#define GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_TOBYTEARRAYFROMPOOL_OFFSET UNITYSDK_OFFSET(0x1B35F740)
#define GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_TOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1B35F390)
#define GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_TOBYTESTRING_OFFSET UNITYSDK_OFFSET(0x1B35FE00)
#define GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_WRITETO_OFFSET UNITYSDK_OFFSET(0x1B35FB20)

namespace Google::Protobuf
{
	inline static constexpr unsigned int MessageExtensions_TypeDefinitionIndex = 5399;

	class MessageExtensions : public ::System::Object
	{
	public:
		static ::System::Void MergeFrom(::Google::Protobuf::IMessage* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::Google::Protobuf::IMessage*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_OFFSET))(a1, a2);
		}

		static ::System::Void MergeFrom_1(::Google::Protobuf::IMessage* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::Google::Protobuf::IMessage*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void MergeFrom_2(::Google::Protobuf::IMessage* a1, ::Google::Protobuf::ByteString* a2)
		{
			return ((::System::Void(*)(::Google::Protobuf::IMessage*, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_2_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* ToByteArray(::Google::Protobuf::IMessage* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_TOBYTEARRAY_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* ToByteArrayFromPool(::Google::Protobuf::IMessage* a1, ::System::Int32& a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Google::Protobuf::IMessage*, ::System::Int32&))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_TOBYTEARRAYFROMPOOL_OFFSET))(a1, a2);
		}

		static ::System::Void WriteTo(::Google::Protobuf::IMessage* a1, ::System::IO::Stream* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::Google::Protobuf::IMessage*, ::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_WRITETO_OFFSET))(a1, a2, a3);
		}

		static ::Google::Protobuf::ByteString* ToByteString(::Google::Protobuf::IMessage* a1)
		{
			return ((::Google::Protobuf::ByteString*(*)(::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_TOBYTESTRING_OFFSET))(a1);
		}

		static ::System::Boolean IsInitialized(::Google::Protobuf::IMessage* a1)
		{
			return ((::System::Boolean(*)(::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_ISINITIALIZED_OFFSET))(a1);
		}

		static ::System::Void MergeFrom_3(::Google::Protobuf::IMessage* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Boolean a3, ::Google::Protobuf::ExtensionRegistry* a4)
		{
			return ((::System::Void(*)(::Google::Protobuf::IMessage*, ::Il2CppArray<::System::Byte>*, ::System::Boolean, ::Google::Protobuf::ExtensionRegistry*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_3_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void MergeFrom_4(::Google::Protobuf::IMessage* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5, ::Google::Protobuf::ExtensionRegistry* a6)
		{
			return ((::System::Void(*)(::Google::Protobuf::IMessage*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::Google::Protobuf::ExtensionRegistry*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_4_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void MergeFrom_5(::Google::Protobuf::IMessage* a1, ::Google::Protobuf::ByteString* a2, ::System::Boolean a3, ::Google::Protobuf::ExtensionRegistry* a4)
		{
			return ((::System::Void(*)(::Google::Protobuf::IMessage*, ::Google::Protobuf::ByteString*, ::System::Boolean, ::Google::Protobuf::ExtensionRegistry*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_5_OFFSET))(a1, a2, a3, a4);
		}
	};
}
