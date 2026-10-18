#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_0_16E4307DCC419505_118;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_29879040ACE9123F_METHOD_1_5250C3A988BA23C8_OFFSET UNITYSDK_OFFSET(0x1C516A10)
#define CLASS_1_29879040ACE9123F_METHOD_1_BD2D53E17B61355D_OFFSET UNITYSDK_OFFSET(0x1C514F00)

inline static constexpr unsigned int Class_1_29879040ACE9123F_TypeDefinitionIndex = 41690;

class Class_1_29879040ACE9123F : public ::System::Object
{
public:
	static ::System::Boolean Method_1_5250C3A988BA23C8(::Class_0_16E4307DCC419505_118* a1, ::UnityEngine::Vector2Int a2)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_118*, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_29879040ACE9123F_METHOD_1_5250C3A988BA23C8_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* Method_1_BD2D53E17B61355D(::Class_0_16E4307DCC419505_118* a1, ::UnityEngine::Vector2Int a2)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*(*)(::Class_0_16E4307DCC419505_118*, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_29879040ACE9123F_METHOD_1_BD2D53E17B61355D_OFFSET))(a1, a2);
	}
};
