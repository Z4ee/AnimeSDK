#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetAttachmentScale.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETATTACHMENTSCALEFORUI_METHOD_4_7B196E426C96604E_OFFSET UNITYSDK_OFFSET(0x176A6FA0)
#define RPG_GAMECORE_SETATTACHMENTSCALEFORUI_METHOD_4_E3577C54F5FE36A8_OFFSET UNITYSDK_OFFSET(0x176A7210)
#define RPG_GAMECORE_SETATTACHMENTSCALEFORUI__CTOR_OFFSET UNITYSDK_OFFSET(0x176A6F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAttachmentScaleForUI_TypeDefinitionIndex = 20574;

	class SetAttachmentScaleForUI : public ::RPG::GameCore::SetAttachmentScale
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTSCALEFORUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E3577C54F5FE36A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAttachmentScaleForUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAttachmentScaleForUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTSCALEFORUI_METHOD_4_E3577C54F5FE36A8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7B196E426C96604E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAttachmentScaleForUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAttachmentScaleForUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTSCALEFORUI_METHOD_4_7B196E426C96604E_OFFSET))(a1, a2);
		}
	};
}
