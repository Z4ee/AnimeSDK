#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int BindSendMsgType_TypeDefinitionIndex = 83147;

	enum class BindSendMsgType : ::System::Int32
	{
		OnComplete = 3,
		OnTrigger = 2,
		None = 0,
		OnPressDown = 1,
	};
}
