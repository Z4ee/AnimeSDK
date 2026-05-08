#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_208CC9941471731A_625;
namespace MoleMole { class MonoUIInteractGroup; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }

#define MOLEMOLE_MONOUIINTERACT_AWAKE_OFFSET UNITYSDK_OFFSET(0x12361570)
#define MOLEMOLE_MONOUIINTERACT_METHOD_5_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x12361980)
#define MOLEMOLE_MONOUIINTERACT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x123618F0)
#define MOLEMOLE_MONOUIINTERACT_UPDATE_OFFSET UNITYSDK_OFFSET(0x12361890)
#define MOLEMOLE_MONOUIINTERACT_WORLDTOUGUIPOSITION_OFFSET UNITYSDK_OFFSET(0x12361700)
#define MOLEMOLE_MONOUIINTERACT__CTOR_OFFSET UNITYSDK_OFFSET(0x12361930)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIInteract_TypeDefinitionIndex = 41672;

	class MonoUIInteract : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 interactID; // 0x18
		::UnityEngine::RectTransform* root; // 0x20
		::Class_2_208CC9941471731A_625* template_; // 0x28
		::UnityEngine::UI::Extension::UIButtonEx* Field_5_3; // 0x30
		::MoleMole::MonoUIInteractGroup* Field_5_4; // 0x38
		::System::Single Field_5_5; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIINTERACT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIINTERACT_AWAKE_OFFSET))(this);
		}

		static ::UnityEngine::Vector2 WorldToUGUIPosition(::UnityEngine::RectTransform* a1, ::UnityEngine::Camera* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::RectTransform*, ::UnityEngine::Camera*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIINTERACT_WORLDTOUGUIPOSITION_OFFSET))(a1, a2, a3);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIINTERACT_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIINTERACT_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_33E2FA8E6403B93D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIINTERACT_METHOD_5_33E2FA8E6403B93D_OFFSET))(this);
		}
	};
}
