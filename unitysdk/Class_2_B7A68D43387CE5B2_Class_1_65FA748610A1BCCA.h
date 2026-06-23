#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class NotificationBadge; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_B7A68D43387CE5B2_CLASS_1_65FA748610A1BCCA__CTOR_OFFSET UNITYSDK_OFFSET(0x14FC0820)

inline static constexpr unsigned int Class_2_B7A68D43387CE5B2_Class_1_65FA748610A1BCCA_TypeDefinitionIndex = 41531;

class Class_2_B7A68D43387CE5B2_Class_1_65FA748610A1BCCA : public ::System::Object
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_1_1; // 0x10
	::MoleMole::NotificationBadge* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7A68D43387CE5B2_CLASS_1_65FA748610A1BCCA__CTOR_OFFSET))(this);
	}
};
