#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_FATERIN_VIEWMODELEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19717EF0)
#define RPG_CLIENT_FATERIN_VIEWMODELEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19717F20)
#define RPG_CLIENT_FATERIN_VIEWMODELEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x19717EE0)
#define RPG_CLIENT_FATERIN_VIEWMODELEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19717E70)

namespace RPG::Client::FateRin
{
	inline static constexpr unsigned int ViewModelEventHandler_TypeDefinitionIndex = 75671;

	class ViewModelEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEWMODELEVENTHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEWMODELEVENTHANDLER_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEWMODELEVENTHANDLER_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEWMODELEVENTHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
