#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CUSTOMRP_ONDRAWGIZMOCB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18147DF0)
#define RPG_CUSTOMRP_ONDRAWGIZMOCB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18147E20)
#define RPG_CUSTOMRP_ONDRAWGIZMOCB_INVOKE_OFFSET UNITYSDK_OFFSET(0x18147B50)
#define RPG_CUSTOMRP_ONDRAWGIZMOCB__CTOR_OFFSET UNITYSDK_OFFSET(0x18147B30)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int OnDrawGizmoCb_TypeDefinitionIndex = 35086;

	class OnDrawGizmoCb : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_ONDRAWGIZMOCB__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_ONDRAWGIZMOCB_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_ONDRAWGIZMOCB_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_ONDRAWGIZMOCB_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
