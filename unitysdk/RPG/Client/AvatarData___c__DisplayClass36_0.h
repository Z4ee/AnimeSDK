#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_378;
class Class_1_D17272E82AE804C2_100;
class Class_1_D17272E82AE804C2_13;

#define RPG_CLIENT_AVATARDATA___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9D71F50)
#define RPG_CLIENT_AVATARDATA___C__DISPLAYCLASS36_0__SYNCAVATARDATA_B__0_OFFSET UNITYSDK_OFFSET(0x9D76BD0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarData___c__DisplayClass36_0_TypeDefinitionIndex = 57629;

	class AvatarData___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_378* converter; // 0x10
		::Struct_2_BC950E36747FB4C9 avatarPrototypeIdentifier; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::Class_1_D17272E82AE804C2_13* _SyncAvatarData_b__0(::Class_1_D17272E82AE804C2_100* anchor)
		{
			return ((::Class_1_D17272E82AE804C2_13*(*)(::PVOID, ::Class_1_D17272E82AE804C2_100*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA___C__DISPLAYCLASS36_0__SYNCAVATARDATA_B__0_OFFSET))(this, anchor);
		}
	};
}
