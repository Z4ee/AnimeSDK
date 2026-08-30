#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EAA93C4FF12A6990_2;
namespace RPG::Client { class PlanetFesActiveBuff; }

#define RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS46_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2BC250)
#define RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS46_0___SYNCUPDATEBUFF_B__0_OFFSET UNITYSDK_OFFSET(0x1C2BC260)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesModule___c__DisplayClass46_0_TypeDefinitionIndex = 66687;

	class PlanetFesModule___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::Class_1_EAA93C4FF12A6990_2* effect; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS46_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncUpdateBuff_b__0(::RPG::Client::PlanetFesActiveBuff* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesActiveBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS46_0___SYNCUPDATEBUFF_B__0_OFFSET))(this, a1);
		}
	};
}
