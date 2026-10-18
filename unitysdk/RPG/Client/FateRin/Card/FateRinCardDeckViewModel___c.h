#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCEE7C00)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCEE7C40)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__GETLISTTRANSFEROBJECT_B__6_0_OFFSET UNITYSDK_OFFSET(0xCEE7C50)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__GETLISTTRANSFEROBJECT_B__6_1_OFFSET UNITYSDK_OFFSET(0xCEE7D60)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__GETLISTTRANSFEROBJECT_B__6_2_OFFSET UNITYSDK_OFFSET(0xCEE7E70)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinCardDeckViewModel___c_TypeDefinitionIndex = 81134;

	class FateRinCardDeckViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FateRinCardDeckViewModel___c_TypeDefinitionIndex)->GetStaticField(0x55670);
		}
		static ::RPG::Client::FateRin::Card::FateRinCardDeckViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::FateRin::Card::FateRinCardDeckViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(FateRinCardDeckViewModel___c_TypeDefinitionIndex)->GetStaticField(0x55678);
		}
		static ::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FateRinCardDeckViewModel___c_TypeDefinitionIndex)->GetStaticField(0x55680);
		}
		static ::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>** StaticGet___9__6_2()
		{
			return (::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FateRinCardDeckViewModel___c_TypeDefinitionIndex)->GetStaticField(0x55688);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetListTransferObject_b__6_0(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__GETLISTTRANSFEROBJECT_B__6_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetListTransferObject_b__6_1(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__GETLISTTRANSFEROBJECT_B__6_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetListTransferObject_b__6_2(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__GETLISTTRANSFEROBJECT_B__6_2_OFFSET))(this, a1);
		}
	};
}
