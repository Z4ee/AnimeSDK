#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NetworkManager___c__DisplayClass122_0; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS122_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC2E0F70)
#define RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS122_1__PINGBYUDP_B__1_OFFSET UNITYSDK_OFFSET(0xC2E0F80)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkManager___c__DisplayClass122_1_TypeDefinitionIndex = 64862;

	class NetworkManager___c__DisplayClass122_1 : public ::System::Object
	{
	public:
		::RPG::Client::NetworkManager___c__DisplayClass122_0* CS___8__locals1; // 0x10
		::System::Collections::Generic::IList_1<::System::UInt64>* rttList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS122_1__CTOR_OFFSET))(this);
		}

		::System::Void _PingByUdp_b__1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS122_1__PINGBYUDP_B__1_OFFSET))(this, a1);
		}
	};
}
