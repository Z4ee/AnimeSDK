#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int PartnerAvatarConfig_TypeDefinitionIndex = 47854;

	struct alignas(8) PartnerAvatarConfig
	{
		::System::Collections::Generic::List_1<::System::Int32>* RobotIds; // 0x10
		::System::Boolean ExcludeMainTeam; // 0x18
	};
}
