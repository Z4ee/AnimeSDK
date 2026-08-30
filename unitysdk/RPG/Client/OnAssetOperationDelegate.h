#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IAssetOperation; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_ONASSETOPERATIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BFD4EE0)
#define RPG_CLIENT_ONASSETOPERATIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BFD4F10)
#define RPG_CLIENT_ONASSETOPERATIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BFD0980)
#define RPG_CLIENT_ONASSETOPERATIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFD4DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int OnAssetOperationDelegate_TypeDefinitionIndex = 40104;

	class OnAssetOperationDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONASSETOPERATIONDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONASSETOPERATIONDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IAssetOperation* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IAssetOperation*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONASSETOPERATIONDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONASSETOPERATIONDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
