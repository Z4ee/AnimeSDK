#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigAnimatorStateFrameLenDic; }
namespace MoleMole::Config { class ConfigAvatarAnimatorStateFrameLenDic; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH_GET_AVATARFRAMELENDICDATAS_OFFSET UNITYSDK_OFFSET(0xE965DA0)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH_GET_BUDDYFRAMELENDICDATAS_OFFSET UNITYSDK_OFFSET(0xE966500)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH_GET_FRAMELENDICDATAS_OFFSET UNITYSDK_OFFSET(0xE967040)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH_GET_MAINCITYAVATARFRAMELENDICDATAS_OFFSET UNITYSDK_OFFSET(0xE966140)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH_GET_MONSTERFRAMELENDICDATAS_OFFSET UNITYSDK_OFFSET(0xE966320)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH_GET_SCENEOBJECTFRAMELENDICDATAS_OFFSET UNITYSDK_OFFSET(0xE9666E0)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH_GET_UIAVATARFRAMELENDICDATAS_OFFSET UNITYSDK_OFFSET(0xE965F70)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH_GET_UIBUDDYFRAMELENDICDATAS_OFFSET UNITYSDK_OFFSET(0xE966AA0)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH_GET_UIMODELFRAMELENDICDATAS_OFFSET UNITYSDK_OFFSET(0xE966E60)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH_GET_UIMONSTERFRAMELENDICDATAS_OFFSET UNITYSDK_OFFSET(0xE9668C0)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH_GET_UIWEAPONFRAMELENDICDATAS_OFFSET UNITYSDK_OFFSET(0xE966C80)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH__CTOR_OFFSET UNITYSDK_OFFSET(0xE967220)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH__GET_AVATARFRAMELENDICDATAS_B__3_0_OFFSET UNITYSDK_OFFSET(0xE967280)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH__GET_BUDDYFRAMELENDICDATAS_B__19_0_OFFSET UNITYSDK_OFFSET(0xE9672C0)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH__GET_FRAMELENDICDATAS_B__43_0_OFFSET UNITYSDK_OFFSET(0xE967320)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH__GET_MAINCITYAVATARFRAMELENDICDATAS_B__11_0_OFFSET UNITYSDK_OFFSET(0xE9672A0)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH__GET_MONSTERFRAMELENDICDATAS_B__15_0_OFFSET UNITYSDK_OFFSET(0xE9672B0)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH__GET_SCENEOBJECTFRAMELENDICDATAS_B__23_0_OFFSET UNITYSDK_OFFSET(0xE9672D0)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH__GET_UIAVATARFRAMELENDICDATAS_B__7_0_OFFSET UNITYSDK_OFFSET(0xE967290)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH__GET_UIBUDDYFRAMELENDICDATAS_B__31_0_OFFSET UNITYSDK_OFFSET(0xE9672F0)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH__GET_UIMODELFRAMELENDICDATAS_B__39_0_OFFSET UNITYSDK_OFFSET(0xE967310)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH__GET_UIMONSTERFRAMELENDICDATAS_B__27_0_OFFSET UNITYSDK_OFFSET(0xE9672E0)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH__GET_UIWEAPONFRAMELENDICDATAS_B__35_0_OFFSET UNITYSDK_OFFSET(0xE967300)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAnimatorStateLength_TypeDefinitionIndex = 49706;

	class ConfigAnimatorStateLength : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::String* AvatarFrameLenDicPath; // 0x58
		::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic* _AvatarFrameLenDicDatas; // 0x60
		::System::String* UIAvatarFrameLenDicPath; // 0x68
		::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic* _UIAvatarFrameLenDicDatas; // 0x70
		::System::String* MainCityFrameLenDicPath; // 0x78
		::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic* _MainCityAvatarFrameLenDicDatas; // 0x80
		::System::String* MonsterFrameLenDicPath; // 0x88
		::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic* _MonsterFrameLenDicDatas; // 0x90
		::System::String* BuddyFrameLenDicPath; // 0x98
		::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic* _BuddyFrameLenDicDatas; // 0xA0
		::System::String* SceneObjectFrameLenDicPath; // 0xA8
		::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic* _SceneObjectFrameLenDicDatas; // 0xB0
		::System::String* UIMonsterFrameLenDicPath; // 0xB8
		::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic* _UIMonsterFrameLenDicDatas; // 0xC0
		::System::String* UIBuddyFrameLenDicPath; // 0xC8
		::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic* _UIBuddyFrameLenDicDatas; // 0xD0
		::System::String* UIWeaponFrameLenDicPath; // 0xD8
		::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic* _UIWeaponFrameLenDicDatas; // 0xE0
		::System::String* UIModelFrameLenDicPath; // 0xE8
		::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic* _UIModelFrameLenDicDatas; // 0xF0
		::System::String* FrameLenDicPath; // 0xF8
		::MoleMole::Config::ConfigAnimatorStateFrameLenDic* _FrameLenDicDatas; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic* get_AvatarFrameLenDicDatas()
		{
			return ((::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH_GET_AVATARFRAMELENDICDATAS_OFFSET))(this);
		}

		::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic* get_UIAvatarFrameLenDicDatas()
		{
			return ((::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH_GET_UIAVATARFRAMELENDICDATAS_OFFSET))(this);
		}

		::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic* get_MainCityAvatarFrameLenDicDatas()
		{
			return ((::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH_GET_MAINCITYAVATARFRAMELENDICDATAS_OFFSET))(this);
		}

		::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic* get_MonsterFrameLenDicDatas()
		{
			return ((::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH_GET_MONSTERFRAMELENDICDATAS_OFFSET))(this);
		}

		::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic* get_BuddyFrameLenDicDatas()
		{
			return ((::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH_GET_BUDDYFRAMELENDICDATAS_OFFSET))(this);
		}

		::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic* get_SceneObjectFrameLenDicDatas()
		{
			return ((::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH_GET_SCENEOBJECTFRAMELENDICDATAS_OFFSET))(this);
		}

		::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic* get_UIMonsterFrameLenDicDatas()
		{
			return ((::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH_GET_UIMONSTERFRAMELENDICDATAS_OFFSET))(this);
		}

		::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic* get_UIBuddyFrameLenDicDatas()
		{
			return ((::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH_GET_UIBUDDYFRAMELENDICDATAS_OFFSET))(this);
		}

		::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic* get_UIWeaponFrameLenDicDatas()
		{
			return ((::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH_GET_UIWEAPONFRAMELENDICDATAS_OFFSET))(this);
		}

		::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic* get_UIModelFrameLenDicDatas()
		{
			return ((::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH_GET_UIMODELFRAMELENDICDATAS_OFFSET))(this);
		}

		::MoleMole::Config::ConfigAnimatorStateFrameLenDic* get_FrameLenDicDatas()
		{
			return ((::MoleMole::Config::ConfigAnimatorStateFrameLenDic*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH_GET_FRAMELENDICDATAS_OFFSET))(this);
		}

		::System::Void _get_AvatarFrameLenDicDatas_b__3_0(::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH__GET_AVATARFRAMELENDICDATAS_B__3_0_OFFSET))(this, config);
		}

		::System::Void _get_UIAvatarFrameLenDicDatas_b__7_0(::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH__GET_UIAVATARFRAMELENDICDATAS_B__7_0_OFFSET))(this, config);
		}

		::System::Void _get_MainCityAvatarFrameLenDicDatas_b__11_0(::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH__GET_MAINCITYAVATARFRAMELENDICDATAS_B__11_0_OFFSET))(this, config);
		}

		::System::Void _get_MonsterFrameLenDicDatas_b__15_0(::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH__GET_MONSTERFRAMELENDICDATAS_B__15_0_OFFSET))(this, config);
		}

		::System::Void _get_BuddyFrameLenDicDatas_b__19_0(::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH__GET_BUDDYFRAMELENDICDATAS_B__19_0_OFFSET))(this, config);
		}

		::System::Void _get_SceneObjectFrameLenDicDatas_b__23_0(::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH__GET_SCENEOBJECTFRAMELENDICDATAS_B__23_0_OFFSET))(this, config);
		}

		::System::Void _get_UIMonsterFrameLenDicDatas_b__27_0(::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH__GET_UIMONSTERFRAMELENDICDATAS_B__27_0_OFFSET))(this, config);
		}

		::System::Void _get_UIBuddyFrameLenDicDatas_b__31_0(::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH__GET_UIBUDDYFRAMELENDICDATAS_B__31_0_OFFSET))(this, config);
		}

		::System::Void _get_UIWeaponFrameLenDicDatas_b__35_0(::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH__GET_UIWEAPONFRAMELENDICDATAS_B__35_0_OFFSET))(this, config);
		}

		::System::Void _get_UIModelFrameLenDicDatas_b__39_0(::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH__GET_UIMODELFRAMELENDICDATAS_B__39_0_OFFSET))(this, config);
		}

		::System::Void _get_FrameLenDicDatas_b__43_0(::MoleMole::Config::ConfigAnimatorStateFrameLenDic* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAnimatorStateFrameLenDic*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATELENGTH__GET_FRAMELENDICDATAS_B__43_0_OFFSET))(this, config);
		}
	};
}
