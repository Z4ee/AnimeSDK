#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/BigSceneBangBooLogSubsystem_GameResult.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_208CC9941471731A_1060;
class Class_3_07AAFA6F7F79BEB3;
class Class_3_472679C84451629A_17;
class Class_3_5D6E6A4B36F53E3B;
class Class_3_A2D3A42EB7FD58BA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_ARRIVECHECKPOINT_OFFSET UNITYSDK_OFFSET(0x1628F260)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_BUILD_OFFSET UNITYSDK_OFFSET(0x1628F760)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_CAST_OFFSET UNITYSDK_OFFSET(0x1628FFD0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_GETTEMPLATE_OFFSET UNITYSDK_OFFSET(0x16290090)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1628EF20)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_PROCESSGAMERESULT_OFFSET UNITYSDK_OFFSET(0x1628F680)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_RECORDCURRENTCHECKPOINT_OFFSET UNITYSDK_OFFSET(0x1628F1B0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_REPORTEXITGAME_OFFSET UNITYSDK_OFFSET(0x1628FF10)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_REPORTFINISHGAME_OFFSET UNITYSDK_OFFSET(0x1628FF70)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_REPORTRESTARTGAME_OFFSET UNITYSDK_OFFSET(0x1628F700)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_RESET_OFFSET UNITYSDK_OFFSET(0x1628EF70)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_REVIVE_OFFSET UNITYSDK_OFFSET(0x1628F3A0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_SENDREQUEST_OFFSET UNITYSDK_OFFSET(0x1628FD50)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_TRYEXITGANGBOOGAMEANDSHOWREWARD_OFFSET UNITYSDK_OFFSET(0x162901B0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_WAITTELEPORTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x16290850)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x162908F0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x16290910)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneBangBooLogSubsystem_TypeDefinitionIndex = 71060;

	class BigSceneBangBooLogSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::BigSceneBangBooLogSubsystem*>
	{
	public:
		static ::MoleMole::BigSceneBangBooLogSubsystem** StaticGet_Self()
		{
			return (::MoleMole::BigSceneBangBooLogSubsystem**)Il2CppClass::FromTypeDefinitionIndex(BigSceneBangBooLogSubsystem_TypeDefinitionIndex)->GetStaticField(0x394E0);
		}
		// static const ::System::Int32 InvalidCheckPoint = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 MaxQueueCount = 0xA; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Queue_1<::UnityEngine::Vector3>*>* _fallPosition; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _checkPointDuration; // 0x18
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

		static ::System::Void SendRequest(::Class_3_472679C84451629A_17* req)
		{
			return ((::System::Void(*)(::Class_3_472679C84451629A_17*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_SENDREQUEST_OFFSET))(req);
		}

		::Class_3_472679C84451629A_17* Build(::MoleMole::BigSceneBangBooLogSubsystem_GameResult result)
		{
			return ((::Class_3_472679C84451629A_17*(*)(::PVOID, ::MoleMole::BigSceneBangBooLogSubsystem_GameResult))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_BUILD_OFFSET))(this, result);
		}

		static ::Class_3_5D6E6A4B36F53E3B* Cast(::UnityEngine::Vector3 position)
		{
			return ((::Class_3_5D6E6A4B36F53E3B*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_CAST_OFFSET))(position);
		}

		::Class_2_208CC9941471731A_1060* GetTemplate(::System::Int32 floorId)
		{
			return ((::Class_2_208CC9941471731A_1060*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_GETTEMPLATE_OFFSET))(this, floorId);
		}

		::System::Void TryExitGangBooGameAndShowReward(::Class_3_07AAFA6F7F79BEB3* quest, ::Class_3_A2D3A42EB7FD58BA* item)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_07AAFA6F7F79BEB3*, ::Class_3_A2D3A42EB7FD58BA*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_TRYEXITGANGBOOGAMEANDSHOWREWARD_OFFSET))(this, quest, item);
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
