#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/BigSceneBangBooLogSubsystem_GameResult.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_208CC9941471731A_982;
class Class_3_0F941FBD354851FC;
class Class_3_5D6E6A4B36F53E3B;
class Class_3_A677F28E13D1020C;
class Class_3_FEFC21BD9237CD57_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_ARRIVECHECKPOINT_OFFSET UNITYSDK_OFFSET(0x13986950)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_BUILD_OFFSET UNITYSDK_OFFSET(0x13986E90)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_CAST_OFFSET UNITYSDK_OFFSET(0x13987700)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_GETTEMPLATE_OFFSET UNITYSDK_OFFSET(0x139877C0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13986610)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_PROCESSGAMERESULT_OFFSET UNITYSDK_OFFSET(0x13986DB0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_RECORDCURRENTCHECKPOINT_OFFSET UNITYSDK_OFFSET(0x139868A0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_REPORTEXITGAME_OFFSET UNITYSDK_OFFSET(0x13987640)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_REPORTFINISHGAME_OFFSET UNITYSDK_OFFSET(0x139876A0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_REPORTRESTARTGAME_OFFSET UNITYSDK_OFFSET(0x13986E30)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_RESET_OFFSET UNITYSDK_OFFSET(0x13986660)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_REVIVE_OFFSET UNITYSDK_OFFSET(0x13986A90)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_SENDREQUEST_OFFSET UNITYSDK_OFFSET(0x13987480)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_TRYEXITGANGBOOGAMEANDSHOWREWARD_OFFSET UNITYSDK_OFFSET(0x139878E0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_WAITTELEPORTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x13987F30)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x13987FD0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13987FF0)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneBangBooLogSubsystem_TypeDefinitionIndex = 78143;

	class BigSceneBangBooLogSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::BigSceneBangBooLogSubsystem*>
	{
	public:
		static ::MoleMole::BigSceneBangBooLogSubsystem** StaticGet_Self()
		{
			return (::MoleMole::BigSceneBangBooLogSubsystem**)Il2CppClass::FromTypeDefinitionIndex(BigSceneBangBooLogSubsystem_TypeDefinitionIndex)->GetStaticField(0x3B640);
		}
		// static const ::System::Int32 InvalidCheckPoint = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 MaxQueueCount = 0xA; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _checkPointDuration; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Queue_1<::UnityEngine::Vector3>*>* _fallPosition; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _checkPointReviveTimes; // 0x20
		::System::Int32 _currentCheckPointArriveTime; // 0x28
		::System::Int32 _currentCheckPoint; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_RESET_OFFSET))(this);
		}

		::System::Void RecordCurrentCheckPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_RECORDCURRENTCHECKPOINT_OFFSET))(this);
		}

		::System::Void ArriveCheckPoint(::System::Int32 checkPoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_ARRIVECHECKPOINT_OFFSET))(this, checkPoint);
		}

		::System::Void Revive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_REVIVE_OFFSET))(this);
		}

		::System::Int32 ProcessGameResult(::MoleMole::BigSceneBangBooLogSubsystem_GameResult result)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::BigSceneBangBooLogSubsystem_GameResult))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_PROCESSGAMERESULT_OFFSET))(this, result);
		}

		::System::Void ReportRestartGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_REPORTRESTARTGAME_OFFSET))(this);
		}

		::System::Void ReportExitGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_REPORTEXITGAME_OFFSET))(this);
		}

		::System::Void ReportFinishGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_REPORTFINISHGAME_OFFSET))(this);
		}

		static ::System::Void SendRequest(::Class_3_A677F28E13D1020C* req)
		{
			return ((::System::Void(*)(::Class_3_A677F28E13D1020C*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_SENDREQUEST_OFFSET))(req);
		}

		::Class_3_A677F28E13D1020C* Build(::MoleMole::BigSceneBangBooLogSubsystem_GameResult result)
		{
			return ((::Class_3_A677F28E13D1020C*(*)(::PVOID, ::MoleMole::BigSceneBangBooLogSubsystem_GameResult))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_BUILD_OFFSET))(this, result);
		}

		static ::Class_3_5D6E6A4B36F53E3B* Cast(::UnityEngine::Vector3 position)
		{
			return ((::Class_3_5D6E6A4B36F53E3B*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_CAST_OFFSET))(position);
		}

		::Class_2_208CC9941471731A_982* GetTemplate(::System::Int32 floorId)
		{
			return ((::Class_2_208CC9941471731A_982*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_GETTEMPLATE_OFFSET))(this, floorId);
		}

		::System::Void TryExitGangBooGameAndShowReward(::Class_3_FEFC21BD9237CD57_1* quest, ::Class_3_0F941FBD354851FC* item)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_FEFC21BD9237CD57_1*, ::Class_3_0F941FBD354851FC*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_TRYEXITGANGBOOGAMEANDSHOWREWARD_OFFSET))(this, quest, item);
		}

		::Cysharp::Threading::Tasks::UniTask WaitTeleportComplete(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* rewards)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_WAITTELEPORTCOMPLETE_OFFSET))(this, rewards);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}
	};
}
