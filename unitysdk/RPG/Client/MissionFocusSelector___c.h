#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }
namespace RPG::Client { class MissionFocusSelector_MissionMatchPredicate; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MISSIONFOCUSSELECTOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD6D00F0)
#define RPG_CLIENT_MISSIONFOCUSSELECTOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD6D0130)
#define RPG_CLIENT_MISSIONFOCUSSELECTOR___C__GETMOSTRELEVANTSHOWNANDSTARTEDMISSIONIDTOFOCUS_B__2_2_OFFSET UNITYSDK_OFFSET(0xD6D0140)
#define RPG_CLIENT_MISSIONFOCUSSELECTOR___C__GETMOSTRELEVANTSHOWNANDSTARTEDMISSIONIDTOFOCUS_B__2_3_OFFSET UNITYSDK_OFFSET(0xD6D0160)
#define RPG_CLIENT_MISSIONFOCUSSELECTOR___C___GETALLSHOWNANDSTARTEDMAINMISSIONS_B__3_0_OFFSET UNITYSDK_OFFSET(0xD6D0180)
#define RPG_CLIENT_MISSIONFOCUSSELECTOR___C___TRYGETMOSTRELEVANTMAINMISSIONID_B__4_1_OFFSET UNITYSDK_OFFSET(0xD6D01C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionFocusSelector___c_TypeDefinitionIndex = 66163;

	class MissionFocusSelector___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::MainMissionData*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::MainMissionData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MissionFocusSelector___c_TypeDefinitionIndex)->GetStaticField(0x54660);
		}
		static ::System::Func_2<::RPG::Client::MainMissionData*, ::System::UInt32>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::RPG::Client::MainMissionData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MissionFocusSelector___c_TypeDefinitionIndex)->GetStaticField(0x54668);
		}
		static ::RPG::Client::MissionFocusSelector_MissionMatchPredicate** StaticGet___9__2_3()
		{
			return (::RPG::Client::MissionFocusSelector_MissionMatchPredicate**)Il2CppClass::FromTypeDefinitionIndex(MissionFocusSelector___c_TypeDefinitionIndex)->GetStaticField(0x54670);
		}
		static ::RPG::Client::MissionFocusSelector_MissionMatchPredicate** StaticGet___9__2_2()
		{
			return (::RPG::Client::MissionFocusSelector_MissionMatchPredicate**)Il2CppClass::FromTypeDefinitionIndex(MissionFocusSelector___c_TypeDefinitionIndex)->GetStaticField(0x54678);
		}
		static ::RPG::Client::MissionFocusSelector___c** StaticGet___9()
		{
			return (::RPG::Client::MissionFocusSelector___c**)Il2CppClass::FromTypeDefinitionIndex(MissionFocusSelector___c_TypeDefinitionIndex)->GetStaticField(0x54680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONFOCUSSELECTOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONFOCUSSELECTOR___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMostRelevantShownAndStartedMissionIDToFocus_b__2_2(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONFOCUSSELECTOR___C__GETMOSTRELEVANTSHOWNANDSTARTEDMISSIONIDTOFOCUS_B__2_2_OFFSET))(this, a1);
		}

		::System::Boolean _GetMostRelevantShownAndStartedMissionIDToFocus_b__2_3(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONFOCUSSELECTOR___C__GETMOSTRELEVANTSHOWNANDSTARTEDMISSIONIDTOFOCUS_B__2_3_OFFSET))(this, a1);
		}

		::System::Boolean __GetAllShownAndStartedMainMissions_b__3_0(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONFOCUSSELECTOR___C___GETALLSHOWNANDSTARTEDMAINMISSIONS_B__3_0_OFFSET))(this, a1);
		}

		::System::UInt32 __TryGetMostRelevantMainMissionID_b__4_1(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONFOCUSSELECTOR___C___TRYGETMOSTRELEVANTMAINMISSIONID_B__4_1_OFFSET))(this, a1);
		}
	};
}
