#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGachaPoolData; }

#define RPG_CLIENT_GACHAMODULE___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x192CAB80)
#define RPG_CLIENT_GACHAMODULE___C__DISPLAYCLASS34_0__GETGACHAPOOLDATA_B__0_OFFSET UNITYSDK_OFFSET(0x192CF160)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaModule___c__DisplayClass34_0_TypeDefinitionIndex = 61384;

	class GachaModule___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::System::UInt32 gachaID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetGachaPoolData_b__0(::RPG::Client::BaseGachaPoolData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE___C__DISPLAYCLASS34_0__GETGACHAPOOLDATA_B__0_OFFSET))(this, a1);
		}
	};
}
