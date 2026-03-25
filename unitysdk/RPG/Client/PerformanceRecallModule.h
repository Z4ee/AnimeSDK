#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_827373C1CEDFE355;
class Class_1_90269F040CBA17C9;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class PerformanceRecallRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PERFORMANCERECALLMODULE_GETALLUNLOCKEDPERFORMANCERECALLDATA_OFFSET UNITYSDK_OFFSET(0x9F2C390)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_GET_ISWAITINGRECALL_OFFSET UNITYSDK_OFFSET(0x9F2CF70)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_HASSEEN_OFFSET UNITYSDK_OFFSET(0x9F2B400)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_HASUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9F2B6A0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9F2B700)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_ISNEW_1_OFFSET UNITYSDK_OFFSET(0x9F2C1B0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_ISNEW_OFFSET UNITYSDK_OFFSET(0x9F2C140)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_PREPAREUNLOCKEDCONDITIONDATA_OFFSET UNITYSDK_OFFSET(0x9F2C580)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_RANDOMGETPHOTOSRECALLID_OFFSET UNITYSDK_OFFSET(0x9F2AF80)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_SET_ISWAITINGRECALL_OFFSET UNITYSDK_OFFSET(0x9F2CF80)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_SHOWRECALLUI_OFFSET UNITYSDK_OFFSET(0x9F2B7A0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_STARTPERFORMANCERECALL_1_OFFSET UNITYSDK_OFFSET(0x9F2B9D0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_STARTPERFORMANCERECALL_OFFSET UNITYSDK_OFFSET(0x9F2B8C0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x9F2C660)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_UPDATESEEN_OFFSET UNITYSDK_OFFSET(0x9F2C240)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9F2CBF0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__CANRECALLINCURRENTSCENE_OFFSET UNITYSDK_OFFSET(0x9F2BB00)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__CREATEPERFORMANCELEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x9F2BD40)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9F2CF90)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__DESTROYLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x9F2C8F0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__DOPLAYPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9F2BDD0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__ENTERCLIENTPERFORMANCEMAP_OFFSET UNITYSDK_OFFSET(0x9F2BEB0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__GETALLPHOTOSRECALLID_OFFSET UNITYSDK_OFFSET(0x9F2B1F0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__INITPHOTOWALLDATA_OFFSET UNITYSDK_OFFSET(0x9F2B4D0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x9F2CDE0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__ONMISSIONSYSTEMCREATED_OFFSET UNITYSDK_OFFSET(0x9F2CD10)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__ONPERFORMANCEEND_OFFSET UNITYSDK_OFFSET(0x9F2C6D0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__RETURNORIGINMAP_OFFSET UNITYSDK_OFFSET(0x9F2C9C0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9F2CFB0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9F2D040)

namespace RPG::Client
{
	inline static constexpr unsigned int PerformanceRecallModule_TypeDefinitionIndex = 54036;

	class PerformanceRecallModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::String* _PHOTO_TOTAL_COUNT_KEY; // 0x0
		// static const ::System::String* _UNSEEN_PHOTO_COUNT_KEY; // 0x0
		::RPG::GameCore::PerformanceRecallRow* _AutoOpenConfig; // 0x10
		::Class_1_90269F040CBA17C9* _CurrentRecallData; // 0x18
		::Class_1_827373C1CEDFE355* _LogicRandom; // 0x20
		::RPG::GameCore::LevelGraphComponent* _CurrentRecallLevelGraph; // 0x28
		::System::Int32 _PhotoTotalCount; // 0x30
		::System::Int32 _UnseenPhotoCount; // 0x34
		::System::Boolean _IsWaitingRecall_k__BackingField; // 0x38
		::System::Boolean _HasAddedPerformanceLock; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* RandomGetPhotosRecallID()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_RANDOMGETPHOTOSRECALLID_OFFSET))(this);
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

		::System::Void ShowRecallUI(::System::UInt32 categoryID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_SHOWRECALLUI_OFFSET))(this, categoryID);
		}

		::System::Void StartPerformanceRecall(::System::UInt32 recallID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_STARTPERFORMANCERECALL_OFFSET))(this, recallID);
		}

		::System::Void StartPerformanceRecall_1(::RPG::GameCore::PerformanceRecallRow* recallRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PerformanceRecallRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_STARTPERFORMANCERECALL_1_OFFSET))(this, recallRow);
		}

		::System::Boolean IsNew(::System::UInt32 recallID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_ISNEW_OFFSET))(this, recallID);
		}

		::System::Boolean IsNew_1(::RPG::GameCore::PerformanceRecallRow* recallRow)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PerformanceRecallRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_ISNEW_1_OFFSET))(this, recallRow);
		}

		::System::Boolean HasSeen(::System::UInt32 recallID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_HASSEEN_OFFSET))(this, recallID);
		}

		::System::Boolean HasUnlocked(::RPG::GameCore::PerformanceRecallRow* recallRow)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PerformanceRecallRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_HASUNLOCKED_OFFSET))(this, recallRow);
		}

		::System::Void UpdateSeen(::System::UInt32 recallID, ::System::Boolean hasSeen)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_UPDATESEEN_OFFSET))(this, recallID, hasSeen);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAllUnlockedPerformanceRecallData()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_GETALLUNLOCKEDPERFORMANCERECALLDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PrepareUnlockedConditionData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_PREPAREUNLOCKEDCONDITIONDATA_OFFSET))(this);
		}

		::System::Boolean TryAutoShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		static ::RPG::GameCore::LevelGraphComponent* _CreatePerformanceLevelGraph(::Class_1_90269F040CBA17C9* recallData)
		{
			return ((::RPG::GameCore::LevelGraphComponent*(*)(::Class_1_90269F040CBA17C9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__CREATEPERFORMANCELEVELGRAPH_OFFSET))(recallData);
		}

		::System::Boolean _CanRecallInCurrentScene(::Class_1_90269F040CBA17C9* recallData)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_90269F040CBA17C9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__CANRECALLINCURRENTSCENE_OFFSET))(this, recallData);
		}

		::System::Void _EnterClientPerformanceMap(::Class_1_90269F040CBA17C9* recallData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_90269F040CBA17C9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__ENTERCLIENTPERFORMANCEMAP_OFFSET))(this, recallData);
		}

		::System::Void _DoPlayPerformance(::RPG::GameCore::LevelGraphComponent* levelGraph)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGraphComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__DOPLAYPERFORMANCE_OFFSET))(this, levelGraph);
		}

		::System::Void _OnPerformanceEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__ONPERFORMANCEEND_OFFSET))(this);
		}

		::System::Void _DestroyLevelGraph(::RPG::GameCore::LevelGraphComponent* levelGraph)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGraphComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__DESTROYLEVELGRAPH_OFFSET))(this, levelGraph);
		}

		::System::Void _ReturnOriginMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__RETURNORIGINMAP_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnMissionSystemCreated(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__ONMISSIONSYSTEMCREATED_OFFSET))(this, arg);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, arg);
		}

		::System::Boolean get_IsWaitingRecall()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_GET_ISWAITINGRECALL_OFFSET))(this);
		}

		::System::Void set_IsWaitingRecall(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_SET_ISWAITINGRECALL_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
