#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraShotData_Enum_3_60063ED21D7DBAFB.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MoleMole
{
	inline static constexpr unsigned int CameraShotData_ShotAttachOffsetData_TypeDefinitionIndex = 84621;

	struct alignas(8) CameraShotData_ShotAttachOffsetData
	{
		::MoleMole::CameraShotData_Enum_3_60063ED21D7DBAFB followType; // 0x10
		::System::String* baseAttachPoint; // 0x18
		::System::Boolean alwaysCalcOffset; // 0x20
		::System::Boolean applyExtraOffset; // 0x21
		::System::Single extraOffsetRatio; // 0x24
		::System::Collections::Generic::List_1<::System::String*>* extraOffsetAttachPoints; // 0x28
	};
}
