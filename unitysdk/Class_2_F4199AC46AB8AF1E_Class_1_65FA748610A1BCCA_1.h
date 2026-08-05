#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class NotificationBadge; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_F4199AC46AB8AF1E_CLASS_1_65FA748610A1BCCA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17155550)

inline static constexpr unsigned int Class_2_F4199AC46AB8AF1E_Class_1_65FA748610A1BCCA_1_TypeDefinitionIndex = 52259;

class Class_2_F4199AC46AB8AF1E_Class_1_65FA748610A1BCCA_1 : public ::System::Object
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_1_0; // 0x10
	::MoleMole::NotificationBadge* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4199AC46AB8AF1E_CLASS_1_65FA748610A1BCCA_1__CTOR_OFFSET))(this);
	}
};
