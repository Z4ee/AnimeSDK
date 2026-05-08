#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTTEXTURESHEETSEQUENCEENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x17D100C0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTTEXTURESHEETSEQUENCEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x17D10140)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventInterruptTextureSheetSequenceEntry_TypeDefinitionIndex = 63735;

	class AnimatorEventInterruptTextureSheetSequenceEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* MeshPath; // 0x58
		::System::String* TextureSheetKey; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTTEXTURESHEETSEQUENCEENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTTEXTURESHEETSEQUENCEENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
