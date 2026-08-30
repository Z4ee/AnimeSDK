#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCFF4110)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCFF4150)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___C___CREATEACQUIREDLISTFROMOWNERTYPE_B__8_0_OFFSET UNITYSDK_OFFSET(0xCFF4160)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinSingleDeckEditViewModel___c_TypeDefinitionIndex = 79851;

	class FateRinSingleDeckEditViewModel___c : public ::System::Object
	{
	public:
		static ::RPG::Client::FateRin::Card::FateRinSingleDeckEditViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::FateRin::Card::FateRinSingleDeckEditViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(FateRinSingleDeckEditViewModel___c_TypeDefinitionIndex)->GetStaticField(0x4320);
		}
		static ::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FateRinSingleDeckEditViewModel___c_TypeDefinitionIndex)->GetStaticField(0x4328);
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
