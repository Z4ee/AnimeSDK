#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class JsonObject;

#define PLUGINMSGRECEIVER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17A4FC20)
#define PLUGINMSGRECEIVER_SENDPLUGINMSG_OFFSET UNITYSDK_OFFSET(0x17A4FCE0)
#define PLUGINMSGRECEIVER_START_OFFSET UNITYSDK_OFFSET(0x17A4FB60)
#define PLUGINMSGRECEIVER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A4FE40)

inline static constexpr unsigned int PluginMsgReceiver_TypeDefinitionIndex = 37644;

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

	::JsonObject* SendPluginMsg(::JsonObject* jsonMsg)
	{
		return ((::JsonObject*(*)(::PVOID, ::JsonObject*))((::PBYTE)hIl2Cpp + PLUGINMSGRECEIVER_SENDPLUGINMSG_OFFSET))(this, jsonMsg);
	}
};
