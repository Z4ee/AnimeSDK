#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3790F0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A379130)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___C___CREATEACQUIREDLISTFROMOWNERTYPE_B__8_0_OFFSET UNITYSDK_OFFSET(0x1A379140)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinSingleDeckEditViewModel___c_TypeDefinitionIndex = 76217;

	class FateRinSingleDeckEditViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FateRinSingleDeckEditViewModel___c_TypeDefinitionIndex)->GetStaticField(0xA1D0);
		}
		static ::RPG::Client::FateRin::Card::FateRinSingleDeckEditViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::FateRin::Card::FateRinSingleDeckEditViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(FateRinSingleDeckEditViewModel___c_TypeDefinitionIndex)->GetStaticField(0xA1D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 __CreateAcquiredListFromOwnerType_b__8_0(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___C___CREATEACQUIREDLISTFROMOWNERTYPE_B__8_0_OFFSET))(this, a1);
		}
	};
}
