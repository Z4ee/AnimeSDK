#pragma once
#include "unitysdk/unitysdk.h"

namespace DG::Tweening::Core::Enums
{
	inline static constexpr unsigned int UpdateNotice_TypeDefinitionIndex = 25508;

	enum class UpdateNotice : ::System::Int32
	{
		None = 0,
		RewindStep = 1,
	};
}
