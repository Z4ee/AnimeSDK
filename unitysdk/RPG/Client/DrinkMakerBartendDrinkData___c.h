#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DrinkMakerTag; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x94FF8D0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x94FF900)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA___C__GETALLVISIBLETAGS_B__15_0_OFFSET UNITYSDK_OFFSET(0x94FF910)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA___C___CALCULATEQUANTIFYTAGS_B__35_0_OFFSET UNITYSDK_OFFSET(0x94FF9D0)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBartendDrinkData___c_TypeDefinitionIndex = 51644;

	class DrinkMakerBartendDrinkData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::DrinkMakerTag*>** StaticGet___9__35_0()
		{
			return (::System::Comparison_1<::RPG::Client::DrinkMakerTag*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerBartendDrinkData___c_TypeDefinitionIndex)->GetStaticField(0x45300);
		}
		static ::RPG::Client::DrinkMakerBartendDrinkData___c** StaticGet___9()
		{
			return (::RPG::Client::DrinkMakerBartendDrinkData___c**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerBartendDrinkData___c_TypeDefinitionIndex)->GetStaticField(0x45308);
		}
		static ::System::Func_2<::RPG::Client::DrinkMakerTag*, ::System::Boolean>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::RPG::Client::DrinkMakerTag*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerBartendDrinkData___c_TypeDefinitionIndex)->GetStaticField(0x45310);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAllVisibleTags_b__15_0(::RPG::Client::DrinkMakerTag* tag)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DrinkMakerTag*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA___C__GETALLVISIBLETAGS_B__15_0_OFFSET))(this, tag);
		}

		::System::Int32 __CalculateQuantifyTags_b__35_0(::RPG::Client::DrinkMakerTag* a, ::RPG::Client::DrinkMakerTag* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DrinkMakerTag*, ::RPG::Client::DrinkMakerTag*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA___C___CALCULATEQUANTIFYTAGS_B__35_0_OFFSET))(this, a, b);
		}
	};
}
