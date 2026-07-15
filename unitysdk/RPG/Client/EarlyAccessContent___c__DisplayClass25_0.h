#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F730B69FCB9EE042;

#define RPG_CLIENT_EARLYACCESSCONTENT___C__DISPLAYCLASS25_0__CONTAINSDIMENSION_B__0_OFFSET UNITYSDK_OFFSET(0x177231A0)
#define RPG_CLIENT_EARLYACCESSCONTENT___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17721670)

namespace RPG::Client
{
	inline static constexpr unsigned int EarlyAccessContent___c__DisplayClass25_0_TypeDefinitionIndex = 60853;

	class EarlyAccessContent___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::UInt32 dimensionID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ContainsDimension_b__0(::Class_1_F730B69FCB9EE042* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F730B69FCB9EE042*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT___C__DISPLAYCLASS25_0__CONTAINSDIMENSION_B__0_OFFSET))(this, a1);
		}
	};
}
