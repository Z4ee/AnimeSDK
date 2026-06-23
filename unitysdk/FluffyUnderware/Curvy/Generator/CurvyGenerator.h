#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTVersionedMonoBehaviour.h"

namespace FluffyUnderware::Curvy { class CurvyCGEvent; }
namespace FluffyUnderware::Curvy { class CurvyCGEventArgs; }
namespace FluffyUnderware::Curvy::Generator { class CGModule; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleLink; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleOutputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CurvyGenerator_ModuleSorter; }
namespace FluffyUnderware::Curvy::Generator { class CurvyGenerator_ModulesSynchronizer; }
namespace FluffyUnderware::Curvy::Generator { class CurvyGenerator_Timer; }
namespace FluffyUnderware::DevTools { class PoolManager; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_ADDMODULE_1_OFFSET UNITYSDK_OFFSET(0x1E025D30)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_ADDMODULE_OFFSET UNITYSDK_OFFSET(0x1E025BE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_ARRANGEMODULES_OFFSET UNITYSDK_OFFSET(0x1E026490)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E0276B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_CORRECTDUPLICATEMODULEIDS_OFFSET UNITYSDK_OFFSET(0x1E028310)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_CREATE_OFFSET UNITYSDK_OFFSET(0x1E0259C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_DELETEALLOUTPUTMANAGEDRESOURCESFROMASSOCIATEDPREFAB_OFFSET UNITYSDK_OFFSET(0x1E029BE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_DELETEALLOUTPUTMANAGEDRESOURCES_OFFSET UNITYSDK_OFFSET(0x1E029410)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_DELETELINK_OFFSET UNITYSDK_OFFSET(0x1E027910)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_DELETEMODULE_OFFSET UNITYSDK_OFFSET(0x1E0277C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GETMODULEOUTPUTSLOT_1_OFFSET UNITYSDK_OFFSET(0x1E0280A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GETMODULEOUTPUTSLOT_OFFSET UNITYSDK_OFFSET(0x1E027F50)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GETMODULES_1_OFFSET UNITYSDK_OFFSET(0x1E027DF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GETMODULES_OFFSET UNITYSDK_OFFSET(0x1E027DE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GETMODULEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1E026120)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GETMODULEUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x1E026250)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GETMODULE_1_OFFSET UNITYSDK_OFFSET(0x1E027C20)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GETMODULE_2_OFFSET UNITYSDK_OFFSET(0x1E027F40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GETMODULE_3_OFFSET UNITYSDK_OFFSET(0x1E024A60)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GETMODULE_OFFSET UNITYSDK_OFFSET(0x1E027F20)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GETUNIQUEMODULENAMEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E029640)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GET_AUTOREFRESH_OFFSET UNITYSDK_OFFSET(0x1E024E60)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GET_DESTROYING_OFFSET UNITYSDK_OFFSET(0x1E025080)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GET_HASMODULESWITHSAMEID_OFFSET UNITYSDK_OFFSET(0x1E029A20)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1E025070)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GET_MODULESBYID_OFFSET UNITYSDK_OFFSET(0x1E0250A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GET_M_LASTMODULEID_OFFSET UNITYSDK_OFFSET(0x1E024CE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GET_ONREFRESH_OFFSET UNITYSDK_OFFSET(0x1E025050)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GET_POOLMANAGER_OFFSET UNITYSDK_OFFSET(0x1E024EC0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GET_REFRESHDELAYEDITOR_OFFSET UNITYSDK_OFFSET(0x1E024EA0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GET_REFRESHDELAY_OFFSET UNITYSDK_OFFSET(0x1E024E80)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GET_SHOWDEBUG_OFFSET UNITYSDK_OFFSET(0x1E024CC0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_HASCIRCULARREFERENCE_OFFSET UNITYSDK_OFFSET(0x1E0299C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E0255C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_ISMODULENAMEUNIQUE_OFFSET UNITYSDK_OFFSET(0x1E029550)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E0254C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E0254B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E0252E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_ONREFRESHEVENT_OFFSET UNITYSDK_OFFSET(0x1E0293B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_REFRESH_OFFSET UNITYSDK_OFFSET(0x1E028FA0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_REMOVEMODULE_OFFSET UNITYSDK_OFFSET(0x1E026410)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_REORDERENDPOINTRECURSIVEINPUTS_OFFSET UNITYSDK_OFFSET(0x1E0271F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_REORDERMODULES_OFFSET UNITYSDK_OFFSET(0x1E026700)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_RESETALLMODULELINKS_OFFSET UNITYSDK_OFFSET(0x1E028EA0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_RESETONENABLE_OFFSET UNITYSDK_OFFSET(0x1E029600)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_SAVEALLOUTPUTMANAGEDRESOURCES_OFFSET UNITYSDK_OFFSET(0x1E029BF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_SETMODULESFROMCHILDREN_OFFSET UNITYSDK_OFFSET(0x1E0281F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_SET_AUTOREFRESH_OFFSET UNITYSDK_OFFSET(0x1E024E70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_SET_DESTROYING_OFFSET UNITYSDK_OFFSET(0x1E025090)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_SET_MODULESBYID_OFFSET UNITYSDK_OFFSET(0x1E025290)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_SET_M_LASTMODULEID_OFFSET UNITYSDK_OFFSET(0x1E024E10)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_SET_ONREFRESH_OFFSET UNITYSDK_OFFSET(0x1E025060)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_SET_REFRESHDELAYEDITOR_OFFSET UNITYSDK_OFFSET(0x1E024EB0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_SET_REFRESHDELAY_OFFSET UNITYSDK_OFFSET(0x1E024E90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_SET_SHOWDEBUG_OFFSET UNITYSDK_OFFSET(0x1E024CD0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_SORTMODULESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E0299A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_TRYAUTOREFRESH_OFFSET UNITYSDK_OFFSET(0x1E0258F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_UPDATEMODULESRECURSIVEINPUTS_OFFSET UNITYSDK_OFFSET(0x1E026E80)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E0254D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E029FC0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR__SETMODULESFROMCHILDREN_B__89_0_OFFSET UNITYSDK_OFFSET(0x1E02A180)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CurvyGenerator_TypeDefinitionIndex = 38910;

	class CurvyGenerator : public ::FluffyUnderware::DevTools::DTVersionedMonoBehaviour
	{
	public:
		// static const ::System::Int32 ModulesReorderingDeltaX = 0x32; // 0x0
		// static const ::System::Int32 ModulesReorderingDeltaY = 0x14; // 0x0
		::System::Boolean m_AutoRefresh; // 0x28
		::System::Int32 m_RefreshDelay; // 0x2C
		::System::Int32 m_RefreshDelayEditor; // 0x30
		::FluffyUnderware::Curvy::CurvyCGEvent* m_OnRefresh; // 0x38
		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModule*>* Modules; // 0x40
		::System::Boolean _Destroying_k__BackingField; // 0x48
		::System::Boolean isInitialized; // 0x49
		::System::Boolean isInitializedPhaseOne; // 0x4A
		::FluffyUnderware::DevTools::PoolManager* poolManager; // 0x50
		::FluffyUnderware::Curvy::Generator::CurvyGenerator_Timer* autoRefreshTimer; // 0x58
		::FluffyUnderware::Curvy::Generator::CurvyGenerator_ModuleSorter* moduleSorter; // 0x60
		::FluffyUnderware::Curvy::Generator::CurvyGenerator_ModulesSynchronizer* modulesSynchronizer; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ShowDebug()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GET_SHOWDEBUG_OFFSET))(this);
		}

		::System::Void set_ShowDebug(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_SET_SHOWDEBUG_OFFSET))(this, value);
		}

		::System::Int32 get_m_LastModuleID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GET_M_LASTMODULEID_OFFSET))(this);
		}

		::System::Void set_m_LastModuleID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_SET_M_LASTMODULEID_OFFSET))(this, value);
		}

		::System::Boolean get_AutoRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GET_AUTOREFRESH_OFFSET))(this);
		}

		::System::Void set_AutoRefresh(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_SET_AUTOREFRESH_OFFSET))(this, value);
		}

		::System::Int32 get_RefreshDelay()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GET_REFRESHDELAY_OFFSET))(this);
		}

		::System::Void set_RefreshDelay(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_SET_REFRESHDELAY_OFFSET))(this, value);
		}

		::System::Int32 get_RefreshDelayEditor()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GET_REFRESHDELAYEDITOR_OFFSET))(this);
		}

		::System::Void set_RefreshDelayEditor(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_SET_REFRESHDELAYEDITOR_OFFSET))(this, value);
		}

		::FluffyUnderware::DevTools::PoolManager* get_PoolManager()
		{
			return ((::FluffyUnderware::DevTools::PoolManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GET_POOLMANAGER_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::CurvyCGEvent* get_OnRefresh()
		{
			return ((::FluffyUnderware::Curvy::CurvyCGEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GET_ONREFRESH_OFFSET))(this);
		}

		::System::Void set_OnRefresh(::FluffyUnderware::Curvy::CurvyCGEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyCGEvent*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_SET_ONREFRESH_OFFSET))(this, value);
		}

		::System::Boolean get_IsInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GET_ISINITIALIZED_OFFSET))(this);
		}

		::System::Boolean get_Destroying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GET_DESTROYING_OFFSET))(this);
		}

		::System::Void set_Destroying(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_SET_DESTROYING_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::FluffyUnderware::Curvy::Generator::CGModule*>* get_ModulesByID()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::FluffyUnderware::Curvy::Generator::CGModule*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GET_MODULESBYID_OFFSET))(this);
		}

		::System::Void set_ModulesByID(::System::Collections::Generic::Dictionary_2<::System::Int32, ::FluffyUnderware::Curvy::Generator::CGModule*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::FluffyUnderware::Curvy::Generator::CGModule*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_SET_MODULESBYID_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_UPDATE_OFFSET))(this);
		}

		static ::FluffyUnderware::Curvy::Generator::CurvyGenerator* Create()
		{
			return ((::FluffyUnderware::Curvy::Generator::CurvyGenerator*(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_CREATE_OFFSET))();
		}

		::FluffyUnderware::Curvy::Generator::CGModule* AddModule(::System::Type* type)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGModule*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_ADDMODULE_OFFSET))(this, type);
		}

		::System::Void AddModule_1(::FluffyUnderware::Curvy::Generator::CGModule* module)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_ADDMODULE_1_OFFSET))(this, module);
		}

		::System::Void RemoveModule(::FluffyUnderware::Curvy::Generator::CGModule* module)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_REMOVEMODULE_OFFSET))(this, module);
		}

		::System::Void ArrangeModules()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_ARRANGEMODULES_OFFSET))(this);
		}

		::System::Void ReorderModules()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_REORDERMODULES_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_CLEAR_OFFSET))(this);
		}

		::System::Void DeleteModule(::FluffyUnderware::Curvy::Generator::CGModule* module)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_DELETEMODULE_OFFSET))(this, module);
		}

		::System::Void DeleteLink(::FluffyUnderware::Curvy::Generator::CGModuleLink* link)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleLink*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_DELETELINK_OFFSET))(this, link);
		}

		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModule*>* GetModules()
		{
			return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModule*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GETMODULES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModule*>* GetModules_1(::System::Boolean includeOnRequestProcessing)
		{
			return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModule*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GETMODULES_1_OFFSET))(this, includeOnRequestProcessing);
		}

		::FluffyUnderware::Curvy::Generator::CGModule* GetModule(::System::Int32 moduleID)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGModule*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GETMODULE_OFFSET))(this, moduleID);
		}

		::FluffyUnderware::Curvy::Generator::CGModule* GetModule_1(::System::Int32 moduleID, ::System::Boolean includeOnRequestProcessing)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGModule*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GETMODULE_1_OFFSET))(this, moduleID, includeOnRequestProcessing);
		}

		::FluffyUnderware::Curvy::Generator::CGModule* GetModule_2(::System::String* moduleName)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGModule*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GETMODULE_2_OFFSET))(this, moduleName);
		}

		::FluffyUnderware::Curvy::Generator::CGModule* GetModule_3(::System::String* moduleName, ::System::Boolean includeOnRequestProcessing)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGModule*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GETMODULE_3_OFFSET))(this, moduleName, includeOnRequestProcessing);
		}

		::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* GetModuleOutputSlot(::System::Int32 moduleId, ::System::String* slotName)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GETMODULEOUTPUTSLOT_OFFSET))(this, moduleId, slotName);
		}

		::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* GetModuleOutputSlot_1(::System::String* moduleName, ::System::String* slotName)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GETMODULEOUTPUTSLOT_1_OFFSET))(this, moduleName, slotName);
		}

		::System::Void Initialize(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_INITIALIZE_OFFSET))(this, force);
		}

		::System::Void Refresh(::System::Boolean forceUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_REFRESH_OFFSET))(this, forceUpdate);
		}

		::System::Void TryAutoRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_TRYAUTOREFRESH_OFFSET))(this);
		}

		::System::Boolean DeleteAllOutputManagedResources(::System::Boolean& associatedPrefabWasModified)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_DELETEALLOUTPUTMANAGEDRESOURCES_OFFSET))(this, associatedPrefabWasModified);
		}

		::System::String* GetModuleUniqueName(::FluffyUnderware::Curvy::Generator::CGModule* module)
		{
			return ((::System::String*(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GETMODULEUNIQUENAME_OFFSET))(this, module);
		}

		::System::Int32 GetModuleUniqueID(::FluffyUnderware::Curvy::Generator::CGModule* module)
		{
			return ((::System::Int32(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GETMODULEUNIQUEID_OFFSET))(this, module);
		}

		::FluffyUnderware::Curvy::CurvyCGEventArgs* OnRefreshEvent(::FluffyUnderware::Curvy::CurvyCGEventArgs* e)
		{
			return ((::FluffyUnderware::Curvy::CurvyCGEventArgs*(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyCGEventArgs*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_ONREFRESHEVENT_OFFSET))(this, e);
		}

		::System::Void ResetOnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_RESETONENABLE_OFFSET))(this);
		}

		::System::Boolean IsModuleNameUnique(::FluffyUnderware::Curvy::Generator::CGModule* module, ::System::String* uniqueName)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_ISMODULENAMEUNIQUE_OFFSET))(this, module, uniqueName);
		}

		::System::String* getUniqueModuleNameINTERNAL(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GETUNIQUEMODULENAMEINTERNAL_OFFSET))(this, name);
		}

		::System::Void sortModulesINTERNAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_SORTMODULESINTERNAL_OFFSET))(this);
		}

		::System::Boolean CorrectDuplicateModuleIDs()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_CORRECTDUPLICATEMODULEIDS_OFFSET))(this);
		}

		::System::Void ResetAllModuleLinks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_RESETALLMODULELINKS_OFFSET))(this);
		}

		::System::Boolean HasCircularReference(::FluffyUnderware::Curvy::Generator::CGModule* module)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_HASCIRCULARREFERENCE_OFFSET))(this, module);
		}

		static ::System::Void ReorderEndpointRecursiveInputs(::FluffyUnderware::Curvy::Generator::CGModule* endPoint, ::System::Collections::Generic::HashSet_1<::System::Int32>* reordredModuleIds, ::System::Collections::Generic::Dictionary_2<::FluffyUnderware::Curvy::Generator::CGModule*, ::System::Collections::Generic::HashSet_1<::FluffyUnderware::Curvy::Generator::CGModule*>*>* modulesRecursiveInputs)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::Generator::CGModule*, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::FluffyUnderware::Curvy::Generator::CGModule*, ::System::Collections::Generic::HashSet_1<::FluffyUnderware::Curvy::Generator::CGModule*>*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_REORDERENDPOINTRECURSIVEINPUTS_OFFSET))(endPoint, reordredModuleIds, modulesRecursiveInputs);
		}

		static ::System::Collections::Generic::HashSet_1<::FluffyUnderware::Curvy::Generator::CGModule*>* UpdateModulesRecursiveInputs(::System::Collections::Generic::Dictionary_2<::FluffyUnderware::Curvy::Generator::CGModule*, ::System::Collections::Generic::HashSet_1<::FluffyUnderware::Curvy::Generator::CGModule*>*>* modulesRecursiveInputs, ::FluffyUnderware::Curvy::Generator::CGModule* moduleToAdd)
		{
			return ((::System::Collections::Generic::HashSet_1<::FluffyUnderware::Curvy::Generator::CGModule*>*(*)(::System::Collections::Generic::Dictionary_2<::FluffyUnderware::Curvy::Generator::CGModule*, ::System::Collections::Generic::HashSet_1<::FluffyUnderware::Curvy::Generator::CGModule*>*>*, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_UPDATEMODULESRECURSIVEINPUTS_OFFSET))(modulesRecursiveInputs, moduleToAdd);
		}

		::System::Void SetModulesFromChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_SETMODULESFROMCHILDREN_OFFSET))(this);
		}

		::System::Boolean get_HasModulesWithSameID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_GET_HASMODULESWITHSAMEID_OFFSET))(this);
		}

		::System::Boolean DeleteAllOutputManagedResourcesFromAssociatedPrefab()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_DELETEALLOUTPUTMANAGEDRESOURCESFROMASSOCIATEDPREFAB_OFFSET))(this);
		}

		::System::Void SaveAllOutputManagedResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_SAVEALLOUTPUTMANAGEDRESOURCES_OFFSET))(this);
		}

		::System::Boolean _SetModulesFromChildren_b__89_0(::FluffyUnderware::Curvy::Generator::CGModule* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR__SETMODULESFROMCHILDREN_B__89_0_OFFSET))(this, m);
		}
	};
}
