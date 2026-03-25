#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IAssetOperation; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_ONASSETOPERATIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16559270)
#define RPG_CLIENT_ONASSETOPERATIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x165592A0)
#define RPG_CLIENT_ONASSETOPERATIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x16555050)
#define RPG_CLIENT_ONASSETOPERATIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x16559250)

namespace RPG::Client
{
	inline static constexpr unsigned int OnAssetOperationDelegate_TypeDefinitionIndex = 31972;

	class OnAssetOperationDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONASSETOPERATIONDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::RPG::Client::IAssetOperation* assetOpt)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONASSETOPERATIONDELEGATE_INVOKE_OFFSET))(this, assetOpt);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IAssetOperation* assetOpt, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IAssetOperation*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONASSETOPERATIONDELEGATE_BEGININVOKE_OFFSET))(this, assetOpt, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONASSETOPERATIONDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
