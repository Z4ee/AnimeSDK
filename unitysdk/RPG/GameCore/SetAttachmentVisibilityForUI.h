#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetAttachmentVisibility.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETATTACHMENTVISIBILITYFORUI_METHOD_4_7FB01F5C3EA91D31_OFFSET UNITYSDK_OFFSET(0x19C292C0)
#define RPG_GAMECORE_SETATTACHMENTVISIBILITYFORUI_METHOD_4_8483B62FEB43D756_OFFSET UNITYSDK_OFFSET(0x19C29500)
#define RPG_GAMECORE_SETATTACHMENTVISIBILITYFORUI__CTOR_OFFSET UNITYSDK_OFFSET(0x19C29290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAttachmentVisibilityForUI_TypeDefinitionIndex = 21149;

	class SetAttachmentVisibilityForUI : public ::RPG::GameCore::SetAttachmentVisibility
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTVISIBILITYFORUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8483B62FEB43D756(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAttachmentVisibilityForUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAttachmentVisibilityForUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTVISIBILITYFORUI_METHOD_4_8483B62FEB43D756_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7FB01F5C3EA91D31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAttachmentVisibilityForUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAttachmentVisibilityForUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTVISIBILITYFORUI_METHOD_4_7FB01F5C3EA91D31_OFFSET))(a1, a2);
		}
	};
}
