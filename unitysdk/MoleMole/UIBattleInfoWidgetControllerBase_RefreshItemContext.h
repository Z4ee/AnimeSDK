#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIBATTLEINFOWIDGETCONTROLLERBASE_REFRESHITEMCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x187CC900)

namespace MoleMole
{
	inline static constexpr unsigned int UIBattleInfoWidgetControllerBase_RefreshItemContext_TypeDefinitionIndex = 82343;

	class UIBattleInfoWidgetControllerBase_RefreshItemContext : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::UI::Extension::UILocalizationText*>* Texts; // 0x10
		::UnityEngine::UI::Extension::UILocalizationText* Title; // 0x18
		::UnityEngine::GameObject* Root; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEINFOWIDGETCONTROLLERBASE_REFRESHITEMCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
