#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5A70B04B36C288E4.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define STRUCT_2_5A70B04B36C288E4__ITERATECELLS_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C54D770)
#define STRUCT_2_5A70B04B36C288E4__ITERATECELLS_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_VECTOR2INT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C54D950)
#define STRUCT_2_5A70B04B36C288E4__ITERATECELLS_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_VECTOR2INT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C54D8C0)
#define STRUCT_2_5A70B04B36C288E4__ITERATECELLS_D__12_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C54D9D0)
#define STRUCT_2_5A70B04B36C288E4__ITERATECELLS_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C54D920)
#define STRUCT_2_5A70B04B36C288E4__ITERATECELLS_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C54D8D0)
#define STRUCT_2_5A70B04B36C288E4__ITERATECELLS_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C54D760)
#define STRUCT_2_5A70B04B36C288E4__ITERATECELLS_D__12__CTOR_OFFSET UNITYSDK_OFFSET(0x1C54D4F0)

inline static constexpr unsigned int Struct_2_5A70B04B36C288E4__IterateCells_d__12_TypeDefinitionIndex = 41822;

class Struct_2_5A70B04B36C288E4__IterateCells_d__12 : public ::System::Object
{
public:
	::UnityEngine::Vector2Int boardSize; // 0x10
	::UnityEngine::Vector2Int __3__boardSize; // 0x18
	::System::Int32 _x_5__2; // 0x20
	::System::Int32 __l__initialThreadId; // 0x24
	::Struct_2_5A70B04B36C288E4 __4__this; // 0x28
	::System::Int32 _y_5__3; // 0x2C
	::UnityEngine::Vector2Int __2__current; // 0x30
	::System::Int32 __1__state; // 0x38
	::Struct_2_5A70B04B36C288E4 __3____4__this; // 0x3C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_5A70B04B36C288E4__ITERATECELLS_D__12__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5A70B04B36C288E4__ITERATECELLS_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5A70B04B36C288E4__ITERATECELLS_D__12_MOVENEXT_OFFSET))(this);
	}

	::UnityEngine::Vector2Int System_Collections_Generic_IEnumerator_UnityEngine_Vector2Int__get_Current()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5A70B04B36C288E4__ITERATECELLS_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_VECTOR2INT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5A70B04B36C288E4__ITERATECELLS_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5A70B04B36C288E4__ITERATECELLS_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector2Int>* System_Collections_Generic_IEnumerable_UnityEngine_Vector2Int__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5A70B04B36C288E4__ITERATECELLS_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_VECTOR2INT__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5A70B04B36C288E4__ITERATECELLS_D__12_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
