#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardFlowNode.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_0_16E4307DCC419505_209;
class Class_1_5711CB95EE68214E;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole { class ChessEntityCollection; }
namespace MoleMole { class HackerGameBaseDamage; }
namespace MoleMole::FlowCanvas { class DelayedLaserV3; }
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3_CREATEPERFORMENTITY_OFFSET UNITYSDK_OFFSET(0x1A01B910)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A019790)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A019960)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3_SPAWNLASEREFFECT_OFFSET UNITYSDK_OFFSET(0x1A01C4A0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3_START_OFFSET UNITYSDK_OFFSET(0x1A019D20)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A01C1C0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A01C730)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1A01C870)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A01C8A0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameLaserNodeV3_TypeDefinitionIndex = 53126;

	class HackerGameLaserNodeV3 : public ::MoleMole::FlowCanvas::ChessboardFlowNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::HollowChessboard::HollowCell>* triggerPoint; // 0xA8
		::FlowCanvas::ValueInput_1<::System::String*>* laserSpawnSoundTriggerName; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* alertSoundTriggerName; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Int32>* frameIndex; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Int32>* laserWidthExtend; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Int32>* screenIndex; // 0xD0
		::FlowCanvas::ValueInput_1<::System::Single>* alertDuration; // 0xD8
		::FlowCanvas::ValueInput_1<::MoleMole::ChessEntityCollection*>* chessEntityCollection; // 0xE0
		::FlowCanvas::ValueInput_1<::System::Single>* damageDuration; // 0xE8
		::Class_1_5711CB95EE68214E* _laserEffectInstance; // 0xF0
		::FlowCanvas::FlowInput* start; // 0xF8
		::FlowCanvas::ValueInput_1<::System::String*>* alertTextureKey; // 0x100
		::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowEntity*>* PerformCache; // 0x108
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*>* boundList; // 0x110
		::FlowCanvas::ValueInput_1<::System::String*>* laserSpawnScreenEffectKey; // 0x118
		::FlowCanvas::ValueInput_1<::System::Single>* alertExtraDuration; // 0x120
		::FlowCanvas::ValueInput_1<::MoleMole::ChessEntityCollection*>* playerEntityCollection; // 0x128
		::FlowCanvas::ValueInput_1<::System::String*>* damageSoundTriggerName; // 0x130
		::FlowCanvas::ValueInput_1<::System::String*>* laserParticleKey; // 0x138
		::FlowCanvas::ValueInput_1<::System::Single>* damageDelay; // 0x140
		::FlowCanvas::ValueInput_1<::System::String*>* feverDamageSoundTriggerName; // 0x148
		::FlowCanvas::ValueInput_1<::System::Boolean>* isPaused; // 0x150
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::System::Single>*>* laserPerformSequence; // 0x158
		::FlowCanvas::ValueInput_1<::MoleMole::HackerGameBaseDamage*>* damage; // 0x160
		::FlowCanvas::ValueInput_1<::System::Int32>* alertFrameCount; // 0x168
		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::DelayedLaserV3*>* Data; // 0x170
		::System::Action* SpawnLaserEffectDelegate; // 0x178
		::FlowCanvas::FlowOutput* output; // 0x180

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3_START_OFFSET))(this, f);
		}

		::MoleMole::HollowChessboard::HollowEntity* CreatePerformEntity(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_209*>* temp, ::MoleMole::HollowChessboard::HollowCell cell)
		{
			return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_209*>*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3_CREATEPERFORMENTITY_OFFSET))(this, temp, cell);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3_UPDATE_OFFSET))(this);
		}

		::System::Void SpawnLaserEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3_SPAWNLASEREFFECT_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3__REGISTERPORTS_B__4_0_OFFSET))(this, f);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
