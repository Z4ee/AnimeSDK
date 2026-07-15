#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_12ABE890CAA92AB9;
class Class_1_2AEC7C4C0F203579;
class Class_1_9015B34004B876E5;
class Class_1_9015B34004B876E5_1;
class Class_1_AE4553DBAC72BB2D;
class Class_1_D17272E82AE804C2_29;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace RPG::GameCore { class LineUpCharacter; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_22B8FDC4E33ACC56_METHOD_1_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x14AD3C90)
#define CLASS_1_22B8FDC4E33ACC56_METHOD_1_A85C48C9FFC0CF55_OFFSET UNITYSDK_OFFSET(0x14AD3690)
#define CLASS_1_22B8FDC4E33ACC56_METHOD_1_D3A0C485B9C2729C_OFFSET UNITYSDK_OFFSET(0x14AD3D00)
#define CLASS_1_22B8FDC4E33ACC56_METHOD_1_DCEFF804A18F7728_OFFSET UNITYSDK_OFFSET(0x14AD3A00)
#define CLASS_1_22B8FDC4E33ACC56_METHOD_1_FCEBEAD2390B94D2_OFFSET UNITYSDK_OFFSET(0x14AD38D0)
#define CLASS_1_22B8FDC4E33ACC56__CTOR_OFFSET UNITYSDK_OFFSET(0x14AD4A70)

inline static constexpr unsigned int Class_1_22B8FDC4E33ACC56_TypeDefinitionIndex = 53760;

class Class_1_22B8FDC4E33ACC56 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_AE4553DBAC72BB2D*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::LineUpCharacter*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::Class_1_9015B34004B876E5_1*>* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::Class_1_9015B34004B876E5*>* Field_1_5; // 0x38
	::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightAvatarData*>* Field_1_6; // 0x40
	::Class_1_12ABE890CAA92AB9* Field_1_7; // 0x48
	::Class_1_2AEC7C4C0F203579* Field_1_8; // 0x50
	::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* Field_1_9; // 0x58
	::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_29*>* Field_1_10; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* Field_1_11; // 0x68
	::System::UInt32 Field_1_12; // 0x70
	::System::Boolean Field_1_13; // 0x74
	::System::UInt32 Field_1_14; // 0x78
	::System::UInt32 Field_1_15; // 0x7C
	::System::UInt32 Field_1_16; // 0x80
	::System::UInt32 Field_1_17; // 0x84
	::System::UInt32 Field_1_18; // 0x88
	::System::UInt32 Field_1_19; // 0x8C
	::System::UInt32 Field_1_20; // 0x90
	::RPG::GameCore::FixPoint Field_1_21; // 0x98
	::System::UInt32 Field_1_22; // 0xA0
	::System::UInt32 Field_1_23; // 0xA4
	::System::UInt32 Field_1_24; // 0xA8
	::System::UInt32 Field_1_25; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22B8FDC4E33ACC56__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* Method_1_A85C48C9FFC0CF55()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22B8FDC4E33ACC56_METHOD_1_A85C48C9FFC0CF55_OFFSET))(this);
	}

	::RPG::PoolList_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* Method_1_FCEBEAD2390B94D2()
	{
		return ((::RPG::PoolList_1<::RPG::GameCore::BattleGridFightTeamTraitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22B8FDC4E33ACC56_METHOD_1_FCEBEAD2390B94D2_OFFSET))(this);
	}

	::System::Void Method_1_DCEFF804A18F7728(::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>*))((::PBYTE)hIl2Cpp + CLASS_1_22B8FDC4E33ACC56_METHOD_1_DCEFF804A18F7728_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22B8FDC4E33ACC56_METHOD_1_2372762F4122DEB8_OFFSET))(this);
	}

	::Class_1_22B8FDC4E33ACC56* Method_1_D3A0C485B9C2729C()
	{
		return ((::Class_1_22B8FDC4E33ACC56*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22B8FDC4E33ACC56_METHOD_1_D3A0C485B9C2729C_OFFSET))(this);
	}
};
