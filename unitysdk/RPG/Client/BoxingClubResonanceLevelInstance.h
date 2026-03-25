#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BoxingClubLevelInstance.h"

class Class_1_E14A0A1A8B1F847C_1;
namespace RPG::Client { class ScheduleData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_GETOPTIONALBUFFID_OFFSET UNITYSDK_OFFSET(0x920C210)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_GET_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x920C5B0)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x920C450)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_SENDCHOOSEBOXINGCLUBRESONANCEOPTIONALBUFFREQ_OFFSET UNITYSDK_OFFSET(0x920B4D0)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_SENDCHOOSEBOXINGCLUBRESONANCEREQ_OFFSET UNITYSDK_OFFSET(0x920B410)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_STARTBOXINGCLUBRESONANCE_OFFSET UNITYSDK_OFFSET(0x920BD40)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_SYNCRESONANCE_OFFSET UNITYSDK_OFFSET(0x920B590)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_TRYSHOWNEXTROUNDINFOPAGE_OFFSET UNITYSDK_OFFSET(0x920B5E0)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x920B400)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE___IFIXBASEPROXY_TRYSHOWNEXTROUNDINFOPAGE_OFFSET UNITYSDK_OFFSET(0x920C610)

namespace RPG::Client
{
	inline static constexpr unsigned int BoxingClubResonanceLevelInstance_TypeDefinitionIndex = 51107;

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

		::System::Void SyncResonance(::Class_1_E14A0A1A8B1F847C_1* challenge)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E14A0A1A8B1F847C_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_SYNCRESONANCE_OFFSET))(this, challenge);
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
