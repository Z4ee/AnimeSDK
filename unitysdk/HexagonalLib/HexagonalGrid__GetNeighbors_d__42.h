#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HexagonalLib/Coordinates/Cubic.h"
#include "unitysdk/HexagonalLib/HexagonalGrid.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__42_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E5BAFF0)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__42_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_HEXAGONALLIB_COORDINATES_CUBIC__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E5BB340)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__42_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_HEXAGONALLIB_COORDINATES_CUBIC__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E5BB280)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__42_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E5BB3D0)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E5BB2F0)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E5BB2A0)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__42_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E5BAFC0)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__42__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5BAFA0)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__42___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1E5BAFE0)

namespace HexagonalLib
{
	inline static constexpr unsigned int HexagonalGrid__GetNeighbors_d__42_TypeDefinitionIndex = 28868;

	class HexagonalGrid__GetNeighbors_d__42 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1_Enumerator<::HexagonalLib::Coordinates::Cubic> __7__wrap1; // 0x10
		::HexagonalLib::Coordinates::Cubic __3__hex; // 0x30
		::System::Int32 __1__state; // 0x3C
		::HexagonalLib::HexagonalGrid __3____4__this; // 0x40
		::HexagonalLib::Coordinates::Cubic __2__current; // 0x4C
		::HexagonalLib::HexagonalGrid __4__this; // 0x58
		::System::Int32 __l__initialThreadId; // 0x64
		::HexagonalLib::Coordinates::Cubic hex; // 0x68

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__42__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__42_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__42_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__42___M__FINALLY1_OFFSET))(this);
		}

		::HexagonalLib::Coordinates::Cubic System_Collections_Generic_IEnumerator_HexagonalLib_Coordinates_Cubic__get_Current()
		{
			return ((::HexagonalLib::Coordinates::Cubic(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__42_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_HEXAGONALLIB_COORDINATES_CUBIC__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::HexagonalLib::Coordinates::Cubic>* System_Collections_Generic_IEnumerable_HexagonalLib_Coordinates_Cubic__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::HexagonalLib::Coordinates::Cubic>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__42_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_HEXAGONALLIB_COORDINATES_CUBIC__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__42_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
