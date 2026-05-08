#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOGAMEPADSPACETARGET_DOCOPYRESET_OFFSET UNITYSDK_OFFSET(0x15B3BF40)
#define MOLEMOLE_MONOGAMEPADSPACETARGET_GETNAVIGATEFORBID_OFFSET UNITYSDK_OFFSET(0x15B3BEB0)
#define MOLEMOLE_MONOGAMEPADSPACETARGET_GETNAVIGATEOBJ_OFFSET UNITYSDK_OFFSET(0x15B3BE20)
#define MOLEMOLE_MONOGAMEPADSPACETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x15B3BF90)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadSpaceTarget_TypeDefinitionIndex = 41104;

	class MonoGamepadSpaceTarget : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* ReplaceRectTransform; // 0x18
		::UnityEngine::GameObject* LeftTarget; // 0x20
		::UnityEngine::GameObject* RightTarget; // 0x28
		::UnityEngine::GameObject* UpTarget; // 0x30
		::UnityEngine::GameObject* DownTarget; // 0x38
		::System::Boolean ForbidLeft; // 0x40
		::System::Boolean ForbidRight; // 0x41
		::System::Boolean ForbidUp; // 0x42
		::System::Boolean ForbidDown; // 0x43

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACETARGET__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetNavigateObj(::MoleMole::InputLogicEventType a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACETARGET_GETNAVIGATEOBJ_OFFSET))(this, a1);
		}

		::System::Boolean GetNavigateForbid(::MoleMole::InputLogicEventType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACETARGET_GETNAVIGATEFORBID_OFFSET))(this, a1);
		}

		::System::Void DoCopyReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACETARGET_DOCOPYRESET_OFFSET))(this);
		}
	};
}
