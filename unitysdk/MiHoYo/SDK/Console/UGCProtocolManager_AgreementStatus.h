#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int UGCProtocolManager_AgreementStatus_TypeDefinitionIndex = 8630;

	enum class UGCProtocolManager_AgreementStatus : ::System::Int32
	{
		None = -1,
		Agreed = 0,
		NeedShow = 1,
	};
}
