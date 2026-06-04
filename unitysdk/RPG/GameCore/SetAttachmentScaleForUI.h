#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetAttachmentScale.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETATTACHMENTSCALEFORUI_METHOD_4_4EE550CD4733CB00_OFFSET UNITYSDK_OFFSET(0x19C28E20)
#define RPG_GAMECORE_SETATTACHMENTSCALEFORUI_METHOD_4_8F9B9BCA783AA1D1_OFFSET UNITYSDK_OFFSET(0x19C28BA0)
#define RPG_GAMECORE_SETATTACHMENTSCALEFORUI__CTOR_OFFSET UNITYSDK_OFFSET(0x19C28B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAttachmentScaleForUI_TypeDefinitionIndex = 21151;

	class SetAttachmentScaleForUI : public ::RPG::GameCore::SetAttachmentScale
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTSCALEFORUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4EE550CD4733CB00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAttachmentScaleForUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAttachmentScaleForUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTSCALEFORUI_METHOD_4_4EE550CD4733CB00_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8F9B9BCA783AA1D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAttachmentScaleForUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAttachmentScaleForUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTSCALEFORUI_METHOD_4_8F9B9BCA783AA1D1_OFFSET))(a1, a2);
		}
	};
}
