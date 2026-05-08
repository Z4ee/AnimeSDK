#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_24BB280588B7BF22.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class Class_0_16E4307DCC419505_414;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_5_6E063758D84F8F07_METHOD_5_1589760010E0BC3E_OFFSET UNITYSDK_OFFSET(0x16AEFE30)
#define CLASS_5_6E063758D84F8F07_METHOD_5_31C46ABEB6AA5DD4_OFFSET UNITYSDK_OFFSET(0x16AEFE20)
#define CLASS_5_6E063758D84F8F07_METHOD_5_66F447D5A5570D67_OFFSET UNITYSDK_OFFSET(0x16AEFA10)
#define CLASS_5_6E063758D84F8F07__CTOR_OFFSET UNITYSDK_OFFSET(0x16AEFD40)

inline static constexpr unsigned int Class_5_6E063758D84F8F07_TypeDefinitionIndex = 75668;

class Class_5_6E063758D84F8F07 : public ::Class_4_24BB280588B7BF22
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>* Field_5_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6E063758D84F8F07__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Method_5_66F447D5A5570D67()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6E063758D84F8F07_METHOD_5_66F447D5A5570D67_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Method_5_31C46ABEB6AA5DD4()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6E063758D84F8F07_METHOD_5_31C46ABEB6AA5DD4_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_5_1589760010E0BC3E(::Class_0_16E4307DCC419505_414* a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::Class_0_16E4307DCC419505_414*, ::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_5_6E063758D84F8F07_METHOD_5_1589760010E0BC3E_OFFSET))(this, a1, a2, a3);
	}
};
