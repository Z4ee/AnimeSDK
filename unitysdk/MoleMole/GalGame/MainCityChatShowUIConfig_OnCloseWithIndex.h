#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUICONFIG_ONCLOSEWITHINDEX_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1912B6B0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUICONFIG_ONCLOSEWITHINDEX_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1912B720)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUICONFIG_ONCLOSEWITHINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x1912B0D0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUICONFIG_ONCLOSEWITHINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1912B690)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowUIConfig_OnCloseWithIndex_TypeDefinitionIndex = 44139;

	class MainCityChatShowUIConfig_OnCloseWithIndex : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUICONFIG_ONCLOSEWITHINDEX__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 outputIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUICONFIG_ONCLOSEWITHINDEX_INVOKE_OFFSET))(this, outputIndex);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 outputIndex, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUICONFIG_ONCLOSEWITHINDEX_BEGININVOKE_OFFSET))(this, outputIndex, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUICONFIG_ONCLOSEWITHINDEX_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
