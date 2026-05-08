#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_90E529DB4DCB014F.h"
#include "unitysdk/Struct_2_A1A45D8655270887.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_2_F5737224A0253470;
class Class_3_C780F04BD7D67C07;
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_999F5DD82B060708_CLASS_1_4876D1041083E7C4_METHOD_1_BA9B6055EC75733D_OFFSET UNITYSDK_OFFSET(0x11F50CD0)
#define CLASS_2_999F5DD82B060708_CLASS_1_4876D1041083E7C4_METHOD_1_DCA0D07D90B1A2A3_OFFSET UNITYSDK_OFFSET(0x11F50D20)
#define CLASS_2_999F5DD82B060708_CLASS_1_4876D1041083E7C4__CTOR_OFFSET UNITYSDK_OFFSET(0x11F50CC0)

inline static constexpr unsigned int Class_2_999F5DD82B060708_Class_1_4876D1041083E7C4_TypeDefinitionIndex = 59380;

class Class_2_999F5DD82B060708_Class_1_4876D1041083E7C4 : public ::System::Object
{
public:
	::System::Action_4<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_2; // 0x18
	::System::Action* Field_1_6; // 0x20
	::Class_2_F5737224A0253470* Field_1_1; // 0x28
	::Class_3_C780F04BD7D67C07* Field_1_3; // 0x30
	::Struct_2_A1A45D8655270887 Field_1_5; // 0x38
	::Struct_2_90E529DB4DCB014F Field_1_0; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_999F5DD82B060708_CLASS_1_4876D1041083E7C4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BA9B6055EC75733D(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_2_999F5DD82B060708_CLASS_1_4876D1041083E7C4_METHOD_1_BA9B6055EC75733D_OFFSET))(this, a1);
	}

	::System::Void Method_1_DCA0D07D90B1A2A3(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_2_999F5DD82B060708_CLASS_1_4876D1041083E7C4_METHOD_1_DCA0D07D90B1A2A3_OFFSET))(this, a1);
	}
};
