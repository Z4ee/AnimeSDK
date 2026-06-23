#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_24BB280588B7BF22.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class Class_0_16E4307DCC419505_176;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_5_8D98FAE430C04D01_METHOD_5_31C46ABEB6AA5DD4_OFFSET UNITYSDK_OFFSET(0x15A1B0F0)
#define CLASS_5_8D98FAE430C04D01_METHOD_5_66F447D5A5570D67_OFFSET UNITYSDK_OFFSET(0x15A1A250)
#define CLASS_5_8D98FAE430C04D01_METHOD_5_888EAF38C5DF027B_1_OFFSET UNITYSDK_OFFSET(0x15A1B0E0)
#define CLASS_5_8D98FAE430C04D01_METHOD_5_888EAF38C5DF027B_OFFSET UNITYSDK_OFFSET(0x15A1AE60)
#define CLASS_5_8D98FAE430C04D01_METHOD_5_BAC621C4B92C6604_1_OFFSET UNITYSDK_OFFSET(0x15A1B0D0)
#define CLASS_5_8D98FAE430C04D01_METHOD_5_BAC621C4B92C6604_OFFSET UNITYSDK_OFFSET(0x15A1AEF0)
#define CLASS_5_8D98FAE430C04D01_METHOD_5_CAF0C8E1F31A9337_OFFSET UNITYSDK_OFFSET(0x15A1A5D0)
#define CLASS_5_8D98FAE430C04D01_METHOD_5_CF8BA38996D09531_OFFSET UNITYSDK_OFFSET(0x15A1AE70)
#define CLASS_5_8D98FAE430C04D01_METHOD_5_F8DC05EC877E45B0_OFFSET UNITYSDK_OFFSET(0x15A1AF00)
#define CLASS_5_8D98FAE430C04D01__CTOR_OFFSET UNITYSDK_OFFSET(0x15A1A580)

inline static constexpr unsigned int Class_5_8D98FAE430C04D01_TypeDefinitionIndex = 62812;

class Class_5_8D98FAE430C04D01 : public ::Class_4_24BB280588B7BF22
{
public:
	::MoleMole::HollowChessboard::HollowEntity* Field_5_1; // 0x10
	::MoleMole::HollowChessboard::HollowEntity* Field_5_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_8D98FAE430C04D01__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Method_5_66F447D5A5570D67()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_8D98FAE430C04D01_METHOD_5_66F447D5A5570D67_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_5_CAF0C8E1F31A9337(::Class_0_16E4307DCC419505_176* a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::Class_0_16E4307DCC419505_176*, ::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_5_8D98FAE430C04D01_METHOD_5_CAF0C8E1F31A9337_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_5_888EAF38C5DF027B(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_5_8D98FAE430C04D01_METHOD_5_888EAF38C5DF027B_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_CF8BA38996D09531()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_8D98FAE430C04D01_METHOD_5_CF8BA38996D09531_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_5_BAC621C4B92C6604()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_8D98FAE430C04D01_METHOD_5_BAC621C4B92C6604_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_5_F8DC05EC877E45B0(::Class_0_16E4307DCC419505_176* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::Boolean a3)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::Class_0_16E4307DCC419505_176*, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_8D98FAE430C04D01_METHOD_5_F8DC05EC877E45B0_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_5_BAC621C4B92C6604_1()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_8D98FAE430C04D01_METHOD_5_BAC621C4B92C6604_1_OFFSET))(this);
	}

	::System::Void Method_5_888EAF38C5DF027B_1(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_5_8D98FAE430C04D01_METHOD_5_888EAF38C5DF027B_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Method_5_31C46ABEB6AA5DD4()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_8D98FAE430C04D01_METHOD_5_31C46ABEB6AA5DD4_OFFSET))(this);
	}
};
