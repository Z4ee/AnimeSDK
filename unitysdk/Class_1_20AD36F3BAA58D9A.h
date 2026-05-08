#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"

class Class_1_9518B5776748B41E;
class Class_3_95932C222EBC5BA5;
class Class_4_8637C178AE75321B;
class Class_5_AF65C3A968E836D2;

#define CLASS_1_20AD36F3BAA58D9A_METHOD_1_4089E9DB3D7BAFA9_OFFSET UNITYSDK_OFFSET(0x10DCBA00)
#define CLASS_1_20AD36F3BAA58D9A_METHOD_1_56DF32890C96C4E4_OFFSET UNITYSDK_OFFSET(0x10DCBB50)
#define CLASS_1_20AD36F3BAA58D9A_METHOD_1_87AB230C2E818310_OFFSET UNITYSDK_OFFSET(0x10DCB910)

inline static constexpr unsigned int Class_1_20AD36F3BAA58D9A_TypeDefinitionIndex = 42022;

class Class_1_20AD36F3BAA58D9A : public ::System::Object
{
public:
	static ::Class_5_AF65C3A968E836D2* Method_1_87AB230C2E818310(::Class_4_8637C178AE75321B* a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2)
	{
		return ((::Class_5_AF65C3A968E836D2*(*)(::Class_4_8637C178AE75321B*, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_1_20AD36F3BAA58D9A_METHOD_1_87AB230C2E818310_OFFSET))(a1, a2);
	}

	static ::Class_5_AF65C3A968E836D2* Method_1_4089E9DB3D7BAFA9(::Class_3_95932C222EBC5BA5* a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2)
	{
		return ((::Class_5_AF65C3A968E836D2*(*)(::Class_3_95932C222EBC5BA5*, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_1_20AD36F3BAA58D9A_METHOD_1_4089E9DB3D7BAFA9_OFFSET))(a1, a2);
	}

	static ::Class_1_9518B5776748B41E* Method_1_56DF32890C96C4E4(::Class_4_8637C178AE75321B* a1)
	{
		return ((::Class_1_9518B5776748B41E*(*)(::Class_4_8637C178AE75321B*))((::PBYTE)hIl2Cpp + CLASS_1_20AD36F3BAA58D9A_METHOD_1_56DF32890C96C4E4_OFFSET))(a1);
	}
};
