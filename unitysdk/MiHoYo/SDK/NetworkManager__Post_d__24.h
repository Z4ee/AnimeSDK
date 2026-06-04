#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_NETWORKMANAGER__POST_D__24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18378B40)
#define MIHOYO_SDK_NETWORKMANAGER__POST_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18378C20)
#define MIHOYO_SDK_NETWORKMANAGER__POST_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18378C80)
#define MIHOYO_SDK_NETWORKMANAGER__POST_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18378C30)
#define MIHOYO_SDK_NETWORKMANAGER__POST_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18378B30)
#define MIHOYO_SDK_NETWORKMANAGER__POST_D__24__CTOR_OFFSET UNITYSDK_OFFSET(0x183726B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetworkManager__Post_d__24_TypeDefinitionIndex = 8091;

	class NetworkManager__Post_d__24 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::NetworkManager* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::String* requestUrl; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* bodyDic; // 0x28
		::System::Action_1<::System::String*>* callback; // 0x30
		::System::Action* timeoutCallback; // 0x38
		::System::Int32 __1__state; // 0x40

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__POST_D__24__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__POST_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__POST_D__24_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__POST_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__POST_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__POST_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
