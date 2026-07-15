#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LoginNodeType_TypeDefinitionIndex = 58419;

	enum class LoginNodeType : ::System::Int32
	{
		ServerPanel = 0,
		LoginButton = 1,
		FunctionPanel = 2,
		EnterGameButton = 3,
		LoadingPanel = 4,
		PanelStage1 = 5,
		PanelStage2 = 6,
		PanelState2 = 7,
		PanelAge = 8,
		PauseBtn = 9,
		DownloadPanel = 10,
		FullDownloadBtn = 11,
		PreDownloadBtn = 12,
		PreDownloadFinishBtn = 13,
		MaskBgOpen = 14,
		EmptyBgClick = 15,
		IsIgnorePredownloadConfirm = 16,
		ShowBackBtn = 17,
	};
}
