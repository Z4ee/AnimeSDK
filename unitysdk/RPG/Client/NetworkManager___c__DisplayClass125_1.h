#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NetworkManager___c__DisplayClass125_0; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS125_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD9D0470)
#define RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS125_1__PINGBYUDP_B__1_OFFSET UNITYSDK_OFFSET(0xD9D0480)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkManager___c__DisplayClass125_1_TypeDefinitionIndex = 69374;

	class NetworkManager___c__DisplayClass125_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::System::UInt64>* rttList; // 0x10
		::RPG::Client::NetworkManager___c__DisplayClass125_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS125_1__CTOR_OFFSET))(this);
		}

		::System::Void _PingByUdp_b__1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS125_1__PINGBYUDP_B__1_OFFSET))(this, a1);
		}
	};
}
