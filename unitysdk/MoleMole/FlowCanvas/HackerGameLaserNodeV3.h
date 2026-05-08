#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardFlowNode.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_0_16E4307DCC419505_277;
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

#define MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3_CREATEPERFORMENTITY_OFFSET UNITYSDK_OFFSET(0x18203DB0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x18201C20)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x18201DF0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3_SPAWNLASEREFFECT_OFFSET UNITYSDK_OFFSET(0x18204940)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3_START_OFFSET UNITYSDK_OFFSET(0x182021B0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3_UPDATE_OFFSET UNITYSDK_OFFSET(0x18204660)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3__CTOR_OFFSET UNITYSDK_OFFSET(0x18204BD0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x18204D10)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x18204D40)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameLaserNodeV3_TypeDefinitionIndex = 42815;

	class HackerGameLaserNodeV3 : public ::MoleMole::FlowCanvas::ChessboardFlowNode
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::DelayedLaserV3*>* Data; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* frameIndex; // 0xB0
		::Class_1_5711CB95EE68214E* _laserEffectInstance; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Single>* damageDelay; // 0xC0
		::FlowCanvas::ValueInput_1<::MoleMole::ChessEntityCollection*>* playerEntityCollection; // 0xC8
		::FlowCanvas::ValueInput_1<::System::String*>* damageSoundTriggerName; // 0xD0
		::FlowCanvas::ValueInput_1<::System::String*>* laserSpawnSoundTriggerName; // 0xD8
		::FlowCanvas::ValueInput_1<::System::String*>* feverDamageSoundTriggerName; // 0xE0
		::FlowCanvas::ValueInput_1<::System::Boolean>* isPaused; // 0xE8
		::FlowCanvas::ValueInput_1<::System::String*>* alertSoundTriggerName; // 0xF0
		::FlowCanvas::ValueInput_1<::System::String*>* alertTextureKey; // 0xF8
		::FlowCanvas::ValueInput_1<::System::Single>* alertExtraDuration; // 0x100
		::FlowCanvas::ValueInput_1<::MoleMole::ChessEntityCollection*>* chessEntityCollection; // 0x108
		::FlowCanvas::FlowInput* start; // 0x110
		::FlowCanvas::ValueInput_1<::System::String*>* laserParticleKey; // 0x118
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::System::Single>*>* laserPerformSequence; // 0x120
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*>* boundList; // 0x128
		::FlowCanvas::FlowOutput* output; // 0x130
		::FlowCanvas::ValueInput_1<::System::Single>* damageDuration; // 0x138
		::System::Action* SpawnLaserEffectDelegate; // 0x140
		::FlowCanvas::ValueInput_1<::MoleMole::HollowChessboard::HollowCell>* triggerPoint; // 0x148
		::FlowCanvas::ValueInput_1<::System::Single>* alertDuration; // 0x150
		::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowEntity*>* PerformCache; // 0x158
		::FlowCanvas::ValueInput_1<::System::Int32>* laserWidthExtend; // 0x160
		::FlowCanvas::ValueInput_1<::MoleMole::HackerGameBaseDamage*>* damage; // 0x168
		::FlowCanvas::ValueInput_1<::System::String*>* laserSpawnScreenEffectKey; // 0x170
		::FlowCanvas::ValueInput_1<::System::Int32>* screenIndex; // 0x178
		::FlowCanvas::ValueInput_1<::System::Int32>* alertFrameCount; // 0x180

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

		::MoleMole::HollowChessboard::HollowEntity* CreatePerformEntity(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_277*>* temp, ::MoleMole::HollowChessboard::HollowCell cell)
		{
			return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_277*>*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3_CREATEPERFORMENTITY_OFFSET))(this, temp, cell);
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
