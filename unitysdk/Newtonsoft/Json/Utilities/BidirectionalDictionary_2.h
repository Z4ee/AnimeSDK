#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int BidirectionalDictionary_2_TypeDefinitionIndex = 9316;

	template <typename TFirst, typename TSecond>
	class BidirectionalDictionary_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IDictionary_2<TFirst, TSecond>* _firstToSecond; // 0x0
		::System::Collections::Generic::IDictionary_2<TSecond, TFirst>* _secondToFirst; // 0x0
		::System::String* _duplicateFirstErrorMessage; // 0x0
		::System::String* _duplicateSecondErrorMessage; // 0x0
	};
}
