#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1BD847A31AE58508_Class_1_3BF89FA580FCE89E.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define CLASS_1_1BD847A31AE58508_CLASS_2_C65BDAC1463F791E_GET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1590FE60)
#define CLASS_1_1BD847A31AE58508_CLASS_2_C65BDAC1463F791E_METHOD_2_784F91BFA37D10ED_OFFSET UNITYSDK_OFFSET(0x1590FE90)
#define CLASS_1_1BD847A31AE58508_CLASS_2_C65BDAC1463F791E_SET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1590FE80)
#define CLASS_1_1BD847A31AE58508_CLASS_2_C65BDAC1463F791E__CTOR_OFFSET UNITYSDK_OFFSET(0x1590FF10)

inline static constexpr unsigned int Class_1_1BD847A31AE58508_Class_2_C65BDAC1463F791E_TypeDefinitionIndex = 79489;

class Class_1_1BD847A31AE58508_Class_2_C65BDAC1463F791E : public ::Class_1_1BD847A31AE58508_Class_1_3BF89FA580FCE89E
{
public:
	::System::Nullable_1<::UnityEngine::Vector2Int> _TargetPosition_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BD847A31AE58508_CLASS_2_C65BDAC1463F791E__CTOR_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::Vector2Int> get_TargetPosition()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector2Int>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BD847A31AE58508_CLASS_2_C65BDAC1463F791E_GET_TARGETPOSITION_OFFSET))(this);
	}

	::System::Void set_TargetPosition(::System::Nullable_1<::UnityEngine::Vector2Int> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector2Int>))((::PBYTE)hIl2Cpp + CLASS_1_1BD847A31AE58508_CLASS_2_C65BDAC1463F791E_SET_TARGETPOSITION_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_784F91BFA37D10ED(::UnityEngine::Vector2Int& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int&))((::PBYTE)hIl2Cpp + CLASS_1_1BD847A31AE58508_CLASS_2_C65BDAC1463F791E_METHOD_2_784F91BFA37D10ED_OFFSET))(this, a1);
	}
};
