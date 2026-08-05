#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ParadoxNotion::Serialization::FullSerializer { class fsData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::IO { class BinaryWriter; }

#define PARADOXNOTION_SERIALIZATION_V2BINARYENCODER_COLLECTTABLES_OFFSET UNITYSDK_OFFSET(0x1E7BE370)
#define PARADOXNOTION_SERIALIZATION_V2BINARYENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x1E7BD970)
#define PARADOXNOTION_SERIALIZATION_V2BINARYENCODER_HASHSTRING_OFFSET UNITYSDK_OFFSET(0x1E7BE8B0)
#define PARADOXNOTION_SERIALIZATION_V2BINARYENCODER_WRITE7BITINT_OFFSET UNITYSDK_OFFSET(0x1E7BED60)
#define PARADOXNOTION_SERIALIZATION_V2BINARYENCODER_WRITENODE_OFFSET UNITYSDK_OFFSET(0x1E7BDD00)
#define PARADOXNOTION_SERIALIZATION_V2BINARYENCODER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x1E7BEB50)
#define PARADOXNOTION_SERIALIZATION_V2BINARYENCODER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7BEDE0)

namespace ParadoxNotion::Serialization
{
	inline static constexpr unsigned int V2BinaryEncoder_TypeDefinitionIndex = 30836;

	class V2BinaryEncoder : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_Magic()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(V2BinaryEncoder_TypeDefinitionIndex)->GetStaticField(0x25E60);
		}
		// static const ::System::Byte Version = 0x1; // 0x0
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
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_V2BINARYENCODER__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* Encode(::ParadoxNotion::Serialization::FullSerializer::fsData* data)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::ParadoxNotion::Serialization::FullSerializer::fsData*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_V2BINARYENCODER_ENCODE_OFFSET))(data);
		}

		static ::System::Void CollectTables(::ParadoxNotion::Serialization::FullSerializer::fsData* data, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* keyStrings, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* typeStrings)
		{
			return ((::System::Void(*)(::ParadoxNotion::Serialization::FullSerializer::fsData*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_V2BINARYENCODER_COLLECTTABLES_OFFSET))(data, keyStrings, typeStrings);
		}

		static ::System::Void WriteNode(::System::IO::BinaryWriter* w, ::ParadoxNotion::Serialization::FullSerializer::fsData* data)
		{
			return ((::System::Void(*)(::System::IO::BinaryWriter*, ::ParadoxNotion::Serialization::FullSerializer::fsData*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_V2BINARYENCODER_WRITENODE_OFFSET))(w, data);
		}

		static ::System::Void WriteString(::System::IO::BinaryWriter* w, ::System::String* s)
		{
			return ((::System::Void(*)(::System::IO::BinaryWriter*, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_V2BINARYENCODER_WRITESTRING_OFFSET))(w, s);
		}

		static ::System::UInt32 HashString(::System::String* s)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_V2BINARYENCODER_HASHSTRING_OFFSET))(s);
		}

		static ::System::Void Write7BitInt(::System::IO::BinaryWriter* w, ::System::Int32 value)
		{
			return ((::System::Void(*)(::System::IO::BinaryWriter*, ::System::Int32))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_V2BINARYENCODER_WRITE7BITINT_OFFSET))(w, value);
		}
	};
}
