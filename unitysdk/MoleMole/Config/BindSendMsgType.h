#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int BindSendMsgType_TypeDefinitionIndex = 51852;

	enum class BindSendMsgType : ::System::Int32
	{
		None = 0,
		OnComplete = 3,
		OnPressDown = 1,
		OnTrigger = 2,
	};
}
