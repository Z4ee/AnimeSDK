#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5560EE9F1F33A604.h"
#include "unitysdk/Enum_3_EB7B205902C1E1AA.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowEntityMoveComponent_MoveCmd_Dir.h"

class Class_4_0DC61513D73BCE61;
class Class_4_2E17BADFF2021901;
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_288E35E2CC895D9B_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x174713C0)
#define CLASS_3_288E35E2CC895D9B_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x17471740)
#define CLASS_3_288E35E2CC895D9B_METHOD_3_654E8D9776EAB7E9_OFFSET UNITYSDK_OFFSET(0x174717E0)
#define CLASS_3_288E35E2CC895D9B_METHOD_3_9FDD6A4674A7DB23_OFFSET UNITYSDK_OFFSET(0x17471550)
#define CLASS_3_288E35E2CC895D9B_METHOD_3_A6DA53C774D8E25A_OFFSET UNITYSDK_OFFSET(0x174718E0)
#define CLASS_3_288E35E2CC895D9B_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x17471840)
#define CLASS_3_288E35E2CC895D9B__CTOR_OFFSET UNITYSDK_OFFSET(0x174716D0)

inline static constexpr unsigned int Class_3_288E35E2CC895D9B_TypeDefinitionIndex = 78779;

class Class_3_288E35E2CC895D9B : public ::Class_2_5560EE9F1F33A604
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_288E35E2CC895D9B__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_288E35E2CC895D9B_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_9FDD6A4674A7DB23(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_288E35E2CC895D9B_METHOD_3_9FDD6A4674A7DB23_OFFSET))(this, a1);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_288E35E2CC895D9B_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	static ::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir Method_3_654E8D9776EAB7E9(::Enum_3_EB7B205902C1E1AA a1)
	{
		return ((::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir(*)(::Enum_3_EB7B205902C1E1AA))((::PBYTE)hIl2Cpp + CLASS_3_288E35E2CC895D9B_METHOD_3_654E8D9776EAB7E9_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_288E35E2CC895D9B_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_A6DA53C774D8E25A(::Class_4_2E17BADFF2021901* a1, ::Class_4_0DC61513D73BCE61* a2)
	{
		return ((::System::Void(*)(::Class_4_2E17BADFF2021901*, ::Class_4_0DC61513D73BCE61*))((::PBYTE)hIl2Cpp + CLASS_3_288E35E2CC895D9B_METHOD_3_A6DA53C774D8E25A_OFFSET))(a1, a2);
	}
};
