#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DrinkMakerTag; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB802930)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB802960)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA___C__GETALLVISIBLETAGS_B__15_0_OFFSET UNITYSDK_OFFSET(0xB802970)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA___C___CALCULATEQUANTIFYTAGS_B__35_0_OFFSET UNITYSDK_OFFSET(0xB8029D0)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBartendDrinkData___c_TypeDefinitionIndex = 59522;

	class DrinkMakerBartendDrinkData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::DrinkMakerTag*, ::System::Boolean>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::RPG::Client::DrinkMakerTag*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerBartendDrinkData___c_TypeDefinitionIndex)->GetStaticField(0x7CA0);
		}
		static ::System::Comparison_1<::RPG::Client::DrinkMakerTag*>** StaticGet___9__35_0()
		{
			return (::System::Comparison_1<::RPG::Client::DrinkMakerTag*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerBartendDrinkData___c_TypeDefinitionIndex)->GetStaticField(0x7CA8);
		}
		static ::RPG::Client::DrinkMakerBartendDrinkData___c** StaticGet___9()
		{
			return (::RPG::Client::DrinkMakerBartendDrinkData___c**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerBartendDrinkData___c_TypeDefinitionIndex)->GetStaticField(0x7CB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAllVisibleTags_b__15_0(::RPG::Client::DrinkMakerTag* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DrinkMakerTag*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA___C__GETALLVISIBLETAGS_B__15_0_OFFSET))(this, a1);
		}

		::System::Int32 __CalculateQuantifyTags_b__35_0(::RPG::Client::DrinkMakerTag* a1, ::RPG::Client::DrinkMakerTag* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DrinkMakerTag*, ::RPG::Client::DrinkMakerTag*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA___C___CALCULATEQUANTIFYTAGS_B__35_0_OFFSET))(this, a1, a2);
		}
	};
}
