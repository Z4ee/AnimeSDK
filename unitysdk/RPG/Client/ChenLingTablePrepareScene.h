#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingTableScene.h"
#include "unitysdk/RPG/Client/ChenLingTableSceneType.h"

#define RPG_CLIENT_CHENLINGTABLEPREPARESCENE_GET_SCENETYPE_OFFSET UNITYSDK_OFFSET(0xB641830)
#define RPG_CLIENT_CHENLINGTABLEPREPARESCENE_METHOD_6_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0xB6414E0)
#define RPG_CLIENT_CHENLINGTABLEPREPARESCENE_ONENTER_OFFSET UNITYSDK_OFFSET(0xB641320)
#define RPG_CLIENT_CHENLINGTABLEPREPARESCENE_ONEXIT_OFFSET UNITYSDK_OFFSET(0xB641680)
#define RPG_CLIENT_CHENLINGTABLEPREPARESCENE_ONUISCREENSIZECHANGE_OFFSET UNITYSDK_OFFSET(0xB6417E0)
#define RPG_CLIENT_CHENLINGTABLEPREPARESCENE_RESET_OFFSET UNITYSDK_OFFSET(0xB6416D0)
#define RPG_CLIENT_CHENLINGTABLEPREPARESCENE__CTOR_OFFSET UNITYSDK_OFFSET(0xB641840)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingTablePrepareScene_TypeDefinitionIndex = 67711;

	class ChenLingTablePrepareScene : public ::RPG::Client::ChenLingTableScene
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEPREPARESCENE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEPREPARESCENE_ONENTER_OFFSET))(this);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEPREPARESCENE_ONEXIT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEPREPARESCENE_RESET_OFFSET))(this);
		}

		::System::Void OnUIScreenSizeChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEPREPARESCENE_ONUISCREENSIZECHANGE_OFFSET))(this);
		}

		::System::Void Method_6_17BD30EFE8176014()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEPREPARESCENE_METHOD_6_17BD30EFE8176014_OFFSET))(this);
		}

		::RPG::Client::ChenLingTableSceneType get_SceneType()
		{
			return ((::RPG::Client::ChenLingTableSceneType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEPREPARESCENE_GET_SCENETYPE_OFFSET))(this);
		}
	};
}
