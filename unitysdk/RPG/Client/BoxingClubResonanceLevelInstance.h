#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BoxingClubLevelInstance.h"

class Class_1_E14A0A1A8B1F847C_2;
namespace RPG::Client { class ScheduleData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_GETOPTIONALBUFFID_OFFSET UNITYSDK_OFFSET(0x9EB5450)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_GET_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x9EB57F0)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x9EB5690)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_SENDCHOOSEBOXINGCLUBRESONANCEOPTIONALBUFFREQ_OFFSET UNITYSDK_OFFSET(0x9EB4710)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_SENDCHOOSEBOXINGCLUBRESONANCEREQ_OFFSET UNITYSDK_OFFSET(0x9EB4650)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_STARTBOXINGCLUBRESONANCE_OFFSET UNITYSDK_OFFSET(0x9EB4F80)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_SYNCRESONANCE_OFFSET UNITYSDK_OFFSET(0x9EB47D0)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_TRYSHOWNEXTROUNDINFOPAGE_OFFSET UNITYSDK_OFFSET(0x9EB4820)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x9EB4640)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE___IFIXBASEPROXY_TRYSHOWNEXTROUNDINFOPAGE_OFFSET UNITYSDK_OFFSET(0x9EB5850)

namespace RPG::Client
{
	inline static constexpr unsigned int BoxingClubResonanceLevelInstance_TypeDefinitionIndex = 57992;

	class BoxingClubResonanceLevelInstance : public ::RPG::Client::BoxingClubLevelInstance
	{
	public:
		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE__CTOR_OFFSET))(this, id);
		}

		::System::Void SendChooseBoxingClubResonanceReq(::System::UInt32 stageBuffID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_SENDCHOOSEBOXINGCLUBRESONANCEREQ_OFFSET))(this, stageBuffID);
		}

		::System::Void SendChooseBoxingClubResonanceOptionalBuffReq(::System::UInt32 optionalBuffID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_SENDCHOOSEBOXINGCLUBRESONANCEOPTIONALBUFFREQ_OFFSET))(this, optionalBuffID);
		}

		::System::Void SyncResonance(::Class_1_E14A0A1A8B1F847C_2* challenge)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E14A0A1A8B1F847C_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_SYNCRESONANCE_OFFSET))(this, challenge);
		}

		::System::Void TryShowNextRoundInfoPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_TRYSHOWNEXTROUNDINFOPAGE_OFFSET))(this);
		}

		::System::Void StartBoxingClubResonance(::System::Collections::Generic::List_1<::System::UInt32>* avatarIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_STARTBOXINGCLUBRESONANCE_OFFSET))(this, avatarIDs);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetOptionalBuffID()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_GETOPTIONALBUFFID_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::System::Boolean get_IsInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_GET_ISINSCHEDULE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_TryShowNextRoundInfoPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE___IFIXBASEPROXY_TRYSHOWNEXTROUNDINFOPAGE_OFFSET))(this);
		}
	};
}
