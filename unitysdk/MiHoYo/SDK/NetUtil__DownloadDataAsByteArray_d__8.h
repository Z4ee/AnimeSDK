#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetUtil_ResponseModel; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define MIHOYO_SDK_NETUTIL__DOWNLOADDATAASBYTEARRAY_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DD42240)
#define MIHOYO_SDK_NETUTIL__DOWNLOADDATAASBYTEARRAY_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DD42640)
#define MIHOYO_SDK_NETUTIL__DOWNLOADDATAASBYTEARRAY_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DD426A0)
#define MIHOYO_SDK_NETUTIL__DOWNLOADDATAASBYTEARRAY_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1DD42650)
#define MIHOYO_SDK_NETUTIL__DOWNLOADDATAASBYTEARRAY_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DD42230)
#define MIHOYO_SDK_NETUTIL__DOWNLOADDATAASBYTEARRAY_D__8__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD42220)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetUtil__DownloadDataAsByteArray_d__8_TypeDefinitionIndex = 20296;

	class NetUtil__DownloadDataAsByteArray_d__8 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::String* url; // 0x18
		::MiHoYo::SDK::NetUtil_ResponseModel* _result_5__2; // 0x20
		::System::String* method; // 0x28
		::System::Action_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*>* completed; // 0x30
		::System::Exception* _e_5__3; // 0x38
		::UnityEngine::Networking::UnityWebRequest* _request_5__1; // 0x40
		::System::Int32 __1__state; // 0x48

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__DOWNLOADDATAASBYTEARRAY_D__8__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__DOWNLOADDATAASBYTEARRAY_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__DOWNLOADDATAASBYTEARRAY_D__8_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__DOWNLOADDATAASBYTEARRAY_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__DOWNLOADDATAASBYTEARRAY_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL__DOWNLOADDATAASBYTEARRAY_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
