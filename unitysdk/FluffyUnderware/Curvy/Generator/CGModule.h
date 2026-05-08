#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTVersionedMonoBehaviour.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace FluffyUnderware::Curvy { class CurvyCGEvent; }
namespace FluffyUnderware::Curvy { class CurvyCGEventArgs; }
namespace FluffyUnderware::Curvy::Generator { class CGDataRequestParameter; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleInputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleLink; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleOutputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleProperties; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGModule_DirtinessManager; }
namespace FluffyUnderware::Curvy::Generator { class CGModule_Identifier; }
namespace FluffyUnderware::Curvy::Generator { class CGModule_InformationProvider; }
namespace FluffyUnderware::Curvy::Generator { class CGModule_ResourceNamer; }
namespace FluffyUnderware::Curvy::Generator { class CGModule_Slots; }
namespace FluffyUnderware::Curvy::Generator { class CurvyGenerator; }
namespace FluffyUnderware::Curvy::Generator { class ModuleInfoAttribute; }
namespace FluffyUnderware::DevTools { class IPool; }
namespace FluffyUnderware::DevTools { class PrefabPool; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_ADDMANAGEDRESOURCE_OFFSET UNITYSDK_OFFSET(0x1B924A30)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B922020)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_CHECKONSTATECHANGEDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B925350)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_COPYTO_OFFSET UNITYSDK_OFFSET(0x1B9247D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DECREMENTCHILDS_OFFSET UNITYSDK_OFFSET(0x1B925700)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DELETEALLOUTPUTMANAGEDRESOURCES_OFFSET UNITYSDK_OFFSET(0x1B923800)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DELETEALLPREFABPOOLS_OFFSET UNITYSDK_OFFSET(0x1B924DC0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DELETEMANAGEDRESOURCE_OFFSET UNITYSDK_OFFSET(0x1B922FB0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DELETE_OFFSET UNITYSDK_OFFSET(0x1B924F20)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DOREFRESH_OFFSET UNITYSDK_OFFSET(0x1B925150)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GETALLPREFABPOOLS_OFFSET UNITYSDK_OFFSET(0x1B924CE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GETINFO_OFFSET UNITYSDK_OFFSET(0x1B921230)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GETINPUTLINKS_OFFSET UNITYSDK_OFFSET(0x1B924760)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GETINPUTLINK_OFFSET UNITYSDK_OFFSET(0x1B924650)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GETINPUTSLOTS_OFFSET UNITYSDK_OFFSET(0x1B9215D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GETINPUTSLOT_OFFSET UNITYSDK_OFFSET(0x1B924F50)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GETLINKS_OFFSET UNITYSDK_OFFSET(0x1B9245B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GETLINK_OFFSET UNITYSDK_OFFSET(0x1B9244A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GETMANAGEDRESOURCES_OFFSET UNITYSDK_OFFSET(0x1B9227B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GETOUTPUTLINKS_OFFSET UNITYSDK_OFFSET(0x1B924540)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GETOUTPUTLINK_OFFSET UNITYSDK_OFFSET(0x1B924390)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GETOUTPUTSLOTS_OFFSET UNITYSDK_OFFSET(0x1B9217C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GETOUTPUTSLOT_OFFSET UNITYSDK_OFFSET(0x1B924F70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GETPREFABPOOL_OFFSET UNITYSDK_OFFSET(0x1B924FA0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GETRESOURCEMANAGERS_OFFSET UNITYSDK_OFFSET(0x1B923D30)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1B921C60)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_CIRCULARREFERENCEERROR_OFFSET UNITYSDK_OFFSET(0x1B921F20)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_DIRTY_OFFSET UNITYSDK_OFFSET(0x1B921D40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_GENERATOR_OFFSET UNITYSDK_OFFSET(0x1B920670)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1B9211C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_INPUTBYNAME_OFFSET UNITYSDK_OFFSET(0x1B921FE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_INPUT_OFFSET UNITYSDK_OFFSET(0x1B921780)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_ISCONFIGURED_OFFSET UNITYSDK_OFFSET(0x1B921D60)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1B921E10)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_MODULENAME_OFFSET UNITYSDK_OFFSET(0x1B921A70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_ONBEFOREREFRESH_OFFSET UNITYSDK_OFFSET(0x1B921970)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_ONREFRESH_OFFSET UNITYSDK_OFFSET(0x1B921990)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_OUTPUTBYNAME_OFFSET UNITYSDK_OFFSET(0x1B922000)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_OUTPUT_OFFSET UNITYSDK_OFFSET(0x1B9217A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_RANDOMIZESEED_OFFSET UNITYSDK_OFFSET(0x1B921D20)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_SEED_OFFSET UNITYSDK_OFFSET(0x1B921CE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1B921E20)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_INITIALIZESORT_OFFSET UNITYSDK_OFFSET(0x1B925500)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B922170)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_ISMANAGEDRESOURCE_OFFSET UNITYSDK_OFFSET(0x1B924B50)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_ONBEFOREREFRESHEVENT_OFFSET UNITYSDK_OFFSET(0x1B9219B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B922350)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B922030)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_ONREFRESHEVENT_OFFSET UNITYSDK_OFFSET(0x1B921A10)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_ONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1B923810)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_ONTEMPLATECREATED_OFFSET UNITYSDK_OFFSET(0x1B923870)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1B923120)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_REFRESH_OFFSET UNITYSDK_OFFSET(0x1B9237A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_REINITIALIZELINKEDSLOTS_OFFSET UNITYSDK_OFFSET(0x1B9215B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_REMOVEREQUESTPARAMETER_OFFSET UNITYSDK_OFFSET(0x1B923880)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_RENAMEMANAGEDRESOURCESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B921300)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_RENAMERESOURCE_OFFSET UNITYSDK_OFFSET(0x1B921590)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_RESETONENABLE_OFFSET UNITYSDK_OFFSET(0x1B925390)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_RESET_OFFSET UNITYSDK_OFFSET(0x1B9231D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SETMODULENAME_OFFSET UNITYSDK_OFFSET(0x1B923F20)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SETUNIQUEIDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B921050)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1B921C70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SET_CIRCULARREFERENCEERROR_OFFSET UNITYSDK_OFFSET(0x1B921F90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SET_DIRTY_OFFSET UNITYSDK_OFFSET(0x1B921CC0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SET_MODULENAME_OFFSET UNITYSDK_OFFSET(0x1B921AD0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SET_ONBEFOREREFRESH_OFFSET UNITYSDK_OFFSET(0x1B921980)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SET_ONREFRESH_OFFSET UNITYSDK_OFFSET(0x1B9219A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SET_RANDOMIZESEED_OFFSET UNITYSDK_OFFSET(0x1B921D30)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SET_SEED_OFFSET UNITYSDK_OFFSET(0x1B921CF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1B921E50)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_TRYDELETECHILDRENFROMASSOCIATEDPREFAB_OFFSET UNITYSDK_OFFSET(0x1B925140)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B9231C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_USESRANDOM_OFFSET UNITYSDK_OFFSET(0x1B925480)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B925EE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B923900)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE__RESET_B__80_0_OFFSET UNITYSDK_OFFSET(0x1B926070)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGModule_TypeDefinitionIndex = 37315;

	class CGModule : public ::FluffyUnderware::DevTools::DTVersionedMonoBehaviour
	{
	public:
		::FluffyUnderware::Curvy::CurvyCGEvent* m_OnBeforeRefresh; // 0x28
		::FluffyUnderware::Curvy::CurvyCGEvent* m_OnRefresh; // 0x30
		::System::String* m_ModuleName; // 0x38
		::System::Boolean m_Active; // 0x40
		::System::Boolean m_RandomizeSeed; // 0x41
		::System::Int32 m_Seed; // 0x44
		::System::Int32 m_UniqueID; // 0x48
		::FluffyUnderware::Curvy::Generator::CurvyGenerator* generator; // 0x50
		::System::Boolean isInitialized; // 0x58
		::FluffyUnderware::Curvy::Generator::CGModule_ResourceNamer* resourceNamer; // 0x60
		::FluffyUnderware::Curvy::Generator::CGModule_InformationProvider* informationProvider; // 0x68
		::FluffyUnderware::Curvy::Generator::CGModule_DirtinessManager* dirtinessManager; // 0x70
		::FluffyUnderware::Curvy::Generator::CGModule_Slots* slots; // 0x78
		::FluffyUnderware::Curvy::Generator::CGModule_Identifier* identifier; // 0x80
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Component*, ::System::String*>>* resourceManagers; // 0x88
		::System::Collections::Generic::List_1<::System::String*>* UIMessages; // 0x90
		::FluffyUnderware::Curvy::Generator::CGModuleProperties* Properties; // 0x98
		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModuleLink*>* InputLinks; // 0xA0
		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModuleLink*>* OutputLinks; // 0xA8
		::System::Int32 SortAncestors; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE__CCTOR_OFFSET))();
		}

		::System::Int32 SetUniqueIdINTERNAL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SETUNIQUEIDINTERNAL_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::Generator::ModuleInfoAttribute* get_Info()
		{
			return ((::FluffyUnderware::Curvy::Generator::ModuleInfoAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_INFO_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::Generator::ModuleInfoAttribute* getInfo()
		{
			return ((::FluffyUnderware::Curvy::Generator::ModuleInfoAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GETINFO_OFFSET))(this);
		}

		::System::Void renameManagedResourcesINTERNAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_RENAMEMANAGEDRESOURCESINTERNAL_OFFSET))(this);
		}

		::System::Void ReInitializeLinkedSlots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_REINITIALIZELINKEDSLOTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*>* GetInputSlots(::System::Type* filterType)
		{
			return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GETINPUTSLOTS_OFFSET))(this, filterType);
		}

		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*>* GetOutputSlots(::System::Type* filterType)
		{
			return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GETOUTPUTSLOTS_OFFSET))(this, filterType);
		}

		::FluffyUnderware::Curvy::CurvyCGEvent* get_OnBeforeRefresh()
		{
			return ((::FluffyUnderware::Curvy::CurvyCGEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_ONBEFOREREFRESH_OFFSET))(this);
		}

		::System::Void set_OnBeforeRefresh(::FluffyUnderware::Curvy::CurvyCGEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyCGEvent*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SET_ONBEFOREREFRESH_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::CurvyCGEvent* get_OnRefresh()
		{
			return ((::FluffyUnderware::Curvy::CurvyCGEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_ONREFRESH_OFFSET))(this);
		}

		::System::Void set_OnRefresh(::FluffyUnderware::Curvy::CurvyCGEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyCGEvent*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SET_ONREFRESH_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::CurvyCGEventArgs* OnBeforeRefreshEvent(::FluffyUnderware::Curvy::CurvyCGEventArgs* e)
		{
			return ((::FluffyUnderware::Curvy::CurvyCGEventArgs*(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyCGEventArgs*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_ONBEFOREREFRESHEVENT_OFFSET))(this, e);
		}

		::FluffyUnderware::Curvy::CurvyCGEventArgs* OnRefreshEvent(::FluffyUnderware::Curvy::CurvyCGEventArgs* e)
		{
			return ((::FluffyUnderware::Curvy::CurvyCGEventArgs*(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyCGEventArgs*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_ONREFRESHEVENT_OFFSET))(this, e);
		}

		::System::String* get_ModuleName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_MODULENAME_OFFSET))(this);
		}

		::System::Void set_ModuleName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SET_MODULENAME_OFFSET))(this, value);
		}

		::System::Boolean get_Active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_ACTIVE_OFFSET))(this);
		}

		::System::Void set_Active(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SET_ACTIVE_OFFSET))(this, value);
		}

		::System::Int32 get_Seed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_SEED_OFFSET))(this);
		}

		::System::Void set_Seed(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SET_SEED_OFFSET))(this, value);
		}

		::System::Boolean get_RandomizeSeed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_RANDOMIZESEED_OFFSET))(this);
		}

		::System::Void set_RandomizeSeed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SET_RANDOMIZESEED_OFFSET))(this, value);
		}

		::System::Boolean get_Dirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_DIRTY_OFFSET))(this);
		}

		::System::Void set_Dirty(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SET_DIRTY_OFFSET))(this, value);
		}

		::System::Boolean get_IsConfigured()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_ISCONFIGURED_OFFSET))(this);
		}

		::System::Boolean get_IsInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_ISINITIALIZED_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::Generator::CurvyGenerator* get_Generator()
		{
			return ((::FluffyUnderware::Curvy::Generator::CurvyGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_GENERATOR_OFFSET))(this);
		}

		::System::Int32 get_UniqueID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Void set_UniqueID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SET_UNIQUEID_OFFSET))(this, value);
		}

		::System::Boolean get_CircularReferenceError()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_CIRCULARREFERENCEERROR_OFFSET))(this);
		}

		::System::Void set_CircularReferenceError(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SET_CIRCULARREFERENCEERROR_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*>* get_InputByName()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_INPUTBYNAME_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*>* get_OutputByName()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_OUTPUTBYNAME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*>* get_Input()
		{
			return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_INPUT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*>* get_Output()
		{
			return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GET_OUTPUT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_ONVALIDATE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_UPDATE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_RESET_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_REFRESH_OFFSET))(this);
		}

		::System::Boolean DeleteAllOutputManagedResources()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DELETEALLOUTPUTMANAGEDRESOURCES_OFFSET))(this);
		}

		::System::Void OnStateChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_ONSTATECHANGE_OFFSET))(this);
		}

		::System::Void OnTemplateCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_ONTEMPLATECREATED_OFFSET))(this);
		}

		static ::System::Void RemoveRequestParameter(::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGDataRequestParameter*>*& requests, ::FluffyUnderware::Curvy::Generator::CGDataRequestParameter* request)
		{
			return ((::System::Void(*)(::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGDataRequestParameter*>*&, ::FluffyUnderware::Curvy::Generator::CGDataRequestParameter*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_REMOVEREQUESTPARAMETER_OFFSET))(requests, request);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_INITIALIZE_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::Generator::CGModuleLink* GetOutputLink(::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* outputSlot, ::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* inputSlot)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGModuleLink*(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*, ::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GETOUTPUTLINK_OFFSET))(this, outputSlot, inputSlot);
		}

		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModuleLink*>* GetOutputLinks(::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* outputSlot)
		{
			return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModuleLink*>*(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GETOUTPUTLINKS_OFFSET))(this, outputSlot);
		}

		::FluffyUnderware::Curvy::Generator::CGModuleLink* GetInputLink(::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* inputSlot, ::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* outputSlot)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGModuleLink*(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*, ::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GETINPUTLINK_OFFSET))(this, inputSlot, outputSlot);
		}

		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModuleLink*>* GetInputLinks(::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* inputSlot)
		{
			return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModuleLink*>*(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GETINPUTLINKS_OFFSET))(this, inputSlot);
		}

		::FluffyUnderware::Curvy::Generator::CGModule* CopyTo(::FluffyUnderware::Curvy::Generator::CurvyGenerator* targetGenerator)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGModule*(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CurvyGenerator*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_COPYTO_OFFSET))(this, targetGenerator);
		}

		::UnityEngine::Component* AddManagedResource(::System::String* resourceName, ::System::String* context, ::System::Int32 index)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_ADDMANAGEDRESOURCE_OFFSET))(this, resourceName, context, index);
		}

		::System::Void DeleteManagedResource(::System::String* resourceName, ::UnityEngine::Component* res, ::System::String* context, ::System::Boolean dontUsePool)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Component*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DELETEMANAGEDRESOURCE_OFFSET))(this, resourceName, res, context, dontUsePool);
		}

		::System::Boolean IsManagedResource(::UnityEngine::Component* res)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_ISMANAGEDRESOURCE_OFFSET))(this, res);
		}

		::System::Collections::Generic::List_1<::FluffyUnderware::DevTools::IPool*>* GetAllPrefabPools()
		{
			return ((::System::Collections::Generic::List_1<::FluffyUnderware::DevTools::IPool*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GETALLPREFABPOOLS_OFFSET))(this);
		}

		::System::Void DeleteAllPrefabPools()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DELETEALLPREFABPOOLS_OFFSET))(this);
		}

		::System::Void Delete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DELETE_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* GetInputSlot(::System::String* name)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GETINPUTSLOT_OFFSET))(this, name);
		}

		::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* GetOutputSlot(::System::String* name)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GETOUTPUTSLOT_OFFSET))(this, name);
		}

		::System::Boolean GetManagedResources(::System::Collections::Generic::List_1<::UnityEngine::Component*>*& components, ::System::Collections::Generic::List_1<::System::String*>*& resourceNames)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Component*>*&, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GETMANAGEDRESOURCES_OFFSET))(this, components, resourceNames);
		}

		::System::Void SetModuleName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SETMODULENAME_OFFSET))(this);
		}

		::System::Void RenameResource(::System::String* resourceName, ::UnityEngine::Component* resource, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Component*, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_RENAMERESOURCE_OFFSET))(this, resourceName, resource, index);
		}

		static ::FluffyUnderware::Curvy::Generator::CGModuleLink* GetLink(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModuleLink*>* lst, ::FluffyUnderware::Curvy::Generator::CGModuleSlot* source, ::FluffyUnderware::Curvy::Generator::CGModuleSlot* target)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGModuleLink*(*)(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModuleLink*>*, ::FluffyUnderware::Curvy::Generator::CGModuleSlot*, ::FluffyUnderware::Curvy::Generator::CGModuleSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GETLINK_OFFSET))(lst, source, target);
		}

		static ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModuleLink*>* GetLinks(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModuleLink*>* lst, ::FluffyUnderware::Curvy::Generator::CGModuleSlot* source)
		{
			return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModuleLink*>*(*)(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModuleLink*>*, ::FluffyUnderware::Curvy::Generator::CGModuleSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GETLINKS_OFFSET))(lst, source);
		}

		::FluffyUnderware::DevTools::PrefabPool* GetPrefabPool(::UnityEngine::GameObject* prefab)
		{
			return ((::FluffyUnderware::DevTools::PrefabPool*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GETPREFABPOOL_OFFSET))(this, prefab);
		}

		::System::Boolean TryDeleteChildrenFromAssociatedPrefab()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_TRYDELETECHILDRENFROMASSOCIATEDPREFAB_OFFSET))(this);
		}

		::System::Void doRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DOREFRESH_OFFSET))(this);
		}

		::System::Void checkOnStateChangedINTERNAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_CHECKONSTATECHANGEDINTERNAL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Component*, ::System::String*>>* GetResourceManagers()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Component*, ::System::String*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_GETRESOURCEMANAGERS_OFFSET))(this);
		}

		::System::Void ResetOnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_RESETONENABLE_OFFSET))(this);
		}

		::System::Boolean UsesRandom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_USESRANDOM_OFFSET))(this);
		}

		::System::Void initializeSort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_INITIALIZESORT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModule*>* decrementChilds()
		{
			return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModule*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DECREMENTCHILDS_OFFSET))(this);
		}

		::System::Boolean _Reset_b__80_0(::FluffyUnderware::Curvy::Generator::CGModule* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE__RESET_B__80_0_OFFSET))(this, m);
		}
	};
}
