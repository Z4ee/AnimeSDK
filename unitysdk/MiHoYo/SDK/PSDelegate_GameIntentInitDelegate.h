#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PSDELEGATE_GAMEINTENTINITDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x175FA0B0)
#define MIHOYO_SDK_PSDELEGATE_GAMEINTENTINITDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x175FA0E0)
#define MIHOYO_SDK_PSDELEGATE_GAMEINTENTINITDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x175D8C60)
#define MIHOYO_SDK_PSDELEGATE_GAMEINTENTINITDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x175FA090)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_GameIntentInitDelegate_TypeDefinitionIndex = 6805;

	class PSDelegate_GameIntentInitDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_GAMEINTENTINITDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_GAMEINTENTINITDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_GAMEINTENTINITDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_GAMEINTENTINITDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
