#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseFormatter_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int QueueFormatter_2_TypeDefinitionIndex = 7485;

	template <typename TQueue, typename TValue>
	class QueueFormatter_2 : public ::Sirenix::Serialization::BaseFormatter_1<TQueue>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<TValue>** StaticGet_TSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<TValue>**)Il2CppClass::FromTypeDefinitionIndex(QueueFormatter_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_IsPlainQueue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(QueueFormatter_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
