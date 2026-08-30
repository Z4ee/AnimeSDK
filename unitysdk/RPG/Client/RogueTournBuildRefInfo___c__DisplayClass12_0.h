#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournBuildRefInfo; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define RPG_CLIENT_ROGUETOURNBUILDREFINFO___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEF7AD0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO___C__DISPLAYCLASS12_0___ADJUSTFAVORITEBUILDREFS_B__0_OFFSET UNITYSDK_OFFSET(0x1AEF9860)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefInfo___c__DisplayClass12_0_TypeDefinitionIndex = 67527;

	class RogueTournBuildRefInfo___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::System::Boolean>* promise; // 0x10
		::RPG::Client::RogueTournBuildRefInfo* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void __AdjustFavoriteBuildRefs_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO___C__DISPLAYCLASS12_0___ADJUSTFAVORITEBUILDREFS_B__0_OFFSET))(this);
		}
	};
}
