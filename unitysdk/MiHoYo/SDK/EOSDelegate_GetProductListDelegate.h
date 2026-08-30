#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_EOSDELEGATE_GETPRODUCTLISTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B943BF0)
#define MIHOYO_SDK_EOSDELEGATE_GETPRODUCTLISTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B943C30)
#define MIHOYO_SDK_EOSDELEGATE_GETPRODUCTLISTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B943BD0)
#define MIHOYO_SDK_EOSDELEGATE_GETPRODUCTLISTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B943AE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int EOSDelegate_GetProductListDelegate_TypeDefinitionIndex = 7668;

	class EOSDelegate_GetProductListDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_GETPRODUCTLISTDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::JSONArray* a1, ::System::Action_1<::MiHoYo::SDK::JSONArray*>* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONArray*, ::System::Action_1<::MiHoYo::SDK::JSONArray*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_GETPRODUCTLISTDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::JSONArray* a1, ::System::Action_1<::MiHoYo::SDK::JSONArray*>* a2, ::System::String* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::JSONArray*, ::System::Action_1<::MiHoYo::SDK::JSONArray*>*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_GETPRODUCTLISTDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_GETPRODUCTLISTDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
