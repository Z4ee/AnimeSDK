#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetAttachmentVisibility.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETATTACHMENTVISIBILITYFORUI_METHOD_4_342926A457F6114C_OFFSET UNITYSDK_OFFSET(0x176A78C0)
#define RPG_GAMECORE_SETATTACHMENTVISIBILITYFORUI_METHOD_4_87FFE8BF7AD95B37_OFFSET UNITYSDK_OFFSET(0x176A7690)
#define RPG_GAMECORE_SETATTACHMENTVISIBILITYFORUI__CTOR_OFFSET UNITYSDK_OFFSET(0x176A7660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAttachmentVisibilityForUI_TypeDefinitionIndex = 20572;

	class SetAttachmentVisibilityForUI : public ::RPG::GameCore::SetAttachmentVisibility
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTVISIBILITYFORUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_342926A457F6114C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAttachmentVisibilityForUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAttachmentVisibilityForUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTVISIBILITYFORUI_METHOD_4_342926A457F6114C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_87FFE8BF7AD95B37(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAttachmentVisibilityForUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAttachmentVisibilityForUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTVISIBILITYFORUI_METHOD_4_87FFE8BF7AD95B37_OFFSET))(a1, a2);
		}
	};
}
