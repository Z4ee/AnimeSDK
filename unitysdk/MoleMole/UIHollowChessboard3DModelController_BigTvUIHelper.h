#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7609C87F8335DE37_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWindowController; }

#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_BIGTVUIHELPER_OPENUI_OFFSET UNITYSDK_OFFSET(0x167C44A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessboard3DModelController_BigTvUIHelper_TypeDefinitionIndex = 58385;

	class UIHollowChessboard3DModelController_BigTvUIHelper : public ::System::Object
	{
	public:
		static ::MoleMole::UIWindowController* OpenUI(::Enum_3_7609C87F8335DE37_2 type)
		{
			return ((::MoleMole::UIWindowController*(*)(::Enum_3_7609C87F8335DE37_2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_BIGTVUIHELPER_OPENUI_OFFSET))(type);
		}
	};
}
