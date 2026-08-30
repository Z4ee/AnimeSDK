#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBE9320)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBE9360)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL___C__REFRESHACQUIRE_B__1_0_OFFSET UNITYSDK_OFFSET(0x1CBE9370)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinHandbookCardOwnerViewModel___c_TypeDefinitionIndex = 79855;

	class FateRinHandbookCardOwnerViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FateRinHandbookCardOwnerViewModel___c_TypeDefinitionIndex)->GetStaticField(0x3660);
		}
		static ::RPG::Client::FateRin::Card::FateRinHandbookCardOwnerViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::FateRin::Card::FateRinHandbookCardOwnerViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(FateRinHandbookCardOwnerViewModel___c_TypeDefinitionIndex)->GetStaticField(0x3668);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshAcquire_b__1_0(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL___C__REFRESHACQUIRE_B__1_0_OFFSET))(this, a1);
		}
	};
}
