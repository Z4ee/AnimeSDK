#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }

namespace MiHoYo::SDK::Protobuf::Collections
{
	inline static constexpr unsigned int MapField_2_Codec_MessageAdapter_TypeDefinitionIndex = 34425;

	template <typename TKey, typename TValue>
	class MapField_2_Codec_MessageAdapter : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_ZeroLengthMessageStreamData()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(MapField_2_Codec_MessageAdapter_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::MiHoYo::SDK::Protobuf::Collections::MapField_2_Codec<TKey, TValue>* codec; // 0x0
		TKey _Key_k__BackingField; // 0x0
		TValue _Value_k__BackingField; // 0x0
	};
}
