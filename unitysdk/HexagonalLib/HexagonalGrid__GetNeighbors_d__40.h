#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HexagonalLib/Coordinates/Offset.h"
#include "unitysdk/HexagonalLib/HexagonalGrid.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F8EDA90)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_HEXAGONALLIB_COORDINATES_OFFSET__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F8EDF30)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_HEXAGONALLIB_COORDINATES_OFFSET__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F8EDE80)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F8EDFC0)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F8EDEE0)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F8EDE90)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F8ED8C0)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8ED8A0)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1F8ED9B0)

namespace HexagonalLib
{
	inline static constexpr unsigned int HexagonalGrid__GetNeighbors_d__40_TypeDefinitionIndex = 29407;

	class HexagonalGrid__GetNeighbors_d__40 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::HexagonalLib::Coordinates::Offset>* __7__wrap1; // 0x10
		::HexagonalLib::HexagonalGrid __4__this; // 0x18
		::HexagonalLib::Coordinates::Offset __3__hex; // 0x24
		::HexagonalLib::Coordinates::Offset __2__current; // 0x2C
		::HexagonalLib::Coordinates::Offset hex; // 0x34
		::System::Int32 __l__initialThreadId; // 0x3C
		::System::Int32 __1__state; // 0x40
		::HexagonalLib::HexagonalGrid __3____4__this; // 0x44

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40___M__FINALLY1_OFFSET))(this);
		}

		::HexagonalLib::Coordinates::Offset System_Collections_Generic_IEnumerator_HexagonalLib_Coordinates_Offset__get_Current()
		{
			return ((::HexagonalLib::Coordinates::Offset(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_HEXAGONALLIB_COORDINATES_OFFSET__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::HexagonalLib::Coordinates::Offset>* System_Collections_Generic_IEnumerable_HexagonalLib_Coordinates_Offset__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::HexagonalLib::Coordinates::Offset>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_HEXAGONALLIB_COORDINATES_OFFSET__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
