#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Codable { class JSONNode; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CODABLE_JSONNODE__GET_DEEPCHILDREN_D__41_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DB5B010)
#define CODABLE_JSONNODE__GET_DEEPCHILDREN_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_CODABLE_JSONNODE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DB5B890)
#define CODABLE_JSONNODE__GET_DEEPCHILDREN_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_CODABLE_JSONNODE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DB5B820)
#define CODABLE_JSONNODE__GET_DEEPCHILDREN_D__41_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DB5B910)
#define CODABLE_JSONNODE__GET_DEEPCHILDREN_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DB5B880)
#define CODABLE_JSONNODE__GET_DEEPCHILDREN_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1DB5B830)
#define CODABLE_JSONNODE__GET_DEEPCHILDREN_D__41_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DB5AD60)
#define CODABLE_JSONNODE__GET_DEEPCHILDREN_D__41__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB580F0)
#define CODABLE_JSONNODE__GET_DEEPCHILDREN_D__41___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1DB5AF10)
#define CODABLE_JSONNODE__GET_DEEPCHILDREN_D__41___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1DB5AE10)

namespace Codable
{
	inline static constexpr unsigned int JSONNode__get_DeepChildren_d__41_TypeDefinitionIndex = 46523;

	class JSONNode__get_DeepChildren_d__41 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::Codable::JSONNode*>* __7__wrap2; // 0x10
		::System::Collections::Generic::IEnumerator_1<::Codable::JSONNode*>* __7__wrap1; // 0x18
		::Codable::JSONNode* __4__this; // 0x20
		::Codable::JSONNode* __2__current; // 0x28
		::System::Int32 __l__initialThreadId; // 0x30
		::System::Int32 __1__state; // 0x34

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE__GET_DEEPCHILDREN_D__41__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE__GET_DEEPCHILDREN_D__41_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE__GET_DEEPCHILDREN_D__41_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE__GET_DEEPCHILDREN_D__41___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE__GET_DEEPCHILDREN_D__41___M__FINALLY2_OFFSET))(this);
		}

		::Codable::JSONNode* System_Collections_Generic_IEnumerator_Codable_JSONNode__get_Current()
		{
			return ((::Codable::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE__GET_DEEPCHILDREN_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_CODABLE_JSONNODE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE__GET_DEEPCHILDREN_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE__GET_DEEPCHILDREN_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Codable::JSONNode*>* System_Collections_Generic_IEnumerable_Codable_JSONNode__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Codable::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE__GET_DEEPCHILDREN_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_CODABLE_JSONNODE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE__GET_DEEPCHILDREN_D__41_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
