#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/Struct_2_0AFACF733846A6F9.h"
#include "unitysdk/Struct_2_CAC7B5E2CFB5753B.h"
#include "unitysdk/System/Object.h"

class Class_1_E09EDF4C569FD46A;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_889CA1053E4BF344_METHOD_1_0523071C58CB835C_OFFSET UNITYSDK_OFFSET(0x10690C20)
#define CLASS_1_889CA1053E4BF344_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x10690B30)
#define CLASS_1_889CA1053E4BF344_METHOD_1_6C9B9AC40F446EE0_OFFSET UNITYSDK_OFFSET(0x10690820)
#define CLASS_1_889CA1053E4BF344_METHOD_1_C2CBD85C3729D44A_OFFSET UNITYSDK_OFFSET(0x10690910)
#define CLASS_1_889CA1053E4BF344_METHOD_1_F6636345F4B5C3C2_OFFSET UNITYSDK_OFFSET(0x10690BD0)
#define CLASS_1_889CA1053E4BF344__CTOR_OFFSET UNITYSDK_OFFSET(0x10690780)

inline static constexpr unsigned int Class_1_889CA1053E4BF344_TypeDefinitionIndex = 60343;

class Class_1_889CA1053E4BF344 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::Class_1_E09EDF4C569FD46A*>* Field_1_1; // 0x10
	::MoleMole::HollowChessboard::HollowChessboardUID Field_1_0; // 0x18

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_1_889CA1053E4BF344__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_CAC7B5E2CFB5753B Method_1_6C9B9AC40F446EE0(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::Struct_2_CAC7B5E2CFB5753B(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_889CA1053E4BF344_METHOD_1_6C9B9AC40F446EE0_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_889CA1053E4BF344_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_F6636345F4B5C3C2(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_1_889CA1053E4BF344_METHOD_1_F6636345F4B5C3C2_OFFSET))(this, a1);
	}

	::Struct_2_0AFACF733846A6F9 Method_1_0523071C58CB835C(::MoleMole::HollowChessboard::HollowCell a1, ::Struct_2_0AFACF733846A6F9& a2)
	{
		return ((::Struct_2_0AFACF733846A6F9(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Struct_2_0AFACF733846A6F9&))((::PBYTE)hIl2Cpp + CLASS_1_889CA1053E4BF344_METHOD_1_0523071C58CB835C_OFFSET))(this, a1, a2);
	}

	::Class_1_E09EDF4C569FD46A* Method_1_C2CBD85C3729D44A(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::Class_1_E09EDF4C569FD46A*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_889CA1053E4BF344_METHOD_1_C2CBD85C3729D44A_OFFSET))(this, a1);
	}
};
