#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraDuelTeamMemberSlot; }
namespace RPG::Client::Prop { class ChimeraDuelTeamMemberSlotView; }
namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC518830)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC518870)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE___C__ONENTER_B__19_0_OFFSET UNITYSDK_OFFSET(0xC518880)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE___C__ONENTER_B__19_1_OFFSET UNITYSDK_OFFSET(0xC518910)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleShopState___c_TypeDefinitionIndex = 72905;

	class ChimeraDuelMainPuzzleShopState___c : public ::System::Object
	{
	public:
		static ::RPG::Client::Prop::ChimeraDuelMainPuzzleShopState___c** StaticGet___9()
		{
			return (::RPG::Client::Prop::ChimeraDuelMainPuzzleShopState___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelMainPuzzleShopState___c_TypeDefinitionIndex)->GetStaticField(0x133D0);
		}
		static ::System::Func_2<::RPG::Client::Prop::ChimeraDuelTeamMemberSlotView*, ::RPG::Client::Prop::ChimeraDuelTeamMemberSlot*>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::RPG::Client::Prop::ChimeraDuelTeamMemberSlotView*, ::RPG::Client::Prop::ChimeraDuelTeamMemberSlot*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelMainPuzzleShopState___c_TypeDefinitionIndex)->GetStaticField(0x133D8);
		}
		static ::System::Func_2<::RPG::Client::Prop::ChimeraDuelTeamMemberSlot*, ::RPG::Client::Prop::DuelChimeraProxy*>** StaticGet___9__19_1()
		{
			return (::System::Func_2<::RPG::Client::Prop::ChimeraDuelTeamMemberSlot*, ::RPG::Client::Prop::DuelChimeraProxy*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelMainPuzzleShopState___c_TypeDefinitionIndex)->GetStaticField(0x133E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelTeamMemberSlot* _OnEnter_b__19_0(::RPG::Client::Prop::ChimeraDuelTeamMemberSlotView* a1)
		{
			return ((::RPG::Client::Prop::ChimeraDuelTeamMemberSlot*(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelTeamMemberSlotView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE___C__ONENTER_B__19_0_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::DuelChimeraProxy* _OnEnter_b__19_1(::RPG::Client::Prop::ChimeraDuelTeamMemberSlot* a1)
		{
			return ((::RPG::Client::Prop::DuelChimeraProxy*(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelTeamMemberSlot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE___C__ONENTER_B__19_1_OFFSET))(this, a1);
		}
	};
}
