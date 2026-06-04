#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_AuthInfo.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class IKCPChannel; }
namespace System { class String; }
namespace System::Net { class IPEndPoint; }

#define MIHOYO_SDK_IKCPCLIENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA17BC60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int IKCPClient_TypeDefinitionIndex = 43532;

	class IKCPClient : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCLIENT__CTOR_OFFSET))(this);
		}
	};
}
