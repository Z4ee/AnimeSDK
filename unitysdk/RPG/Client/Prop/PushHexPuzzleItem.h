#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/HexDirection.h"
#include "unitysdk/RPG/Client/Prop/HexPuzzleItemBase.h"
#include "unitysdk/RPG/Client/Prop/PushHexColor.h"

namespace RPG::Client::Prop { class PuzzleBoardBase; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_PROP_PUSHHEXPUZZLEITEM_BACKUPORIGIN_OFFSET UNITYSDK_OFFSET(0xA12DD70)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEITEM_INIT_OFFSET UNITYSDK_OFFSET(0xA12C690)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEITEM_METHOD_7_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xA12E430)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEITEM_METHOD_7_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xA12E500)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEITEM_ONSELECT_OFFSET UNITYSDK_OFFSET(0xA12E7D0)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEITEM_RECOVERORIGIN_OFFSET UNITYSDK_OFFSET(0xA12DF70)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEITEM_REFRESHDIRECTION_OFFSET UNITYSDK_OFFSET(0xA12CF90)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA12E8B0)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEITEM___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA12E8C0)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEITEM___IFIXBASEPROXY_ONSELECT_OFFSET UNITYSDK_OFFSET(0xA12E930)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PushHexPuzzleItem_TypeDefinitionIndex = 64070;

	class PushHexPuzzleItem : public ::RPG::Client::Prop::HexPuzzleItemBase
	{
	public:
		::UnityEngine::GameObject* Field_7_0; // 0x30
		::System::Int32 Field_7_1; // 0x38
		::System::Int32 Field_7_2; // 0x3C
		::System::Boolean Field_7_3; // 0x40
		::RPG::Client::Prop::HexDirection Field_7_4; // 0x44
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

		::System::Void __iFixBaseProxy_Init(::RPG::Client::Prop::PuzzleBoardBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PuzzleBoardBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEITEM___IFIXBASEPROXY_INIT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEITEM___IFIXBASEPROXY_ONSELECT_OFFSET))(this);
		}
	};
}
