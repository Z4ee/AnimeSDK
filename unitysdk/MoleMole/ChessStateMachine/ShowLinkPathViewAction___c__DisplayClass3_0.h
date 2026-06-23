#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5A6771CD0CA2718D;
namespace MoleMole::ChessStateMachine { class ShowLinkPathViewAction; }

#define MOLEMOLE_CHESSSTATEMACHINE_SHOWLINKPATHVIEWACTION___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12B0EEC0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWLINKPATHVIEWACTION___C__DISPLAYCLASS3_0__RUN_B__0_OFFSET UNITYSDK_OFFSET(0x12B0EED0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ShowLinkPathViewAction___c__DisplayClass3_0_TypeDefinitionIndex = 74494;

	class ShowLinkPathViewAction___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::MoleMole::ChessStateMachine::ShowLinkPathViewAction* __4__this; // 0x10
		::System::Int32 screenIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWLINKPATHVIEWACTION___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _Run_b__0(::Class_1_5A6771CD0CA2718D* player)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A6771CD0CA2718D*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWLINKPATHVIEWACTION___C__DISPLAYCLASS3_0__RUN_B__0_OFFSET))(this, player);
		}
	};
}
