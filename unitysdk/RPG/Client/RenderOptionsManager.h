#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T1, typename T2> class StateStack_2; }
namespace System { class String; }

#define RPG_CLIENT_RENDEROPTIONSMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7001D0)
#define RPG_CLIENT_RENDEROPTIONSMANAGER_LENSFLAREPOPFLAG_OFFSET UNITYSDK_OFFSET(0xC700140)
#define RPG_CLIENT_RENDEROPTIONSMANAGER_LENSFLAREPUSHFLAG_OFFSET UNITYSDK_OFFSET(0xC700080)
#define RPG_CLIENT_RENDEROPTIONSMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xC6FFE60)

namespace RPG::Client
{
	inline static constexpr unsigned int RenderOptionsManager_TypeDefinitionIndex = 65613;

	class RenderOptionsManager : public ::System::Object
	{
	public:
		::RPG::Client::StateStack_2<::System::Boolean, ::System::String*>* flagEnableLensFlare; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDEROPTIONSMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void LensFlarePushFlag(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDEROPTIONSMANAGER_LENSFLAREPUSHFLAG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LensFlarePopFlag(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDEROPTIONSMANAGER_LENSFLAREPOPFLAG_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDEROPTIONSMANAGER_DISPOSE_OFFSET))(this);
		}
	};
}
