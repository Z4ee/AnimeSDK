#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTDESCWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18BF1F70)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSpecialAwakenContrastDescWidgetControllerContext_TypeDefinitionIndex = 49027;

	class UIAvatarSpecialAwakenContrastDescWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* TitleKey; // 0x28
		::System::String* DesKey; // 0x30
		::System::Int32 SkillType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTDESCWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
