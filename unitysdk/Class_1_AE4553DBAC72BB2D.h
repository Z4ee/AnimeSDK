#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleGridFightEquipData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AE4553DBAC72BB2D_METHOD_1_804D046F3E18A2AF_OFFSET UNITYSDK_OFFSET(0xB44C0D0)
#define CLASS_1_AE4553DBAC72BB2D__CTOR_OFFSET UNITYSDK_OFFSET(0xB44C2C0)

inline static constexpr unsigned int Class_1_AE4553DBAC72BB2D_TypeDefinitionIndex = 56479;

class Class_1_AE4553DBAC72BB2D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>* FOCCIELEMOB; // 0x10
	::System::UInt32 BIOAOEDDEFI; // 0x18
	::System::UInt32 PHFMCACHFIJ; // 0x1C
	::System::UInt32 AHGIENEMKFI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE4553DBAC72BB2D__CTOR_OFFSET))(this);
	}

	::Class_1_AE4553DBAC72BB2D* Method_1_804D046F3E18A2AF()
	{
		return ((::Class_1_AE4553DBAC72BB2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE4553DBAC72BB2D_METHOD_1_804D046F3E18A2AF_OFFSET))(this);
	}
};
