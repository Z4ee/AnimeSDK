#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoViewPointTouch_Enum_3_24CE5AFDED2FA1CE.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class MonoViewPointTouch_Class_1_CF51C3A9BF1938A8; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::EventSystems { class BaseEventData; }

#define MOLEMOLE_MONOVIEWPOINTTOUCH_CLEARTOUCH_OFFSET UNITYSDK_OFFSET(0x13F180A0)
#define MOLEMOLE_MONOVIEWPOINTTOUCH_METHOD_5_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x13F181E0)
#define MOLEMOLE_MONOVIEWPOINTTOUCH_METHOD_5_54D0944981A1E075_OFFSET UNITYSDK_OFFSET(0x13F19130)
#define MOLEMOLE_MONOVIEWPOINTTOUCH_METHOD_5_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x13F18840)
#define MOLEMOLE_MONOVIEWPOINTTOUCH_METHOD_5_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x13F192D0)
#define MOLEMOLE_MONOVIEWPOINTTOUCH_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13F185E0)
#define MOLEMOLE_MONOVIEWPOINTTOUCH_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x13F18040)
#define MOLEMOLE_MONOVIEWPOINTTOUCH_ONVIEWPOINTPANELDRAG_OFFSET UNITYSDK_OFFSET(0x13F18950)
#define MOLEMOLE_MONOVIEWPOINTTOUCH_ONVIEWPOINTPANELINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x13F193E0)
#define MOLEMOLE_MONOVIEWPOINTTOUCH_ONVIEWPOINTPANELPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x13F18350)
#define MOLEMOLE_MONOVIEWPOINTTOUCH_ONVIEWPOINTPANELPOINTERUP_OFFSET UNITYSDK_OFFSET(0x13F18630)
#define MOLEMOLE_MONOVIEWPOINTTOUCH_START_OFFSET UNITYSDK_OFFSET(0x13F17EE0)
#define MOLEMOLE_MONOVIEWPOINTTOUCH_UPDATE_OFFSET UNITYSDK_OFFSET(0x13F18160)
#define MOLEMOLE_MONOVIEWPOINTTOUCH__CTOR_OFFSET UNITYSDK_OFFSET(0x13F19490)

namespace MoleMole
{
	inline static constexpr unsigned int MonoViewPointTouch_TypeDefinitionIndex = 47273;

	class MonoViewPointTouch : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Field_5_0; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoViewPointTouch_Class_1_CF51C3A9BF1938A8*>* Field_5_1; // 0x20
		::MoleMole::MonoViewPointTouch_Enum_3_24CE5AFDED2FA1CE Field_5_2; // 0x28
		::MoleMole::MonoViewPointTouch_Enum_3_24CE5AFDED2FA1CE Field_5_3; // 0x2C
		::UnityEngine::Vector2 Field_5_4; // 0x30
		::UnityEngine::Vector2 Field_5_5; // 0x38
		::System::Int32 Field_5_6; // 0x40
		::System::Int32 Field_5_7; // 0x44
		::System::Boolean Field_5_8; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_START_OFFSET))(this);
		}

		::System::Void OnApplicationFocus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_ONAPPLICATIONFOCUS_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_UPDATE_OFFSET))(this);
		}

		::System::Void OnViewPointPanelPointerDown(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_ONVIEWPOINTPANELPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnViewPointPanelPointerUp(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_ONVIEWPOINTPANELPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void OnViewPointPanelDrag(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_ONVIEWPOINTPANELDRAG_OFFSET))(this, a1);
		}

		::System::Void OnViewPointPanelInitializePotentialDrag(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_ONVIEWPOINTPANELINITIALIZEPOTENTIALDRAG_OFFSET))(this, a1);
		}

		::System::Void ClearTouch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_CLEARTOUCH_OFFSET))(this);
		}

		::System::Void Method_5_937F8473216A3162()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_METHOD_5_937F8473216A3162_OFFSET))(this);
		}

		::MoleMole::MonoViewPointTouch_Enum_3_24CE5AFDED2FA1CE Method_5_54D0944981A1E075()
		{
			return ((::MoleMole::MonoViewPointTouch_Enum_3_24CE5AFDED2FA1CE(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_METHOD_5_54D0944981A1E075_OFFSET))(this);
		}

		::System::Void Method_5_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_METHOD_5_A239DF324AF4215D_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Boolean Method_5_0B1EB5C9B94BAB66()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_METHOD_5_0B1EB5C9B94BAB66_OFFSET))(this);
		}
	};
}
