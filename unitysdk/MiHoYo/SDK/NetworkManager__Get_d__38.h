#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/JSONNode_KeyEnumerator.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_NETWORKMANAGER__GET_D__38_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BE8A460)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BE8A9B0)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BE8AA10)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1BE8A9C0)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__38_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BE8A450)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__38__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE85700)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetworkManager__Get_d__38_TypeDefinitionIndex = 8161;

	class NetworkManager__Get_d__38 : public ::System::Object
	{
	public:
		::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* callback; // 0x10
		::MiHoYo::SDK::JSONNode_KeyEnumerator __s__4; // 0x18
		::System::Action* timeoutCallback; // 0x60
		::MiHoYo::SDK::JSONNode* _extHeaderNode_5__3; // 0x68
		::MiHoYo::SDK::JSONObject* query; // 0x70
		::System::Object* __2__current; // 0x78
		::System::String* requestUrl; // 0x80
		::System::String* extHeaders; // 0x88
		::System::String* _key_5__5; // 0x90
		::MiHoYo::SDK::NetworkManager* __4__this; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _newHeaders_5__1; // 0xA0
		::System::String* _queryString_5__2; // 0xA8
		::System::Single timeoutSecond; // 0xB0
		::System::Int32 __1__state; // 0xB4
		::System::Int32 retryTime; // 0xB8

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__38__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__38_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__38_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
