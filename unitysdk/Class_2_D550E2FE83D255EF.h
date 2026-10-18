#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD893FD36F6A3A6D_2.h"
#include "unitysdk/Struct_2_BDFB1B98046CDD46.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_1ABDF1855FCDB08F;
class Class_1_D05699509194BF9B;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_D550E2FE83D255EF_METHOD_2_985FD545A9494C59_OFFSET UNITYSDK_OFFSET(0x1C523E00)
#define CLASS_2_D550E2FE83D255EF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C523F40)

inline static constexpr unsigned int Class_2_D550E2FE83D255EF_TypeDefinitionIndex = 41777;

class Class_2_D550E2FE83D255EF : public ::Class_1_FD893FD36F6A3A6D_2
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D550E2FE83D255EF__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* Method_2_985FD545A9494C59(::Class_1_1ABDF1855FCDB08F* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::Class_1_1ABDF1855FCDB08F*))((::PBYTE)hIl2Cpp + CLASS_2_D550E2FE83D255EF_METHOD_2_985FD545A9494C59_OFFSET))(this, a1);
	}
};
