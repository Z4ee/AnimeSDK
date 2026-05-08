#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoHollowResultPageConfig_HueAndLight.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowChessPieceResult3DModelController; }

#define MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15A3A450)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessPieceResult3DModelController___c__DisplayClass17_0_TypeDefinitionIndex = 78398;

	class UIHollowChessPieceResult3DModelController___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowChessPieceResult3DModelController* __4__this; // 0x10
		::System::Single hue2; // 0x18
		::System::Single saturationCon; // 0x1C
		::MonoHollowResultPageConfig_HueAndLight hue1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECERESULT3DMODELCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}
	};
}
