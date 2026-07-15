#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKQRLogin_QRLoginDialogMsgID_TypeDefinitionIndex = 44995;

	enum class HoYoSDKQRLogin_QRLoginDialogMsgID : ::System::Int32
	{
		QR_CODE_LOADING = 0,
		QR_CODE_SUCCESS = 1,
		QR_CODE_OVERDUE = 2,
		QR_CODE_NETWORK_ERROR = 3,
		QR_CODE_SCAN_SUCCESS = 4,
		QR_CODE_LOGIN_SUCCESS = 5,
	};
}
