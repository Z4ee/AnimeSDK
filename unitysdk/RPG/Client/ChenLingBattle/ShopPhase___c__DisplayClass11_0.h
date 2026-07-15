#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFE4360)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE___C__DISPLAYCLASS11_0__REQUESTFINISHSHOP_B__2_OFFSET UNITYSDK_OFFSET(0x1AFE4400)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ShopPhase___c__DisplayClass11_0_TypeDefinitionIndex = 72409;

	class ShopPhase___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestFinishShop_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE___C__DISPLAYCLASS11_0__REQUESTFINISHSHOP_B__2_OFFSET))(this);
		}
	};
}
