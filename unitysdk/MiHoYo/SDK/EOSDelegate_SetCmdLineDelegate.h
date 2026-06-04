#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_EOSDELEGATE_SETCMDLINEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1830DEC0)
#define MIHOYO_SDK_EOSDELEGATE_SETCMDLINEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1830DEF0)
#define MIHOYO_SDK_EOSDELEGATE_SETCMDLINEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1830DEB0)
#define MIHOYO_SDK_EOSDELEGATE_SETCMDLINEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1830DDC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int EOSDelegate_SetCmdLineDelegate_TypeDefinitionIndex = 7667;

	class EOSDelegate_SetCmdLineDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_SETCMDLINEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_SETCMDLINEDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_SETCMDLINEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_SETCMDLINEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
