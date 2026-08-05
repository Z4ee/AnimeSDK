#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_EOSDELEGATE_SETCMDLINEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D3B09B0)
#define MIHOYO_SDK_EOSDELEGATE_SETCMDLINEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D3B09E0)
#define MIHOYO_SDK_EOSDELEGATE_SETCMDLINEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D3B0490)
#define MIHOYO_SDK_EOSDELEGATE_SETCMDLINEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B0470)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int EOSDelegate_SetCmdLineDelegate_TypeDefinitionIndex = 19828;

	class EOSDelegate_SetCmdLineDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_SETCMDLINEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* cmdLineMap)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_SETCMDLINEDELEGATE_INVOKE_OFFSET))(this, cmdLineMap);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* cmdLineMap, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_SETCMDLINEDELEGATE_BEGININVOKE_OFFSET))(this, cmdLineMap, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_SETCMDLINEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
