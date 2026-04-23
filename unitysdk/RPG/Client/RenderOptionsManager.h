#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T1, typename T2> class StateStack_2; }
namespace System { class String; }

#define RPG_CLIENT_RENDEROPTIONSMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAFBA6F0)
#define RPG_CLIENT_RENDEROPTIONSMANAGER_LENSFLAREPOPFLAG_OFFSET UNITYSDK_OFFSET(0xAFBA660)
#define RPG_CLIENT_RENDEROPTIONSMANAGER_LENSFLAREPUSHFLAG_OFFSET UNITYSDK_OFFSET(0xAFBA5A0)
#define RPG_CLIENT_RENDEROPTIONSMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xAFBA3B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RenderOptionsManager_TypeDefinitionIndex = 64692;

	class RenderOptionsManager : public ::System::Object
	{
	public:
		::RPG::Client::StateStack_2<::System::Boolean, ::System::String*>* flagEnableLensFlare; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDEROPTIONSMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void LensFlarePushFlag(::System::String* flag, ::System::Boolean state, ::System::Int32 priority)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDEROPTIONSMANAGER_LENSFLAREPUSHFLAG_OFFSET))(this, flag, state, priority);
		}

		::System::Void LensFlarePopFlag(::System::String* flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDEROPTIONSMANAGER_LENSFLAREPOPFLAG_OFFSET))(this, flag);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDEROPTIONSMANAGER_DISPOSE_OFFSET))(this);
		}
	};
}
