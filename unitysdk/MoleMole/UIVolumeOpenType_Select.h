#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAvatarShowType.h"

namespace System { class String; }

#define MOLEMOLE_UIVOLUMEOPENTYPE_SELECT__CTOR_OFFSET UNITYSDK_OFFSET(0x15ED17C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVolumeOpenType_Select_TypeDefinitionIndex = 63575;

	class UIVolumeOpenType_Select : public ::MoleMole::UIAvatarShowType
	{
	public:
		::System::String* volumePath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOLUMEOPENTYPE_SELECT__CTOR_OFFSET))(this);
		}
	};
}
