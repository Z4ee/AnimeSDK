#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraWorkSettleData; }

#define RPG_CLIENT_CHIMERATEAMWORKSETTLEDATA___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA085F80)
#define RPG_CLIENT_CHIMERATEAMWORKSETTLEDATA___C__DISPLAYCLASS2_0__GETCHIMERAWORKSETTLEDATA_B__0_OFFSET UNITYSDK_OFFSET(0xA0866E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraTeamWorkSettleData___c__DisplayClass2_0_TypeDefinitionIndex = 58463;

	class ChimeraTeamWorkSettleData___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::UInt32 chimeraID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMWORKSETTLEDATA___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetChimeraWorkSettleData_b__0(::RPG::Client::ChimeraWorkSettleData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraWorkSettleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMWORKSETTLEDATA___C__DISPLAYCLASS2_0__GETCHIMERAWORKSETTLEDATA_B__0_OFFSET))(this, data);
		}
	};
}
