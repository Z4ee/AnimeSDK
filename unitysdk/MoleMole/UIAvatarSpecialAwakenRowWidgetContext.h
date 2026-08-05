#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_1824EF69C8E376A3;

#define MOLEMOLE_UIAVATARSPECIALAWAKENROWWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x196FA120)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSpecialAwakenRowWidgetContext_TypeDefinitionIndex = 85984;

	class UIAvatarSpecialAwakenRowWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_1824EF69C8E376A3* AvatarData; // 0x28
		::System::Int32 AvatarAwakenDesItemIndex; // 0x30
		::System::Int32 AvatarID; // 0x34
		::System::Int32 AvatarAwakenID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENROWWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
