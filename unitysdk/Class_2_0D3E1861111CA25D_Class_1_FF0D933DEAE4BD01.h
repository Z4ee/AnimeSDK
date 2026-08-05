#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0D3E1861111CA25D_Enum_3_D18311BD420527DE.h"
#include "unitysdk/System/Object.h"

class Class_2_0D3E1861111CA25D_Class_1_B63F27A9FEEF1BA1;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::MiniGame::BangbooPartyGame { class MonoMarcelBlock; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0D3E1861111CA25D_CLASS_1_FF0D933DEAE4BD01__CTOR_OFFSET UNITYSDK_OFFSET(0x16FDF950)

inline static constexpr unsigned int Class_2_0D3E1861111CA25D_Class_1_FF0D933DEAE4BD01_TypeDefinitionIndex = 64031;

class Class_2_0D3E1861111CA25D_Class_1_FF0D933DEAE4BD01 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_2_0D3E1861111CA25D_Class_1_B63F27A9FEEF1BA1*>* Field_1_8; // 0x18
	::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock* Field_1_6; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock*>* Field_1_13; // 0x28
	::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock* Field_1_7; // 0x30
	::System::Collections::Generic::List_1<::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock*>* Field_1_14; // 0x38
	::System::Collections::Generic::List_1<::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock*>* Field_1_15; // 0x40
	::System::Boolean Field_1_4; // 0x48
	::System::Boolean Field_1_5; // 0x49
	::System::Single Field_1_10; // 0x4C
	::System::Single Field_1_9; // 0x50
	::Class_2_0D3E1861111CA25D_Enum_3_D18311BD420527DE Field_1_11; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D_CLASS_1_FF0D933DEAE4BD01__CTOR_OFFSET))(this);
	}
};
