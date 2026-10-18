#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D550E2FE83D255EF.h"
#include "unitysdk/Struct_2_BDFB1B98046CDD46.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_D05699509194BF9B;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_3_A37DB86DDBFDB20B_METHOD_3_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x1C54F600)
#define CLASS_3_A37DB86DDBFDB20B_METHOD_3_F9E07025F1A6081A_OFFSET UNITYSDK_OFFSET(0x1C54F650)
#define CLASS_3_A37DB86DDBFDB20B__CTOR_OFFSET UNITYSDK_OFFSET(0x1C54F5F0)

inline static constexpr unsigned int Class_3_A37DB86DDBFDB20B_TypeDefinitionIndex = 41784;

class Class_3_A37DB86DDBFDB20B : public ::Class_2_D550E2FE83D255EF
{
public:
	::System::Single OHEALPINCGL; // 0x18

	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A37DB86DDBFDB20B__CTOR_OFFSET))(this, a1);
	}

	::System::Single Method_3_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A37DB86DDBFDB20B_METHOD_3_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* Method_3_F9E07025F1A6081A(::Class_1_D05699509194BF9B* a1, ::Struct_2_BDFB1B98046CDD46 a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::Class_1_D05699509194BF9B*, ::Struct_2_BDFB1B98046CDD46))((::PBYTE)hIl2Cpp + CLASS_3_A37DB86DDBFDB20B_METHOD_3_F9E07025F1A6081A_OFFSET))(this, a1, a2);
	}
};
