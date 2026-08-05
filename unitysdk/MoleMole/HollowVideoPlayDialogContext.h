#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_HOLLOWVIDEOPLAYDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x179089A0)

namespace MoleMole
{
	inline static constexpr unsigned int HollowVideoPlayDialogContext_TypeDefinitionIndex = 86837;

	class HollowVideoPlayDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* videoUrl; // 0x28

		::System::Void _ctor(::System::String* videoUrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWVIDEOPLAYDIALOGCONTEXT__CTOR_OFFSET))(this, videoUrl);
		}
	};
}
