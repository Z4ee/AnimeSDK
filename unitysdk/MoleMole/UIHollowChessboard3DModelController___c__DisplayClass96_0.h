#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_AF65C3A968E836D2;
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS96_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14682250)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS96_0__TRYGENTEMPCHESSBOARD_B__0_OFFSET UNITYSDK_OFFSET(0x14682260)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessboard3DModelController___c__DisplayClass96_0_TypeDefinitionIndex = 44033;

	class UIHollowChessboard3DModelController___c__DisplayClass96_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowChessboard3DModelController* __4__this; // 0x10
		::System::Action* buildCallBack; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS96_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryGenTempChessboard_b__0(::Class_5_AF65C3A968E836D2* c)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_AF65C3A968E836D2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS96_0__TRYGENTEMPCHESSBOARD_B__0_OFFSET))(this, c);
		}
	};
}
