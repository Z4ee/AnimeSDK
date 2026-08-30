#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::UI { class Dropdown; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEVERIFICATIONDIALOG_DROPDOWNINTERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3B5C3D0)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldAgeGateVerificationDialog_DropDownInteraction_TypeDefinitionIndex = 8741;

	struct alignas(8) HandheldAgeGateVerificationDialog_DropDownInteraction
	{
		::UnityEngine::UI::Dropdown* dropdown; // 0x10
		::UnityEngine::UI::Text* label; // 0x18
		::System::Boolean isInteracted; // 0x20
		::System::Int32 value; // 0x24

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEVERIFICATIONDIALOG_DROPDOWNINTERACTION__CTOR_OFFSET))(this, a1);
		}
	};
}
