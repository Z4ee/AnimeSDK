#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F730B69FCB9EE042;

#define RPG_CLIENT_EARLYACCESSCONTENT___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A698540)
#define RPG_CLIENT_EARLYACCESSCONTENT___C__DISPLAYCLASS22_0__GETCONTENTFLOOR_B__0_OFFSET UNITYSDK_OFFSET(0x1A69A3F0)

namespace RPG::Client
{
	inline static constexpr unsigned int EarlyAccessContent___c__DisplayClass22_0_TypeDefinitionIndex = 63705;

	class EarlyAccessContent___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::UInt32 floorID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetContentFloor_b__0(::Class_1_F730B69FCB9EE042* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F730B69FCB9EE042*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT___C__DISPLAYCLASS22_0__GETCONTENTFLOOR_B__0_OFFSET))(this, a1);
		}
	};
}
