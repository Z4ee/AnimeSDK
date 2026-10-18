#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_11547817CAC659C4.h"
#include "unitysdk/Struct_2_BDFB1B98046CDD46.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_D05699509194BF9B;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_3_E9256BD99BAD5ADA_METHOD_3_99FC76DCA3ED2297_OFFSET UNITYSDK_OFFSET(0x1C564180)
#define CLASS_3_E9256BD99BAD5ADA_METHOD_3_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x1C564130)
#define CLASS_3_E9256BD99BAD5ADA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C555E50)
#define CLASS_3_E9256BD99BAD5ADA__ITERATEAFFECTEDCELLS_G__ISINRANGE_4_0_OFFSET UNITYSDK_OFFSET(0x1C564CD0)

inline static constexpr unsigned int Class_3_E9256BD99BAD5ADA_TypeDefinitionIndex = 41778;

class Class_3_E9256BD99BAD5ADA : public ::Class_2_11547817CAC659C4
{
public:
	::UnityEngine::Vector2Int JGLJCHGAIHP; // 0x18
	::System::Single OHEALPINCGL; // 0x20

	::System::Void _ctor(::System::Single a1, ::UnityEngine::Vector2Int a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_3_E9256BD99BAD5ADA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_3_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9256BD99BAD5ADA_METHOD_3_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* Method_3_99FC76DCA3ED2297(::Class_1_D05699509194BF9B* a1, ::Struct_2_BDFB1B98046CDD46 a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::Class_1_D05699509194BF9B*, ::Struct_2_BDFB1B98046CDD46))((::PBYTE)hIl2Cpp + CLASS_3_E9256BD99BAD5ADA_METHOD_3_99FC76DCA3ED2297_OFFSET))(this, a1, a2);
	}

	::System::Boolean _IterateAffectedCells_g__IsInRange_4_0(::UnityEngine::Vector2Int a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_3_E9256BD99BAD5ADA__ITERATEAFFECTEDCELLS_G__ISINRANGE_4_0_OFFSET))(this, a1);
	}
};
