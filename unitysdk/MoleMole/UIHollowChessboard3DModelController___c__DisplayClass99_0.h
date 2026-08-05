#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS99_0__CTOR_OFFSET UNITYSDK_OFFSET(0x164CBF20)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS99_0__UIANIMPERFORM_B__0_OFFSET UNITYSDK_OFFSET(0x164CBF30)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessboard3DModelController___c__DisplayClass99_0_TypeDefinitionIndex = 63275;

	class UIHollowChessboard3DModelController___c__DisplayClass99_0 : public ::System::Object
	{
	public:
		::System::Action* onEnd; // 0x10
		::MoleMole::UIHollowChessboard3DModelController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS99_0__CTOR_OFFSET))(this);
		}

		::System::Void _UiAnimPerform_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS99_0__UIANIMPERFORM_B__0_OFFSET))(this);
		}
	};
}
