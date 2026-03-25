#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_608FEFDFEED00BA5_1;
namespace RPG::Client { class ElfRestaurantDayData; }
namespace RPG::Client { class ElfRestaurantFestivalData; }
namespace RPG::Client { class ElfRestaurantProgressData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95E7030)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GETCURRENTDAYCUSTOMERNUMBASE_OFFSET UNITYSDK_OFFSET(0x95EA730)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GETCURRENTDAYCUSTOMERNUMDISPLAY_OFFSET UNITYSDK_OFFSET(0x95EA9B0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GETDAYWITHOFFSET_OFFSET UNITYSDK_OFFSET(0x95EB230)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GETFESTIVAL_OFFSET UNITYSDK_OFFSET(0x95EA650)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GETMENUUNLOCKPROGRESS_OFFSET UNITYSDK_OFFSET(0x95EAF00)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GETPROGRESSDATA_OFFSET UNITYSDK_OFFSET(0x95BF910)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GETRECOMMENDRECIPECNTDISPLAY_OFFSET UNITYSDK_OFFSET(0x95EBD20)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GETRECOMMENDRECIPECNT_OFFSET UNITYSDK_OFFSET(0x95EB780)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GET_CURPROGRESSDAYINDEX_OFFSET UNITYSDK_OFFSET(0x95EC830)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GET_CURRENTDAY_OFFSET UNITYSDK_OFFSET(0x95C5400)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GET_CURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0x95C1250)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GET_ISCURDAYMANAGED_OFFSET UNITYSDK_OFFSET(0x95EC810)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GET_NEXTFESTIVALDAY_OFFSET UNITYSDK_OFFSET(0x95EC7A0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GET_PROGRESSLIST_OFFSET UNITYSDK_OFFSET(0x95ECA20)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GET_PROGRESSNUM_OFFSET UNITYSDK_OFFSET(0x95EC9D0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GET_TOTALDAYS_OFFSET UNITYSDK_OFFSET(0x95EC850)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_INIT_OFFSET UNITYSDK_OFFSET(0x95E6980)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_ISCURRENTDAYLOCKNEXTDAYMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x95EB300)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_ISPRODUCTRELATEDTORECOMMENDEDRECIPES_OFFSET UNITYSDK_OFFSET(0x95EC250)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_SET_CURPROGRESSDAYINDEX_OFFSET UNITYSDK_OFFSET(0x95EC840)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_SET_ISCURDAYMANAGED_OFFSET UNITYSDK_OFFSET(0x95EC820)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x95E3110)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x95E6930)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO__ENSURECACHEDPRODUCTSRELATEDTORECOMMENDEDRECIPES_OFFSET UNITYSDK_OFFSET(0x95EC2D0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO__INITFESTIVALS_OFFSET UNITYSDK_OFFSET(0x95EA210)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO__INITPROGRESS_OFFSET UNITYSDK_OFFSET(0x95EA430)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantProgressInfo_TypeDefinitionIndex = 51771;

	class ElfRestaurantProgressInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantProgressData*>* _ProgressDict; // 0x10
		::System::ValueTuple_2<::RPG::Client::ElfRestaurantDayData*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*> _CachedProductsRelatedToRecommendedRecipes; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantFestivalData*>* _FestivalDict; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantProgressData*>* _ProgressList; // 0x30
		::System::Boolean _IsCurDayManaged_k__BackingField; // 0x38
		::System::UInt32 _CurrentDayID; // 0x3C
		::System::UInt32 _CurProgressDayIndex_k__BackingField; // 0x40
		::System::UInt32 _CurrentProgressID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_INIT_OFFSET))(this);
		}

		::System::Void _InitFestivals()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO__INITFESTIVALS_OFFSET))(this);
		}

		::System::Void _InitProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO__INITPROGRESS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_608FEFDFEED00BA5_1* serverProgress)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_608FEFDFEED00BA5_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_SYNC_OFFSET))(this, serverProgress);
		}

		::RPG::Client::ElfRestaurantFestivalData* GetFestival(::System::UInt32 festivalID)
		{
			return ((::RPG::Client::ElfRestaurantFestivalData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GETFESTIVAL_OFFSET))(this, festivalID);
		}

		::RPG::Client::ElfRestaurantProgressData* GetProgressData(::System::UInt32 progressID)
		{
			return ((::RPG::Client::ElfRestaurantProgressData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GETPROGRESSDATA_OFFSET))(this, progressID);
		}

		::System::UInt32 GetCurrentDayCustomerNumBase()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GETCURRENTDAYCUSTOMERNUMBASE_OFFSET))(this);
		}

		::System::UInt32 GetCurrentDayCustomerNumDisplay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GETCURRENTDAYCUSTOMERNUMDISPLAY_OFFSET))(this);
		}

		::System::UInt32 GetMenuUnlockProgress(::System::UInt32 menuNumber)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GETMENUUNLOCKPROGRESS_OFFSET))(this, menuNumber);
		}

		::RPG::Client::ElfRestaurantDayData* GetDayWithOffset(::System::UInt32 dayOffset)
		{
			return ((::RPG::Client::ElfRestaurantDayData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GETDAYWITHOFFSET_OFFSET))(this, dayOffset);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* IsCurrentDayLockNextDayMissionFinish()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_ISCURRENTDAYLOCKNEXTDAYMISSIONFINISH_OFFSET))(this);
		}

		::System::UInt32 GetRecommendRecipeCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GETRECOMMENDRECIPECNT_OFFSET))(this);
		}

		::System::UInt32 GetRecommendRecipeCntDisplay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GETRECOMMENDRECIPECNTDISPLAY_OFFSET))(this);
		}

		::System::Boolean IsProductRelatedToRecommendedRecipes(::System::UInt32 productID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_ISPRODUCTRELATEDTORECOMMENDEDRECIPES_OFFSET))(this, productID);
		}

		::System::Void _EnsureCachedProductsRelatedToRecommendedRecipes(::RPG::Client::ElfRestaurantDayData* day)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRestaurantDayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO__ENSURECACHEDPRODUCTSRELATEDTORECOMMENDEDRECIPES_OFFSET))(this, day);
		}

		::RPG::Client::ElfRestaurantProgressData* get_CurrentProgress()
		{
			return ((::RPG::Client::ElfRestaurantProgressData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GET_CURRENTPROGRESS_OFFSET))(this);
		}

		::RPG::Client::ElfRestaurantDayData* get_CurrentDay()
		{
			return ((::RPG::Client::ElfRestaurantDayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GET_CURRENTDAY_OFFSET))(this);
		}

		::RPG::Client::ElfRestaurantDayData* get_NextFestivalDay()
		{
			return ((::RPG::Client::ElfRestaurantDayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GET_NEXTFESTIVALDAY_OFFSET))(this);
		}

		::System::Boolean get_IsCurDayManaged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GET_ISCURDAYMANAGED_OFFSET))(this);
		}

		::System::Void set_IsCurDayManaged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_SET_ISCURDAYMANAGED_OFFSET))(this, value);
		}

		::System::UInt32 get_CurProgressDayIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GET_CURPROGRESSDAYINDEX_OFFSET))(this);
		}

		::System::Void set_CurProgressDayIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_SET_CURPROGRESSDAYINDEX_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalDays()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GET_TOTALDAYS_OFFSET))(this);
		}

		::System::Int32 get_ProgressNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GET_PROGRESSNUM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantProgressData*>* get_ProgressList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantProgressData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO_GET_PROGRESSLIST_OFFSET))(this);
		}
	};
}
