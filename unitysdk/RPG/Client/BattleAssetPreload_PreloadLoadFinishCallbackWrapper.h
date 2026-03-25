#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEASSETPRELOAD_PRELOADLOADFINISHCALLBACKWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x9191410)
#define RPG_CLIENT_BATTLEASSETPRELOAD_PRELOADLOADFINISHCALLBACKWRAPPER__INOVKE_OFFSET UNITYSDK_OFFSET(0x91914A0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_PRELOADLOADFINISHCALLBACKWRAPPER__TIMEOUTINVOKE_OFFSET UNITYSDK_OFFSET(0x9191500)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAssetPreload_PreloadLoadFinishCallbackWrapper_TypeDefinitionIndex = 48299;

	class BattleAssetPreload_PreloadLoadFinishCallbackWrapper : public ::System::Object
	{
	public:
		::System::Action* _OnLoadFinish; // 0x10
		::System::Action* TimeoutInvokeDelg; // 0x18
		::System::String* _TimeoutMsg; // 0x20
		::System::Action* InvokeDelg; // 0x28

		::System::Void _ctor(::System::Action* pOnLoadFinish, ::System::String* timeoutMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_PRELOADLOADFINISHCALLBACKWRAPPER__CTOR_OFFSET))(this, pOnLoadFinish, timeoutMsg);
		}

		::System::Void _Inovke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_PRELOADLOADFINISHCALLBACKWRAPPER__INOVKE_OFFSET))(this);
		}

		::System::Void _TimeoutInvoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_PRELOADLOADFINISHCALLBACKWRAPPER__TIMEOUTINVOKE_OFFSET))(this);
		}
	};
}
