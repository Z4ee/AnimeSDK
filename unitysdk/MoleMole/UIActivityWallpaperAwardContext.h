#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_D375C91CCE5D3999;
namespace System { class String; }

#define MOLEMOLE_UIACTIVITYWALLPAPERAWARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x195500F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityWallpaperAwardContext_TypeDefinitionIndex = 81571;

	class UIActivityWallpaperAwardContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* VideoPath; // 0x28
		::Class_1_D375C91CCE5D3999* activityData; // 0x30
		::System::Int32 OverrideTaskIndex; // 0x38
		::System::Boolean HideReward; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWALLPAPERAWARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
