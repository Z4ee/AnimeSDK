#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }

namespace Google::Protobuf::Collections
{
	inline static constexpr unsigned int MapField_2_Codec_MessageAdapter_TypeDefinitionIndex = 5586;

	template <typename TKey, typename TValue>
	class MapField_2_Codec_MessageAdapter : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_ZeroLengthMessageStreamData()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(MapField_2_Codec_MessageAdapter_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Google::Protobuf::Collections::MapField_2_Codec<TKey, TValue>* codec; // 0x0
		TKey _Key_k__BackingField; // 0x0
		TValue _Value_k__BackingField; // 0x0
	};
}
