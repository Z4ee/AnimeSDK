#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ParadoxNotion::Serialization::FullSerializer { class fsData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::IO { class BinaryReader; }

#define PARADOXNOTION_SERIALIZATION_V2BINARYDECODER_DECODE_OFFSET UNITYSDK_OFFSET(0x1B467970)
#define PARADOXNOTION_SERIALIZATION_V2BINARYDECODER_READ7BITINT_OFFSET UNITYSDK_OFFSET(0x1B468AB0)
#define PARADOXNOTION_SERIALIZATION_V2BINARYDECODER_READNODE_OFFSET UNITYSDK_OFFSET(0x1B468130)
#define PARADOXNOTION_SERIALIZATION_V2BINARYDECODER_READSTRING_OFFSET UNITYSDK_OFFSET(0x1B468900)
#define PARADOXNOTION_SERIALIZATION_V2BINARYDECODER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B468B10)

namespace ParadoxNotion::Serialization
{
	inline static constexpr unsigned int V2BinaryDecoder_TypeDefinitionIndex = 27533;

	class V2BinaryDecoder : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_ExpectedMagic()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(V2BinaryDecoder_TypeDefinitionIndex)->GetStaticField(0x20BB0);
		}
		// static const ::System::Byte TAG_NULL = 0x0; // 0x0
		// static const ::System::Byte TAG_FALSE = 0x1; // 0x0
		// static const ::System::Byte TAG_TRUE = 0x2; // 0x0
		// static const ::System::Byte TAG_DOUBLE = 0x3; // 0x0
		// static const ::System::Byte TAG_INT64 = 0x4; // 0x0
		// static const ::System::Byte TAG_STRING = 0x5; // 0x0
		// static const ::System::Byte TAG_DICT = 0x6; // 0x0
		// static const ::System::Byte TAG_ARRAY = 0x7; // 0x0
		// static const ::System::Byte TAG_TYPEREF = 0x8; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_V2BINARYDECODER__CCTOR_OFFSET))();
		}

		static ::ParadoxNotion::Serialization::FullSerializer::fsData* Decode(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsData*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_V2BINARYDECODER_DECODE_OFFSET))(bytes);
		}

		static ::ParadoxNotion::Serialization::FullSerializer::fsData* ReadNode(::System::IO::BinaryReader* r, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* keyTable, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* typeTable)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsData*(*)(::System::IO::BinaryReader*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_V2BINARYDECODER_READNODE_OFFSET))(r, keyTable, typeTable);
		}

		static ::System::String* ReadString(::System::IO::BinaryReader* r)
		{
			return ((::System::String*(*)(::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_V2BINARYDECODER_READSTRING_OFFSET))(r);
		}

		static ::System::Int32 Read7BitInt(::System::IO::BinaryReader* r)
		{
			return ((::System::Int32(*)(::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_V2BINARYDECODER_READ7BITINT_OFFSET))(r);
		}
	};
}
