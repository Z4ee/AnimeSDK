#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/GridLocalPoint.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/ViewMomentType.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define CLASS_1_43BD383C98B4C0C5_84__CTOR_OFFSET UNITYSDK_OFFSET(0x1C753A40)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_84_TypeDefinitionIndex = 40943;

class Class_1_43BD383C98B4C0C5_84 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::Match3::GridLocalPoint FJAFDAMHMBJ; // 0x10
	::RPG::GameCore::Match3::PieceTag BNEPAJPMFEI; // 0x14
	::System::Boolean HBAHKBPHNNF; // 0x18
	::System::Boolean PMOHKEDFGHP; // 0x19
	::System::UInt32 PPANBKDPFFK; // 0x1C
	::System::UInt32 JLOOPPGEADG; // 0x20
	::System::UInt32 BFHENMHNGFN; // 0x24
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> PGJJCGGBCKK; // 0x28
	::System::Single PNJEGPAFNCI; // 0x30
	::RPG::GameCore::Match3::BombType FEKGEPDLOCE; // 0x34
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> LBMFPCIBMAC; // 0x38
	::System::UInt32 CEJEOLOFOBL; // 0x40
	::System::UInt32 AOCLHNKNJHM; // 0x44
	::RPG::Client::LittleGame::Match3::ViewMomentType NGECMJGNLMJ; // 0x48
	::System::UInt32 DFEJABODPGM; // 0x4C
	::System::UInt32 JBHIKEHKLLI; // 0x50
	::System::UInt32 KLOEJIMMPJM; // 0x54
	::System::UInt32 GLANPLEGMPG; // 0x58
	::System::UInt32 KFIDBNDPNNI; // 0x5C
	::System::UInt32 GACEMBBAGMP; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_84__CTOR_OFFSET))(this);
	}
};
