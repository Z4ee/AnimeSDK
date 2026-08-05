#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_31C42DC9A1AD2DB7.h"
#include "unitysdk/Foundation/ViewObject/Subsystem/GroupSuiteChangeData.h"
#include "unitysdk/Foundation/ViewObject/Subsystem/GroupSuiteChangeListenEntry.h"
#include "unitysdk/Foundation/ViewObject/SuiteInfo.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define MOLEMOLE_NAP_VOGROUPSUITELISTENER_AWAKE_OFFSET UNITYSDK_OFFSET(0x11D5A900)
#define MOLEMOLE_NAP_VOGROUPSUITELISTENER_GET_CURRENTSUITE_OFFSET UNITYSDK_OFFSET(0x11D5A8F0)
#define MOLEMOLE_NAP_VOGROUPSUITELISTENER_METHOD_5_7E0D3A7A149A57B6_OFFSET UNITYSDK_OFFSET(0x11D5AC10)
#define MOLEMOLE_NAP_VOGROUPSUITELISTENER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11D5AA20)
#define MOLEMOLE_NAP_VOGROUPSUITELISTENER_ONGROUPSUITECHANGED_OFFSET UNITYSDK_OFFSET(0x11D5AB10)
#define MOLEMOLE_NAP_VOGROUPSUITELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x11D5ABC0)

namespace MoleMole
{
	inline static constexpr unsigned int Nap_VoGroupSuiteListener_TypeDefinitionIndex = 80158;

	class Nap_VoGroupSuiteListener : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* Field_5_2; // 0x0
		::System::UInt32 GroupID; // 0x18
		::System::Boolean FilterBySuiteIndex; // 0x1C
		::Enum_3_31C42DC9A1AD2DB7 CompareType; // 0x20
		::System::UInt32 TargetSuiteIndex; // 0x24
		::Foundation::ViewObject::SuiteInfo Field_5_5; // 0x28
		::Foundation::ViewObject::Subsystem::GroupSuiteChangeListenEntry Field_5_4; // 0x30
		::System::Boolean Field_5_11; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSUITELISTENER__CTOR_OFFSET))(this);
		}

		::Foundation::ViewObject::SuiteInfo get_CurrentSuite()
		{
			return ((::Foundation::ViewObject::SuiteInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSUITELISTENER_GET_CURRENTSUITE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSUITELISTENER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSUITELISTENER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnGroupSuiteChanged(::Foundation::ViewObject::Subsystem::GroupSuiteChangeData a1)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Subsystem::GroupSuiteChangeData))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSUITELISTENER_ONGROUPSUITECHANGED_OFFSET))(this, a1);
		}

		::System::Void Method_5_7E0D3A7A149A57B6(::Foundation::ViewObject::SuiteInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSUITELISTENER_METHOD_5_7E0D3A7A149A57B6_OFFSET))(this, a1);
		}
	};
}
