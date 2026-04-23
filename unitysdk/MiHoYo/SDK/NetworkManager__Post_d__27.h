#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/JSONNode_KeyEnumerator.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_NETWORKMANAGER__POST_D__27_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17590C20)
#define MIHOYO_SDK_NETWORKMANAGER__POST_D__27_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x175910D0)
#define MIHOYO_SDK_NETWORKMANAGER__POST_D__27_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17591130)
#define MIHOYO_SDK_NETWORKMANAGER__POST_D__27_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x175910E0)
#define MIHOYO_SDK_NETWORKMANAGER__POST_D__27_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17590C10)
#define MIHOYO_SDK_NETWORKMANAGER__POST_D__27__CTOR_OFFSET UNITYSDK_OFFSET(0x1758A180)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetworkManager__Post_d__27_TypeDefinitionIndex = 7191;

	class NetworkManager__Post_d__27 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::String* requestUrl; // 0x18
		::MiHoYo::SDK::JSONNode* _extHeaderNode_5__2; // 0x20
		::System::String* bodyString; // 0x28
		::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* callback; // 0x30
		::System::String* extHeaders; // 0x38
		::System::String* _key_5__4; // 0x40
		::MiHoYo::SDK::NetworkManager* __4__this; // 0x48
		::System::Action* timeoutCallback; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _newHeaders_5__1; // 0x58
		::MiHoYo::SDK::JSONNode_KeyEnumerator __s__3; // 0x60
		::System::Int32 __1__state; // 0xA8
		::System::Single timeoutSecond; // 0xAC
		::System::Int32 retryTime; // 0xB0

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__POST_D__27__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__POST_D__27_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__POST_D__27_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__POST_D__27_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__POST_D__27_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__POST_D__27_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
