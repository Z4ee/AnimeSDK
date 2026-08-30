#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CUSTOMRP_ONDRAWGIZMOCB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x185837C0)
#define RPG_CUSTOMRP_ONDRAWGIZMOCB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x185837F0)
#define RPG_CUSTOMRP_ONDRAWGIZMOCB_INVOKE_OFFSET UNITYSDK_OFFSET(0x185837B0)
#define RPG_CUSTOMRP_ONDRAWGIZMOCB__CTOR_OFFSET UNITYSDK_OFFSET(0x18583740)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int OnDrawGizmoCb_TypeDefinitionIndex = 37012;

	class OnDrawGizmoCb : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_ONDRAWGIZMOCB__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_ONDRAWGIZMOCB_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_ONDRAWGIZMOCB_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_ONDRAWGIZMOCB_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
