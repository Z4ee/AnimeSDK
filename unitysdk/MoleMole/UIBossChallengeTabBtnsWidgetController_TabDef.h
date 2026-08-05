#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_38.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER_TABDEF__CTOR_OFFSET UNITYSDK_OFFSET(0x66EFE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeTabBtnsWidgetController_TabDef_TypeDefinitionIndex = 63013;

	struct alignas(8) UIBossChallengeTabBtnsWidgetController_TabDef
	{
		::Enum_3_DB663931210BBC27_38 PlayType; // 0x10
		::System::String* FadeInClip; // 0x18
		::System::String* FadeOutClip; // 0x20

		::System::Void _ctor(::Enum_3_DB663931210BBC27_38 playType, ::System::String* fadeIn, ::System::String* fadeOut)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_38, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER_TABDEF__CTOR_OFFSET))(this, playType, fadeIn, fadeOut);
		}
	};
}
