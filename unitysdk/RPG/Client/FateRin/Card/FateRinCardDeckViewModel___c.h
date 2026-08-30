#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBE1B30)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBE1B70)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__GETLISTTRANSFEROBJECT_B__5_0_OFFSET UNITYSDK_OFFSET(0x1CBE1B80)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__GETLISTTRANSFEROBJECT_B__5_1_OFFSET UNITYSDK_OFFSET(0x1CBE1C90)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__GETLISTTRANSFEROBJECT_B__5_2_OFFSET UNITYSDK_OFFSET(0x1CBE1DA0)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinCardDeckViewModel___c_TypeDefinitionIndex = 79809;

	class FateRinCardDeckViewModel___c : public ::System::Object
	{
	public:
		static ::RPG::Client::FateRin::Card::FateRinCardDeckViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::FateRin::Card::FateRinCardDeckViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(FateRinCardDeckViewModel___c_TypeDefinitionIndex)->GetStaticField(0x2F40);
		}
		static ::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FateRinCardDeckViewModel___c_TypeDefinitionIndex)->GetStaticField(0x2F48);
		}
		static ::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FateRinCardDeckViewModel___c_TypeDefinitionIndex)->GetStaticField(0x2F50);
		}
		static ::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>** StaticGet___9__5_2()
		{
			return (::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FateRinCardDeckViewModel___c_TypeDefinitionIndex)->GetStaticField(0x2F58);
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
