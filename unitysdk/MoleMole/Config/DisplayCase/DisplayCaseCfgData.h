#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayCase/DisplayBaseTransformData.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MoleMole::Config::DisplayCase
{
	inline static constexpr unsigned int DisplayCaseCfgData_TypeDefinitionIndex = 47241;

	struct alignas(8) DisplayCaseCfgData
	{
		::System::Int32 SectionId; // 0x10
		::System::Boolean IsFemale; // 0x14
		::MoleMole::DisplayCase::DisplayBaseTransformData TransformData; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::DisplayCase::DisplayBaseTransformData>*>* AllItems; // 0x30
	};
}
