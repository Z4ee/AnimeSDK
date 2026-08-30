#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class JsonObject;

#define PLUGINMSGRECEIVER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1EFFDB40)
#define PLUGINMSGRECEIVER_SENDPLUGINMSG_OFFSET UNITYSDK_OFFSET(0x1EFFDC00)
#define PLUGINMSGRECEIVER_START_OFFSET UNITYSDK_OFFSET(0x1EFFDA80)
#define PLUGINMSGRECEIVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFFDD60)

inline static constexpr unsigned int PluginMsgReceiver_TypeDefinitionIndex = 40043;

class PluginMsgReceiver : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Int32 _receiverId; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINMSGRECEIVER__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINMSGRECEIVER_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINMSGRECEIVER_ONDESTROY_OFFSET))(this);
	}

	::JsonObject* SendPluginMsg(::JsonObject* a1)
	{
		return ((::JsonObject*(*)(::PVOID, ::JsonObject*))((::PBYTE)hIl2Cpp + PLUGINMSGRECEIVER_SENDPLUGINMSG_OFFSET))(this, a1);
	}
};
