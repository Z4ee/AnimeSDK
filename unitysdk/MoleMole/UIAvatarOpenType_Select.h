#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAvatarShowType.h"

#define MOLEMOLE_UIAVATAROPENTYPE_SELECT__CTOR_OFFSET UNITYSDK_OFFSET(0x12F4AFE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarOpenType_Select_TypeDefinitionIndex = 62437;

	class UIAvatarOpenType_Select : public ::MoleMole::UIAvatarShowType
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATAROPENTYPE_SELECT__CTOR_OFFSET))(this);
		}
	};
}
