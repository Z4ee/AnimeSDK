#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1349;
namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }
namespace RPG::Client::Promises { class IPendingPromise; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5CA100)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW___C__DISPLAYCLASS7_0___PLAYDISCARDFLOW_B__0_OFFSET UNITYSDK_OFFSET(0x1B5CB130)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinDiscardCardFlowView___c__DisplayClass7_0_TypeDefinitionIndex = 79356;

	class FateRinDiscardCardFlowView___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* posCtrls; // 0x10
		::Class_0_16E4307DCC419505_1349* audioService; // 0x18
		::RPG::Client::Promises::IPendingPromise* pending; // 0x20
		::System::Int32 count; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void __PlayDiscardFlow_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW___C__DISPLAYCLASS7_0___PLAYDISCARDFLOW_B__0_OFFSET))(this, a1);
		}
	};
}
