#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DrinkMakerBartendProcedure.h"
#include "unitysdk/RPG/GameCore/DrinkMakerTagSourceType.h"
#include "unitysdk/System/Object.h"

class Class_1_0D91A65E12C64271_1;
namespace RPG::Client { class DrinkMakerBarDrink; }
namespace RPG::GameCore { class DrinkMakerCheersConfigRow; }
namespace RPG::GameCore { class DrinkMakerCheersIngredientRow; }
namespace RPG::GameCore { class DrinkMakerIngredientRow; }
namespace System { class Action; }

#define RPG_CLIENT_DRINKMAKERCHEERSUTIL_CONVERTTODRINKMAKERINGREDIENTROW_OFFSET UNITYSDK_OFFSET(0x9502BE0)
#define RPG_CLIENT_DRINKMAKERCHEERSUTIL_CONVERTTOPROTO_OFFSET UNITYSDK_OFFSET(0x9512E00)
#define RPG_CLIENT_DRINKMAKERCHEERSUTIL_GETGROUPIDBYDRINKID_OFFSET UNITYSDK_OFFSET(0x9505860)
#define RPG_CLIENT_DRINKMAKERCHEERSUTIL_GETTAGSOURCETYPEBYPROCEDURE_OFFSET UNITYSDK_OFFSET(0x9512D20)
#define RPG_CLIENT_DRINKMAKERCHEERSUTIL_ISDRINKMAKERCHEERSACTIVITYOPEN_OFFSET UNITYSDK_OFFSET(0x9512EE0)
#define RPG_CLIENT_DRINKMAKERCHEERSUTIL_ISINGREDIENTTAGCOMBINATION_OFFSET UNITYSDK_OFFSET(0x95103F0)
#define RPG_CLIENT_DRINKMAKERCHEERSUTIL_ISPOSITIVEDRINK_OFFSET UNITYSDK_OFFSET(0x950E050)
#define RPG_CLIENT_DRINKMAKERCHEERSUTIL_ISTAGCOMBINATIONFORSOURCETYPE_OFFSET UNITYSDK_OFFSET(0x9510350)
#define RPG_CLIENT_DRINKMAKERCHEERSUTIL_PLAYTYPEDPERFORMANCEWITHLOCKINPUT_OFFSET UNITYSDK_OFFSET(0x950AAD0)
#define RPG_CLIENT_DRINKMAKERCHEERSUTIL__ISTAGSFORSOURCETYPE_OFFSET UNITYSDK_OFFSET(0x9512C40)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerCheersUtil_TypeDefinitionIndex = 51675;

	class DrinkMakerCheersUtil : public ::System::Object
	{
	public:
		static ::System::Boolean IsPositiveDrink(::RPG::GameCore::DrinkMakerCheersConfigRow* configRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::DrinkMakerCheersConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSUTIL_ISPOSITIVEDRINK_OFFSET))(configRow);
		}

		static ::System::UInt32 GetGroupIdByDrinkId(::System::UInt32 drinkId)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSUTIL_GETGROUPIDBYDRINKID_OFFSET))(drinkId);
		}

		static ::System::Boolean IsIngredientTagCombination(::System::UInt32 tagCombinationConfigId)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSUTIL_ISINGREDIENTTAGCOMBINATION_OFFSET))(tagCombinationConfigId);
		}

		static ::System::Boolean IsTagCombinationForSourceType(::System::UInt32 tagCombinationConfigId, ::RPG::GameCore::DrinkMakerTagSourceType tagSourceType)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::GameCore::DrinkMakerTagSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSUTIL_ISTAGCOMBINATIONFORSOURCETYPE_OFFSET))(tagCombinationConfigId, tagSourceType);
		}

		static ::RPG::Client::DrinkMakerBartendProcedure GetTagSourceTypeByProcedure(::RPG::GameCore::DrinkMakerTagSourceType tagSourceType)
		{
			return ((::RPG::Client::DrinkMakerBartendProcedure(*)(::RPG::GameCore::DrinkMakerTagSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSUTIL_GETTAGSOURCETYPEBYPROCEDURE_OFFSET))(tagSourceType);
		}

		static ::RPG::GameCore::DrinkMakerIngredientRow* ConvertToDrinkMakerIngredientRow(::RPG::GameCore::DrinkMakerCheersIngredientRow* cheersIngredientRow)
		{
			return ((::RPG::GameCore::DrinkMakerIngredientRow*(*)(::RPG::GameCore::DrinkMakerCheersIngredientRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSUTIL_CONVERTTODRINKMAKERINGREDIENTROW_OFFSET))(cheersIngredientRow);
		}

		static ::Class_1_0D91A65E12C64271_1* ConvertToProto(::RPG::Client::DrinkMakerBarDrink* drinkMakerBarDrink)
		{
			return ((::Class_1_0D91A65E12C64271_1*(*)(::RPG::Client::DrinkMakerBarDrink*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSUTIL_CONVERTTOPROTO_OFFSET))(drinkMakerBarDrink);
		}

		static ::System::Void PlayTypeDPerformanceWithLockInput(::System::UInt32 performanceId, ::System::Action* onPerformanceEnd)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSUTIL_PLAYTYPEDPERFORMANCEWITHLOCKINPUT_OFFSET))(performanceId, onPerformanceEnd);
		}

		static ::System::Boolean IsDrinkMakerCheersActivityOpen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSUTIL_ISDRINKMAKERCHEERSACTIVITYOPEN_OFFSET))();
		}

		static ::System::Boolean _IsTagsForSourceType(::Il2CppArray<::System::UInt32>* tags, ::RPG::GameCore::DrinkMakerTagSourceType tagSourceType)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::UInt32>*, ::RPG::GameCore::DrinkMakerTagSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSUTIL__ISTAGSFORSOURCETYPE_OFFSET))(tags, tagSourceType);
		}
	};
}
