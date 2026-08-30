#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class JsonObject;
class PluginMsgReceiver;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PLUGINMSGHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1EFFD520)
#define PLUGINMSGHANDLER_FINALIZEHANDLER_OFFSET UNITYSDK_OFFSET(0x1EFFD5E0)
#define PLUGINMSGHANDLER_GETINSTANCEFORRECEIVER_OFFSET UNITYSDK_OFFSET(0x1EFFD480)
#define PLUGINMSGHANDLER_GETRECEIVER_OFFSET UNITYSDK_OFFSET(0x1EFFD760)
#define PLUGINMSGHANDLER_GET_ISEDITOR_OFFSET UNITYSDK_OFFSET(0x1EFFD460)
#define PLUGINMSGHANDLER_GET_ISSTANDALONE_OFFSET UNITYSDK_OFFSET(0x1EFFD470)
#define PLUGINMSGHANDLER_INITIALIZEHANDLER_OFFSET UNITYSDK_OFFSET(0x1EFFD5B0)
#define PLUGINMSGHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1EFFD5C0)
#define PLUGINMSGHANDLER_ONMSGFROMPLUGIN_OFFSET UNITYSDK_OFFSET(0x1EFFD800)
#define PLUGINMSGHANDLER_REGISTERANDGETRECEIVERID_OFFSET UNITYSDK_OFFSET(0x1EFFD5F0)
#define PLUGINMSGHANDLER_REMOVERECEIVER_OFFSET UNITYSDK_OFFSET(0x1EFFD6C0)
#define PLUGINMSGHANDLER_SENDMSGTOPLUGIN_OFFSET UNITYSDK_OFFSET(0x1EFFD9D0)
#define PLUGINMSGHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFFDA70)

inline static constexpr unsigned int PluginMsgHandler_TypeDefinitionIndex = 40042;

class PluginMsgHandler : public ::UnityEngine::MonoBehaviour
{
public:
	static ::PluginMsgHandler** StaticGet__instance()
	{
		return (::PluginMsgHandler**)Il2CppClass::FromTypeDefinitionIndex(PluginMsgHandler_TypeDefinitionIndex)->GetStaticField(0xE80);
	}
	// static const ::System::String* DEFAULT_NAME; // 0x0
	::System::Int32 _curReceiverIndex; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::PluginMsgReceiver*>* _receiverDict; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINMSGHANDLER__CTOR_OFFSET))(this);
	}

	::System::Boolean get_isEditor()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINMSGHANDLER_GET_ISEDITOR_OFFSET))(this);
	}

	::System::Boolean get_isStandalone()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINMSGHANDLER_GET_ISSTANDALONE_OFFSET))(this);
	}

	static ::PluginMsgHandler* GetInstanceForReceiver(::PluginMsgReceiver* a1)
	{
		return ((::PluginMsgHandler*(*)(::PluginMsgReceiver*))((::PBYTE)hIl2Cpp + PLUGINMSGHANDLER_GETINSTANCEFORRECEIVER_OFFSET))(a1);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINMSGHANDLER_AWAKE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINMSGHANDLER_ONDESTROY_OFFSET))(this);
	}

	::System::Int32 RegisterAndGetReceiverId(::PluginMsgReceiver* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::PluginMsgReceiver*))((::PBYTE)hIl2Cpp + PLUGINMSGHANDLER_REGISTERANDGETRECEIVERID_OFFSET))(this, a1);
	}

	::System::Void RemoveReceiver(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PLUGINMSGHANDLER_REMOVERECEIVER_OFFSET))(this, a1);
	}

	::PluginMsgReceiver* GetReceiver(::System::Int32 a1)
	{
		return ((::PluginMsgReceiver*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PLUGINMSGHANDLER_GETRECEIVER_OFFSET))(this, a1);
	}

	::System::Void OnMsgFromPlugin(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PLUGINMSGHANDLER_ONMSGFROMPLUGIN_OFFSET))(this, a1);
	}

	::System::Void InitializeHandler()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINMSGHANDLER_INITIALIZEHANDLER_OFFSET))(this);
	}

	::System::Void FinalizeHandler()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINMSGHANDLER_FINALIZEHANDLER_OFFSET))(this);
	}

	::JsonObject* SendMsgToPlugin(::System::Int32 a1, ::JsonObject* a2)
	{
		return ((::JsonObject*(*)(::PVOID, ::System::Int32, ::JsonObject*))((::PBYTE)hIl2Cpp + PLUGINMSGHANDLER_SENDMSGTOPLUGIN_OFFSET))(this, a1, a2);
	}
};
