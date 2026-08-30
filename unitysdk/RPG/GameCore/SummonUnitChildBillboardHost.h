#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_61F66DDFF6FC7B36;
namespace RPG::Client::Billboard { class BillboardIdentifier; }
namespace RPG::Client::Billboard { class BillboardNotifyParam; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE71F460)
#define RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST_GETATTACHTRANS_OFFSET UNITYSDK_OFFSET(0xE71FD00)
#define RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST_GETCURRENTDISTANCE_OFFSET UNITYSDK_OFFSET(0xE71FBA0)
#define RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xE71FB90)
#define RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST_HIDEBUBBLE_OFFSET UNITYSDK_OFFSET(0xE71F590)
#define RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0xE71FDD0)
#define RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST_REFRESH_OFFSET UNITYSDK_OFFSET(0xE71FB30)
#define RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST_SHOWBUBBLE_OFFSET UNITYSDK_OFFSET(0xE71F750)
#define RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST__CLOSEBILLBOARD_OFFSET UNITYSDK_OFFSET(0xE71F5F0)
#define RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST__CTOR_OFFSET UNITYSDK_OFFSET(0xE71F3A0)
#define RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST__SHOWBILLBOARD_OFFSET UNITYSDK_OFFSET(0xE71F930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitChildBillboardHost_TypeDefinitionIndex = 57606;

	class SummonUnitChildBillboardHost : public ::System::Object
	{
	public:
		// static const ::System::Single BubbleShowDistance; // 0x0
		// static const ::System::Single BubbleShowDistanceNear; // 0x0
		::Class_1_61F66DDFF6FC7B36* _Owner; // 0x10
		::RPG::Client::Billboard::BillboardIdentifier* _Identifier_k__BackingField; // 0x18
		::RPG::GameCore::GameEntity* _Entity; // 0x20
		::RPG::GameCore::PlayNPCBubbleTalk* _BubbleConfig; // 0x28
		::RPG::Client::Billboard::BillboardNotifyParam* _NotifyParam; // 0x30

		::System::Void _ctor(::Class_1_61F66DDFF6FC7B36* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_61F66DDFF6FC7B36*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST__CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST_DISPOSE_OFFSET))(this);
		}

		::System::Void ShowBubble(::RPG::GameCore::PlayNPCBubbleTalk* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayNPCBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST_SHOWBUBBLE_OFFSET))(this, a1);
		}

		::System::Void HideBubble()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST_HIDEBUBBLE_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST_REFRESH_OFFSET))(this);
		}

		::System::Void _ShowBillboard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST__SHOWBILLBOARD_OFFSET))(this);
		}

		::System::Void _CloseBillboard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST__CLOSEBILLBOARD_OFFSET))(this);
		}

		::RPG::Client::Billboard::BillboardIdentifier* get_Identifier()
		{
			return ((::RPG::Client::Billboard::BillboardIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Single GetCurrentDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST_GETCURRENTDISTANCE_OFFSET))(this);
		}

		::UnityEngine::Transform* GetAttachTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST_GETATTACHTRANS_OFFSET))(this);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST_ISVISIBLE_OFFSET))(this);
		}
	};
}
