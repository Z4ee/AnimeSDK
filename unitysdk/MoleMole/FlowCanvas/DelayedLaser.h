#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_5_FCAF801AC482D3B5;
namespace MoleMole { class ChessEntity; }
namespace MoleMole { class ChessEntityCollection; }
namespace MoleMole { class HackerGameBaseDamage; }
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_DELAYEDLASER_APPLYLASERDAMAGE_1_OFFSET UNITYSDK_OFFSET(0x1510C9D0)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASER_APPLYLASERDAMAGE_OFFSET UNITYSDK_OFFSET(0x1510B8B0)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASER_DESTROYALERTENTITIES_OFFSET UNITYSDK_OFFSET(0x1510AE40)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASER_EXECUTEDELAYEDLASER_OFFSET UNITYSDK_OFFSET(0x1510B230)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASER_GET_ALERTSTARTTIME_OFFSET UNITYSDK_OFFSET(0x1510AD90)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASER_GET_ALERTSTOPTIME_OFFSET UNITYSDK_OFFSET(0x1510ADA0)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASER_GET_DAMAGESTARTTIME_OFFSET UNITYSDK_OFFSET(0x1510ADC0)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASER_GET_DAMAGESTOPTIME_OFFSET UNITYSDK_OFFSET(0x1510ADD0)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASER_GET_PERFORMSTARTTIME_OFFSET UNITYSDK_OFFSET(0x1510ADB0)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASER_ISINLASERAREA_OFFSET UNITYSDK_OFFSET(0x1510C940)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1510ADF0)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASER_UPDATELASERPARTICLE_OFFSET UNITYSDK_OFFSET(0x1510B2C0)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1510B080)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASER__CTOR_OFFSET UNITYSDK_OFFSET(0x1510CA90)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int DelayedLaser_TypeDefinitionIndex = 64454;

	class DelayedLaser : public ::System::Object
	{
	public:
		::MoleMole::ChessEntityCollection* ChessEntityCollection; // 0x10
		::MoleMole::HackerGameBaseDamage* Damage; // 0x18
		::System::String* LaserParticleKey; // 0x20
		::System::Collections::Generic::List_1<::System::Single>* LaserPerformSequence; // 0x28
		::System::Collections::Generic::HashSet_1<::MoleMole::ChessEntity*>* DamagedChessEntities; // 0x30
		::MoleMole::ChessEntityCollection* PlayerEntityCollection; // 0x38
		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>* RenderDataHandles; // 0x40
		::Class_5_FCAF801AC482D3B5* CurrentChessboard; // 0x48
		::System::Collections::IEnumerator* Enumerator; // 0x50
		::System::Single DamageDelay; // 0x58
		::System::ValueTuple_2<::System::Int32, ::System::Int32> XRange; // 0x5C
		::System::Single DamageDuration; // 0x64
		::System::Single AlertDuration; // 0x68
		::System::Int32 PerformSequenceIndex; // 0x6C
		::System::Single Timer; // 0x70
		::MoleMole::HollowChessboard::HollowCell TriggerPoint; // 0x74
		::System::ValueTuple_2<::System::Int32, ::System::Int32> YRange; // 0x80
		::System::Boolean IsFinished; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASER__CTOR_OFFSET))(this);
		}

		::System::Single get_AlertStartTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASER_GET_ALERTSTARTTIME_OFFSET))(this);
		}

		::System::Single get_AlertStopTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASER_GET_ALERTSTOPTIME_OFFSET))(this);
		}

		::System::Single get_PerformStartTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASER_GET_PERFORMSTARTTIME_OFFSET))(this);
		}

		::System::Single get_DamageStartTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASER_GET_DAMAGESTARTTIME_OFFSET))(this);
		}

		::System::Single get_DamageStopTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASER_GET_DAMAGESTOPTIME_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASER_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Collections::IEnumerator* ExecuteDelayedLaser()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASER_EXECUTEDELAYEDLASER_OFFSET))(this);
		}

		::System::Void DestroyAlertEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASER_DESTROYALERTENTITIES_OFFSET))(this);
		}

		::System::Void UpdateLaserParticle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASER_UPDATELASERPARTICLE_OFFSET))(this);
		}

		::System::Void ApplyLaserDamage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASER_APPLYLASERDAMAGE_OFFSET))(this);
		}

		static ::System::Void ApplyLaserDamage_1(::MoleMole::ChessEntity* source, ::MoleMole::ChessEntity* target, ::MoleMole::HackerGameBaseDamage* damage, ::MoleMole::HollowChessboard::HollowCell position)
		{
			return ((::System::Void(*)(::MoleMole::ChessEntity*, ::MoleMole::ChessEntity*, ::MoleMole::HackerGameBaseDamage*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASER_APPLYLASERDAMAGE_1_OFFSET))(source, target, damage, position);
		}

		static ::System::Boolean IsInLaserArea(::System::ValueTuple_2<::System::Int32, ::System::Int32> xRange, ::System::ValueTuple_2<::System::Int32, ::System::Int32> yRange, ::MoleMole::HollowChessboard::HollowCell position)
		{
			return ((::System::Boolean(*)(::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASER_ISINLASERAREA_OFFSET))(xRange, yRange, position);
		}
	};
}
