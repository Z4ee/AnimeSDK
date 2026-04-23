#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6CC42032C8FA7BB1;

#define RPG_CLIENT_FRIENDMODULE___C__DISPLAYCLASS203_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA3DC390)
#define RPG_CLIENT_FRIENDMODULE___C__DISPLAYCLASS203_0__TRYGETPLAYERBRIEFDATA_B__0_OFFSET UNITYSDK_OFFSET(0xA3DC3A0)

namespace RPG::Client
{
	inline static constexpr unsigned int FriendModule___c__DisplayClass203_0_TypeDefinitionIndex = 59119;

	class FriendModule___c__DisplayClass203_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDMODULE___C__DISPLAYCLASS203_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _TryGetPlayerBriefData_b__0(::Class_1_6CC42032C8FA7BB1* info)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_6CC42032C8FA7BB1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDMODULE___C__DISPLAYCLASS203_0__TRYGETPLAYERBRIEFDATA_B__0_OFFSET))(this, info);
		}
	};
}
