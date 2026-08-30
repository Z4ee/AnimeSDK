#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TEAMBUILDUNIT___C__DISPLAYCLASS8_0__CHECKMATCH_B__0_OFFSET UNITYSDK_OFFSET(0x1A3872F0)
#define RPG_CLIENT_TEAMBUILDUNIT___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A387230)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamBuildUnit___c__DisplayClass8_0_TypeDefinitionIndex = 68098;

	class TeamBuildUnit___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::UInt32 avatarID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDUNIT___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CheckMatch_b__0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDUNIT___C__DISPLAYCLASS8_0__CHECKMATCH_B__0_OFFSET))(this, a1);
		}
	};
}
