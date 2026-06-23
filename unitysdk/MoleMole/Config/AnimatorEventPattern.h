#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTPATTERN_CHECKENTRIES_OFFSET UNITYSDK_OFFSET(0x170318D0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTPATTERN_ONPATTERNNAMECHANGED_OFFSET UNITYSDK_OFFSET(0x17031880)
#define MOLEMOLE_CONFIG_ANIMATOREVENTPATTERN_ONREMOVETAG_OFFSET UNITYSDK_OFFSET(0x17031970)
#define MOLEMOLE_CONFIG_ANIMATOREVENTPATTERN__CTOR_OFFSET UNITYSDK_OFFSET(0x170319C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventPattern_TypeDefinitionIndex = 71425;

	class AnimatorEventPattern : public ::System::Object
	{
	public:
		::Il2CppArray<::MoleMole::Config::AnimatorEvent*>* animatorEvents; // 0x10
		::System::String* _prevName; // 0x18
		::System::String* name; // 0x20
		::Il2CppArray<::MoleMole::Config::AnimatorEventEntry*>* entries; // 0x28
		::System::Int32 curEntryNum; // 0x30
		::System::Int32 _allocatedEntries; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTPATTERN__CTOR_OFFSET))(this);
		}

		::System::Void OnPatternNameChanged(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTPATTERN_ONPATTERNNAMECHANGED_OFFSET))(this, value);
		}

		::System::Void CheckEntries()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTPATTERN_CHECKENTRIES_OFFSET))(this);
		}

		::System::Void OnRemoveTag(::MoleMole::Config::AnimatorEventEntry* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTPATTERN_ONREMOVETAG_OFFSET))(this, value);
		}
	};
}
