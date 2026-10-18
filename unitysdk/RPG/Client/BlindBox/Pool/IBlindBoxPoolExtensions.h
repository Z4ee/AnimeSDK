#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::BlindBox::Pool { class IBlindBoxPool; }

#define RPG_CLIENT_BLINDBOX_POOL_IBLINDBOXPOOLEXTENSIONS_GETCLOSEDHINTTEXT_OFFSET UNITYSDK_OFFSET(0xC886290)
#define RPG_CLIENT_BLINDBOX_POOL_IBLINDBOXPOOLEXTENSIONS_ISCLOSED_OFFSET UNITYSDK_OFFSET(0xC883800)

namespace RPG::Client::BlindBox::Pool
{
	inline static constexpr unsigned int IBlindBoxPoolExtensions_TypeDefinitionIndex = 74947;

	class IBlindBoxPoolExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsClosed(::RPG::Client::BlindBox::Pool::IBlindBoxPool* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::BlindBox::Pool::IBlindBoxPool*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_IBLINDBOXPOOLEXTENSIONS_ISCLOSED_OFFSET))(a1);
		}

		static ::RPG::Client::TextID GetClosedHintText(::RPG::Client::BlindBox::Pool::IBlindBoxPool* a1)
		{
			return ((::RPG::Client::TextID(*)(::RPG::Client::BlindBox::Pool::IBlindBoxPool*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_IBLINDBOXPOOLEXTENSIONS_GETCLOSEDHINTTEXT_OFFSET))(a1);
		}
	};
}
