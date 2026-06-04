#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Text.h"

namespace System { class Object; }

#define RPG_CLIENT_DEVUITEXT_AWAKE_OFFSET UNITYSDK_OFFSET(0xB73AD30)
#define RPG_CLIENT_DEVUITEXT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB73AE70)
#define RPG_CLIENT_DEVUITEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB73B010)
#define RPG_CLIENT_DEVUITEXT__ONUITEXTLANGUAGECHANGE_OFFSET UNITYSDK_OFFSET(0xB73AF70)
#define RPG_CLIENT_DEVUITEXT___IFIXBASEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0xB73B040)
#define RPG_CLIENT_DEVUITEXT___IFIXBASEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB73B050)

namespace RPG::Client
{
	inline static constexpr unsigned int DevUIText_TypeDefinitionIndex = 67764;

	class DevUIText : public ::UnityEngine::UI::Text
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEVUITEXT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEVUITEXT_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEVUITEXT_ONDESTROY_OFFSET))(this);
		}

		::System::Void _OnUITextLanguageChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEVUITEXT__ONUITEXTLANGUAGECHANGE_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEVUITEXT___IFIXBASEPROXY_AWAKE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEVUITEXT___IFIXBASEPROXY_ONDESTROY_OFFSET))(this);
		}
	};
}
