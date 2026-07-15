#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_VFX_PAGETEARCONFIG_METHOD_1_79A0DD953C362A58_OFFSET UNITYSDK_OFFSET(0x19F5B0C0)
#define RPGTOOLS_TIMELINE_VFX_PAGETEARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19F5B140)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int PageTearConfig_TypeDefinitionIndex = 46885;

	class PageTearConfig : public ::System::Object
	{
	public:
		::System::Boolean IsPlayerInvolved; // 0x10
		::System::String* FrontTexturePath; // 0x18
		::System::String* FrontTexturePathMale; // 0x20
		::System::String* FrontTexturePathFemale; // 0x28
		::System::String* BackTexturePath; // 0x30
		::System::String* OldPaperTexturePath; // 0x38
		::System::Single OldPaperIntensity; // 0x40
		::UnityEngine::Color OldPaperTint; // 0x44
		::System::Single EaseInDuation; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_PAGETEARCONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_79A0DD953C362A58(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_PAGETEARCONFIG_METHOD_1_79A0DD953C362A58_OFFSET))(this, a1);
		}
	};
}
