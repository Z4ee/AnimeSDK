#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/HexDirection.h"
#include "unitysdk/RPG/Client/Prop/HexPuzzleItemBase.h"
#include "unitysdk/RPG/Client/Prop/PushHexColor.h"

namespace RPG::Client::Prop { class PuzzleBoardBase; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_PROP_PUSHHEXPUZZLEITEM_BACKUPORIGIN_OFFSET UNITYSDK_OFFSET(0xDCFE0C0)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEITEM_INIT_OFFSET UNITYSDK_OFFSET(0xDCFCB30)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEITEM_METHOD_7_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xDCFE740)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEITEM_METHOD_7_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xDCFE810)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEITEM_ONSELECT_OFFSET UNITYSDK_OFFSET(0xDCFEAD0)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEITEM_RECOVERORIGIN_OFFSET UNITYSDK_OFFSET(0xDCFE300)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEITEM_REFRESHDIRECTION_OFFSET UNITYSDK_OFFSET(0xDCFD330)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xDCFEBC0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PushHexPuzzleItem_TypeDefinitionIndex = 78150;

	class PushHexPuzzleItem : public ::RPG::Client::Prop::HexPuzzleItemBase
	{
	public:
		::UnityEngine::GameObject* EPIMHOCLJKC; // 0x30
		::System::Int32 BLJPEFEGKOL; // 0x38
		::System::Int32 LJNDHOHAAGE; // 0x3C
		::System::Boolean JPJLJACJBFF; // 0x40
		::RPG::Client::Prop::HexDirection ABLHILNDJLE; // 0x44
		::System::Boolean IsResetButtom; // 0x48
		::System::Boolean HasDirection; // 0x49
		::RPG::Client::Prop::HexDirection Dir; // 0x4C
		::RPG::Client::Prop::PushHexColor Color; // 0x50
		::UnityEngine::Material* ColorRed; // 0x58
		::UnityEngine::Material* ColorBlue; // 0x60
		::UnityEngine::Material* ColorGreen; // 0x68
		::UnityEngine::Material* ColorYellow; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEITEM__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::Prop::PuzzleBoardBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PuzzleBoardBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEITEM_INIT_OFFSET))(this, a1);
		}

		::System::Void OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEITEM_ONSELECT_OFFSET))(this);
		}

		::System::Void RefreshDirection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEITEM_REFRESHDIRECTION_OFFSET))(this);
		}

		::System::Void Method_7_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEITEM_METHOD_7_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void Method_7_F5447CD65612575D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEITEM_METHOD_7_F5447CD65612575D_OFFSET))(this);
		}

		::System::Void BackupOrigin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEITEM_BACKUPORIGIN_OFFSET))(this);
		}

		::System::Void RecoverOrigin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEITEM_RECOVERORIGIN_OFFSET))(this);
		}
	};
}
