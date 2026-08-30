#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define RPG_CLIENT_MONOSPINESTORYANIMEVENTLISTENER_SETSWITCHBACKGROUNDCALLBACK_OFFSET UNITYSDK_OFFSET(0xD864330)
#define RPG_CLIENT_MONOSPINESTORYANIMEVENTLISTENER_SWITCHBACKGROUND_OFFSET UNITYSDK_OFFSET(0xD8642B0)
#define RPG_CLIENT_MONOSPINESTORYANIMEVENTLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0xD8643B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoSpineStoryAnimEventListener_TypeDefinitionIndex = 60399;

	class MonoSpineStoryAnimEventListener : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_3<::System::String*, ::System::String*, ::System::Boolean>* OnSwitchBackgroundCallback; // 0x18
		::System::String* HPNACMLPFEO; // 0x20
		::System::String* IJCJCNKIMKI; // 0x28
		::System::Boolean GDIGAMFJEFD; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYANIMEVENTLISTENER__CTOR_OFFSET))(this);
		}

		::System::Void SwitchBackground()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYANIMEVENTLISTENER_SWITCHBACKGROUND_OFFSET))(this);
		}

		::System::Void SetSwitchBackgroundCallback(::System::Action_3<::System::String*, ::System::String*, ::System::Boolean>* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::String*, ::System::String*, ::System::Boolean>*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYANIMEVENTLISTENER_SETSWITCHBACKGROUNDCALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
