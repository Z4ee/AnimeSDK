#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BoxingClubLevelInstance.h"

class Class_1_64B7A5556C27C456;
namespace RPG::Client { class ScheduleData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_GETOPTIONALBUFFID_OFFSET UNITYSDK_OFFSET(0x1A116E90)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_GET_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1A117250)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x1A1170F0)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_SENDCHOOSEBOXINGCLUBRESONANCEOPTIONALBUFFREQ_OFFSET UNITYSDK_OFFSET(0x1A116260)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_SENDCHOOSEBOXINGCLUBRESONANCEREQ_OFFSET UNITYSDK_OFFSET(0x1A1161A0)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_STARTBOXINGCLUBRESONANCE_OFFSET UNITYSDK_OFFSET(0x1A116A50)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_SYNCRESONANCE_OFFSET UNITYSDK_OFFSET(0x1A116320)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_TRYSHOWNEXTROUNDINFOPAGE_OFFSET UNITYSDK_OFFSET(0x1A116370)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A116190)

namespace RPG::Client
{
	inline static constexpr unsigned int BoxingClubResonanceLevelInstance_TypeDefinitionIndex = 63027;

	class BoxingClubResonanceLevelInstance : public ::RPG::Client::BoxingClubLevelInstance
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE__CTOR_OFFSET))(this, a1);
		}

		::System::Void SendChooseBoxingClubResonanceReq(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_SENDCHOOSEBOXINGCLUBRESONANCEREQ_OFFSET))(this, a1);
		}

		::System::Void SendChooseBoxingClubResonanceOptionalBuffReq(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_SENDCHOOSEBOXINGCLUBRESONANCEOPTIONALBUFFREQ_OFFSET))(this, a1);
		}

		::System::Void SyncResonance(::Class_1_64B7A5556C27C456* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_64B7A5556C27C456*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_SYNCRESONANCE_OFFSET))(this, a1);
		}

		::System::Void TryShowNextRoundInfoPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_TRYSHOWNEXTROUNDINFOPAGE_OFFSET))(this);
		}

		::System::Void StartBoxingClubResonance(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_STARTBOXINGCLUBRESONANCE_OFFSET))(this, a1);
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
	};
}
