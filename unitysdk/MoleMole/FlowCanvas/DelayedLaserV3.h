#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_5_DCFF91E03A93C03C;
namespace MoleMole { class ChessEntity; }
namespace MoleMole { class ChessEntityCollection; }
namespace MoleMole { class HackerGameBaseDamage; }
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_APPLYLASERDAMAGE_1_OFFSET UNITYSDK_OFFSET(0x19B034C0)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_APPLYLASERDAMAGE_2_OFFSET UNITYSDK_OFFSET(0x19B04630)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_APPLYLASERDAMAGE_OFFSET UNITYSDK_OFFSET(0x19B033A0)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_DESTROYALERTENTITIES_OFFSET UNITYSDK_OFFSET(0x19B01E00)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_EXECUTEDELAYEDLASER_OFFSET UNITYSDK_OFFSET(0x19B023C0)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_GETDAMAGERANGE_OFFSET UNITYSDK_OFFSET(0x19B031C0)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_GETLASERSTARTTIME_OFFSET UNITYSDK_OFFSET(0x19B03420)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_GET_ALERTFINISHFRAME_OFFSET UNITYSDK_OFFSET(0x19B01CA0)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_GET_ALERTSTARTTIME_OFFSET UNITYSDK_OFFSET(0x19B01CB0)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_GET_ALERTSTOPTIME_OFFSET UNITYSDK_OFFSET(0x19B01CC0)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_GET_PERFORMSTARTTIME_OFFSET UNITYSDK_OFFSET(0x19B01CD0)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_GET_SEQUENCECOUNT_OFFSET UNITYSDK_OFFSET(0x19B01D60)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_GET_TOTALTIME_OFFSET UNITYSDK_OFFSET(0x19B01CE0)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_ISINLASERAREA_OFFSET UNITYSDK_OFFSET(0x19B045B0)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19B01DB0)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_POSTALERTSOUND_OFFSET UNITYSDK_OFFSET(0x19B02230)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_POSTDAMAGESOUND_OFFSET UNITYSDK_OFFSET(0x19B02490)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_POSTLASERSPAWNSOUND_OFFSET UNITYSDK_OFFSET(0x19B027D0)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_SPAWNLASEREFFECT_OFFSET UNITYSDK_OFFSET(0x19B02440)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_UPDATEDAMAGEACTIVERANGE_OFFSET UNITYSDK_OFFSET(0x19B02FC0)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_UPDATEDAMAGE_OFFSET UNITYSDK_OFFSET(0x19B03240)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_UPDATELASERPARTICLE_OFFSET UNITYSDK_OFFSET(0x19B02960)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_UPDATE_OFFSET UNITYSDK_OFFSET(0x19B02040)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3__CTOR_OFFSET UNITYSDK_OFFSET(0x19B046F0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int DelayedLaserV3_TypeDefinitionIndex = 66102;

	class DelayedLaserV3 : public ::System::Object
	{
	public:
		::System::String* FeverSoundTriggerName; // 0x10
		::MoleMole::ChessEntityCollection* ChessEntityCollection; // 0x18
		::MoleMole::ChessEntityCollection* PlayerEntityCollection; // 0x20
		::System::String* LaserSpawnSoundTriggerName; // 0x28
		::System::String* DamageSoundTriggerName; // 0x30
		::Class_5_DCFF91E03A93C03C* CurrentChessboard; // 0x38
		::System::Collections::Generic::HashSet_1<::MoleMole::ChessEntity*>* DamagedChessEntities; // 0x40
		::MoleMole::HackerGameBaseDamage* Damage; // 0x48
		::System::String* LaserParticleKey; // 0x50
		::System::Collections::Generic::List_1<::System::Single>* LaserPerformSequence; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>* RenderDataHandles; // 0x60
		::System::Action* SpawnLaserEffectDelegate; // 0x68
		::System::String* AlertSoundTriggerName; // 0x70
		::System::Collections::IEnumerator* Enumerator; // 0x78
		::System::Int32 LastDamageIndex; // 0x80
		::System::Int32 PerformSequenceIndex; // 0x84
		::System::ValueTuple_2<::System::Int32, ::System::Int32> YRange; // 0x88
		::System::ValueTuple_2<::System::Int32, ::System::Int32> XRange; // 0x90
		::System::Int32 DamageFinishIndex; // 0x98
		::System::Single Timer; // 0x9C
		::System::Int32 AlertFrameCount; // 0xA0
		::System::Single AlertExtraDuration; // 0xA4
		::System::Int32 StartFrameIndex; // 0xA8
		::MoleMole::Vector2Int DamageActiveRange; // 0xAC
		::System::Single DamageDelay; // 0xB4
		::System::Boolean IsFinished; // 0xB8
		::System::Boolean alertAudioPost; // 0xB9
		::System::Single DamageDuration; // 0xBC
		::MoleMole::HollowChessboard::HollowCell TriggerPoint; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3__CTOR_OFFSET))(this);
		}

		::System::Int32 get_AlertFinishFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_GET_ALERTFINISHFRAME_OFFSET))(this);
		}

		::System::Single get_AlertStartTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_GET_ALERTSTARTTIME_OFFSET))(this);
		}

		::System::Single get_AlertStopTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_GET_ALERTSTOPTIME_OFFSET))(this);
		}

		::System::Single get_PerformStartTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_GET_PERFORMSTARTTIME_OFFSET))(this);
		}

		::System::Single get_TotalTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_GET_TOTALTIME_OFFSET))(this);
		}

		::System::Int32 get_SequenceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_GET_SEQUENCECOUNT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update(::System::Int32 frameIndex, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_UPDATE_OFFSET))(this, frameIndex, deltaTime);
		}

		::System::Collections::IEnumerator* ExecuteDelayedLaser()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_EXECUTEDELAYEDLASER_OFFSET))(this);
		}

		::System::Void SpawnLaserEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_SPAWNLASEREFFECT_OFFSET))(this);
		}

		::System::Void PostDamageSound(::MoleMole::ChessEntity* target)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_POSTDAMAGESOUND_OFFSET))(this, target);
		}

		::System::Void PostLaserSpawnSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_POSTLASERSPAWNSOUND_OFFSET))(this);
		}

		::System::Void PostAlertSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_POSTALERTSOUND_OFFSET))(this);
		}

		::System::Void DestroyAlertEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_DESTROYALERTENTITIES_OFFSET))(this);
		}

		::System::Void UpdateLaserParticle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_UPDATELASERPARTICLE_OFFSET))(this);
		}

		::System::Void UpdateDamageActiveRange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_UPDATEDAMAGEACTIVERANGE_OFFSET))(this);
		}

		::System::Void UpdateDamage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_UPDATEDAMAGE_OFFSET))(this);
		}

		::System::Void GetDamageRange(::System::Int32 index, ::System::Single& damageStartTime, ::System::Single& damageEndTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_GETDAMAGERANGE_OFFSET))(this, index, damageStartTime, damageEndTime);
		}

		::System::Single GetLaserStartTime(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_GETLASERSTARTTIME_OFFSET))(this, index);
		}

		::System::Void ApplyLaserDamage(::System::Int32 minIndex, ::System::Int32 maxIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_APPLYLASERDAMAGE_OFFSET))(this, minIndex, maxIndex);
		}

		::System::Void ApplyLaserDamage_1(::System::ValueTuple_2<::System::Int32, ::System::Int32> xRange, ::System::ValueTuple_2<::System::Int32, ::System::Int32> yRange)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_APPLYLASERDAMAGE_1_OFFSET))(this, xRange, yRange);
		}

		static ::System::Void ApplyLaserDamage_2(::MoleMole::ChessEntity* source, ::MoleMole::ChessEntity* target, ::MoleMole::HackerGameBaseDamage* damage, ::MoleMole::HollowChessboard::HollowCell position)
		{
			return ((::System::Void(*)(::MoleMole::ChessEntity*, ::MoleMole::ChessEntity*, ::MoleMole::HackerGameBaseDamage*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_APPLYLASERDAMAGE_2_OFFSET))(source, target, damage, position);
		}

		static ::System::Boolean IsInLaserArea(::System::ValueTuple_2<::System::Int32, ::System::Int32> xRange, ::System::ValueTuple_2<::System::Int32, ::System::Int32> yRange, ::MoleMole::HollowChessboard::HollowCell position)
		{
			return ((::System::Boolean(*)(::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASERV3_ISINLASERAREA_OFFSET))(xRange, yRange, position);
		}
	};
}
