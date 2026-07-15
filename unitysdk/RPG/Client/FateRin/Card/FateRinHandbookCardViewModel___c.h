#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Card { class IFateRinHandbookCardOwnerViewModel; }
namespace RPG::Client::FateRin::Card { class IFateRinHandbookCardTabViewModel; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4A7800)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4A7840)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL___C___GETCARDVIEWMODELLISTBYTABOWNERTYPE_B__5_0_OFFSET UNITYSDK_OFFSET(0x1B4A7CF0)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL___C___REFRESHVIEWMODEL_B__3_0_OFFSET UNITYSDK_OFFSET(0x1B4A7850)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL___C___REFRESHVIEWMODEL_B__3_1_OFFSET UNITYSDK_OFFSET(0x1B4A7870)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL___C___REFRESHVIEWMODEL_B__3_2_OFFSET UNITYSDK_OFFSET(0x1B4A7890)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinHandbookCardViewModel___c_TypeDefinitionIndex = 76232;

	class FateRinHandbookCardViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel*, ::RPG::GameCore::FateRinHouguOwnerType>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel*, ::RPG::GameCore::FateRinHouguOwnerType>**)Il2CppClass::FromTypeDefinitionIndex(FateRinHandbookCardViewModel___c_TypeDefinitionIndex)->GetStaticField(0x9070);
		}
		static ::System::Func_2<::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FateRinHandbookCardViewModel___c_TypeDefinitionIndex)->GetStaticField(0x9078);
		}
		static ::RPG::Client::FateRin::Card::FateRinHandbookCardViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::FateRin::Card::FateRinHandbookCardViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(FateRinHandbookCardViewModel___c_TypeDefinitionIndex)->GetStaticField(0x9080);
		}
		static ::System::Comparison_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel*>** StaticGet___9__3_2()
		{
			return (::System::Comparison_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel*>**)Il2CppClass::FromTypeDefinitionIndex(FateRinHandbookCardViewModel___c_TypeDefinitionIndex)->GetStaticField(0x9088);
		}
		static ::System::Func_2<::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FateRinHandbookCardViewModel___c_TypeDefinitionIndex)->GetStaticField(0x9090);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __RefreshViewModel_b__3_0(::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL___C___REFRESHVIEWMODEL_B__3_0_OFFSET))(this, a1);
		}

		::RPG::GameCore::FateRinHouguOwnerType __RefreshViewModel_b__3_1(::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel* a1)
		{
			return ((::RPG::GameCore::FateRinHouguOwnerType(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL___C___REFRESHVIEWMODEL_B__3_1_OFFSET))(this, a1);
		}

		::System::Int32 __RefreshViewModel_b__3_2(::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel* a1, ::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel*, ::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL___C___REFRESHVIEWMODEL_B__3_2_OFFSET))(this, a1, a2);
		}

		::System::Boolean __GetCardViewModelListByTabOwnerType_b__5_0(::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL___C___GETCARDVIEWMODELLISTBYTABOWNERTYPE_B__5_0_OFFSET))(this, a1);
		}
	};
}
