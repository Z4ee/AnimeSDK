#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftRotationType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_D05699509194BF9B;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_D05699509194BF9B__ROTATEDSHAPE_D__36_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C51D4C0)
#define CLASS_1_D05699509194BF9B__ROTATEDSHAPE_D__36_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_VECTOR2INT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C51DA80)
#define CLASS_1_D05699509194BF9B__ROTATEDSHAPE_D__36_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_VECTOR2INT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C51D9F0)
#define CLASS_1_D05699509194BF9B__ROTATEDSHAPE_D__36_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C51DB00)
#define CLASS_1_D05699509194BF9B__ROTATEDSHAPE_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C51DA50)
#define CLASS_1_D05699509194BF9B__ROTATEDSHAPE_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C51DA00)
#define CLASS_1_D05699509194BF9B__ROTATEDSHAPE_D__36_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C51D380)
#define CLASS_1_D05699509194BF9B__ROTATEDSHAPE_D__36__CTOR_OFFSET UNITYSDK_OFFSET(0x1C51CD40)
#define CLASS_1_D05699509194BF9B__ROTATEDSHAPE_D__36___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1C51D3C0)

inline static constexpr unsigned int Class_1_D05699509194BF9B__RotatedShape_d__36_TypeDefinitionIndex = 41808;

class Class_1_D05699509194BF9B__RotatedShape_d__36 : public ::System::Object
{
public:
	::Class_1_D05699509194BF9B* __4__this; // 0x10
	::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector2Int>* __7__wrap2; // 0x18
	::RPG::Client::MechCraft::MechCraftRotationType __3__rotation; // 0x20
	::System::Int32 __l__initialThreadId; // 0x24
	::RPG::Client::MechCraft::MechCraftRotationType rotation; // 0x28
	::UnityEngine::Vector2Int __2__current; // 0x2C
	::System::Int32 __1__state; // 0x34
	::UnityEngine::Vector2Int _originalSize_5__2; // 0x38

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B__ROTATEDSHAPE_D__36__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B__ROTATEDSHAPE_D__36_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B__ROTATEDSHAPE_D__36_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B__ROTATEDSHAPE_D__36___M__FINALLY1_OFFSET))(this);
	}

	::UnityEngine::Vector2Int System_Collections_Generic_IEnumerator_UnityEngine_Vector2Int__get_Current()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B__ROTATEDSHAPE_D__36_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_VECTOR2INT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B__ROTATEDSHAPE_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B__ROTATEDSHAPE_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector2Int>* System_Collections_Generic_IEnumerable_UnityEngine_Vector2Int__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B__ROTATEDSHAPE_D__36_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_VECTOR2INT__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B__ROTATEDSHAPE_D__36_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
