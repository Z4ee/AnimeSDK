#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_953;
namespace RPG::Client { class GridFightEquipTrackData; }
namespace RPG::Client { class GridFightGameSession; }

#define RPG_CLIENT_GRIDFIGHTTRACK_GET_EQUIPTRACKDATA_OFFSET UNITYSDK_OFFSET(0xD2A3D50)
#define RPG_CLIENT_GRIDFIGHTTRACK_INIT_OFFSET UNITYSDK_OFFSET(0xD2A3BA0)
#define RPG_CLIENT_GRIDFIGHTTRACK_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xD2A3CF0)
#define RPG_CLIENT_GRIDFIGHTTRACK_SET_EQUIPTRACKDATA_OFFSET UNITYSDK_OFFSET(0xD2A3D60)
#define RPG_CLIENT_GRIDFIGHTTRACK_UPDATE_OFFSET UNITYSDK_OFFSET(0xD2A3CA0)
#define RPG_CLIENT_GRIDFIGHTTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xD2A3D70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrack_TypeDefinitionIndex = 65353;

	class GridFightTrack : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipTrackData* _EquipTrackData_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRACK__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::GridFightGameSession* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameSession*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRACK_INIT_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRACK_UPDATE_OFFSET))(this);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_953* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_953*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRACK_SETCOLLECTOR_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipTrackData* get_EquipTrackData()
		{
			return ((::RPG::Client::GridFightEquipTrackData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRACK_GET_EQUIPTRACKDATA_OFFSET))(this);
		}

		::System::Void set_EquipTrackData(::RPG::Client::GridFightEquipTrackData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipTrackData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRACK_SET_EQUIPTRACKDATA_OFFSET))(this, a1);
		}
	};
}
