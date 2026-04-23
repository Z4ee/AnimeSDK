#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MIHOYO_SDK_JSONOBJECT__GET_CHILDREN_D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17565710)
#define MIHOYO_SDK_JSONOBJECT__GET_CHILDREN_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MIHOYO_SDK_JSONNODE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x175658F0)
#define MIHOYO_SDK_JSONOBJECT__GET_CHILDREN_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MIHOYO_SDK_JSONNODE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17565880)
#define MIHOYO_SDK_JSONOBJECT__GET_CHILDREN_D__25_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17565A60)
#define MIHOYO_SDK_JSONOBJECT__GET_CHILDREN_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x175658E0)
#define MIHOYO_SDK_JSONOBJECT__GET_CHILDREN_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x17565890)
#define MIHOYO_SDK_JSONOBJECT__GET_CHILDREN_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x175656E0)
#define MIHOYO_SDK_JSONOBJECT__GET_CHILDREN_D__25__CTOR_OFFSET UNITYSDK_OFFSET(0x175652F0)
#define MIHOYO_SDK_JSONOBJECT__GET_CHILDREN_D__25___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x17565700)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int JSONObject__get_Children_d__25_TypeDefinitionIndex = 7175;

	class JSONObject__get_Children_d__25 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONNode* __2__current; // 0x10
		::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::MiHoYo::SDK::JSONNode*> __s__1; // 0x18
		::MiHoYo::SDK::JSONObject* __4__this; // 0x40
		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYo::SDK::JSONNode*> _N_5__2; // 0x48
		::System::Int32 __l__initialThreadId; // 0x58
		::System::Int32 __1__state; // 0x5C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT__GET_CHILDREN_D__25__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT__GET_CHILDREN_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT__GET_CHILDREN_D__25_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT__GET_CHILDREN_D__25___M__FINALLY1_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONNode* System_Collections_Generic_IEnumerator_MiHoYo_SDK_JSONNode__get_Current()
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT__GET_CHILDREN_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MIHOYO_SDK_JSONNODE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT__GET_CHILDREN_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT__GET_CHILDREN_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::MiHoYo::SDK::JSONNode*>* System_Collections_Generic_IEnumerable_MiHoYo_SDK_JSONNode__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::MiHoYo::SDK::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT__GET_CHILDREN_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MIHOYO_SDK_JSONNODE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT__GET_CHILDREN_D__25_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
