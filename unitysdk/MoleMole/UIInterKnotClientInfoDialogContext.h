#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E664D9FA0EBE07B0_Enum_3_F7091D5FF381B6D1.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIINTERKNOTCLIENTINFODIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14FFBC00)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotClientInfoDialogContext_TypeDefinitionIndex = 46883;

	class UIInterKnotClientInfoDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 questID; // 0x28
		::Class_2_E664D9FA0EBE07B0_Enum_3_F7091D5FF381B6D1 status; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFODIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
