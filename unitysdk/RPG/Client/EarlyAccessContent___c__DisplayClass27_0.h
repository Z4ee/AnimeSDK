#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F730B69FCB9EE042;

#define RPG_CLIENT_EARLYACCESSCONTENT___C__DISPLAYCLASS27_0__CONTAINSDIMENSION_B__0_OFFSET UNITYSDK_OFFSET(0xCD0A540)
#define RPG_CLIENT_EARLYACCESSCONTENT___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCD08A00)

namespace RPG::Client
{
	inline static constexpr unsigned int EarlyAccessContent___c__DisplayClass27_0_TypeDefinitionIndex = 63644;

	class EarlyAccessContent___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::UInt32 dimensionID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ContainsDimension_b__0(::Class_1_F730B69FCB9EE042* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F730B69FCB9EE042*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT___C__DISPLAYCLASS27_0__CONTAINSDIMENSION_B__0_OFFSET))(this, a1);
		}
	};
}
