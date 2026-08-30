#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_43B0AF86156D9901;
class Class_1_90269F040CBA17C9;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class PerformanceRecallRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PERFORMANCERECALLMODULE_GETALLUNLOCKEDPERFORMANCERECALLDATA_OFFSET UNITYSDK_OFFSET(0xDA57CC0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_GETSHOWINPLAYERROOMPHOTOSRECALLID_OFFSET UNITYSDK_OFFSET(0xDA56A10)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_GET_ISWAITINGRECALL_OFFSET UNITYSDK_OFFSET(0xDA58A00)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_HASSEEN_OFFSET UNITYSDK_OFFSET(0xDA56940)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_HASUNLOCKED_OFFSET UNITYSDK_OFFSET(0xDA56C90)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xDA56EC0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_ISNEW_1_OFFSET UNITYSDK_OFFSET(0xDA57AE0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_ISNEW_OFFSET UNITYSDK_OFFSET(0xDA57A70)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xDA56F20)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_RANDOMGETPHOTOSRECALLID_OFFSET UNITYSDK_OFFSET(0xDA563F0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_SET_ISWAITINGRECALL_OFFSET UNITYSDK_OFFSET(0xDA58A10)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_SHOWRECALLUI_OFFSET UNITYSDK_OFFSET(0xDA570D0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_STARTPERFORMANCERECALL_1_OFFSET UNITYSDK_OFFSET(0xDA572F0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_STARTPERFORMANCERECALL_OFFSET UNITYSDK_OFFSET(0xDA571E0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xDA58040)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_UPDATESEEN_OFFSET UNITYSDK_OFFSET(0xDA57B70)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_WAITUNLOCKEDCONDITIONDATAREADY_OFFSET UNITYSDK_OFFSET(0xDA57FE0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xDA58640)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__CANRECALLINCURRENTSCENE_OFFSET UNITYSDK_OFFSET(0xDA57420)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__CREATEPERFORMANCELEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xDA57610)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xDA58A20)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__DESTROYLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xDA58340)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__DOPLAYPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xDA576A0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__ENTERCLIENTPERFORMANCEMAP_OFFSET UNITYSDK_OFFSET(0xDA577C0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__GETALLPHOTOSRECALLID_OFFSET UNITYSDK_OFFSET(0xDA566C0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__INITPHOTOWALLDATA_OFFSET UNITYSDK_OFFSET(0xDA56CF0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xDA58870)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__ONMISSIONSYSTEMCREATED_OFFSET UNITYSDK_OFFSET(0xDA587A0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__ONPERFORMANCEEND_OFFSET UNITYSDK_OFFSET(0xDA580B0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__PREPAREUNLOCKEDCONDITIONDATA_OFFSET UNITYSDK_OFFSET(0xDA57F00)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__REFRESHUNLOCKEDCONDITIONDATA_OFFSET UNITYSDK_OFFSET(0xDA56F90)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__RETURNORIGINMAP_OFFSET UNITYSDK_OFFSET(0xDA58410)

namespace RPG::Client
{
	inline static constexpr unsigned int PerformanceRecallModule_TypeDefinitionIndex = 66473;

	class PerformanceRecallModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::String* _PHOTO_TOTAL_COUNT_KEY; // 0x0
		// static const ::System::String* _UNSEEN_PHOTO_COUNT_KEY; // 0x0
		::RPG::GameCore::LevelGraphComponent* _CurrentRecallLevelGraph; // 0x10
		::RPG::Client::Promises::IPromise* _UnlockConditionDataReadyPromise; // 0x18
		::RPG::GameCore::PerformanceRecallRow* _AutoOpenConfig; // 0x20
		::Class_1_90269F040CBA17C9* _CurrentRecallData; // 0x28
		::Class_1_43B0AF86156D9901* _LogicRandom; // 0x30
		::System::Int32 _UnseenPhotoCount; // 0x38
		::System::Int32 _PhotoTotalCount; // 0x3C
		::System::Boolean _IsWaitingRecall_k__BackingField; // 0x40
		::System::Boolean _HasAddedPerformanceLock; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* RandomGetPhotosRecallID()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_RANDOMGETPHOTOSRECALLID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetShowInPlayerRoomPhotosRecallID()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_GETSHOWINPLAYERROOMPHOTOSRECALLID_OFFSET))(this);
		}

		::System::Void _InitPhotoWallData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__INITPHOTOWALLDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetAllPhotosRecallID()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__GETALLPHOTOSRECALLID_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_INIT_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void ShowRecallUI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_SHOWRECALLUI_OFFSET))(this, a1);
		}

		::System::Void StartPerformanceRecall(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_STARTPERFORMANCERECALL_OFFSET))(this, a1);
		}

		::System::Void StartPerformanceRecall_1(::RPG::GameCore::PerformanceRecallRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PerformanceRecallRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_STARTPERFORMANCERECALL_1_OFFSET))(this, a1);
		}

		::System::Boolean IsNew(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_ISNEW_OFFSET))(this, a1);
		}

		::System::Boolean IsNew_1(::RPG::GameCore::PerformanceRecallRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PerformanceRecallRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_ISNEW_1_OFFSET))(this, a1);
		}

		::System::Boolean HasSeen(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_HASSEEN_OFFSET))(this, a1);
		}

		::System::Boolean HasUnlocked(::RPG::GameCore::PerformanceRecallRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PerformanceRecallRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_HASUNLOCKED_OFFSET))(this, a1);
		}

		::System::Void UpdateSeen(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_UPDATESEEN_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAllUnlockedPerformanceRecallData()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_GETALLUNLOCKEDPERFORMANCERECALLDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _PrepareUnlockedConditionData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__PREPAREUNLOCKEDCONDITIONDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* WaitUnlockedConditionDataReady()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_WAITUNLOCKEDCONDITIONDATAREADY_OFFSET))(this);
		}

		::System::Boolean TryAutoShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void _RefreshUnlockedConditionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__REFRESHUNLOCKEDCONDITIONDATA_OFFSET))(this);
		}

		static ::RPG::GameCore::LevelGraphComponent* _CreatePerformanceLevelGraph(::Class_1_90269F040CBA17C9* a1)
		{
			return ((::RPG::GameCore::LevelGraphComponent*(*)(::Class_1_90269F040CBA17C9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__CREATEPERFORMANCELEVELGRAPH_OFFSET))(a1);
		}

		::System::Boolean _CanRecallInCurrentScene(::Class_1_90269F040CBA17C9* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_90269F040CBA17C9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__CANRECALLINCURRENTSCENE_OFFSET))(this, a1);
		}

		::System::Void _EnterClientPerformanceMap(::Class_1_90269F040CBA17C9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_90269F040CBA17C9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__ENTERCLIENTPERFORMANCEMAP_OFFSET))(this, a1);
		}

		::System::Void _DoPlayPerformance(::RPG::GameCore::LevelGraphComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGraphComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__DOPLAYPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void _OnPerformanceEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__ONPERFORMANCEEND_OFFSET))(this);
		}

		::System::Void _DestroyLevelGraph(::RPG::GameCore::LevelGraphComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGraphComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__DESTROYLEVELGRAPH_OFFSET))(this, a1);
		}

		::System::Void _ReturnOriginMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__RETURNORIGINMAP_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnMissionSystemCreated(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__ONMISSIONSYSTEMCREATED_OFFSET))(this, a1);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWaitingRecall()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_GET_ISWAITINGRECALL_OFFSET))(this);
		}

		::System::Void set_IsWaitingRecall(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_SET_ISWAITINGRECALL_OFFSET))(this, a1);
		}
	};
}
