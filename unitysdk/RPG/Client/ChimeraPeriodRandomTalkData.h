#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraPeriodRandomTalkData_AccWeightedTalkData; }
namespace RPG::Client { class ChimeraTalkData; }
namespace RPG::GameCore { class ChimeraPeriodicRandomTalk; }

#define RPG_CLIENT_CHIMERAPERIODRANDOMTALKDATA_GET_CHIMERAID_OFFSET UNITYSDK_OFFSET(0xA035950)
#define RPG_CLIENT_CHIMERAPERIODRANDOMTALKDATA_GET_INTERVAL_OFFSET UNITYSDK_OFFSET(0xA035960)
#define RPG_CLIENT_CHIMERAPERIODRANDOMTALKDATA_SAMPLE_OFFSET UNITYSDK_OFFSET(0xA035CB0)
#define RPG_CLIENT_CHIMERAPERIODRANDOMTALKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA035970)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraPeriodRandomTalkData_TypeDefinitionIndex = 58505;

	class ChimeraPeriodRandomTalkData : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::ChimeraPeriodRandomTalkData_AccWeightedTalkData*>* _AccWeightedTalks; // 0x10
		::System::UInt32 _ChimeraID_k__BackingField; // 0x18
		::System::Single _Interval_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 chimeraID, ::RPG::GameCore::ChimeraPeriodicRandomTalk* talk)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChimeraPeriodicRandomTalk*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPERIODRANDOMTALKDATA__CTOR_OFFSET))(this, chimeraID, talk);
		}

		::System::UInt32 get_ChimeraID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPERIODRANDOMTALKDATA_GET_CHIMERAID_OFFSET))(this);
		}

		::System::Single get_Interval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPERIODRANDOMTALKDATA_GET_INTERVAL_OFFSET))(this);
		}

		::RPG::Client::ChimeraTalkData* Sample()
		{
			return ((::RPG::Client::ChimeraTalkData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPERIODRANDOMTALKDATA_SAMPLE_OFFSET))(this);
		}
	};
}
