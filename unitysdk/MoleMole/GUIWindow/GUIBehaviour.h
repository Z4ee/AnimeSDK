#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }

#define MOLEMOLE_GUIWINDOW_GUIBEHAVIOUR_GET_INS_OFFSET UNITYSDK_OFFSET(0x15128CA0)
#define MOLEMOLE_GUIWINDOW_GUIBEHAVIOUR_ONGUI_OFFSET UNITYSDK_OFFSET(0x15128EF0)
#define MOLEMOLE_GUIWINDOW_GUIBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x15128F40)

namespace MoleMole::GUIWindow
{
	inline static constexpr unsigned int GUIBehaviour_TypeDefinitionIndex = 60316;

	class GUIBehaviour : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MoleMole::GUIWindow::GUIBehaviour** StaticGet_Field_5_0()
		{
			return (::MoleMole::GUIWindow::GUIBehaviour**)Il2CppClass::FromTypeDefinitionIndex(GUIBehaviour_TypeDefinitionIndex)->GetStaticField(0x40F80);
		}
		::System::Action* onGUI; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUIWINDOW_GUIBEHAVIOUR__CTOR_OFFSET))(this);
		}

		static ::MoleMole::GUIWindow::GUIBehaviour* get_Ins()
		{
			return ((::MoleMole::GUIWindow::GUIBehaviour*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GUIWINDOW_GUIBEHAVIOUR_GET_INS_OFFSET))();
		}

		::System::Void OnGUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUIWINDOW_GUIBEHAVIOUR_ONGUI_OFFSET))(this);
		}
	};
}
