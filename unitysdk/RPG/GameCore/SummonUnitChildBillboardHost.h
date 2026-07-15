#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B64B3390003680E8;
namespace RPG::Client::Billboard { class BillboardIdentifier; }
namespace RPG::Client::Billboard { class BillboardNotifyParam; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12808790)
#define RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST_GETATTACHTRANS_OFFSET UNITYSDK_OFFSET(0x12809040)
#define RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST_GETCURRENTDISTANCE_OFFSET UNITYSDK_OFFSET(0x12808EE0)
#define RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x12808ED0)
#define RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST_HIDEBUBBLE_OFFSET UNITYSDK_OFFSET(0x128088C0)
#define RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x12809110)
#define RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST_REFRESH_OFFSET UNITYSDK_OFFSET(0x12808E70)
#define RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST_SHOWBUBBLE_OFFSET UNITYSDK_OFFSET(0x12808A80)
#define RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST__CLOSEBILLBOARD_OFFSET UNITYSDK_OFFSET(0x12808920)
#define RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST__CTOR_OFFSET UNITYSDK_OFFSET(0x128086C0)
#define RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST__SHOWBILLBOARD_OFFSET UNITYSDK_OFFSET(0x12808C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitChildBillboardHost_TypeDefinitionIndex = 54882;

	class SummonUnitChildBillboardHost : public ::System::Object
	{
	public:
		// static const ::System::Single BubbleShowDistance; // 0x0
		// static const ::System::Single BubbleShowDistanceNear; // 0x0
		::RPG::GameCore::GameEntity* _Entity; // 0x10
		::RPG::Client::Billboard::BillboardNotifyParam* _NotifyParam; // 0x18
		::RPG::Client::Billboard::BillboardIdentifier* _Identifier_k__BackingField; // 0x20
		::Class_1_B64B3390003680E8* _Owner; // 0x28
		::RPG::GameCore::PlayNPCBubbleTalk* _BubbleConfig; // 0x30

		::System::Void _ctor(::Class_1_B64B3390003680E8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B64B3390003680E8*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITCHILDBILLBOARDHOST__CTOR_OFFSET))(this, a1);
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
