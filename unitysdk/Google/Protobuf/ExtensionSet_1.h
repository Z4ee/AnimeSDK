#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class IExtensionValue; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace Google::Protobuf
{
	inline static constexpr unsigned int ExtensionSet_1_TypeDefinitionIndex = 5379;

	template <typename TTarget>
	class ExtensionSet_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Google::Protobuf::IExtensionValue*>* _ValuesByNumber_k__BackingField; // 0x0
	};
}
