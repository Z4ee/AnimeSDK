#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_1824EF69C8E376A3;

#define MOLEMOLE_UIAVATARSPECIALAWAKENDIALOGPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18BF1FC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSpecialAwakenDialogPopWindowControllerContext_TypeDefinitionIndex = 82157;

	class UIAvatarSpecialAwakenDialogPopWindowControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_1824EF69C8E376A3* AvatarData; // 0x28
		::System::Boolean CanOperateAwake; // 0x30
		::System::Int32 AvatarAwakenID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENDIALOGPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
