#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int LittleGameNetWorkMsg_TypeDefinitionIndex = 34367;

	enum class LittleGameNetWorkMsg : ::System::Byte
	{
		ClientStartInfoReq = 0x1,
		ClientStartInfoRsp = 0x2,
		RpcCall = 0x3,
		Snapshot = 0x4,
	};
}
