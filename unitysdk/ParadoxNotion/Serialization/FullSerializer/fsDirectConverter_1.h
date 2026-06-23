#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsDirectConverter.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsResult.h"

namespace ParadoxNotion::Serialization::FullSerializer { class fsData; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsDirectConverter_1_TypeDefinitionIndex = 29873;

	template <typename TModel>
	class fsDirectConverter_1 : public ::ParadoxNotion::Serialization::FullSerializer::fsDirectConverter
	{
	public:
	};
}
