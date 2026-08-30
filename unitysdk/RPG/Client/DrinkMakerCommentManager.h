#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DrinkMakerBartendDrinkData; }
namespace RPG::Client { class DrinkMakerBartendRequestData; }
namespace RPG::GameCore { class DrinkMakerGuestCommentRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERCOMMENTMANAGER_GETRANDOMCOMMENTS_OFFSET UNITYSDK_OFFSET(0xCD9F9E0)
#define RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__CHECKHUEINTERVAL_OFFSET UNITYSDK_OFFSET(0xCDA16E0)
#define RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__CHECKINGREDIENTTYPECOUNT_OFFSET UNITYSDK_OFFSET(0xCDA14D0)
#define RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__CHECKTAGCOMBINATION_OFFSET UNITYSDK_OFFSET(0xCDA13B0)
#define RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xCD9F9D0)
#define RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__GETALLTRIGGEREDCOMMENTS_OFFSET UNITYSDK_OFFSET(0xCDA0C90)
#define RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__GETRANDOMFAILCOMMENT_OFFSET UNITYSDK_OFFSET(0xCDA0250)
#define RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__GETRANDOMSUCCESSCOMMENT_OFFSET UNITYSDK_OFFSET(0xCDA0360)
#define RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__INIT_OFFSET UNITYSDK_OFFSET(0xCD9FA90)
#define RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__RANDOMSELECTIONBYWEIGHT_OFFSET UNITYSDK_OFFSET(0xCDA06A0)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerCommentManager_TypeDefinitionIndex = 63695;

	class DrinkMakerCommentManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestCommentRow*>*>* _SatisfyCommentDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestCommentRow*>*>* _UnsatisyCommentDict; // 0x18
		::System::Single _SaturationThreashold; // 0x20
		::System::UInt32 _CommentSelectCount; // 0x24
		::System::UInt32 _RequestCommentSelectCount; // 0x28
		::System::Single _ValueThreashold; // 0x2C
		::System::Boolean _IsInited; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestCommentRow*>* GetRandomComments(::System::UInt32 a1, ::RPG::Client::DrinkMakerBartendRequestData* a2, ::RPG::Client::DrinkMakerBartendDrinkData* a3)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestCommentRow*>*(*)(::PVOID, ::System::UInt32, ::RPG::Client::DrinkMakerBartendRequestData*, ::RPG::Client::DrinkMakerBartendDrinkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCOMMENTMANAGER_GETRANDOMCOMMENTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__INIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestCommentRow*>* _GetRandomFailComment(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestCommentRow*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__GETRANDOMFAILCOMMENT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestCommentRow*>* _GetRandomSuccessComment(::System::UInt32 a1, ::RPG::Client::DrinkMakerBartendRequestData* a2, ::RPG::Client::DrinkMakerBartendDrinkData* a3)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestCommentRow*>*(*)(::PVOID, ::System::UInt32, ::RPG::Client::DrinkMakerBartendRequestData*, ::RPG::Client::DrinkMakerBartendDrinkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__GETRANDOMSUCCESSCOMMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestCommentRow*>* _RandomSelectionByWeight(::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestCommentRow*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestCommentRow*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestCommentRow*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__RANDOMSELECTIONBYWEIGHT_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestCommentRow*>* _GetAllTriggeredComments(::System::UInt32 a1, ::RPG::Client::DrinkMakerBartendRequestData* a2, ::RPG::Client::DrinkMakerBartendDrinkData* a3)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestCommentRow*>*(*)(::PVOID, ::System::UInt32, ::RPG::Client::DrinkMakerBartendRequestData*, ::RPG::Client::DrinkMakerBartendDrinkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__GETALLTRIGGEREDCOMMENTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _CheckTagCombination(::System::UInt32 a1, ::RPG::Client::DrinkMakerBartendRequestData* a2, ::RPG::Client::DrinkMakerBartendDrinkData* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::DrinkMakerBartendRequestData*, ::RPG::Client::DrinkMakerBartendDrinkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__CHECKTAGCOMBINATION_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _CheckIngredientTypeCount(::System::UInt32 a1, ::RPG::Client::DrinkMakerBartendDrinkData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::DrinkMakerBartendDrinkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__CHECKINGREDIENTTYPECOUNT_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CheckHueInterval(::System::Single a1, ::Il2CppArray<::System::Int32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCOMMENTMANAGER__CHECKHUEINTERVAL_OFFSET))(this, a1, a2);
		}
	};
}
