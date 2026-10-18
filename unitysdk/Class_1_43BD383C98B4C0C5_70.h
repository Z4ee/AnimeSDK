#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/GridLocalPoint.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/ViewMomentType.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define CLASS_1_43BD383C98B4C0C5_70__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA83890)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_70_TypeDefinitionIndex = 42228;

class Class_1_43BD383C98B4C0C5_70 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::Match3::GridLocalPoint FJAFDAMHMBJ; // 0x10
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> PGJJCGGBCKK; // 0x14
	::System::UInt32 PPANBKDPFFK; // 0x1C
	::System::UInt32 JBHIKEHKLLI; // 0x20
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> LBMFPCIBMAC; // 0x24
	::System::UInt32 GACEMBBAGMP; // 0x2C
	::System::UInt32 KLOEJIMMPJM; // 0x30
	::System::UInt32 KFIDBNDPNNI; // 0x34
	::System::Boolean PMOHKEDFGHP; // 0x38
	::System::Boolean HBAHKBPHNNF; // 0x39
	::System::UInt32 DFEJABODPGM; // 0x3C
	::RPG::GameCore::Match3::PieceTag BNEPAJPMFEI; // 0x40
	::RPG::GameCore::Match3::BombType FEKGEPDLOCE; // 0x44
	::System::Single PNJEGPAFNCI; // 0x48
	::System::UInt32 AOCLHNKNJHM; // 0x4C
	::System::UInt32 BFHENMHNGFN; // 0x50
	::System::UInt32 GLANPLEGMPG; // 0x54
	::System::UInt32 CEJEOLOFOBL; // 0x58
	::RPG::Client::LittleGame::Match3::ViewMomentType NGECMJGNLMJ; // 0x5C
	::System::UInt32 JLOOPPGEADG; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_70__CTOR_OFFSET))(this);
	}
};
