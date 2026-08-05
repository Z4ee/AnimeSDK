#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIPHOTOWALLSWITCHCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1798DE50)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoWallSwitchContext_TypeDefinitionIndex = 83705;

	class UIPhotoWallSwitchContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnSave; // 0x28
		::System::Boolean IsDirty; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLSWITCHCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
