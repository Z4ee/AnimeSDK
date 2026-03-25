#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F730B69FCB9EE042;

#define RPG_CLIENT_EARLYACCESSCONTENT___C__DISPLAYCLASS22_0__CONTAINSDIMENSION_B__0_OFFSET UNITYSDK_OFFSET(0x952A5F0)
#define RPG_CLIENT_EARLYACCESSCONTENT___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9528F80)

namespace RPG::Client
{
	inline static constexpr unsigned int EarlyAccessContent___c__DisplayClass22_0_TypeDefinitionIndex = 51691;

	class EarlyAccessContent___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::UInt32 dimensionID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ContainsDimension_b__0(::Class_1_F730B69FCB9EE042* floor)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F730B69FCB9EE042*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT___C__DISPLAYCLASS22_0__CONTAINSDIMENSION_B__0_OFFSET))(this, floor);
		}
	};
}
