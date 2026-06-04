#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class EOSParametersModel; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_EOSDELEGATE_INITDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1830D8E0)
#define MIHOYO_SDK_EOSDELEGATE_INITDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1830D910)
#define MIHOYO_SDK_EOSDELEGATE_INITDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1830D8D0)
#define MIHOYO_SDK_EOSDELEGATE_INITDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1830D7E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int EOSDelegate_InitDelegate_TypeDefinitionIndex = 7661;

	class EOSDelegate_InitDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_INITDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::MiHoYo::SDK::EOSParametersModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::EOSParametersModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_INITDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::EOSParametersModel* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::EOSParametersModel*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_INITDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_INITDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
