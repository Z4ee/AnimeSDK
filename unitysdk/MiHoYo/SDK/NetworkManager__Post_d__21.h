#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/JSONNode_KeyEnumerator.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_NETWORKMANAGER__POST_D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A5133D0)
#define MIHOYO_SDK_NETWORKMANAGER__POST_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A513820)
#define MIHOYO_SDK_NETWORKMANAGER__POST_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A513880)
#define MIHOYO_SDK_NETWORKMANAGER__POST_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A513830)
#define MIHOYO_SDK_NETWORKMANAGER__POST_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5133C0)
#define MIHOYO_SDK_NETWORKMANAGER__POST_D__21__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5133B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetworkManager__Post_d__21_TypeDefinitionIndex = 19011;

	class NetworkManager__Post_d__21 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONNode_KeyEnumerator __s__3; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x58
		::MiHoYo::SDK::NetworkManager* __4__this; // 0x60
		::System::String* extHeaders; // 0x68
		::System::Action* timeoutCallback; // 0x70
		::System::String* _key_5__4; // 0x78
		::System::String* bodyString; // 0x80
		::MiHoYo::SDK::JSONNode* _extHeaderNode_5__2; // 0x88
		::System::String* requestUrl; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _newHeaders_5__1; // 0x98
		::System::Object* __2__current; // 0xA0
		::System::Int32 __1__state; // 0xA8
		::System::Single timeoutSecond; // 0xAC
		::System::Int32 retryTime; // 0xB0

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__POST_D__21__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__POST_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__POST_D__21_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__POST_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__POST_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__POST_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
