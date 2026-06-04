#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB5D28B0)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB5D28F0)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE___C__REQUESTBUYSHOPITEM_B__9_0_OFFSET UNITYSDK_OFFSET(0xB5D2910)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE___C__REQUESTREFRESHSHOP_B__6_0_OFFSET UNITYSDK_OFFSET(0xB5D2900)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SpecialShopPhase___c_TypeDefinitionIndex = 70898;

	class SpecialShopPhase___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__9_0()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(SpecialShopPhase___c_TypeDefinitionIndex)->GetStaticField(0x607E0);
		}
		static ::RPG::Client::ChenLingBattle::SpecialShopPhase___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingBattle::SpecialShopPhase___c**)Il2CppClass::FromTypeDefinitionIndex(SpecialShopPhase___c_TypeDefinitionIndex)->GetStaticField(0x607E8);
		}
		static ::System::Action_1<::System::Exception*>** StaticGet___9__6_0()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(SpecialShopPhase___c_TypeDefinitionIndex)->GetStaticField(0x607F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE___C__CTOR_OFFSET))(this);
		}

		::System::Void _RequestRefreshShop_b__6_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE___C__REQUESTREFRESHSHOP_B__6_0_OFFSET))(this, a1);
		}

		::System::Void _RequestBuyShopItem_b__9_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE___C__REQUESTBUYSHOPITEM_B__9_0_OFFSET))(this, a1);
		}
	};
}
