#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int BindSendMsgType_TypeDefinitionIndex = 79043;

	enum class BindSendMsgType : ::System::Int32
	{
		OnTrigger = 2,
		OnPressDown = 1,
		None = 0,
		OnComplete = 3,
	};
}
