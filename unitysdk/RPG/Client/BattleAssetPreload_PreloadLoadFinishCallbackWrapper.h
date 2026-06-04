#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEASSETPRELOAD_PRELOADLOADFINISHCALLBACKWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0xB3CE3C0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_PRELOADLOADFINISHCALLBACKWRAPPER__INOVKE_OFFSET UNITYSDK_OFFSET(0xB3CE470)
#define RPG_CLIENT_BATTLEASSETPRELOAD_PRELOADLOADFINISHCALLBACKWRAPPER__TIMEOUTINVOKE_OFFSET UNITYSDK_OFFSET(0xB3CE4E0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAssetPreload_PreloadLoadFinishCallbackWrapper_TypeDefinitionIndex = 55778;

	class BattleAssetPreload_PreloadLoadFinishCallbackWrapper : public ::System::Object
	{
	public:
		::System::Action* InvokeDelg; // 0x10
		::System::Action* TimeoutInvokeDelg; // 0x18
		::System::String* _TimeoutMsg; // 0x20
		::System::Action* _OnLoadFinish; // 0x28

		::System::Void _ctor(::System::Action* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_PRELOADLOADFINISHCALLBACKWRAPPER__CTOR_OFFSET))(this, a1, a2);
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
