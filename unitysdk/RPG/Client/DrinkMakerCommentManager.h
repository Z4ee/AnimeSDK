#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DrinkMakerBartendDrinkData; }
namespace RPG::Client { class DrinkMakerBartendRequestData; }
namespace RPG::GameCore { class DrinkMakerGuestCommentRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERCOMMENTMANAGER_GETRANDOMCOMMENTS_OFFSET UNITYSDK_OFFSET(0x9513080)
#define RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__CHECKHUEINTERVAL_OFFSET UNITYSDK_OFFSET(0x9514960)
#define RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__CHECKINGREDIENTTYPECOUNT_OFFSET UNITYSDK_OFFSET(0x95147E0)
#define RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__CHECKTAGCOMBINATION_OFFSET UNITYSDK_OFFSET(0x9514700)
#define RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9513070)
#define RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__GETALLTRIGGEREDCOMMENTS_OFFSET UNITYSDK_OFFSET(0x95140F0)
#define RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__GETRANDOMFAILCOMMENT_OFFSET UNITYSDK_OFFSET(0x95137B0)
#define RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__GETRANDOMSUCCESSCOMMENT_OFFSET UNITYSDK_OFFSET(0x95138B0)
#define RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__INIT_OFFSET UNITYSDK_OFFSET(0x9513130)
#define RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__RANDOMSELECTIONBYWEIGHT_OFFSET UNITYSDK_OFFSET(0x9513BE0)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerCommentManager_TypeDefinitionIndex = 51680;

	class DrinkMakerCommentManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestCommentRow*>*>* _SatisfyCommentDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestCommentRow*>*>* _UnsatisyCommentDict; // 0x18
		::System::Boolean _IsInited; // 0x20
		::System::Single _SaturationThreashold; // 0x24
		::System::UInt32 _RequestCommentSelectCount; // 0x28
		::System::Single _ValueThreashold; // 0x2C
		::System::UInt32 _CommentSelectCount; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestCommentRow*>* GetRandomComments(::System::UInt32 guestID, ::RPG::Client::DrinkMakerBartendRequestData* request, ::RPG::Client::DrinkMakerBartendDrinkData* drink)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestCommentRow*>*(*)(::PVOID, ::System::UInt32, ::RPG::Client::DrinkMakerBartendRequestData*, ::RPG::Client::DrinkMakerBartendDrinkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCOMMENTMANAGER_GETRANDOMCOMMENTS_OFFSET))(this, guestID, request, drink);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__INIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestCommentRow*>* _GetRandomFailComment(::System::UInt32 guestID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestCommentRow*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__GETRANDOMFAILCOMMENT_OFFSET))(this, guestID);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestCommentRow*>* _GetRandomSuccessComment(::System::UInt32 guestID, ::RPG::Client::DrinkMakerBartendRequestData* request, ::RPG::Client::DrinkMakerBartendDrinkData* drink)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestCommentRow*>*(*)(::PVOID, ::System::UInt32, ::RPG::Client::DrinkMakerBartendRequestData*, ::RPG::Client::DrinkMakerBartendDrinkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__GETRANDOMSUCCESSCOMMENT_OFFSET))(this, guestID, request, drink);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestCommentRow*>* _RandomSelectionByWeight(::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestCommentRow*>* comments, ::System::UInt32 maxSelectCount)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestCommentRow*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestCommentRow*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__RANDOMSELECTIONBYWEIGHT_OFFSET))(this, comments, maxSelectCount);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestCommentRow*>* _GetAllTriggeredComments(::System::UInt32 guestID, ::RPG::Client::DrinkMakerBartendRequestData* request, ::RPG::Client::DrinkMakerBartendDrinkData* drink)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestCommentRow*>*(*)(::PVOID, ::System::UInt32, ::RPG::Client::DrinkMakerBartendRequestData*, ::RPG::Client::DrinkMakerBartendDrinkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__GETALLTRIGGEREDCOMMENTS_OFFSET))(this, guestID, request, drink);
		}

		::System::Boolean _CheckTagCombination(::System::UInt32 tagCombID, ::RPG::Client::DrinkMakerBartendRequestData* request, ::RPG::Client::DrinkMakerBartendDrinkData* drink)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::DrinkMakerBartendRequestData*, ::RPG::Client::DrinkMakerBartendDrinkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__CHECKTAGCOMBINATION_OFFSET))(this, tagCombID, request, drink);
		}

		::System::Boolean _CheckIngredientTypeCount(::System::UInt32 typeCount, ::RPG::Client::DrinkMakerBartendDrinkData* drink)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::DrinkMakerBartendDrinkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__CHECKINGREDIENTTYPECOUNT_OFFSET))(this, typeCount, drink);
		}

		::System::Boolean _CheckHueInterval(::System::Single hueValue, ::Il2CppArray<::System::Int32>* interval)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__CHECKHUEINTERVAL_OFFSET))(this, hueValue, interval);
		}
	};
}
