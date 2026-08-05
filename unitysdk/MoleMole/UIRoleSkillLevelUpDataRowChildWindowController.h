#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Share/EAvatarSkillType.h"

class Class_2_1824EF69C8E376A3;
class Class_2_208CC9941471731A_190;
class Class_2_C79DBF052791DE21;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }

#define MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x179BE340)
#define MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x179BE3D0)
#define MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER_REFRESHPASIVEDESC_OFFSET UNITYSDK_OFFSET(0x179BEE90)
#define MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x179BE450)
#define MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER_SETPERCENTFORMAT_OFFSET UNITYSDK_OFFSET(0x179BEAF0)
#define MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x179BEF60)
#define MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x179BEFC0)
#define MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x179BF050)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSkillLevelUpDataRowChildWindowController_TypeDefinitionIndex = 56843;

	class UIRoleSkillLevelUpDataRowChildWindowController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_C79DBF052791DE21* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean RefreshView(::Class_2_208CC9941471731A_190* template_, ::Class_2_1824EF69C8E376A3* info, ::Share::EAvatarSkillType type, ::System::Boolean isUpgrade)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_190*, ::Class_2_1824EF69C8E376A3*, ::Share::EAvatarSkillType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this, template_, info, type, isUpgrade);
		}

		::System::Void SetPercentFormat(::System::String* strVal, ::UnityEngine::UI::Extension::UIDynamicNumberLabel* text, ::System::Int32 skillPropertyTypeInt, ::System::Boolean isUpgrade)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::UI::Extension::UIDynamicNumberLabel*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER_SETPERCENTFORMAT_OFFSET))(this, strVal, text, skillPropertyTypeInt, isUpgrade);
		}

		::System::Void RefreshPasiveDesc(::System::String* desc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER_REFRESHPASIVEDESC_OFFSET))(this, desc);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPDATAROWCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
