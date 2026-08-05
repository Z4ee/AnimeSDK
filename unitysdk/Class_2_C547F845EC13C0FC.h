#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_DBA4CF8F6B97E9C4.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class Class_0_16E4307DCC419505_479;
class Class_1_0AEBFEBDADDA07AC;

#define CLASS_2_C547F845EC13C0FC_METHOD_2_0AB30BEB71907371_OFFSET UNITYSDK_OFFSET(0x17F48450)
#define CLASS_2_C547F845EC13C0FC__CTOR_OFFSET UNITYSDK_OFFSET(0x17F48440)

inline static constexpr unsigned int Class_2_C547F845EC13C0FC_TypeDefinitionIndex = 85919;

class Class_2_C547F845EC13C0FC : public ::Class_1_DBA4CF8F6B97E9C4
{
public:
	::Class_0_16E4307DCC419505_479* Field_2_1; // 0x20
	::Class_0_16E4307DCC419505_479* Field_2_0; // 0x28

	::System::Void _ctor(::System::Int32 a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_2_C547F845EC13C0FC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_0AB30BEB71907371(::Class_1_0AEBFEBDADDA07AC* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::Class_0_16E4307DCC419505_479*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0AEBFEBDADDA07AC*, ::MoleMole::HollowChessboard::HollowCell, ::Class_0_16E4307DCC419505_479*&))((::PBYTE)hIl2Cpp + CLASS_2_C547F845EC13C0FC_METHOD_2_0AB30BEB71907371_OFFSET))(this, a1, a2, a3);
	}
};
