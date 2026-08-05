#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIPrivateMessageConversionWidgetController_ItemIndex_TypeDefinitionIndex = 70678;

	enum class UIPrivateMessageConversionWidgetController_ItemIndex : ::System::Int32
	{
		ReplyMessage = 1,
		VoiceMessage = 2,
		MessageLoading = 4,
		NPCMessage = 0,
		MessageTpying = 3,
	};
}
