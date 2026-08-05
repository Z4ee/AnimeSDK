#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F78D134D9EB09E5B.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

#define CLASS_4_7157E439D1253C52_METHOD_4_AB4469CEE3CF3731_OFFSET UNITYSDK_OFFSET(0x13767710)
#define CLASS_4_7157E439D1253C52__CTOR_OFFSET UNITYSDK_OFFSET(0x137676C0)

inline static constexpr unsigned int Class_4_7157E439D1253C52_TypeDefinitionIndex = 55059;

class Class_4_7157E439D1253C52 : public ::Class_3_F78D134D9EB09E5B
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7157E439D1253C52__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_AB4469CEE3CF3731(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_4_7157E439D1253C52_METHOD_4_AB4469CEE3CF3731_OFFSET))(this, a1);
	}
};
