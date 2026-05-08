#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIACTIVITYRHYTHMINTERACTWIDGETCONTROLLER_ANIMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17E4B6F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityRhythmInteractWidgetController_AnimState_TypeDefinitionIndex = 71846;

	class UIActivityRhythmInteractWidgetController_AnimState : public ::System::Object
	{
	public:
		::System::String* clipName; // 0x10
		::System::Single animSpeed; // 0x18
		::System::Boolean isPlayingWhenPause; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMINTERACTWIDGETCONTROLLER_ANIMSTATE__CTOR_OFFSET))(this);
		}
	};
}
