#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_371;
class Class_1_FA4F4A67B1C04320_11;
class Class_1_FA4F4A67B1C04320_93;

#define RPG_CLIENT_AVATARPATHDATA___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x91525D0)
#define RPG_CLIENT_AVATARPATHDATA___C__DISPLAYCLASS1_0__SYNC_B__0_OFFSET UNITYSDK_OFFSET(0x91529B0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarPathData___c__DisplayClass1_0_TypeDefinitionIndex = 53915;

	class AvatarPathData___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_371* converter; // 0x10
		::Struct_2_BC950E36747FB4C9 prototypeIdentifier; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHDATA___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::Class_1_FA4F4A67B1C04320_11* _Sync_b__0(::Class_1_FA4F4A67B1C04320_93* anchor)
		{
			return ((::Class_1_FA4F4A67B1C04320_11*(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_93*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHDATA___C__DISPLAYCLASS1_0__SYNC_B__0_OFFSET))(this, anchor);
		}
	};
}
