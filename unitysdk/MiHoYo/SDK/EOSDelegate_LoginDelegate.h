#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MIHOYO_SDK_EOSDELEGATE_LOGINDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AA4A010)
#define MIHOYO_SDK_EOSDELEGATE_LOGINDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AA4A040)
#define MIHOYO_SDK_EOSDELEGATE_LOGINDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AA4A000)
#define MIHOYO_SDK_EOSDELEGATE_LOGINDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA49F90)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int EOSDelegate_LoginDelegate_TypeDefinitionIndex = 7670;

	class EOSDelegate_LoginDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_LOGINDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Action_2<::System::Int32, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_LOGINDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Action_2<::System::Int32, ::System::String*>* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_LOGINDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_LOGINDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
