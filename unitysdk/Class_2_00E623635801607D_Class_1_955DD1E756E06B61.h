#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_90E529DB4DCB014F.h"
#include "unitysdk/Struct_2_A1A45D8655270887.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_2_F5737224A0253470;
class Class_3_C780F04BD7D67C07;
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_00E623635801607D_CLASS_1_955DD1E756E06B61_METHOD_1_C2D3401AFF06491F_OFFSET UNITYSDK_OFFSET(0x18163E50)
#define CLASS_2_00E623635801607D_CLASS_1_955DD1E756E06B61_METHOD_1_DCA0D07D90B1A2A3_OFFSET UNITYSDK_OFFSET(0x181639C0)
#define CLASS_2_00E623635801607D_CLASS_1_955DD1E756E06B61__CTOR_OFFSET UNITYSDK_OFFSET(0x181639B0)

inline static constexpr unsigned int Class_2_00E623635801607D_Class_1_955DD1E756E06B61_TypeDefinitionIndex = 53478;

class Class_2_00E623635801607D_Class_1_955DD1E756E06B61 : public ::System::Object
{
public:
	::Class_3_C780F04BD7D67C07* Field_1_6; // 0x10
	::Class_2_F5737224A0253470* Field_1_0; // 0x18
	::System::Action_4<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>* Field_1_5; // 0x20
	::System::Action* Field_1_11; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_7; // 0x30
	::Struct_2_A1A45D8655270887 Field_1_4; // 0x38
	::Struct_2_90E529DB4DCB014F Field_1_1; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00E623635801607D_CLASS_1_955DD1E756E06B61__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DCA0D07D90B1A2A3(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_00E623635801607D_CLASS_1_955DD1E756E06B61_METHOD_1_DCA0D07D90B1A2A3_OFFSET))(this, a1);
	}

	::System::Void Method_1_C2D3401AFF06491F(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_00E623635801607D_CLASS_1_955DD1E756E06B61_METHOD_1_C2D3401AFF06491F_OFFSET))(this, a1);
	}
};
