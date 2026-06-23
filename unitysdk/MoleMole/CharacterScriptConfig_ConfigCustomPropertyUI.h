#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUI__CTOR_OFFSET UNITYSDK_OFFSET(0x11082540)

namespace MoleMole
{
	inline static constexpr unsigned int CharacterScriptConfig_ConfigCustomPropertyUI_TypeDefinitionIndex = 72228;

	class CharacterScriptConfig_ConfigCustomPropertyUI : public ::System::Object
	{
	public:
		::System::String* UICtrlName; // 0x10
		::System::String* HudCustomProperty; // 0x18
		::System::String* ExtraMaterialPath; // 0x20
		::System::String* MaxValueMaterialPath; // 0x28
		::System::String* HudEffectFadeOutAnimClip; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* CustomPropertyRedirections; // 0x38
		::System::String* HudEffectPath; // 0x40
		::System::String* HudEffectFadeInAnimClip; // 0x48
		::System::String* HudEffectLoopAnimClip; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUI__CTOR_OFFSET))(this);
		}
	};
}
