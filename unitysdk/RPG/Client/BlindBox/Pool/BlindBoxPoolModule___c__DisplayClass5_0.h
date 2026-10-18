#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3B721A18D8967D08;
namespace RPG::Client::BlindBox::Pool { class BlindBoxPoolModule; }

#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC882020)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C__DISPLAYCLASS5_0___ONBLINDBOXGETDATASCRSP_B__0_OFFSET UNITYSDK_OFFSET(0xC8855C0)

namespace RPG::Client::BlindBox::Pool
{
	inline static constexpr unsigned int BlindBoxPoolModule___c__DisplayClass5_0_TypeDefinitionIndex = 74914;

	class BlindBoxPoolModule___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::Client::BlindBox::Pool::BlindBoxPoolModule* __4__this; // 0x10
		::Class_1_3B721A18D8967D08* protoPool; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void __OnBlindBoxGetDataScRsp_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C__DISPLAYCLASS5_0___ONBLINDBOXGETDATASCRSP_B__0_OFFSET))(this);
		}
	};
}
