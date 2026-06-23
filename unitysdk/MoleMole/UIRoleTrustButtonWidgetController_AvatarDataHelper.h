#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_013DB5EBD89922B2;
class Class_2_1A39E1B51756BF41;
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_AVATARDATAHELPER_GET_AVATARTEMPLATE_OFFSET UNITYSDK_OFFSET(0x11BA9D60)
#define MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_AVATARDATAHELPER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x11BA9DC0)
#define MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_AVATARDATAHELPER_SET_AVATARTEMPLATE_OFFSET UNITYSDK_OFFSET(0x11BA9D70)
#define MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_AVATARDATAHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x11BAA140)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleTrustButtonWidgetController_AvatarDataHelper_TypeDefinitionIndex = 43510;

	class UIRoleTrustButtonWidgetController_AvatarDataHelper : public ::System::Object
	{
	public:
		::Class_2_1A39E1B51756BF41* ElementIcon; // 0x10
		::Class_2_013DB5EBD89922B2* _avatarTemplate; // 0x18
		::UnityEngine::UI::Extension::UILocalizationText* RoleName; // 0x20
		::Class_2_1A39E1B51756BF41* ProfessionIcon; // 0x28

		::System::Void _ctor(::UnityEngine::UI::Extension::UILocalizationText* roleName, ::Class_2_1A39E1B51756BF41* professionIcon, ::Class_2_1A39E1B51756BF41* elementIcon)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*, ::Class_2_1A39E1B51756BF41*, ::Class_2_1A39E1B51756BF41*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_AVATARDATAHELPER__CTOR_OFFSET))(this, roleName, professionIcon, elementIcon);
		}

		::Class_2_013DB5EBD89922B2* get_avatarTemplate()
		{
			return ((::Class_2_013DB5EBD89922B2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_AVATARDATAHELPER_GET_AVATARTEMPLATE_OFFSET))(this);
		}

		::System::Void set_avatarTemplate(::Class_2_013DB5EBD89922B2* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_013DB5EBD89922B2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_AVATARDATAHELPER_SET_AVATARTEMPLATE_OFFSET))(this, value);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_AVATARDATAHELPER_REFRESHVIEW_OFFSET))(this);
		}
	};
}
