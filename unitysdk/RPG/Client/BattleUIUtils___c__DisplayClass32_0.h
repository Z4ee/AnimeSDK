#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Object.h"

class Class_1_B8B7AE2DAD90AA4E;

#define RPG_CLIENT_BATTLEUIUTILS___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x91DD370)
#define RPG_CLIENT_BATTLEUIUTILS___C__DISPLAYCLASS32_0__TRYDOWNLOADREPLAY_B__0_OFFSET UNITYSDK_OFFSET(0x91E0250)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleUIUtils___c__DisplayClass32_0_TypeDefinitionIndex = 59034;

	class BattleUIUtils___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::System::Int32 iTryCount; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryDownLoadReplay_b__0(::System::Net::HttpStatusCode code, ::System::Int32 i, ::Class_1_B8B7AE2DAD90AA4E* replay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpStatusCode, ::System::Int32, ::Class_1_B8B7AE2DAD90AA4E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS___C__DISPLAYCLASS32_0__TRYDOWNLOADREPLAY_B__0_OFFSET))(this, code, i, replay);
		}
	};
}
