#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirEquipInstance; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC3BAAE0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR___C__DISPLAYCLASS10_0__GETEQUIPINSTANCEBYUID_B__0_OFFSET UNITYSDK_OFFSET(0xC3BC810)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipBar___c__DisplayClass10_0_TypeDefinitionIndex = 73650;

	class PixAirEquipBar___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEquipInstanceByUid_b__0(::RPG::Client::PixAir::PixAirEquipInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR___C__DISPLAYCLASS10_0__GETEQUIPINSTANCEBYUID_B__0_OFFSET))(this, a1);
		}
	};
}
