#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace Foundation::Unreal { class GameplayTagCollection; }
namespace Foundation::Unreal { class GameplayTagList; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BCA1B20)
#define FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1BCA1E40)
#define FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BCA1DD0)
#define FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1BCA1EC0)
#define FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BCA1E30)
#define FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1BCA1DE0)
#define FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BCA1AE0)
#define FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCA1AC0)
#define FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1BCA1B10)
#define FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1BCA1B00)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int GameplayTagCollection__Collect_d__3_TypeDefinitionIndex = 8918;

	class GameplayTagCollection__Collect_d__3 : public ::System::Object
	{
	public:
		::System::String* __2__current; // 0x10
		::System::Collections::Generic::List_1_Enumerator<::System::String*> __7__wrap3; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* _tags_5__2; // 0x30
		::System::Collections::Generic::List_1_Enumerator<::Foundation::Unreal::GameplayTagList*> __7__wrap2; // 0x38
		::Foundation::Unreal::GameplayTagCollection* __4__this; // 0x50
		::System::Int32 __l__initialThreadId; // 0x58
		::System::Int32 __1__state; // 0x5C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3___M__FINALLY2_OFFSET))(this);
		}

		::System::String* System_Collections_Generic_IEnumerator_System_String__get_Current()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
