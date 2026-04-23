#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"

class Class_2_7AF1D57CA4301272;
namespace RPG::Client { class BaseChimeraViewProxy; }
namespace RPG::Client { class ChimeraBattlePuzzleArea; }
namespace RPG::Client { class ChimeraData; }
namespace RPG::Client { class ChimeraViewProxy; }
namespace RPG::Client { class ChimeraWorkDataItem; }
namespace RPG::Client { class ChimeraWorkViewProxy; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleStreet; }
namespace RPG::Client::Prop { class ChimeraTransitionTeamManager; }
namespace RPG::Client::UI3DGame { class ChimeraBattleCameraView; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_CANGOTONEXTAREA_OFFSET UNITYSDK_OFFSET(0xADB5D50)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_CLEARWAITDESTROY_OFFSET UNITYSDK_OFFSET(0xADB7D90)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_CLEAR_OFFSET UNITYSDK_OFFSET(0xADBA270)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_DESTROYCHIMERA_OFFSET UNITYSDK_OFFSET(0xADB7B30)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xADB9B00)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_DOGOTONEXTAREA_OFFSET UNITYSDK_OFFSET(0xADB5F10)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_GETALLPROXIES_OFFSET UNITYSDK_OFFSET(0xADB6320)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_GETCHIMERATFREF_OFFSET UNITYSDK_OFFSET(0xADB7F40)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_GETLEADERCHIMERATFREF_OFFSET UNITYSDK_OFFSET(0xADB8160)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_GETPROXYBYCHIMERAID_OFFSET UNITYSDK_OFFSET(0xADB8390)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_GETPROXYBYGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xADB84F0)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_GETTFREF_OFFSET UNITYSDK_OFFSET(0xADB81D0)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_GETWORKTFREF_OFFSET UNITYSDK_OFFSET(0xADB8330)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_GET_CURRENTAREA_OFFSET UNITYSDK_OFFSET(0xADB7190)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_GET_LEADERCHIMERA_OFFSET UNITYSDK_OFFSET(0xADB8760)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_GET_WORKPROXY_OFFSET UNITYSDK_OFFSET(0xADB8740)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_GET__CURRENTSTREET_OFFSET UNITYSDK_OFFSET(0xADB5E40)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_GOTONEXTAREA_OFFSET UNITYSDK_OFFSET(0xADB6410)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_GOTONEXTSTREET_OFFSET UNITYSDK_OFFSET(0xADB6520)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_LOADCHIMERA_OFFSET UNITYSDK_OFFSET(0xADB76A0)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_LOADWORK_OFFSET UNITYSDK_OFFSET(0xADB7210)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_SET_WORKPROXY_OFFSET UNITYSDK_OFFSET(0xADB8750)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xADB8B50)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_TRYSWITCHAREA_OFFSET UNITYSDK_OFFSET(0xADB5CF0)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xADB9A70)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__ADDSTREAMINGCALLBACK_OFFSET UNITYSDK_OFFSET(0xADB9490)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__ADDSTREAMINGSOURCE_OFFSET UNITYSDK_OFFSET(0xADB8DF0)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__CREATEVIEW_OFFSET UNITYSDK_OFFSET(0xADB9040)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xADBA6F0)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__DISPOSECAMERA_OFFSET UNITYSDK_OFFSET(0xADBA0B0)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__INITCAMERA_OFFSET UNITYSDK_OFFSET(0xADB9730)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__INITPUZZLEPOS_OFFSET UNITYSDK_OFFSET(0xADB8C50)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__INITSTREETS_OFFSET UNITYSDK_OFFSET(0xADB8770)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__INITTRANSITIONMANAGER_OFFSET UNITYSDK_OFFSET(0xADB8CD0)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__INITVIEWENV_OFFSET UNITYSDK_OFFSET(0xADB9990)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__LOADLEADERCHIMERA_OFFSET UNITYSDK_OFFSET(0xADB7900)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__ONUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xADBA580)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__REFRESHCAMERA_OFFSET UNITYSDK_OFFSET(0xADBA610)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__REGISTERSELF_OFFSET UNITYSDK_OFFSET(0xADB98F0)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__REMOVEALLEFFECTS_OFFSET UNITYSDK_OFFSET(0xADB9BD0)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__REMOVESTREAMINGSOURCE_OFFSET UNITYSDK_OFFSET(0xADB9D50)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__SPAWNWORK_OFFSET UNITYSDK_OFFSET(0xADB5FA0)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__SYNCCAMERATRANSFORM_OFFSET UNITYSDK_OFFSET(0xADB6FF0)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__SYNCCHIMERATRANSFORM_OFFSET UNITYSDK_OFFSET(0xADB6AF0)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xADBA7B0)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xADBA750)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraBattlePuzzleBoard_TypeDefinitionIndex = 71920;

	class ChimeraBattlePuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		// static const ::System::String* _StreamingSourceName; // 0x0
		::RPG::Client::ChimeraWorkViewProxy* _WorkProxy_k__BackingField; // 0x48
		::RPG::Client::ChimeraWorkViewProxy* _WaitDestroyWork; // 0x50
		::RPG::Client::ChimeraViewProxy* _LeaderChimera; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::ChimeraViewProxy*>* IndexToChimeraList; // 0x60
		::RPG::Client::UI3DGame::ChimeraBattleCameraView* CameraController; // 0x68
		::Il2CppArray<::RPG::Client::Prop::ChimeraBattlePuzzleStreet*>* _StreetArray; // 0x70
		::RPG::Client::Promises::Promise* _ClosePuzzlePromise; // 0x78
		::System::Int32 _CurrentStreetIndex; // 0x80
		::RPG::Client::Prop::ChimeraTransitionTeamManager* TeamTransitionMgr; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		::System::Void TrySwitchArea(::System::Int32 newWorkIndex, ::System::Action* callback, ::System::Single totalTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_TRYSWITCHAREA_OFFSET))(this, newWorkIndex, callback, totalTime);
		}

		::System::Boolean CanGotoNextArea()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_CANGOTONEXTAREA_OFFSET))(this);
		}

		::System::Void DoGotoNextArea(::System::Int32 newWorkIndex, ::System::Action* callback, ::System::Single totalTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_DOGOTONEXTAREA_OFFSET))(this, newWorkIndex, callback, totalTime);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BaseChimeraViewProxy*>* GetAllProxies()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BaseChimeraViewProxy*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_GETALLPROXIES_OFFSET))(this);
		}

		::System::Void GotoNextArea()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_GOTONEXTAREA_OFFSET))(this);
		}

		::System::Void GotoNextStreet(::System::Int32 newWorkIndex, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_GOTONEXTSTREET_OFFSET))(this, newWorkIndex, callback);
		}

		::System::Void _SpawnWork(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* puzzle, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__SPAWNWORK_OFFSET))(this, puzzle, index);
		}

		::System::Void LoadChimera(::RPG::Client::ChimeraData* param, ::UnityEngine::Transform* tf, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraData*, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_LOADCHIMERA_OFFSET))(this, param, tf, index);
		}

		::System::Void _SyncChimeraTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__SYNCCHIMERATRANSFORM_OFFSET))(this);
		}

		::System::Void _LoadLeaderChimera(::RPG::Client::ChimeraData* param, ::UnityEngine::Transform* tf)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraData*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__LOADLEADERCHIMERA_OFFSET))(this, param, tf);
		}

		::System::Void DestroyChimera(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_DESTROYCHIMERA_OFFSET))(this, id);
		}

		::System::Void LoadWork(::RPG::Client::ChimeraWorkDataItem* param, ::UnityEngine::Transform* slot, ::UnityEngine::Transform* tf, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraWorkDataItem*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_LOADWORK_OFFSET))(this, param, slot, tf, index);
		}

		::System::Void ClearWaitDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_CLEARWAITDESTROY_OFFSET))(this);
		}

		::UnityEngine::Transform* GetChimeraTfRef(::System::UInt32 chimeraID)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_GETCHIMERATFREF_OFFSET))(this, chimeraID);
		}

		::UnityEngine::Transform* GetLeaderChimeraTfRef()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_GETLEADERCHIMERATFREF_OFFSET))(this);
		}

		::UnityEngine::Transform* GetTfRef(::Class_2_7AF1D57CA4301272* entity)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::Class_2_7AF1D57CA4301272*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_GETTFREF_OFFSET))(this, entity);
		}

		::UnityEngine::Transform* GetWorkTfRef()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_GETWORKTFREF_OFFSET))(this);
		}

		::RPG::Client::ChimeraViewProxy* GetProxyByChimeraID(::System::UInt32 chimeraID)
		{
			return ((::RPG::Client::ChimeraViewProxy*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_GETPROXYBYCHIMERAID_OFFSET))(this, chimeraID);
		}

		::RPG::Client::BaseChimeraViewProxy* GetProxyByGameObject(::UnityEngine::GameObject* gO)
		{
			return ((::RPG::Client::BaseChimeraViewProxy*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_GETPROXYBYGAMEOBJECT_OFFSET))(this, gO);
		}

		::RPG::Client::ChimeraWorkViewProxy* get_WorkProxy()
		{
			return ((::RPG::Client::ChimeraWorkViewProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_GET_WORKPROXY_OFFSET))(this);
		}

		::System::Void set_WorkProxy(::RPG::Client::ChimeraWorkViewProxy* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraWorkViewProxy*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_SET_WORKPROXY_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraViewProxy* get_LeaderChimera()
		{
			return ((::RPG::Client::ChimeraViewProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_GET_LEADERCHIMERA_OFFSET))(this);
		}

		::System::Void _InitStreets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__INITSTREETS_OFFSET))(this);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void _RemoveAllEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__REMOVEALLEFFECTS_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* Clear()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_CLEAR_OFFSET))(this);
		}

		::System::Void _InitCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__INITCAMERA_OFFSET))(this);
		}

		::System::Void _SyncCameraTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__SYNCCAMERATRANSFORM_OFFSET))(this);
		}

		::System::Void _DisposeCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__DISPOSECAMERA_OFFSET))(this);
		}

		::System::Void _CreateView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__CREATEVIEW_OFFSET))(this);
		}

		::System::Void _InitPuzzlePos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__INITPUZZLEPOS_OFFSET))(this);
		}

		::System::Void _RegisterSelf()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__REGISTERSELF_OFFSET))(this);
		}

		::System::Void _InitViewEnv()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__INITVIEWENV_OFFSET))(this);
		}

		::System::Void _AddStreamingCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__ADDSTREAMINGCALLBACK_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnUIScreenSizeChanged(::System::Object* notifyParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__ONUISCREENSIZECHANGED_OFFSET))(this, notifyParam);
		}

		::System::Void _RefreshCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__REFRESHCAMERA_OFFSET))(this);
		}

		::System::Void _InitTransitionManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__INITTRANSITIONMANAGER_OFFSET))(this);
		}

		::System::Void _AddStreamingSource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__ADDSTREAMINGSOURCE_OFFSET))(this);
		}

		::System::Void _RemoveStreamingSource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD__REMOVESTREAMINGSOURCE_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraBattlePuzzleStreet* get__CurrentStreet()
		{
			return ((::RPG::Client::Prop::ChimeraBattlePuzzleStreet*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_GET__CURRENTSTREET_OFFSET))(this);
		}

		::RPG::Client::ChimeraBattlePuzzleArea* get_CurrentArea()
		{
			return ((::RPG::Client::ChimeraBattlePuzzleArea*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD_GET_CURRENTAREA_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
