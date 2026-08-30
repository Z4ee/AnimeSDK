#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_RECOMMENDDISPLAYCONFIG_GET_ENVIRONMENTPROFILEPATH_OFFSET UNITYSDK_OFFSET(0x1B6540F0)
#define RPG_CLIENT_RECOMMENDDISPLAYCONFIG_GET_INTROID_OFFSET UNITYSDK_OFFSET(0x1B654110)
#define RPG_CLIENT_RECOMMENDDISPLAYCONFIG_GET_UI3DPREFAB_OFFSET UNITYSDK_OFFSET(0x1B6540D0)
#define RPG_CLIENT_RECOMMENDDISPLAYCONFIG_GET_UIPREFAB_OFFSET UNITYSDK_OFFSET(0x1B6540B0)
#define RPG_CLIENT_RECOMMENDDISPLAYCONFIG_SET_ENVIRONMENTPROFILEPATH_OFFSET UNITYSDK_OFFSET(0x1B654100)
#define RPG_CLIENT_RECOMMENDDISPLAYCONFIG_SET_INTROID_OFFSET UNITYSDK_OFFSET(0x1B654120)
#define RPG_CLIENT_RECOMMENDDISPLAYCONFIG_SET_UI3DPREFAB_OFFSET UNITYSDK_OFFSET(0x1B6540E0)
#define RPG_CLIENT_RECOMMENDDISPLAYCONFIG_SET_UIPREFAB_OFFSET UNITYSDK_OFFSET(0x1B6540C0)
#define RPG_CLIENT_RECOMMENDDISPLAYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B654130)

namespace RPG::Client
{
	inline static constexpr unsigned int RecommendDisplayConfig_TypeDefinitionIndex = 66802;

	class RecommendDisplayConfig : public ::System::Object
	{
	public:
		::System::String* _UIPrefab_k__BackingField; // 0x10
		::System::String* _UI3DPrefab_k__BackingField; // 0x18
		::System::String* _EnvironmentProfilePath_k__BackingField; // 0x20
		::System::UInt32 _IntroID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDDISPLAYCONFIG__CTOR_OFFSET))(this);
		}

		::System::String* get_UIPrefab()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDDISPLAYCONFIG_GET_UIPREFAB_OFFSET))(this);
		}

		::System::Void set_UIPrefab(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDDISPLAYCONFIG_SET_UIPREFAB_OFFSET))(this, a1);
		}

		::System::String* get_UI3DPrefab()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDDISPLAYCONFIG_GET_UI3DPREFAB_OFFSET))(this);
		}

		::System::Void set_UI3DPrefab(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDDISPLAYCONFIG_SET_UI3DPREFAB_OFFSET))(this, a1);
		}

		::System::String* get_EnvironmentProfilePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDDISPLAYCONFIG_GET_ENVIRONMENTPROFILEPATH_OFFSET))(this);
		}

		::System::Void set_EnvironmentProfilePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDDISPLAYCONFIG_SET_ENVIRONMENTPROFILEPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_IntroID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDDISPLAYCONFIG_GET_INTROID_OFFSET))(this);
		}

		::System::Void set_IntroID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDDISPLAYCONFIG_SET_INTROID_OFFSET))(this, a1);
		}
	};
}
