#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PasterConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAVELBROCHUREUTILS_GETDIARYIMAGEPASTERIDSEXCLUDEOTHERGENDERPASTER_OFFSET UNITYSDK_OFFSET(0xCAD67E0)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_GETDIARYPASTERCOUNT_OFFSET UNITYSDK_OFFSET(0xCAD6750)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_GETDIARYUNLOCKEDPASTERCOUNT_OFFSET UNITYSDK_OFFSET(0xCAD6A60)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_GETLOCKEDPASTERCOUNT_OFFSET UNITYSDK_OFFSET(0xCAD6C70)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_GETPASTERPASTEDDIARYID_OFFSET UNITYSDK_OFFSET(0xCAD6500)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_HASPASTERDIARYUNLOCKED_OFFSET UNITYSDK_OFFSET(0xCAD59C0)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_HASTRAVELBROCHUREIDINPASTER_OFFSET UNITYSDK_OFFSET(0xCAD66E0)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_ISDIARYNEW_OFFSET UNITYSDK_OFFSET(0xCAD5FE0)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_ISDIARYUNLOCKED_OFFSET UNITYSDK_OFFSET(0xCAD5F00)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_ISPASTERNEW_OFFSET UNITYSDK_OFFSET(0xCAD28E0)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_ISPASTERPASTED_OFFSET UNITYSDK_OFFSET(0xCAD6690)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_ISPASTERUNLOCKED_OFFSET UNITYSDK_OFFSET(0xCAD62C0)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_RECORDDIARYSEEN_OFFSET UNITYSDK_OFFSET(0xCAD61B0)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_RECORDPASTERSEEN_OFFSET UNITYSDK_OFFSET(0xCAD63F0)

namespace RPG::Client
{
	inline static constexpr unsigned int TravelBrochureUtils_TypeDefinitionIndex = 63798;

	class TravelBrochureUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsDiaryUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREUTILS_ISDIARYUNLOCKED_OFFSET))(a1);
		}

		static ::System::Boolean IsDiaryNew(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREUTILS_ISDIARYNEW_OFFSET))(a1);
		}

		static ::System::Void RecordDiarySeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREUTILS_RECORDDIARYSEEN_OFFSET))(a1);
		}

		static ::System::Boolean IsPasterUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREUTILS_ISPASTERUNLOCKED_OFFSET))(a1);
		}

		static ::System::Boolean IsPasterNew(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREUTILS_ISPASTERNEW_OFFSET))(a1);
		}

		static ::System::Void RecordPasterSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREUTILS_RECORDPASTERSEEN_OFFSET))(a1);
		}

		static ::System::UInt32 GetPasterPastedDiaryID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREUTILS_GETPASTERPASTEDDIARYID_OFFSET))(a1);
		}

		static ::System::Boolean IsPasterPasted(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREUTILS_ISPASTERPASTED_OFFSET))(a1);
		}

		static ::System::Boolean HasPasterDiaryUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREUTILS_HASPASTERDIARYUNLOCKED_OFFSET))(a1);
		}

		static ::System::Boolean HasTravelBrochureIDInPaster(::RPG::GameCore::PasterConfigRow* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::PasterConfigRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREUTILS_HASTRAVELBROCHUREIDINPASTER_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetDiaryPasterCount(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREUTILS_GETDIARYPASTERCOUNT_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetDiaryImagePasterIDsExcludeOtherGenderPaster(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREUTILS_GETDIARYIMAGEPASTERIDSEXCLUDEOTHERGENDERPASTER_OFFSET))(a1);
		}

		static ::System::Int32 GetDiaryUnlockedPasterCount(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREUTILS_GETDIARYUNLOCKEDPASTERCOUNT_OFFSET))(a1);
		}

		static ::System::Int32 GetLockedPasterCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREUTILS_GETLOCKEDPASTERCOUNT_OFFSET))();
		}
	};
}
