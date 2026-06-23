#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class CanvasGroup; }

#define MOLEMOLE_MONOSCROLLBARAUTOHIDE_AWAKE_OFFSET UNITYSDK_OFFSET(0x17DD7950)
#define MOLEMOLE_MONOSCROLLBARAUTOHIDE_UPDATESTATUS_1_OFFSET UNITYSDK_OFFSET(0x17DD7BB0)
#define MOLEMOLE_MONOSCROLLBARAUTOHIDE_UPDATESTATUS_OFFSET UNITYSDK_OFFSET(0x17DD7B10)
#define MOLEMOLE_MONOSCROLLBARAUTOHIDE_UPDATE_OFFSET UNITYSDK_OFFSET(0x17DD7A50)
#define MOLEMOLE_MONOSCROLLBARAUTOHIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x17DD7DA0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoScrollBarAutoHide_TypeDefinitionIndex = 65982;

	class MonoScrollBarAutoHide : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Field_5_0; // 0x18
		::UnityEngine::CanvasGroup* Field_5_1; // 0x20
		::System::Single Field_5_2; // 0x28
		::System::Single fadeOutTimeSpan; // 0x2C
		::System::Boolean hidebyDefault; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLBARAUTOHIDE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLBARAUTOHIDE_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLBARAUTOHIDE_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateStatus(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLBARAUTOHIDE_UPDATESTATUS_OFFSET))(this, a1);
		}

		::System::Void UpdateStatus_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLBARAUTOHIDE_UPDATESTATUS_1_OFFSET))(this, a1);
		}
	};
}
