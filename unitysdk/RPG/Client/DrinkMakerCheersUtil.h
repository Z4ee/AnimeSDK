#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DrinkMakerBartendProcedure.h"
#include "unitysdk/RPG/GameCore/DrinkMakerTagSourceType.h"
#include "unitysdk/System/Object.h"

class Class_1_7E9AC8675DA072FB;
namespace RPG::Client { class DrinkMakerBarDrink; }
namespace RPG::GameCore { class DrinkMakerCheersConfigRow; }
namespace RPG::GameCore { class DrinkMakerCheersIngredientRow; }
namespace RPG::GameCore { class DrinkMakerIngredientRow; }
namespace System { class Action; }

#define RPG_CLIENT_DRINKMAKERCHEERSUTIL_CONVERTTODRINKMAKERINGREDIENTROW_OFFSET UNITYSDK_OFFSET(0xB7FE9A0)
#define RPG_CLIENT_DRINKMAKERCHEERSUTIL_CONVERTTOPROTO_OFFSET UNITYSDK_OFFSET(0xB8166A0)
#define RPG_CLIENT_DRINKMAKERCHEERSUTIL_GETGROUPIDBYDRINKID_OFFSET UNITYSDK_OFFSET(0xB808F50)
#define RPG_CLIENT_DRINKMAKERCHEERSUTIL_GETTAGSOURCETYPEBYPROCEDURE_OFFSET UNITYSDK_OFFSET(0xB8165C0)
#define RPG_CLIENT_DRINKMAKERCHEERSUTIL_ISDRINKMAKERCHEERSACTIVITYOPEN_OFFSET UNITYSDK_OFFSET(0xB816770)
#define RPG_CLIENT_DRINKMAKERCHEERSUTIL_ISINGREDIENTTAGCOMBINATION_OFFSET UNITYSDK_OFFSET(0xB813C80)
#define RPG_CLIENT_DRINKMAKERCHEERSUTIL_ISPOSITIVEDRINK_OFFSET UNITYSDK_OFFSET(0xB811510)
#define RPG_CLIENT_DRINKMAKERCHEERSUTIL_ISTAGCOMBINATIONFORSOURCETYPE_OFFSET UNITYSDK_OFFSET(0xB813BE0)
#define RPG_CLIENT_DRINKMAKERCHEERSUTIL_PLAYTYPEDPERFORMANCEWITHLOCKINPUT_OFFSET UNITYSDK_OFFSET(0xB80DDA0)
#define RPG_CLIENT_DRINKMAKERCHEERSUTIL__ISTAGSFORSOURCETYPE_OFFSET UNITYSDK_OFFSET(0xB816500)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerCheersUtil_TypeDefinitionIndex = 59553;

	class DrinkMakerCheersUtil : public ::System::Object
	{
	public:
		static ::System::Boolean IsPositiveDrink(::RPG::GameCore::DrinkMakerCheersConfigRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::DrinkMakerCheersConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSUTIL_ISPOSITIVEDRINK_OFFSET))(a1);
		}

		static ::System::UInt32 GetGroupIdByDrinkId(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSUTIL_GETGROUPIDBYDRINKID_OFFSET))(a1);
		}

		static ::System::Boolean IsIngredientTagCombination(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSUTIL_ISINGREDIENTTAGCOMBINATION_OFFSET))(a1);
		}

		static ::System::Boolean IsTagCombinationForSourceType(::System::UInt32 a1, ::RPG::GameCore::DrinkMakerTagSourceType a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::GameCore::DrinkMakerTagSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSUTIL_ISTAGCOMBINATIONFORSOURCETYPE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::DrinkMakerBartendProcedure GetTagSourceTypeByProcedure(::RPG::GameCore::DrinkMakerTagSourceType a1)
		{
			return ((::RPG::Client::DrinkMakerBartendProcedure(*)(::RPG::GameCore::DrinkMakerTagSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSUTIL_GETTAGSOURCETYPEBYPROCEDURE_OFFSET))(a1);
		}

		static ::RPG::GameCore::DrinkMakerIngredientRow* ConvertToDrinkMakerIngredientRow(::RPG::GameCore::DrinkMakerCheersIngredientRow* a1)
		{
			return ((::RPG::GameCore::DrinkMakerIngredientRow*(*)(::RPG::GameCore::DrinkMakerCheersIngredientRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSUTIL_CONVERTTODRINKMAKERINGREDIENTROW_OFFSET))(a1);
		}

		static ::Class_1_7E9AC8675DA072FB* ConvertToProto(::RPG::Client::DrinkMakerBarDrink* a1)
		{
			return ((::Class_1_7E9AC8675DA072FB*(*)(::RPG::Client::DrinkMakerBarDrink*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSUTIL_CONVERTTOPROTO_OFFSET))(a1);
		}

		static ::System::Void PlayTypeDPerformanceWithLockInput(::System::UInt32 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSUTIL_PLAYTYPEDPERFORMANCEWITHLOCKINPUT_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDrinkMakerCheersActivityOpen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSUTIL_ISDRINKMAKERCHEERSACTIVITYOPEN_OFFSET))();
		}

		static ::System::Boolean _IsTagsForSourceType(::Il2CppArray<::System::UInt32>* a1, ::RPG::GameCore::DrinkMakerTagSourceType a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::UInt32>*, ::RPG::GameCore::DrinkMakerTagSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSUTIL__ISTAGSFORSOURCETYPE_OFFSET))(a1, a2);
		}
	};
}
