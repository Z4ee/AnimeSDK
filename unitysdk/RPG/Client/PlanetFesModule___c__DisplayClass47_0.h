#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6BAFE11FCE160FB2;
namespace RPG::Client { class PlanetFesActiveBuff; }

#define RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC474190)
#define RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS47_0___SYNCREMOVEBUFF_B__0_OFFSET UNITYSDK_OFFSET(0xC4741A0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesModule___c__DisplayClass47_0_TypeDefinitionIndex = 62337;

	class PlanetFesModule___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::Class_1_6BAFE11FCE160FB2* effect; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncRemoveBuff_b__0(::RPG::Client::PlanetFesActiveBuff* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesActiveBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS47_0___SYNCREMOVEBUFF_B__0_OFFSET))(this, a1);
		}
	};
}
