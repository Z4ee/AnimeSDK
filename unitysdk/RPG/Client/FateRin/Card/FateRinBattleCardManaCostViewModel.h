#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"

class Class_1_1294FEF8E985635C;
class Class_1_B71FC14BA77C9F77;
class Class_1_F9FBCC956DFCF137_38;
namespace System { class String; }

#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDMANACOSTVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCED9490)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDMANACOSTVIEWMODEL_GET_MANACOST_OFFSET UNITYSDK_OFFSET(0xCED9570)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDMANACOSTVIEWMODEL_GET_UISTATE_OFFSET UNITYSDK_OFFSET(0xCED95C0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDMANACOSTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCED93E0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDMANACOSTVIEWMODEL__ONBATTLECARDMODELCHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0xCED9500)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinBattleCardManaCostViewModel_TypeDefinitionIndex = 81145;

	class FateRinBattleCardManaCostViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::Class_1_1294FEF8E985635C* _Messenger; // 0x20
		::Class_1_B71FC14BA77C9F77* _Model; // 0x28
		::System::Boolean _ObserveModelChanges; // 0x30
		::System::Boolean _IsDisposed; // 0x31

		::System::Void _ctor(::Class_1_B71FC14BA77C9F77* a1, ::Class_1_1294FEF8E985635C* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B71FC14BA77C9F77*, ::Class_1_1294FEF8E985635C*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDMANACOSTVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDMANACOSTVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnBattleCardModelChangeMessage(::Class_1_F9FBCC956DFCF137_38* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_38*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDMANACOSTVIEWMODEL__ONBATTLECARDMODELCHANGEMESSAGE_OFFSET))(this, a1);
		}

		::System::Int32 get_ManaCost()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDMANACOSTVIEWMODEL_GET_MANACOST_OFFSET))(this);
		}

		::System::String* get_UIState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDMANACOSTVIEWMODEL_GET_UISTATE_OFFSET))(this);
		}
	};
}
