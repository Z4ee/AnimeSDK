#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9EAC6DA0B6CFDD9B.h"
#include "unitysdk/Class_2_09788588D295D9D3_Direction.h"

class Class_1_83665B095F1535B5_25;

#define CLASS_2_09788588D295D9D3_METHOD_2_44FA30F5BACC9CBD_OFFSET UNITYSDK_OFFSET(0x1708EE40)
#define CLASS_2_09788588D295D9D3__CTOR_OFFSET UNITYSDK_OFFSET(0x1708ED20)

inline static constexpr unsigned int Class_2_09788588D295D9D3_TypeDefinitionIndex = 69135;

class Class_2_09788588D295D9D3 : public ::Class_1_9EAC6DA0B6CFDD9B
{
public:
	::Class_2_09788588D295D9D3_Direction Field_2_0; // 0x20

	::System::Void _ctor(::Class_2_09788588D295D9D3_Direction a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_09788588D295D9D3_Direction))((::PBYTE)hIl2Cpp + CLASS_2_09788588D295D9D3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_44FA30F5BACC9CBD(::Class_1_83665B095F1535B5_25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_83665B095F1535B5_25*))((::PBYTE)hIl2Cpp + CLASS_2_09788588D295D9D3_METHOD_2_44FA30F5BACC9CBD_OFFSET))(this, a1);
	}
};
