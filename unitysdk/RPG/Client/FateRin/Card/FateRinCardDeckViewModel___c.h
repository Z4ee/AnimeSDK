#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCFE2760)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCFE27A0)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__GETLISTTRANSFEROBJECT_B__5_0_OFFSET UNITYSDK_OFFSET(0xCFE27B0)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__GETLISTTRANSFEROBJECT_B__5_1_OFFSET UNITYSDK_OFFSET(0xCFE28C0)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__GETLISTTRANSFEROBJECT_B__5_2_OFFSET UNITYSDK_OFFSET(0xCFE29D0)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinCardDeckViewModel___c_TypeDefinitionIndex = 79810;

	class FateRinCardDeckViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FateRinCardDeckViewModel___c_TypeDefinitionIndex)->GetStaticField(0x3400);
		}
		static ::RPG::Client::FateRin::Card::FateRinCardDeckViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::FateRin::Card::FateRinCardDeckViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(FateRinCardDeckViewModel___c_TypeDefinitionIndex)->GetStaticField(0x3408);
		}
		static ::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FateRinCardDeckViewModel___c_TypeDefinitionIndex)->GetStaticField(0x3410);
		}
		static ::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>** StaticGet___9__5_2()
		{
			return (::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FateRinCardDeckViewModel___c_TypeDefinitionIndex)->GetStaticField(0x3418);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetListTransferObject_b__5_0(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__GETLISTTRANSFEROBJECT_B__5_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetListTransferObject_b__5_1(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__GETLISTTRANSFEROBJECT_B__5_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetListTransferObject_b__5_2(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__GETLISTTRANSFEROBJECT_B__5_2_OFFSET))(this, a1);
		}
	};
}
