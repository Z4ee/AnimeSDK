#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_D375C91CCE5D3999;
namespace System { class String; }

#define MOLEMOLE_UIACTIVITYWALLPAPERAWARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x158A1BF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityWallpaperAwardContext_TypeDefinitionIndex = 58852;

	class UIActivityWallpaperAwardContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_D375C91CCE5D3999* activityData; // 0x28
		::System::String* VideoPath; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWALLPAPERAWARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
