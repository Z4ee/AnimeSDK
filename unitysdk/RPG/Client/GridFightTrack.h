#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_626;
namespace RPG::Client { class GridFightEquipTrackData; }
namespace RPG::Client { class GridFightGameSession; }

#define RPG_CLIENT_GRIDFIGHTTRACK_GET_EQUIPTRACKDATA_OFFSET UNITYSDK_OFFSET(0x98C7110)
#define RPG_CLIENT_GRIDFIGHTTRACK_INIT_OFFSET UNITYSDK_OFFSET(0x98C6F60)
#define RPG_CLIENT_GRIDFIGHTTRACK_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x98C70B0)
#define RPG_CLIENT_GRIDFIGHTTRACK_SET_EQUIPTRACKDATA_OFFSET UNITYSDK_OFFSET(0x98C7120)
#define RPG_CLIENT_GRIDFIGHTTRACK_UPDATE_OFFSET UNITYSDK_OFFSET(0x98C7060)
#define RPG_CLIENT_GRIDFIGHTTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x98C7130)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrack_TypeDefinitionIndex = 53077;

	class GridFightTrack : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipTrackData* _EquipTrackData_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRACK__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::GridFightGameSession* gameSession)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameSession*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRACK_INIT_OFFSET))(this, gameSession);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRACK_UPDATE_OFFSET))(this);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_626* collector)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_626*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRACK_SETCOLLECTOR_OFFSET))(this, collector);
		}

		::RPG::Client::GridFightEquipTrackData* get_EquipTrackData()
		{
			return ((::RPG::Client::GridFightEquipTrackData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRACK_GET_EQUIPTRACKDATA_OFFSET))(this);
		}

		::System::Void set_EquipTrackData(::RPG::Client::GridFightEquipTrackData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipTrackData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRACK_SET_EQUIPTRACKDATA_OFFSET))(this, value);
		}
	};
}
