#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Threading { class SynchronizationContext; }

#define RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS122_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC2E0E90)
#define RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS122_0__PINGBYUDP_B__0_OFFSET UNITYSDK_OFFSET(0xC2E0EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkManager___c__DisplayClass122_0_TypeDefinitionIndex = 64861;

	class NetworkManager___c__DisplayClass122_0 : public ::System::Object
	{
	public:
		::System::Threading::SynchronizationContext* current; // 0x10
		::RPG::Client::Promises::Promise_1<::System::Collections::Generic::IList_1<::System::UInt64>*>* result; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS122_0__CTOR_OFFSET))(this);
		}

		::System::Void _PingByUdp_b__0(::System::Collections::Generic::IList_1<::System::UInt64>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt64>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS122_0__PINGBYUDP_B__0_OFFSET))(this, a1);
		}
	};
}
