#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIMINISCAPERESULTINFOROWWIDGETCONTROLLER_RATINGROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14D4C200)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniscapeResultInfoRowWidgetController_RatingRowContext_TypeDefinitionIndex = 52801;

	class UIMiniscapeResultInfoRowWidgetController_RatingRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* TextKey; // 0x28
		::Foundation::AssetPath IconPath; // 0x30
		::System::Boolean IsComplete; // 0x40
		::System::Boolean IsPlayAnimAuto; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPERESULTINFOROWWIDGETCONTROLLER_RATINGROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
