#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BDFB1B98046CDD46.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_D05699509194BF9B;
class Class_3_99E7DA6DA7D835C7;
class Class_3_99E7DA6DA7D835C7___c__DisplayClass5_0;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_3_99E7DA6DA7D835C7__ITERATEAFFECTEDCELLS_D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C53D2B0)
#define CLASS_3_99E7DA6DA7D835C7__ITERATEAFFECTEDCELLS_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_VECTOR2INT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C53DD40)
#define CLASS_3_99E7DA6DA7D835C7__ITERATEAFFECTEDCELLS_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_VECTOR2INT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C53DCB0)
#define CLASS_3_99E7DA6DA7D835C7__ITERATEAFFECTEDCELLS_D__5_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C53DDE0)
#define CLASS_3_99E7DA6DA7D835C7__ITERATEAFFECTEDCELLS_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C53DD10)
#define CLASS_3_99E7DA6DA7D835C7__ITERATEAFFECTEDCELLS_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C53DCC0)
#define CLASS_3_99E7DA6DA7D835C7__ITERATEAFFECTEDCELLS_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C53D280)
#define CLASS_3_99E7DA6DA7D835C7__ITERATEAFFECTEDCELLS_D__5__CTOR_OFFSET UNITYSDK_OFFSET(0x1C53D1B0)
#define CLASS_3_99E7DA6DA7D835C7__ITERATEAFFECTEDCELLS_D__5___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1C53D2A0)

inline static constexpr unsigned int Class_3_99E7DA6DA7D835C7__IterateAffectedCells_d__5_TypeDefinitionIndex = 41783;

class Class_3_99E7DA6DA7D835C7__IterateAffectedCells_d__5 : public ::System::Object
{
public:
	::System::Func_2<::System::Int32, ::System::Boolean>* _directionalPosIsInRange_5__4; // 0x10
	::Class_1_D05699509194BF9B* mold; // 0x18
	::System::Collections::Generic::Dictionary_2_Enumerator<::System::Int32, ::System::Int32> __7__wrap4; // 0x20
	::Class_1_D05699509194BF9B* __3__mold; // 0x40
	::Class_3_99E7DA6DA7D835C7* __4__this; // 0x48
	::Class_3_99E7DA6DA7D835C7___c__DisplayClass5_0* __8__1; // 0x50
	::System::Int32 __l__initialThreadId; // 0x58
	::System::Int32 _perpendicularDimensionIndex_5__3; // 0x5C
	::System::Int32 _perpendicularPos_5__6; // 0x60
	::Struct_2_BDFB1B98046CDD46 __3__transform; // 0x64
	::System::Int32 _directionalPos_5__7; // 0x70
	::Struct_2_BDFB1B98046CDD46 transform; // 0x74
	::System::Int32 __1__state; // 0x80
	::System::Int32 _directionalDimensionDelta_5__2; // 0x84
	::UnityEngine::Vector2Int __2__current; // 0x88

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_99E7DA6DA7D835C7__ITERATEAFFECTEDCELLS_D__5__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99E7DA6DA7D835C7__ITERATEAFFECTEDCELLS_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99E7DA6DA7D835C7__ITERATEAFFECTEDCELLS_D__5_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99E7DA6DA7D835C7__ITERATEAFFECTEDCELLS_D__5___M__FINALLY1_OFFSET))(this);
	}

	::UnityEngine::Vector2Int System_Collections_Generic_IEnumerator_UnityEngine_Vector2Int__get_Current()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99E7DA6DA7D835C7__ITERATEAFFECTEDCELLS_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_VECTOR2INT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99E7DA6DA7D835C7__ITERATEAFFECTEDCELLS_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99E7DA6DA7D835C7__ITERATEAFFECTEDCELLS_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector2Int>* System_Collections_Generic_IEnumerable_UnityEngine_Vector2Int__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99E7DA6DA7D835C7__ITERATEAFFECTEDCELLS_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_VECTOR2INT__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99E7DA6DA7D835C7__ITERATEAFFECTEDCELLS_D__5_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
