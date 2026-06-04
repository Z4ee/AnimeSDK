#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirEquipInstance; }

#define RPG_CLIENT_PIXAIR_PIXAIRBAG___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC3AED60)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG___C__DISPLAYCLASS16_0__GETEQUIPINSTANCEBYUID_B__0_OFFSET UNITYSDK_OFFSET(0xC3B1AA0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirBag___c__DisplayClass16_0_TypeDefinitionIndex = 73646;

	class PixAirBag___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEquipInstanceByUid_b__0(::RPG::Client::PixAir::PixAirEquipInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG___C__DISPLAYCLASS16_0__GETEQUIPINSTANCEBYUID_B__0_OFFSET))(this, a1);
		}
	};
}
