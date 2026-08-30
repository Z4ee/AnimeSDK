#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LightConeQuickGrowCalculator_ExpSourceRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD443540)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD443580)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C___BUILDEXPSOURCES_B__45_0_OFFSET UNITYSDK_OFFSET(0xD4435B0)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C___TRIMEXPOVERFLOW_B__41_0_OFFSET UNITYSDK_OFFSET(0xD443590)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeQuickGrowCalculator___c_TypeDefinitionIndex = 65787;

	class LightConeQuickGrowCalculator___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::GameCore::ItemConfig*>** StaticGet___9__41_0()
		{
			return (::System::Predicate_1<::RPG::GameCore::ItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(LightConeQuickGrowCalculator___c_TypeDefinitionIndex)->GetStaticField(0x5D7B0);
		}
		static ::System::Comparison_1<::RPG::Client::LightConeQuickGrowCalculator_ExpSourceRow*>** StaticGet___9__45_0()
		{
			return (::System::Comparison_1<::RPG::Client::LightConeQuickGrowCalculator_ExpSourceRow*>**)Il2CppClass::FromTypeDefinitionIndex(LightConeQuickGrowCalculator___c_TypeDefinitionIndex)->GetStaticField(0x5D7B8);
		}
		static ::RPG::Client::LightConeQuickGrowCalculator___c** StaticGet___9()
		{
			return (::RPG::Client::LightConeQuickGrowCalculator___c**)Il2CppClass::FromTypeDefinitionIndex(LightConeQuickGrowCalculator___c_TypeDefinitionIndex)->GetStaticField(0x5D7C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __TrimExpOverflow_b__41_0(::RPG::GameCore::ItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C___TRIMEXPOVERFLOW_B__41_0_OFFSET))(this, a1);
		}

		::System::Int32 __BuildExpSources_b__45_0(::RPG::Client::LightConeQuickGrowCalculator_ExpSourceRow* a1, ::RPG::Client::LightConeQuickGrowCalculator_ExpSourceRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::LightConeQuickGrowCalculator_ExpSourceRow*, ::RPG::Client::LightConeQuickGrowCalculator_ExpSourceRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C___BUILDEXPSOURCES_B__45_0_OFFSET))(this, a1, a2);
		}
	};
}
