#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C9A620)
#define MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18C9A660)
#define MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER___C__REFRESHVIEW_B__18_0_OFFSET UNITYSDK_OFFSET(0x18C9A670)

namespace MoleMole
{
	inline static constexpr unsigned int UICameraHackScanDetailWidgetController___c_TypeDefinitionIndex = 45826;

	class UICameraHackScanDetailWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UICameraHackScanDetailWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UICameraHackScanDetailWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UICameraHackScanDetailWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x30B80);
		}
		static ::System::Action_1<::UnityEngine::UI::Extension::UILocalizationText*>** StaticGet___9__18_0()
		{
			return (::System::Action_1<::UnityEngine::UI::Extension::UILocalizationText*>**)Il2CppClass::FromTypeDefinitionIndex(UICameraHackScanDetailWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x30B88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__18_0(::UnityEngine::UI::Extension::UILocalizationText* content)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER___C__REFRESHVIEW_B__18_0_OFFSET))(this, content);
		}
	};
}
