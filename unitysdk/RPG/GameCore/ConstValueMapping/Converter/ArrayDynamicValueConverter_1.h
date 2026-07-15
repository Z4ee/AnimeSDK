#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }
namespace RPG::GameCore::ConstValueMapping::Converter { template <typename T> class IDynamicValueConverter_1; }

namespace RPG::GameCore::ConstValueMapping::Converter
{
	inline static constexpr unsigned int ArrayDynamicValueConverter_1_TypeDefinitionIndex = 42413;

	template <typename T>
	class ArrayDynamicValueConverter_1 : public ::System::Object
	{
	public:
		::RPG::GameCore::ConstValueMapping::Converter::IDynamicValueConverter_1<T>* _ElementConverter; // 0x0
	};
}
