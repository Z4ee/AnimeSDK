#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_ANIMATORCLIPOVERRIDE_ANIMCLIPOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0xB314490)

namespace RPG::Client
{
	inline static constexpr unsigned int AnimatorClipOverride_AnimClipOverride_TypeDefinitionIndex = 65783;

	class AnimatorClipOverride_AnimClipOverride : public ::System::Object
	{
	public:
		::System::String* ClipName; // 0x10
		::System::String* OverrideClipPath; // 0x18
		::System::String* EditorTmpOverrideClipPath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORCLIPOVERRIDE_ANIMCLIPOVERRIDE__CTOR_OFFSET))(this);
		}
	};
}
