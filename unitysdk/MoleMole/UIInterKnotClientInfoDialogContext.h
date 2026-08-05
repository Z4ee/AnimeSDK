#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_696E0C6E8A7D9C84_Enum_3_F7091D5FF381B6D1.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIINTERKNOTCLIENTINFODIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x184B2B50)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotClientInfoDialogContext_TypeDefinitionIndex = 48051;

	class UIInterKnotClientInfoDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_696E0C6E8A7D9C84_Enum_3_F7091D5FF381B6D1 status; // 0x28
		::System::Int32 questID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFODIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
