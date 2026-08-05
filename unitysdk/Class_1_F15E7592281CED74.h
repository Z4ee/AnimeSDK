#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_F15E7592281CED74_SerializedVector3;
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F15E7592281CED74_METHOD_1_083A0D8397A1EC90_OFFSET UNITYSDK_OFFSET(0x14315C60)
#define CLASS_1_F15E7592281CED74_METHOD_1_417BC21CF1D1C9AF_1_OFFSET UNITYSDK_OFFSET(0x14315D00)
#define CLASS_1_F15E7592281CED74_METHOD_1_417BC21CF1D1C9AF_OFFSET UNITYSDK_OFFSET(0x14315B70)
#define CLASS_1_F15E7592281CED74_METHOD_1_5B0277BDAEC8551A_OFFSET UNITYSDK_OFFSET(0x14315BE0)

inline static constexpr unsigned int Class_1_F15E7592281CED74_TypeDefinitionIndex = 73760;

class Class_1_F15E7592281CED74 : public ::System::Object
{
public:
	static ::MoleMole::Vector2Int Method_1_417BC21CF1D1C9AF(::MoleMole::Vector2Int a1, ::MoleMole::Vector2Int a2)
	{
		return ((::MoleMole::Vector2Int(*)(::MoleMole::Vector2Int, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_F15E7592281CED74_METHOD_1_417BC21CF1D1C9AF_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_5B0277BDAEC8551A(::Class_1_F15E7592281CED74_SerializedVector3* a1)
	{
		return ((::UnityEngine::Vector3(*)(::Class_1_F15E7592281CED74_SerializedVector3*))((::PBYTE)hIl2Cpp + CLASS_1_F15E7592281CED74_METHOD_1_5B0277BDAEC8551A_OFFSET))(a1);
	}

	static ::Class_1_F15E7592281CED74_SerializedVector3* Method_1_083A0D8397A1EC90(::UnityEngine::Vector3 a1)
	{
		return ((::Class_1_F15E7592281CED74_SerializedVector3*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F15E7592281CED74_METHOD_1_083A0D8397A1EC90_OFFSET))(a1);
	}

	static ::MoleMole::Vector2Int Method_1_417BC21CF1D1C9AF_1(::MoleMole::Vector2Int a1, ::MoleMole::Vector2Int a2)
	{
		return ((::MoleMole::Vector2Int(*)(::MoleMole::Vector2Int, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_F15E7592281CED74_METHOD_1_417BC21CF1D1C9AF_1_OFFSET))(a1, a2);
	}
};
