#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BB4B99DE4C2501EC_3;
class Class_1_F3CA30716D4FAF92_4;

#define RPG_CLIENT_AVATARMODULE___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9143740)
#define RPG_CLIENT_AVATARMODULE___C__DISPLAYCLASS27_0___SYNCFORMALMULTIPATHAVATARS_B__0_OFFSET UNITYSDK_OFFSET(0x914C280)
#define RPG_CLIENT_AVATARMODULE___C__DISPLAYCLASS27_0___SYNCFORMALMULTIPATHAVATARS_B__1_OFFSET UNITYSDK_OFFSET(0x914C2A0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarModule___c__DisplayClass27_0_TypeDefinitionIndex = 50757;

	class AvatarModule___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::UInt32 realID; // 0x10
		::System::UInt32 baseID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncFormalMultiPathAvatars_b__0(::Class_1_BB4B99DE4C2501EC_3* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE___C__DISPLAYCLASS27_0___SYNCFORMALMULTIPATHAVATARS_B__0_OFFSET))(this, data);
		}

		::System::Boolean __SyncFormalMultiPathAvatars_b__1(::Class_1_F3CA30716D4FAF92_4* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE___C__DISPLAYCLASS27_0___SYNCFORMALMULTIPATHAVATARS_B__1_OFFSET))(this, data);
		}
	};
}
