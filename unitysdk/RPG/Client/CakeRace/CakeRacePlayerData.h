#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_53763D498DB8321D;
namespace RPG::Client { class CakeRaceFieldData; }

#define RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB48C760)
#define RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB48C7B0)
#define RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_GETCOINCOUNT_OFFSET UNITYSDK_OFFSET(0xB48C860)
#define RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_GET_ISNEEDTUTORIAL_OFFSET UNITYSDK_OFFSET(0xB48C740)
#define RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_ISCOINENOUGH_OFFSET UNITYSDK_OFFSET(0xB480370)
#define RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_SET_ISNEEDTUTORIAL_OFFSET UNITYSDK_OFFSET(0xB48C750)
#define RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xB48C7F0)
#define RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB48C7A0)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRacePlayerData_TypeDefinitionIndex = 71045;

	class CakeRacePlayerData : public ::System::Object
	{
	public:
		::System::Boolean _IsNeedTutorial_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsNeedTutorial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_GET_ISNEEDTUTORIAL_OFFSET))(this);
		}

		::System::Void set_IsNeedTutorial(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_SET_ISNEEDTUTORIAL_OFFSET))(this, a1);
		}

		static ::RPG::Client::CakeRace::CakeRacePlayerData* Create()
		{
			return ((::RPG::Client::CakeRace::CakeRacePlayerData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_CREATE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_53763D498DB8321D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_53763D498DB8321D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_SYNC_OFFSET))(this, a1);
		}

		::System::UInt32 GetCoinCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_GETCOINCOUNT_OFFSET))(this);
		}

		::System::Boolean IsCoinEnough(::RPG::Client::CakeRaceFieldData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeRaceFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_ISCOINENOUGH_OFFSET))(this, a1);
		}
	};
}
