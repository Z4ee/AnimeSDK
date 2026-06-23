#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMonoController.h"

#define MOLEMOLE_UIAVATARSPECIALAWAKENPAGEBGCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1FB1E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSpecialAwakenPageBgController_TypeDefinitionIndex = 67303;

	class UIAvatarSpecialAwakenPageBgController : public ::MoleMole::UIMonoController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENPAGEBGCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
