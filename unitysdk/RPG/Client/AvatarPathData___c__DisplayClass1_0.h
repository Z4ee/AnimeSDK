#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_378;
class Class_1_D17272E82AE804C2_100;
class Class_1_D17272E82AE804C2_13;

#define RPG_CLIENT_AVATARPATHDATA___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9DB3F80)
#define RPG_CLIENT_AVATARPATHDATA___C__DISPLAYCLASS1_0__SYNC_B__0_OFFSET UNITYSDK_OFFSET(0x9DB4360)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarPathData___c__DisplayClass1_0_TypeDefinitionIndex = 61059;

	class AvatarPathData___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_378* converter; // 0x10
		::Struct_2_BC950E36747FB4C9 prototypeIdentifier; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHDATA___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::Class_1_D17272E82AE804C2_13* _Sync_b__0(::Class_1_D17272E82AE804C2_100* anchor)
		{
			return ((::Class_1_D17272E82AE804C2_13*(*)(::PVOID, ::Class_1_D17272E82AE804C2_100*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHDATA___C__DISPLAYCLASS1_0__SYNC_B__0_OFFSET))(this, anchor);
		}
	};
}
