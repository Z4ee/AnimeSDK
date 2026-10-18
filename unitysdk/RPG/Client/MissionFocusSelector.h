#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }
namespace RPG::Client { class MissionFocusSelector_MissionMatchPredicate; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MISSIONFOCUSSELECTOR_GETMOSTRELEVANTSHOWNANDSTARTEDMISSIONIDTOFOCUS_OFFSET UNITYSDK_OFFSET(0xD6D9400)
#define RPG_CLIENT_MISSIONFOCUSSELECTOR__GETALLSHOWNANDSTARTEDMAINMISSIONS_OFFSET UNITYSDK_OFFSET(0xD6D9880)
#define RPG_CLIENT_MISSIONFOCUSSELECTOR__TRYGETMOSTRELEVANTMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xD6D9A40)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionFocusSelector_TypeDefinitionIndex = 66161;

	class MissionFocusSelector : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _DefaultMissionID = 0x0; // 0x0

		static ::System::UInt32 GetMostRelevantShownAndStartedMissionIDToFocus(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONFOCUSSELECTOR_GETMOSTRELEVANTSHOWNANDSTARTEDMISSIONIDTOFOCUS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* _GetAllShownAndStartedMainMissions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONFOCUSSELECTOR__GETALLSHOWNANDSTARTEDMAINMISSIONS_OFFSET))();
		}

		static ::System::Nullable_1<::System::UInt32> _TryGetMostRelevantMainMissionID(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* a1, ::RPG::Client::MissionFocusSelector_MissionMatchPredicate* a2)
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*, ::RPG::Client::MissionFocusSelector_MissionMatchPredicate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONFOCUSSELECTOR__TRYGETMOSTRELEVANTMAINMISSIONID_OFFSET))(a1, a2);
		}
	};
}
