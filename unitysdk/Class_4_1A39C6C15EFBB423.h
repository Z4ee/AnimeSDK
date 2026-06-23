#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_B3B7AD2B34783116.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class Class_1_D8C15D29A3FE90C2;
class Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D;
class Class_4_5F080D5A9512F654;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_1A39C6C15EFBB423_METHOD_4_4CBC45500E752367_OFFSET UNITYSDK_OFFSET(0x1296AA60)
#define CLASS_4_1A39C6C15EFBB423_METHOD_4_68592A05AD6EBA8C_OFFSET UNITYSDK_OFFSET(0x1296A3B0)
#define CLASS_4_1A39C6C15EFBB423_METHOD_4_75E6FE343010D16A_OFFSET UNITYSDK_OFFSET(0x1296AE10)
#define CLASS_4_1A39C6C15EFBB423_METHOD_4_7F9EF124841C01AC_OFFSET UNITYSDK_OFFSET(0x1296A520)
#define CLASS_4_1A39C6C15EFBB423_METHOD_4_9A406B5B2D9F3AA9_OFFSET UNITYSDK_OFFSET(0x12969F60)
#define CLASS_4_1A39C6C15EFBB423_METHOD_4_C49F91F3E8AB7F17_OFFSET UNITYSDK_OFFSET(0x1296A6B0)
#define CLASS_4_1A39C6C15EFBB423_METHOD_4_EE348374C0008F3B_OFFSET UNITYSDK_OFFSET(0x1296A1A0)
#define CLASS_4_1A39C6C15EFBB423__CTOR_OFFSET UNITYSDK_OFFSET(0x1296A0C0)

inline static constexpr unsigned int Class_4_1A39C6C15EFBB423_TypeDefinitionIndex = 56697;

class Class_4_1A39C6C15EFBB423 : public ::Class_3_B3B7AD2B34783116
{
public:
	::Class_1_D8C15D29A3FE90C2* Field_4_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1A39C6C15EFBB423__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Method_4_9A406B5B2D9F3AA9()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1A39C6C15EFBB423_METHOD_4_9A406B5B2D9F3AA9_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_EE348374C0008F3B(::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D* a1)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D*))((::PBYTE)hIl2Cpp + CLASS_4_1A39C6C15EFBB423_METHOD_4_EE348374C0008F3B_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_68592A05AD6EBA8C(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_4_1A39C6C15EFBB423_METHOD_4_68592A05AD6EBA8C_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_7F9EF124841C01AC(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_4_1A39C6C15EFBB423_METHOD_4_7F9EF124841C01AC_OFFSET))(this, a1);
	}

	::System::Void Method_4_4CBC45500E752367(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_4_1A39C6C15EFBB423_METHOD_4_4CBC45500E752367_OFFSET))(this, a1);
	}

	::System::Void Method_4_C49F91F3E8AB7F17(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowEntity* a2, ::Class_4_5F080D5A9512F654* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowEntity*, ::Class_4_5F080D5A9512F654*))((::PBYTE)hIl2Cpp + CLASS_4_1A39C6C15EFBB423_METHOD_4_C49F91F3E8AB7F17_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_75E6FE343010D16A(::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D* a1)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D*))((::PBYTE)hIl2Cpp + CLASS_4_1A39C6C15EFBB423_METHOD_4_75E6FE343010D16A_OFFSET))(this, a1);
	}
};
