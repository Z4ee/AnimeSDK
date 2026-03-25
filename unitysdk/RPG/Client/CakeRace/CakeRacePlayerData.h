#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_53763D498DB8321D_1;
namespace RPG::Client { class CakeRaceFieldData; }

#define RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x922BFB0)
#define RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x922C000)
#define RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_GETCOINCOUNT_OFFSET UNITYSDK_OFFSET(0x922C0B0)
#define RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_GET_ISNEEDTUTORIAL_OFFSET UNITYSDK_OFFSET(0x922BF90)
#define RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_ISCOINENOUGH_OFFSET UNITYSDK_OFFSET(0x9220550)
#define RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_SET_ISNEEDTUTORIAL_OFFSET UNITYSDK_OFFSET(0x922BFA0)
#define RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x922C040)
#define RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x922BFF0)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRacePlayerData_TypeDefinitionIndex = 62234;

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

		::System::Void set_IsNeedTutorial(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_SET_ISNEEDTUTORIAL_OFFSET))(this, value);
		}

		static ::RPG::Client::CakeRace::CakeRacePlayerData* Create()
		{
			return ((::RPG::Client::CakeRace::CakeRacePlayerData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_CREATE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_53763D498DB8321D_1* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_53763D498DB8321D_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_SYNC_OFFSET))(this, rsp);
		}

		::System::UInt32 GetCoinCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_GETCOINCOUNT_OFFSET))(this);
		}

		::System::Boolean IsCoinEnough(::RPG::Client::CakeRaceFieldData* fieldData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeRaceFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_ISCOINENOUGH_OFFSET))(this, fieldData);
		}
	};
}
