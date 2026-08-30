#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarNumColor.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_945ACFB1FEBC7A2C_20;
namespace RPG::GameCore { class MonsterEnergyBarCustomColor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Struct_2_52A902145F5BE513_5_TypeDefinitionIndex = 55731;

struct alignas(8) Struct_2_52A902145F5BE513_5
{
	::System::Nullable_1<::System::Boolean> CAGCHKJHMPD; // 0x10
	::System::Nullable_1<::System::Boolean> OMKOELNJMGO; // 0x12
	::RPG::GameCore::EnergyBarState MEPFOEEGBEA; // 0x14
	::System::Nullable_1<::System::Int32> IMPAJLCMHFP; // 0x18
	::System::Nullable_1<::System::Int32> EOIHOACNHDH; // 0x20
	::System::Nullable_1<::System::Int32> EIADCADKKDN; // 0x28
	::System::String* OLOIFNNLKJP; // 0x30
	::System::String* FCAHMLGMDMN; // 0x38
	::System::String* JKMABBEGEAH; // 0x40
	::System::String* ECLCEDOLOBG; // 0x48
	::System::String* KOOOKCNNPFE; // 0x50
	::System::Nullable_1<::RPG::GameCore::FixPoint> HOCMHABKLGJ; // 0x58
	::System::Nullable_1<::RPG::GameCore::FixPoint> APHMDCIGKEK; // 0x68
	::System::Nullable_1<::RPG::GameCore::FixPoint> JADMAPDKLKL; // 0x78
	::RPG::GameCore::MonsterEnergyBarType OPFMFGGBAKC; // 0x88
	::Il2CppArray<::System::String*>* PKKDIAENBEK; // 0x90
	::RPG::GameCore::MonsterEnergyBarNumColor IBNBFBBNBBH; // 0x98
	::RPG::GameCore::MonsterEnergyBarCustomColor* OCHLDEHBDOL; // 0xA0
	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_20*>* BNCNCFMAMIG; // 0xA8
};
