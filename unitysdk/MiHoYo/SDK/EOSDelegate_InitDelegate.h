#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class EOSParametersModel; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_EOSDELEGATE_INITDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D767460)
#define MIHOYO_SDK_EOSDELEGATE_INITDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D767490)
#define MIHOYO_SDK_EOSDELEGATE_INITDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D766F40)
#define MIHOYO_SDK_EOSDELEGATE_INITDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D766F20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int EOSDelegate_InitDelegate_TypeDefinitionIndex = 19822;

	class EOSDelegate_InitDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_INITDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::MiHoYo::SDK::EOSParametersModel* paramModel)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::EOSParametersModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_INITDELEGATE_INVOKE_OFFSET))(this, paramModel);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::EOSParametersModel* paramModel, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::EOSParametersModel*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_INITDELEGATE_BEGININVOKE_OFFSET))(this, paramModel, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_INITDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
