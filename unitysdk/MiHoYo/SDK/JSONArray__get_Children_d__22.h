#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK { class JSONNode; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MIHOYO_SDK_JSONARRAY__GET_CHILDREN_D__22_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18348360)
#define MIHOYO_SDK_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MIHOYO_SDK_JSONNODE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18348550)
#define MIHOYO_SDK_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MIHOYO_SDK_JSONNODE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x183484E0)
#define MIHOYO_SDK_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x183486F0)
#define MIHOYO_SDK_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18348540)
#define MIHOYO_SDK_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x183484F0)
#define MIHOYO_SDK_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18348330)
#define MIHOYO_SDK_JSONARRAY__GET_CHILDREN_D__22__CTOR_OFFSET UNITYSDK_OFFSET(0x18347B20)
#define MIHOYO_SDK_JSONARRAY__GET_CHILDREN_D__22___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x18348350)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int JSONArray__get_Children_d__22_TypeDefinitionIndex = 8075;

	class JSONArray__get_Children_d__22 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONArray* __4__this; // 0x10
		::System::Collections::Generic::List_1_Enumerator<::MiHoYo::SDK::JSONNode*> __s__1; // 0x18
		::MiHoYo::SDK::JSONNode* _N_5__2; // 0x30
		::MiHoYo::SDK::JSONNode* __2__current; // 0x38
		::System::Int32 __l__initialThreadId; // 0x40
		::System::Int32 __1__state; // 0x44

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY__GET_CHILDREN_D__22__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY__GET_CHILDREN_D__22_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY__GET_CHILDREN_D__22___M__FINALLY1_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONNode* System_Collections_Generic_IEnumerator_MiHoYo_SDK_JSONNode__get_Current()
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MIHOYO_SDK_JSONNODE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::MiHoYo::SDK::JSONNode*>* System_Collections_Generic_IEnumerable_MiHoYo_SDK_JSONNode__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::MiHoYo::SDK::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MIHOYO_SDK_JSONNODE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
