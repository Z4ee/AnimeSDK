#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define MIHOYO_SDK_EOSDELEGATE_PAYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1830DC90)
#define MIHOYO_SDK_EOSDELEGATE_PAYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1830DCD0)
#define MIHOYO_SDK_EOSDELEGATE_PAYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1830DC70)
#define MIHOYO_SDK_EOSDELEGATE_PAYDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1830DBF0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int EOSDelegate_PayDelegate_TypeDefinitionIndex = 7665;

	class EOSDelegate_PayDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_PAYDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::String* a1, ::System::Action_3<::System::Int32, ::System::String*, ::System::String*>* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_3<::System::Int32, ::System::String*, ::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_PAYDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::Action_3<::System::Int32, ::System::String*, ::System::String*>* a2, ::System::String* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Action_3<::System::Int32, ::System::String*, ::System::String*>*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_PAYDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_PAYDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
