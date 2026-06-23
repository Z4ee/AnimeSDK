#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3015A1CEA116F463_Enum_3_F7091D5FF381B6D1.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIINTERKNOTCLIENTINFODIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x177D2AC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotClientInfoDialogContext_TypeDefinitionIndex = 71689;

	class UIInterKnotClientInfoDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_3015A1CEA116F463_Enum_3_F7091D5FF381B6D1 status; // 0x28
		::System::Int32 questID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFODIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
