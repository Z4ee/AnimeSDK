#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class UIPrefabLoader; }

#define RPG_CLIENT_UIASYNCPREFABLOADERPROXY_CREATE_OFFSET UNITYSDK_OFFSET(0x16FFDC20)
#define RPG_CLIENT_UIASYNCPREFABLOADERPROXY_TRYCANCELASYNCLOAD_OFFSET UNITYSDK_OFFSET(0x16FFDCA0)
#define RPG_CLIENT_UIASYNCPREFABLOADERPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x16FFDC90)

namespace RPG::Client
{
	inline static constexpr unsigned int UIAsyncPrefabLoaderProxy_TypeDefinitionIndex = 72938;

	class UIAsyncPrefabLoaderProxy : public ::System::Object
	{
	public:
		::RPG::Client::IAssetOperation* _Operation; // 0x10
		::RPG::Client::UIPrefabLoader* _Loader; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIASYNCPREFABLOADERPROXY__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::UIAsyncPrefabLoaderProxy* Create(::RPG::Client::IAssetOperation* a1, ::RPG::Client::UIPrefabLoader* a2)
		{
			return ((::RPG::Client::UIAsyncPrefabLoaderProxy*(*)(::RPG::Client::IAssetOperation*, ::RPG::Client::UIPrefabLoader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIASYNCPREFABLOADERPROXY_CREATE_OFFSET))(a1, a2);
		}

		::System::Boolean TryCancelAsyncLoad()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIASYNCPREFABLOADERPROXY_TRYCANCELASYNCLOAD_OFFSET))(this);
		}
	};
}
