#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TimeRewindControlManager_TimeRewindEntityPreloadState.h"
#include "unitysdk/System/Object.h"

class Class_1_A0302E9AE0B8A2B9;
class Class_1_DD81253E160EB8B2;
namespace RPG::Client { class TimeRewindControlManager; }
namespace RPG::Client { class TriggerEffectParams; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_ADDCNT_OFFSET UNITYSDK_OFFSET(0xB2ECAC0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_CLEAR_OFFSET UNITYSDK_OFFSET(0xB2EC7B0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_FINISHEFFECT_OFFSET UNITYSDK_OFFSET(0xB2EC720)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_FIREEFFECTASYNC_OFFSET UNITYSDK_OFFSET(0xB2EC690)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_GET_EFFCNT_OFFSET UNITYSDK_OFFSET(0xB2ECC50)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_GET_EFFPATH_OFFSET UNITYSDK_OFFSET(0xB2ECC10)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_GET_LOADSTATE_OFFSET UNITYSDK_OFFSET(0xB2ECC30)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_INITITEM_OFFSET UNITYSDK_OFFSET(0xB2EC860)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_LOAD_OFFSET UNITYSDK_OFFSET(0xB2EC920)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_SET_EFFCNT_OFFSET UNITYSDK_OFFSET(0xB2ECC60)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_SET_EFFPATH_OFFSET UNITYSDK_OFFSET(0xB2ECC20)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_SET_LOADSTATE_OFFSET UNITYSDK_OFFSET(0xB2ECC40)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_UNLOAD_OFFSET UNITYSDK_OFFSET(0xB2ECC70)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB2ED500)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM__ONEFFLOADCOMPLETE_OFFSET UNITYSDK_OFFSET(0xB2ECED0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM__ONEFFSOLOADED_OFFSET UNITYSDK_OFFSET(0xB2ED470)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM__ONLOADEND_OFFSET UNITYSDK_OFFSET(0xB2ED400)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindControlManager_TimeRewindEntityPreloadEffItem_TypeDefinitionIndex = 56085;

	class TimeRewindControlManager_TimeRewindEntityPreloadEffItem : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__Count()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TimeRewindControlManager_TimeRewindEntityPreloadEffItem_TypeDefinitionIndex)->GetStaticField(0xD1E0);
		}
		// static const ::System::String* ReplaceStr; // 0x0
		::Class_1_DD81253E160EB8B2* _FireEffectHandler; // 0x10
		::RPG::Client::TriggerEffectParams* _TriggerEffectParams; // 0x18
		::RPG::Client::TimeRewindControlManager* _OwnerManager; // 0x20
		::System::String* _EffPath_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* BackwardSOPath; // 0x30
		::System::Int32 _LoadBackwardSoCount; // 0x38
		::System::Int32 _NeedBackwardSoCount; // 0x3C
		::System::Int32 _EffCnt_k__BackingField; // 0x40
		::RPG::Client::TimeRewindControlManager_TimeRewindEntityPreloadState _LoadState_k__BackingField; // 0x44
		::System::Int32 ID; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM__CTOR_OFFSET))(this);
		}

		::System::String* get_EffPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_GET_EFFPATH_OFFSET))(this);
		}

		::System::Void set_EffPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_SET_EFFPATH_OFFSET))(this, value);
		}

		::RPG::Client::TimeRewindControlManager_TimeRewindEntityPreloadState get_LoadState()
		{
			return ((::RPG::Client::TimeRewindControlManager_TimeRewindEntityPreloadState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_GET_LOADSTATE_OFFSET))(this);
		}

		::System::Void set_LoadState(::RPG::Client::TimeRewindControlManager_TimeRewindEntityPreloadState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeRewindControlManager_TimeRewindEntityPreloadState))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_SET_LOADSTATE_OFFSET))(this, value);
		}

		::System::Int32 get_EffCnt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_GET_EFFCNT_OFFSET))(this);
		}

		::System::Void set_EffCnt(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_SET_EFFCNT_OFFSET))(this, value);
		}

		::System::Void AddCnt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_ADDCNT_OFFSET))(this);
		}

		::System::Void InitItem(::System::String* effPath, ::RPG::Client::TimeRewindControlManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::TimeRewindControlManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_INITITEM_OFFSET))(this, effPath, manager);
		}

		::System::Void Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_LOAD_OFFSET))(this);
		}

		::System::Void Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_UNLOAD_OFFSET))(this);
		}

		::System::Void FireEffectAsync(::RPG::Client::TriggerEffectParams* triggerEffectParams, ::Class_1_DD81253E160EB8B2* handler)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*, ::Class_1_DD81253E160EB8B2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_FIREEFFECTASYNC_OFFSET))(this, triggerEffectParams, handler);
		}

		::System::Void FinishEffect(::Class_1_DD81253E160EB8B2* handler, ::System::Boolean needFadeout)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DD81253E160EB8B2*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_FINISHEFFECT_OFFSET))(this, handler, needFadeout);
		}

		::System::Void _OnEffLoadComplete(::Class_1_A0302E9AE0B8A2B9* pool, ::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A0302E9AE0B8A2B9*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM__ONEFFLOADCOMPLETE_OFFSET))(this, pool, success);
		}

		::System::Void _OnEffSoLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM__ONEFFSOLOADED_OFFSET))(this);
		}

		::System::Void _OnLoadEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM__ONLOADEND_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_CLEAR_OFFSET))(this);
		}
	};
}
