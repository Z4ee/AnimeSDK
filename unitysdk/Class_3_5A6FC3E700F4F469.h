#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5560EE9F1F33A604.h"
#include "unitysdk/Enum_3_AA01E69EF486C5B3.h"
#include "unitysdk/Struct_2_C87A89B4261FDC79.h"

class Class_1_8CE3173023BA2453;
class Class_2_6D8377DB91A00B0F;
class Class_5_3492E2216ECD9ABB;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_3_5A6FC3E700F4F469_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x94E6D70)
#define CLASS_3_5A6FC3E700F4F469_METHOD_3_01BEC92F3CDF67C6_OFFSET UNITYSDK_OFFSET(0x94E7830)
#define CLASS_3_5A6FC3E700F4F469_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x94E79B0)
#define CLASS_3_5A6FC3E700F4F469_METHOD_3_70C887845C41A759_OFFSET UNITYSDK_OFFSET(0x94E7630)
#define CLASS_3_5A6FC3E700F4F469_METHOD_3_877A369B6117EA5E_OFFSET UNITYSDK_OFFSET(0x94E78A0)
#define CLASS_3_5A6FC3E700F4F469_METHOD_3_9FDD6A4674A7DB23_OFFSET UNITYSDK_OFFSET(0x94E6EE0)
#define CLASS_3_5A6FC3E700F4F469_METHOD_3_AEBBCC0B137F4D17_OFFSET UNITYSDK_OFFSET(0x94E70D0)
#define CLASS_3_5A6FC3E700F4F469_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x94E7590)
#define CLASS_3_5A6FC3E700F4F469__CTOR_OFFSET UNITYSDK_OFFSET(0x94E7060)

inline static constexpr unsigned int Class_3_5A6FC3E700F4F469_TypeDefinitionIndex = 78140;

class Class_3_5A6FC3E700F4F469 : public ::Class_2_5560EE9F1F33A604
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A6FC3E700F4F469__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_5A6FC3E700F4F469_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_9FDD6A4674A7DB23(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5A6FC3E700F4F469_METHOD_3_9FDD6A4674A7DB23_OFFSET))(this, a1);
	}

	static ::Struct_2_C87A89B4261FDC79 Method_3_AEBBCC0B137F4D17(::Class_5_3492E2216ECD9ABB* a1, ::System::String* a2, ::Class_2_6D8377DB91A00B0F* a3, ::System::Action* a4, ::System::Boolean a5, ::Enum_3_AA01E69EF486C5B3 a6)
	{
		return ((::Struct_2_C87A89B4261FDC79(*)(::Class_5_3492E2216ECD9ABB*, ::System::String*, ::Class_2_6D8377DB91A00B0F*, ::System::Action*, ::System::Boolean, ::Enum_3_AA01E69EF486C5B3))((::PBYTE)hIl2Cpp + CLASS_3_5A6FC3E700F4F469_METHOD_3_AEBBCC0B137F4D17_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_5A6FC3E700F4F469_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_70C887845C41A759(::Class_5_3492E2216ECD9ABB* a1)
	{
		return ((::System::Void(*)(::Class_5_3492E2216ECD9ABB*))((::PBYTE)hIl2Cpp + CLASS_3_5A6FC3E700F4F469_METHOD_3_70C887845C41A759_OFFSET))(a1);
	}

	static ::Struct_2_C87A89B4261FDC79 Method_3_877A369B6117EA5E(::MoleMole::HollowChessboard::HollowEntity* a1, ::System::String* a2, ::Class_2_6D8377DB91A00B0F* a3, ::System::Action* a4, ::System::Boolean a5, ::Enum_3_AA01E69EF486C5B3 a6)
	{
		return ((::Struct_2_C87A89B4261FDC79(*)(::MoleMole::HollowChessboard::HollowEntity*, ::System::String*, ::Class_2_6D8377DB91A00B0F*, ::System::Action*, ::System::Boolean, ::Enum_3_AA01E69EF486C5B3))((::PBYTE)hIl2Cpp + CLASS_3_5A6FC3E700F4F469_METHOD_3_877A369B6117EA5E_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::Class_1_8CE3173023BA2453* Method_3_01BEC92F3CDF67C6()
	{
		return ((::Class_1_8CE3173023BA2453*(*)())((::PBYTE)hIl2Cpp + CLASS_3_5A6FC3E700F4F469_METHOD_3_01BEC92F3CDF67C6_OFFSET))();
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5A6FC3E700F4F469_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}
};
