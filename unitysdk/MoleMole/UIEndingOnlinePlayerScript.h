#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIENDINGONLINEPLAYERSCRIPT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B68EDF0)
#define MOLEMOLE_UIENDINGONLINEPLAYERSCRIPT_PLAYRESULTANIM_OFFSET UNITYSDK_OFFSET(0x1B68EEE0)
#define MOLEMOLE_UIENDINGONLINEPLAYERSCRIPT_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1B68EE60)
#define MOLEMOLE_UIENDINGONLINEPLAYERSCRIPT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B68F050)

namespace MoleMole
{
	inline static constexpr unsigned int UIEndingOnlinePlayerScript_TypeDefinitionIndex = 85421;

	class UIEndingOnlinePlayerScript : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* win; // 0x18
		::UnityEngine::GameObject* lose; // 0x20
		::UnityEngine::UI::Extension::UILocalizationText* score; // 0x28
		::System::String* winAnim; // 0x30
		::System::String* loseAnim; // 0x38
		::System::Boolean Field_5_5; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIENDINGONLINEPLAYERSCRIPT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIENDINGONLINEPLAYERSCRIPT_AWAKE_OFFSET))(this);
		}

		::System::Void SetValue(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIENDINGONLINEPLAYERSCRIPT_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void PlayResultAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIENDINGONLINEPLAYERSCRIPT_PLAYRESULTANIM_OFFSET))(this);
		}
	};
}
