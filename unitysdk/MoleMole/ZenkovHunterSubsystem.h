#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_24.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

class Class_2_94D89365FB513EE1_Class_1_1E471D30B2D0DECD;
class Class_3_E27FF972D6A12E8E_1;
class Class_3_E6DBB0638F698853_18;
namespace System { class EventArgs; }
namespace System { class String; }

#define MOLEMOLE_ZENKOVHUNTERSUBSYSTEM_APPLYHUNTERFIELDS_OFFSET UNITYSDK_OFFSET(0x10F19020)
#define MOLEMOLE_ZENKOVHUNTERSUBSYSTEM_CHECKANDNOTIFYAREAFULL_OFFSET UNITYSDK_OFFSET(0x10F18A70)
#define MOLEMOLE_ZENKOVHUNTERSUBSYSTEM_CLIENTSETZENKOVHUNTSTART_OFFSET UNITYSDK_OFFSET(0x10F19560)
#define MOLEMOLE_ZENKOVHUNTERSUBSYSTEM_INITHUNTERDATA_OFFSET UNITYSDK_OFFSET(0x10F181D0)
#define MOLEMOLE_ZENKOVHUNTERSUBSYSTEM_ISEROSIONAREAFULL_OFFSET UNITYSDK_OFFSET(0x10F18E50)
#define MOLEMOLE_ZENKOVHUNTERSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x10F18010)
#define MOLEMOLE_ZENKOVHUNTERSUBSYSTEM_ONBIGSCENEDUNGEONEROSIONAREAUPDATE_OFFSET UNITYSDK_OFFSET(0x10F18580)
#define MOLEMOLE_ZENKOVHUNTERSUBSYSTEM_ONBIGSCENEDUNGEONHUNTERSYNC_OFFSET UNITYSDK_OFFSET(0x10F190C0)
#define MOLEMOLE_ZENKOVHUNTERSUBSYSTEM_ONBIGSCENESCENEDUNGEONEROSIONSYNC_OFFSET UNITYSDK_OFFSET(0x10F186C0)
#define MOLEMOLE_ZENKOVHUNTERSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10F183C0)
#define MOLEMOLE_ZENKOVHUNTERSUBSYSTEM_PROCESSHUNTERSTAGENOTIFY_OFFSET UNITYSDK_OFFSET(0x10F19190)
#define MOLEMOLE_ZENKOVHUNTERSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x10F195B0)
#define MOLEMOLE_ZENKOVHUNTERSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x10F195D0)
#define MOLEMOLE_ZENKOVHUNTERSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10F19660)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovHunterSubsystem_TypeDefinitionIndex = 50716;

	class ZenkovHunterSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::ZenkovHunterSubsystem*>
	{
	public:
		// static const ::System::UInt32 HunterStageHigher = 0x4; // 0x0
		// static const ::System::String* NormalHunterStageAbilityEvent; // 0x0
		// static const ::System::String* HighLevelHunterStageAbilityEvent; // 0x0
		// static const ::System::String* ZenKovAreaFullAbilityEvent; // 0x0
		::Class_3_E27FF972D6A12E8E_1* HunterData; // 0x10
		::System::UInt32 HunterStage; // 0x18
		::System::Boolean IsAreaFull; // 0x1C
		::System::Boolean IsEternalNight; // 0x1D
		::Enum_3_ED790DAC948A65A9_24 CurHunterState; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVHUNTERSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVHUNTERSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVHUNTERSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnBigSceneDungeonErosionAreaUpdate(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVHUNTERSUBSYSTEM_ONBIGSCENEDUNGEONEROSIONAREAUPDATE_OFFSET))(this, eventArgs);
		}

		::System::Void OnBigSceneSceneDungeonErosionSync(::System::Boolean isEverNight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVHUNTERSUBSYSTEM_ONBIGSCENESCENEDUNGEONEROSIONSYNC_OFFSET))(this, isEverNight);
		}

		::System::Boolean IsErosionAreaFull(::Class_2_94D89365FB513EE1_Class_1_1E471D30B2D0DECD* donjonData)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_94D89365FB513EE1_Class_1_1E471D30B2D0DECD*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVHUNTERSUBSYSTEM_ISEROSIONAREAFULL_OFFSET))(this, donjonData);
		}

		::System::Void CheckAndNotifyAreaFull(::Class_2_94D89365FB513EE1_Class_1_1E471D30B2D0DECD* donjonData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_94D89365FB513EE1_Class_1_1E471D30B2D0DECD*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVHUNTERSUBSYSTEM_CHECKANDNOTIFYAREAFULL_OFFSET))(this, donjonData);
		}

		::System::Void InitHunterData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVHUNTERSUBSYSTEM_INITHUNTERDATA_OFFSET))(this);
		}

		::System::Void OnBigSceneDungeonHunterSync(::Class_3_E6DBB0638F698853_18* sync)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_E6DBB0638F698853_18*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVHUNTERSUBSYSTEM_ONBIGSCENEDUNGEONHUNTERSYNC_OFFSET))(this, sync);
		}

		::System::Void ApplyHunterFields(::Class_3_E27FF972D6A12E8E_1* hunter)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_E27FF972D6A12E8E_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVHUNTERSUBSYSTEM_APPLYHUNTERFIELDS_OFFSET))(this, hunter);
		}

		::System::Void ClientSetZenKovHuntStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVHUNTERSUBSYSTEM_CLIENTSETZENKOVHUNTSTART_OFFSET))(this);
		}

		::System::Void ProcessHunterStageNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVHUNTERSUBSYSTEM_PROCESSHUNTERSTAGENOTIFY_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVHUNTERSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVHUNTERSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
