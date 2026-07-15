#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceTriggerEventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::CakeRace { class CakeRaceTriggerEventDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACE_CAKERACETRIGGEREVENTINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x1AAB9AE0)
#define RPG_CLIENT_CAKERACE_CAKERACETRIGGEREVENTINFO_GETTRIGGEREVENTDATAITEMS_OFFSET UNITYSDK_OFFSET(0x1AABA050)
#define RPG_CLIENT_CAKERACE_CAKERACETRIGGEREVENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAB9BD0)
#define RPG_CLIENT_CAKERACE_CAKERACETRIGGEREVENTINFO__INITTRIGGEREVENTDATAITEMS_OFFSET UNITYSDK_OFFSET(0x1AAB9CA0)
#define RPG_CLIENT_CAKERACE_CAKERACETRIGGEREVENTINFO__INIT_OFFSET UNITYSDK_OFFSET(0x1AAB9C50)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRaceTriggerEventInfo_TypeDefinitionIndex = 72562;

	class CakeRaceTriggerEventInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceTriggerEventType, ::System::Collections::Generic::List_1<::RPG::Client::CakeRace::CakeRaceTriggerEventDataItem*>*>* _TriggerEventDataItems; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACETRIGGEREVENTINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::CakeRace::CakeRaceTriggerEventInfo* Create()
		{
			return ((::RPG::Client::CakeRace::CakeRaceTriggerEventInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACETRIGGEREVENTINFO_CREATE_OFFSET))();
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACETRIGGEREVENTINFO__INIT_OFFSET))(this);
		}

		::System::Void _InitTriggerEventDataItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACETRIGGEREVENTINFO__INITTRIGGEREVENTDATAITEMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeRace::CakeRaceTriggerEventDataItem*>* GetTriggerEventDataItems(::RPG::GameCore::CakeRaceTriggerEventType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeRace::CakeRaceTriggerEventDataItem*>*(*)(::PVOID, ::RPG::GameCore::CakeRaceTriggerEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACETRIGGEREVENTINFO_GETTRIGGEREVENTDATAITEMS_OFFSET))(this, a1);
		}
	};
}
