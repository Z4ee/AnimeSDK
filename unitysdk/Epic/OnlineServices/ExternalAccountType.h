#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int ExternalAccountType_TypeDefinitionIndex = 42747;

	enum class ExternalAccountType : ::System::Int32
	{
		Epic = 0,
		Steam = 1,
		Psn = 2,
		Xbl = 3,
		Discord = 4,
		Gog = 5,
		Nintendo = 6,
		Uplay = 7,
		Openid = 8,
		Apple = 9,
		Google = 10,
		Oculus = 11,
		Itchio = 12,
		Amazon = 13,
	};
}
