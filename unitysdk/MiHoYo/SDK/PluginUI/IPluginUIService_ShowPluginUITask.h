#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_SHOWPLUGINUITASK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CF489E0)
#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_SHOWPLUGINUITASK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CF48A20)
#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_SHOWPLUGINUITASK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF48450)
#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_SHOWPLUGINUITASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF48430)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int IPluginUIService_ShowPluginUITask_TypeDefinitionIndex = 21242;

	class IPluginUIService_ShowPluginUITask : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_SHOWPLUGINUITASK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_SHOWPLUGINUITASK_INVOKE_OFFSET))(this, dicElement2Action, strCustomData);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* dicElement2Action, ::System::String* strCustomData, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_SHOWPLUGINUITASK_BEGININVOKE_OFFSET))(this, dicElement2Action, strCustomData, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE_SHOWPLUGINUITASK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
