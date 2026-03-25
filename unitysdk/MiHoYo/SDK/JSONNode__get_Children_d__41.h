#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MIHOYO_SDK_JSONNODE__GET_CHILDREN_D__41_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15F1A250)
#define MIHOYO_SDK_JSONNODE__GET_CHILDREN_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MIHOYO_SDK_JSONNODE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15F1A2E0)
#define MIHOYO_SDK_JSONNODE__GET_CHILDREN_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MIHOYO_SDK_JSONNODE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15F1A270)
#define MIHOYO_SDK_JSONNODE__GET_CHILDREN_D__41_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15F1A480)
#define MIHOYO_SDK_JSONNODE__GET_CHILDREN_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15F1A2D0)
#define MIHOYO_SDK_JSONNODE__GET_CHILDREN_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15F1A280)
#define MIHOYO_SDK_JSONNODE__GET_CHILDREN_D__41_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F1A240)
#define MIHOYO_SDK_JSONNODE__GET_CHILDREN_D__41__CTOR_OFFSET UNITYSDK_OFFSET(0x15F18E20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int JSONNode__get_Children_d__41_TypeDefinitionIndex = 7126;

	class JSONNode__get_Children_d__41 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONNode* __2__current; // 0x10
		::MiHoYo::SDK::JSONNode* __4__this; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::System::Int32 __1__state; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE__GET_CHILDREN_D__41__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE__GET_CHILDREN_D__41_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE__GET_CHILDREN_D__41_MOVENEXT_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONNode* System_Collections_Generic_IEnumerator_MiHoYo_SDK_JSONNode__get_Current()
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE__GET_CHILDREN_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MIHOYO_SDK_JSONNODE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE__GET_CHILDREN_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE__GET_CHILDREN_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::MiHoYo::SDK::JSONNode*>* System_Collections_Generic_IEnumerable_MiHoYo_SDK_JSONNode__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::MiHoYo::SDK::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE__GET_CHILDREN_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MIHOYO_SDK_JSONNODE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE__GET_CHILDREN_D__41_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
