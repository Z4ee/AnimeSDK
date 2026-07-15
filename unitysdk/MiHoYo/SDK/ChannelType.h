#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ChannelType_TypeDefinitionIndex = 8038;

	enum class ChannelType : ::System::Int32
	{
		Official = 1,
		MiHoYoSONY = 2,
		MiHoYoCX = 4,
		XiaoMi = 11,
		KuPai = 12,
		YYB = 13,
		Bili = 14,
		HW = 15,
		MZ = 16,
		QiHu = 17,
		OPPO = 18,
		VIVO = 19,
		ALi = 20,
		WDJ = 21,
		Lenovo = 22,
		JinLi = 23,
		BaiDu = 25,
		DL = 26,
		WeGame = 27,
	};
}
