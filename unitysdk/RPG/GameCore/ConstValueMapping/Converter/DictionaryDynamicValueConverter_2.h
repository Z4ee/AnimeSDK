#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }
namespace RPG::GameCore::ConstValueMapping::Converter { template <typename T> class IDynamicValueConverter_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace RPG::GameCore::ConstValueMapping::Converter
{
	inline static constexpr unsigned int DictionaryDynamicValueConverter_2_TypeDefinitionIndex = 42415;

	template <typename TKey, typename TValue>
	class DictionaryDynamicValueConverter_2 : public ::System::Object
	{
	public:
		::RPG::GameCore::ConstValueMapping::Converter::IDynamicValueConverter_1<TKey>* _KeyConverter; // 0x0
		::RPG::GameCore::ConstValueMapping::Converter::IDynamicValueConverter_1<TValue>* _ValueConverter; // 0x0
	};
}
