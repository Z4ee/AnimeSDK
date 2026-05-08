#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTPATTERN_ONPATTERNNAMECHANGED_OFFSET UNITYSDK_OFFSET(0x17435860)
#define MOLEMOLE_CONFIG_ANIMATOREVENTPATTERN_ONREMOVETAG_OFFSET UNITYSDK_OFFSET(0x174358B0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTPATTERN__CTOR_OFFSET UNITYSDK_OFFSET(0x17435900)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventPattern_TypeDefinitionIndex = 53853;

	class AnimatorEventPattern : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::Il2CppArray<::MoleMole::Config::AnimatorEvent*>* animatorEvents; // 0x18
		::Il2CppArray<::MoleMole::Config::AnimatorEventEntry*>* entries; // 0x20
		::System::String* _prevName; // 0x28
		::System::Int32 curEntryNum; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTPATTERN__CTOR_OFFSET))(this);
		}

		::System::Void OnPatternNameChanged(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTPATTERN_ONPATTERNNAMECHANGED_OFFSET))(this, value);
		}

		::System::Void OnRemoveTag(::MoleMole::Config::AnimatorEventEntry* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTPATTERN_ONREMOVETAG_OFFSET))(this, value);
		}
	};
}
