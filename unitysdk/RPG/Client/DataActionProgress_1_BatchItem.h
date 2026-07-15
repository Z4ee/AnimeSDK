#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_616;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int DataActionProgress_1_BatchItem_TypeDefinitionIndex = 56904;

	template <typename T>
	class DataActionProgress_1_BatchItem : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_616* Data; // 0x0
		::System::Collections::Generic::IEnumerable_1<T>* Items; // 0x0
	};
}
