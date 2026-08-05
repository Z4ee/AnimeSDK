#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/Sirenix/Serialization/MinimalBaseFormatter_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace System { class Object; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int BaseUnityGeneratedFormatter_1_TypeDefinitionIndex = 7601;

	template <typename T>
	class BaseUnityGeneratedFormatter_1 : public ::Sirenix::Serialization::MinimalBaseFormatter_1<T>
	{
	public:
	};
}
