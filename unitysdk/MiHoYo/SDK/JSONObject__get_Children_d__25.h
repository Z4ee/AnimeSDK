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

#define MIHOYO_SDK_JSONOBJECT__GET_CHILDREN_D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1AEB6B00)
#define MIHOYO_SDK_JSONOBJECT__GET_CHILDREN_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MIHOYO_SDK_JSONNODE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A61A070)
#define MIHOYO_SDK_JSONOBJECT__GET_CHILDREN_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MIHOYO_SDK_JSONNODE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AEB6C80)
#define MIHOYO_SDK_JSONOBJECT__GET_CHILDREN_D__25_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A61A160)
#define MIHOYO_SDK_JSONOBJECT__GET_CHILDREN_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A61A060)
#define MIHOYO_SDK_JSONOBJECT__GET_CHILDREN_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A61A010)
#define MIHOYO_SDK_JSONOBJECT__GET_CHILDREN_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AEB6AD0)
#define MIHOYO_SDK_JSONOBJECT__GET_CHILDREN_D__25__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEB5FF0)
#define MIHOYO_SDK_JSONOBJECT__GET_CHILDREN_D__25___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1AEB6AF0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int JSONObject__get_Children_d__25_TypeDefinitionIndex = 8093;

	class JSONObject__get_Children_d__25 : public ::System::Object
	{
	public:
		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYo::SDK::JSONNode*> _N_5__2; // 0x10
		::MiHoYo::SDK::JSONObject* __4__this; // 0x20
		::MiHoYo::SDK::JSONNode* __2__current; // 0x28
		::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::MiHoYo::SDK::JSONNode*> __s__1; // 0x30
		::System::Int32 __l__initialThreadId; // 0x58
		::System::Int32 __1__state; // 0x5C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT__GET_CHILDREN_D__25__CTOR_OFFSET))(this, a1);
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
