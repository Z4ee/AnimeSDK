#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_UGCINTERFACE__GET_D__50_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D3A7D20)
#define MIHOYO_SDK_UGCINTERFACE__GET_D__50_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D3A7DF0)
#define MIHOYO_SDK_UGCINTERFACE__GET_D__50_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D3A7E50)
#define MIHOYO_SDK_UGCINTERFACE__GET_D__50_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D3A7E00)
#define MIHOYO_SDK_UGCINTERFACE__GET_D__50_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D3A7D10)
#define MIHOYO_SDK_UGCINTERFACE__GET_D__50__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A7D00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UGCInterface__Get_d__50_TypeDefinitionIndex = 37497;

	class UGCInterface__Get_d__50 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::String* strUrl; // 0x18
		::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* completeCallback; // 0x20
		::System::Action* timeoutCallback; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers; // 0x30
		::System::Int32 nRetryCount; // 0x38
		::System::Single nTimeoutSeconds; // 0x3C
		::System::Int32 __1__state; // 0x40

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE__GET_D__50__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE__GET_D__50_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE__GET_D__50_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE__GET_D__50_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE__GET_D__50_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE__GET_D__50_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
