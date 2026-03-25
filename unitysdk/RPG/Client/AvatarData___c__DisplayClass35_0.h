#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_371;
class Class_1_FA4F4A67B1C04320_11;
class Class_1_FA4F4A67B1C04320_93;

#define RPG_CLIENT_AVATARDATA___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9114A90)
#define RPG_CLIENT_AVATARDATA___C__DISPLAYCLASS35_0__SYNCAVATARDATA_B__0_OFFSET UNITYSDK_OFFSET(0x9114AA0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarData___c__DisplayClass35_0_TypeDefinitionIndex = 50750;

	class AvatarData___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_371* converter; // 0x10
		::Struct_2_BC950E36747FB4C9 avatarPrototypeIdentifier; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::Class_1_FA4F4A67B1C04320_11* _SyncAvatarData_b__0(::Class_1_FA4F4A67B1C04320_93* anchor)
		{
			return ((::Class_1_FA4F4A67B1C04320_11*(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_93*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA___C__DISPLAYCLASS35_0__SYNCAVATARDATA_B__0_OFFSET))(this, anchor);
		}
	};
}
