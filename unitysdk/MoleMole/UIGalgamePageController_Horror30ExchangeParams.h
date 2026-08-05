#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGalgamePageController_ImgExchangeTypeParams.h"

namespace System { class String; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_HORROR30EXCHANGEPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x19390E50)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController_Horror30ExchangeParams_TypeDefinitionIndex = 62825;

	class UIGalgamePageController_Horror30ExchangeParams : public ::MoleMole::UIGalgamePageController_ImgExchangeTypeParams
	{
	public:
		::System::String* picFadeOutClip; // 0x10
		::System::String* picFadeInClip; // 0x18

		::System::Void _ctor(::System::String* fadeOut, ::System::String* fadeIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_HORROR30EXCHANGEPARAMS__CTOR_OFFSET))(this, fadeOut, fadeIn);
		}
	};
}
