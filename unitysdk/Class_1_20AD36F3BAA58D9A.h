#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"

class Class_1_9518B5776748B41E;
class Class_3_A26D4A2AAC08C213;
class Class_4_8637C178AE75321B;
class Class_5_DCFF91E03A93C03C;

#define CLASS_1_20AD36F3BAA58D9A_METHOD_1_31618C12F7FD12C4_OFFSET UNITYSDK_OFFSET(0x12FC7E80)
#define CLASS_1_20AD36F3BAA58D9A_METHOD_1_4089E9DB3D7BAFA9_OFFSET UNITYSDK_OFFSET(0x12FC8450)
#define CLASS_1_20AD36F3BAA58D9A_METHOD_1_87AB230C2E818310_OFFSET UNITYSDK_OFFSET(0x12FC85A0)

inline static constexpr unsigned int Class_1_20AD36F3BAA58D9A_TypeDefinitionIndex = 66184;

class Class_1_20AD36F3BAA58D9A : public ::System::Object
{
public:
	static ::Class_1_9518B5776748B41E* Method_1_31618C12F7FD12C4(::Class_4_8637C178AE75321B* a1)
	{
		return ((::Class_1_9518B5776748B41E*(*)(::Class_4_8637C178AE75321B*))((::PBYTE)hIl2Cpp + CLASS_1_20AD36F3BAA58D9A_METHOD_1_31618C12F7FD12C4_OFFSET))(a1);
	}

	static ::Class_5_DCFF91E03A93C03C* Method_1_4089E9DB3D7BAFA9(::Class_3_A26D4A2AAC08C213* a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2)
	{
		return ((::Class_5_DCFF91E03A93C03C*(*)(::Class_3_A26D4A2AAC08C213*, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_1_20AD36F3BAA58D9A_METHOD_1_4089E9DB3D7BAFA9_OFFSET))(a1, a2);
	}

	static ::Class_5_DCFF91E03A93C03C* Method_1_87AB230C2E818310(::Class_4_8637C178AE75321B* a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2)
	{
		return ((::Class_5_DCFF91E03A93C03C*(*)(::Class_4_8637C178AE75321B*, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_1_20AD36F3BAA58D9A_METHOD_1_87AB230C2E818310_OFFSET))(a1, a2);
	}
};
