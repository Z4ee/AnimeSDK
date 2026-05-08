#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HexagonalLib/Coordinates/Axial.h"
#include "unitysdk/HexagonalLib/HexagonalGrid.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__41_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C3E88F0)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_HEXAGONALLIB_COORDINATES_AXIAL__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C3E8BF0)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_HEXAGONALLIB_COORDINATES_AXIAL__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C3E8B40)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__41_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C3E8C80)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C3E8BA0)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C3E8B50)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__41_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C3E88C0)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__41__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3E88A0)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__41___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1C3E88E0)

namespace HexagonalLib
{
	inline static constexpr unsigned int HexagonalGrid__GetNeighbors_d__41_TypeDefinitionIndex = 26310;

	class HexagonalGrid__GetNeighbors_d__41 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1_Enumerator<::HexagonalLib::Coordinates::Axial> __7__wrap1; // 0x10
		::System::Int32 __1__state; // 0x28
		::HexagonalLib::Coordinates::Axial __3__hex; // 0x2C
		::HexagonalLib::HexagonalGrid __3____4__this; // 0x34
		::HexagonalLib::Coordinates::Axial __2__current; // 0x40
		::HexagonalLib::Coordinates::Axial hex; // 0x48
		::HexagonalLib::HexagonalGrid __4__this; // 0x50
		::System::Int32 __l__initialThreadId; // 0x5C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__41__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__41_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__41_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__41___M__FINALLY1_OFFSET))(this);
		}

		::HexagonalLib::Coordinates::Axial System_Collections_Generic_IEnumerator_HexagonalLib_Coordinates_Axial__get_Current()
		{
			return ((::HexagonalLib::Coordinates::Axial(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_HEXAGONALLIB_COORDINATES_AXIAL__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::HexagonalLib::Coordinates::Axial>* System_Collections_Generic_IEnumerable_HexagonalLib_Coordinates_Axial__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::HexagonalLib::Coordinates::Axial>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_HEXAGONALLIB_COORDINATES_AXIAL__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__41_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
