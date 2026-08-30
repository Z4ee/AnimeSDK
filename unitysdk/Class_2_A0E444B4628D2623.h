#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4F8F63A86CD3F701.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_2_A0E444B4628D2623_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x198B13F0)
#define CLASS_2_A0E444B4628D2623_METHOD_2_F4DB0B753188829F_OFFSET UNITYSDK_OFFSET(0x198B1340)
#define CLASS_2_A0E444B4628D2623__CTOR_OFFSET UNITYSDK_OFFSET(0x198B1500)

inline static constexpr unsigned int Class_2_A0E444B4628D2623_TypeDefinitionIndex = 72580;

class Class_2_A0E444B4628D2623 : public ::Class_1_4F8F63A86CD3F701
{
public:
	::UnityEngine::Vector2 HKIBADKNGMK; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0E444B4628D2623__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F4DB0B753188829F(::System::Single a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_A0E444B4628D2623_METHOD_2_F4DB0B753188829F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0E444B4628D2623_METHOD_2_7DB49B5407C8FD68_OFFSET))(this);
	}
};
