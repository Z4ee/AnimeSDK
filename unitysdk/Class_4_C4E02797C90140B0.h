#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_B3B7AD2B34783116.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class Class_1_A0D1EC6DF76A2358;
class Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D;
class Class_4_8637C178AE75321B;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_C4E02797C90140B0_METHOD_4_0C3969727BAF79AB_OFFSET UNITYSDK_OFFSET(0x141D9640)
#define CLASS_4_C4E02797C90140B0_METHOD_4_1B4763F72F51FFAA_OFFSET UNITYSDK_OFFSET(0x141D8F00)
#define CLASS_4_C4E02797C90140B0_METHOD_4_620F17417D925F85_OFFSET UNITYSDK_OFFSET(0x141D8B30)
#define CLASS_4_C4E02797C90140B0_METHOD_4_68592A05AD6EBA8C_OFFSET UNITYSDK_OFFSET(0x141D92C0)
#define CLASS_4_C4E02797C90140B0_METHOD_4_945C06C9B04DCD0B_OFFSET UNITYSDK_OFFSET(0x141D89A0)
#define CLASS_4_C4E02797C90140B0_METHOD_4_9A406B5B2D9F3AA9_OFFSET UNITYSDK_OFFSET(0x141D8760)
#define CLASS_4_C4E02797C90140B0_METHOD_4_EE348374C0008F3B_OFFSET UNITYSDK_OFFSET(0x141D9430)
#define CLASS_4_C4E02797C90140B0__CTOR_OFFSET UNITYSDK_OFFSET(0x141D88C0)

inline static constexpr unsigned int Class_4_C4E02797C90140B0_TypeDefinitionIndex = 86439;

class Class_4_C4E02797C90140B0 : public ::Class_3_B3B7AD2B34783116
{
public:
	::Class_1_A0D1EC6DF76A2358* Field_4_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C4E02797C90140B0__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Method_4_9A406B5B2D9F3AA9()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C4E02797C90140B0_METHOD_4_9A406B5B2D9F3AA9_OFFSET))(this);
	}

	::System::Boolean Method_4_945C06C9B04DCD0B(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_4_C4E02797C90140B0_METHOD_4_945C06C9B04DCD0B_OFFSET))(this, a1);
	}

	::System::Void Method_4_1B4763F72F51FFAA(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_4_C4E02797C90140B0_METHOD_4_1B4763F72F51FFAA_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_68592A05AD6EBA8C(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_4_C4E02797C90140B0_METHOD_4_68592A05AD6EBA8C_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_EE348374C0008F3B(::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D* a1)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D*))((::PBYTE)hIl2Cpp + CLASS_4_C4E02797C90140B0_METHOD_4_EE348374C0008F3B_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_0C3969727BAF79AB(::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D* a1)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D*))((::PBYTE)hIl2Cpp + CLASS_4_C4E02797C90140B0_METHOD_4_0C3969727BAF79AB_OFFSET))(this, a1);
	}

	::System::Void Method_4_620F17417D925F85(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowEntity* a2, ::Class_4_8637C178AE75321B* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowEntity*, ::Class_4_8637C178AE75321B*))((::PBYTE)hIl2Cpp + CLASS_4_C4E02797C90140B0_METHOD_4_620F17417D925F85_OFFSET))(this, a1, a2, a3);
	}
};
