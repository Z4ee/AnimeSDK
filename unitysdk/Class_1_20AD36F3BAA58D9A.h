#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"

class Class_1_9518B5776748B41E;
class Class_3_95932C222EBC5BA5;
class Class_4_5F080D5A9512F654;
class Class_5_FCAF801AC482D3B5;

#define CLASS_1_20AD36F3BAA58D9A_METHOD_1_4089E9DB3D7BAFA9_OFFSET UNITYSDK_OFFSET(0x10E54260)
#define CLASS_1_20AD36F3BAA58D9A_METHOD_1_56DF32890C96C4E4_OFFSET UNITYSDK_OFFSET(0x10E544A0)
#define CLASS_1_20AD36F3BAA58D9A_METHOD_1_87AB230C2E818310_OFFSET UNITYSDK_OFFSET(0x10E543B0)

inline static constexpr unsigned int Class_1_20AD36F3BAA58D9A_TypeDefinitionIndex = 82460;

class Class_1_20AD36F3BAA58D9A : public ::System::Object
{
public:
	static ::Class_5_FCAF801AC482D3B5* Method_1_4089E9DB3D7BAFA9(::Class_3_95932C222EBC5BA5* a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2)
	{
		return ((::Class_5_FCAF801AC482D3B5*(*)(::Class_3_95932C222EBC5BA5*, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_1_20AD36F3BAA58D9A_METHOD_1_4089E9DB3D7BAFA9_OFFSET))(a1, a2);
	}

	static ::Class_1_9518B5776748B41E* Method_1_56DF32890C96C4E4(::Class_4_5F080D5A9512F654* a1)
	{
		return ((::Class_1_9518B5776748B41E*(*)(::Class_4_5F080D5A9512F654*))((::PBYTE)hIl2Cpp + CLASS_1_20AD36F3BAA58D9A_METHOD_1_56DF32890C96C4E4_OFFSET))(a1);
	}

	static ::Class_5_FCAF801AC482D3B5* Method_1_87AB230C2E818310(::Class_4_5F080D5A9512F654* a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2)
	{
		return ((::Class_5_FCAF801AC482D3B5*(*)(::Class_4_5F080D5A9512F654*, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_1_20AD36F3BAA58D9A_METHOD_1_87AB230C2E818310_OFFSET))(a1, a2);
	}
};
