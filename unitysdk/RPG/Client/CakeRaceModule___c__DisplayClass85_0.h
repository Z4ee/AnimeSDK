#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceModule; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEMODULE___C__DISPLAYCLASS85_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC9D4DD0)
#define RPG_CLIENT_CAKERACEMODULE___C__DISPLAYCLASS85_0__TRYACCEPTINVITED_B__0_OFFSET UNITYSDK_OFFSET(0xC9D7020)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceModule___c__DisplayClass85_0_TypeDefinitionIndex = 63077;

	class CakeRaceModule___c__DisplayClass85_0 : public ::System::Object
	{
	public:
		::RPG::Client::CakeRaceModule* __4__this; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* gameParamList; // 0x18
		::System::UInt64 lobbyID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE___C__DISPLAYCLASS85_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryAcceptInvited_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE___C__DISPLAYCLASS85_0__TRYACCEPTINVITED_B__0_OFFSET))(this);
		}
	};
}
