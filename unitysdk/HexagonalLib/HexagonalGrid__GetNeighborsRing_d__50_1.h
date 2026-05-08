#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace HexagonalLib
{
	inline static constexpr unsigned int HexagonalGrid__GetNeighborsRing_d__50_1_TypeDefinitionIndex = 26309;

	template <typename T>
	class HexagonalGrid__GetNeighborsRing_d__50_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Int32 radius; // 0x0
		::System::Int32 __3__radius; // 0x0
		T center; // 0x0
		T __3__center; // 0x0
		::System::Func_3<T, ::System::Int32, T>* getNeighbor; // 0x0
		::System::Func_3<T, ::System::Int32, T>* __3__getNeighbor; // 0x0
		::System::Int32 _i_5__2; // 0x0
		::System::Int32 _j_5__3; // 0x0
	};
}
