#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F730B69FCB9EE042;

#define RPG_CLIENT_EARLYACCESSCONTENT___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA1AB870)
#define RPG_CLIENT_EARLYACCESSCONTENT___C__DISPLAYCLASS20_0__GETCONTENTFLOOR_B__0_OFFSET UNITYSDK_OFFSET(0xA1AD160)

namespace RPG::Client
{
	inline static constexpr unsigned int EarlyAccessContent___c__DisplayClass20_0_TypeDefinitionIndex = 58638;

	class EarlyAccessContent___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::System::UInt32 floorID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetContentFloor_b__0(::Class_1_F730B69FCB9EE042* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F730B69FCB9EE042*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT___C__DISPLAYCLASS20_0__GETCONTENTFLOOR_B__0_OFFSET))(this, x);
		}
	};
}
