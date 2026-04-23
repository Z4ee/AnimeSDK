#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BB4B99DE4C2501EC_3;
class Class_1_F3CA30716D4FAF92_5;

#define RPG_CLIENT_AVATARMODULE___C__DISPLAYCLASS116_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9DAD0D0)
#define RPG_CLIENT_AVATARMODULE___C__DISPLAYCLASS116_0___SYNCALLAVATARS_B__0_OFFSET UNITYSDK_OFFSET(0x9DAD5D0)
#define RPG_CLIENT_AVATARMODULE___C__DISPLAYCLASS116_0___SYNCALLAVATARS_B__1_OFFSET UNITYSDK_OFFSET(0x9DAD5F0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarModule___c__DisplayClass116_0_TypeDefinitionIndex = 57634;

	class AvatarModule___c__DisplayClass116_0 : public ::System::Object
	{
	public:
		::System::UInt32 baseID; // 0x10
		::System::UInt32 realID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE___C__DISPLAYCLASS116_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncAllAvatars_b__0(::Class_1_BB4B99DE4C2501EC_3* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE___C__DISPLAYCLASS116_0___SYNCALLAVATARS_B__0_OFFSET))(this, data);
		}

		::System::Boolean __SyncAllAvatars_b__1(::Class_1_F3CA30716D4FAF92_5* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE___C__DISPLAYCLASS116_0___SYNCALLAVATARS_B__1_OFFSET))(this, data);
		}
	};
}
