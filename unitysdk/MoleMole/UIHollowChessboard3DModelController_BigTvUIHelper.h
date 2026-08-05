#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7609C87F8335DE37_6.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWindowController; }

#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_BIGTVUIHELPER_OPENUI_OFFSET UNITYSDK_OFFSET(0x18366350)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessboard3DModelController_BigTvUIHelper_TypeDefinitionIndex = 63280;

	class UIHollowChessboard3DModelController_BigTvUIHelper : public ::System::Object
	{
	public:
		static ::MoleMole::UIWindowController* OpenUI(::Enum_3_7609C87F8335DE37_6 type)
		{
			return ((::MoleMole::UIWindowController*(*)(::Enum_3_7609C87F8335DE37_6))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_BIGTVUIHELPER_OPENUI_OFFSET))(type);
		}
	};
}
