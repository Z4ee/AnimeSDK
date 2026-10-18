#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_3745C69C00F04B7D_4;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_5F936B04B1CAE308___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB7D5AA0)
#define CLASS_1_5F936B04B1CAE308___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB7D5AE0)
#define CLASS_1_5F936B04B1CAE308___C__GET_BANNEDCELLRELATIVEPOSITIONS_B__13_0_OFFSET UNITYSDK_OFFSET(0xB7D5AF0)

inline static constexpr unsigned int Class_1_5F936B04B1CAE308___c_TypeDefinitionIndex = 80088;

class Class_1_5F936B04B1CAE308___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_3745C69C00F04B7D_4*, ::UnityEngine::Vector2Int>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::Class_1_3745C69C00F04B7D_4*, ::UnityEngine::Vector2Int>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F936B04B1CAE308___c_TypeDefinitionIndex)->GetStaticField(0x6C540);
	}
	static ::Class_1_5F936B04B1CAE308___c** StaticGet___9()
	{
		return (::Class_1_5F936B04B1CAE308___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F936B04B1CAE308___c_TypeDefinitionIndex)->GetStaticField(0x6C548);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5F936B04B1CAE308___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F936B04B1CAE308___C__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector2Int _get_BannedCellRelativePositions_b__13_0(::Class_1_3745C69C00F04B7D_4* a1)
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID, ::Class_1_3745C69C00F04B7D_4*))((::PBYTE)hIl2Cpp + CLASS_1_5F936B04B1CAE308___C__GET_BANNEDCELLRELATIVEPOSITIONS_B__13_0_OFFSET))(this, a1);
	}
};
