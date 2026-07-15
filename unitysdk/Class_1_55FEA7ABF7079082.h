#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/GridTag.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/RPG/GameCore/Match3/StyleGenerateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_D33B7D6901AE39E9;
class Class_3_1A9D32B2B1D681B8;
namespace RPG::GameCore::Match3 { class BirdStyleWeightConfig; }
namespace RPG::GameCore::Match3 { class Match3ActionBase; }
namespace RPG::GameCore::Match3 { class Match3ChessBoardGridInfo; }
namespace RPG::GameCore::Match3 { class Match3ChessBoardTemplate; }
namespace RPG::GameCore::Match3 { class Match3ConditionBase; }
namespace RPG::GameCore::Match3 { class RandomChangeBombToMultiStyleAction; }
namespace RPG::GameCore::Match3 { class RandomChangeFruitToBlackFogAction; }
namespace RPG::GameCore::Match3 { class RandomChangeFruitToLineBombAction; }
namespace RPG::GameCore::Match3 { class RandomFreezeBombAction; }
namespace RPG::GameCore::Match3 { class SetEmojiReplyPatternAction; }
namespace System { class Random; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_55FEA7ABF7079082_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A8ED0A0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_017C915772AE00E9_OFFSET UNITYSDK_OFFSET(0x1A8EDA60)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_043AAF53DC0CD872_OFFSET UNITYSDK_OFFSET(0x1A8EF090)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_0670E1DC645EAA78_OFFSET UNITYSDK_OFFSET(0x1A8F2BB0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x1A8ED880)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_0E2010B761A68AA4_OFFSET UNITYSDK_OFFSET(0x1A8EF610)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_0F72951A170469AF_OFFSET UNITYSDK_OFFSET(0x1A8EE630)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_1E16C6FDC281EC81_OFFSET UNITYSDK_OFFSET(0x1A8F2630)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_38D99FF7D29DB041_OFFSET UNITYSDK_OFFSET(0x1A8EEF60)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_68D5BE38E1810BF8_OFFSET UNITYSDK_OFFSET(0x1A8F0AF0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_6B72D4EE8C6E907F_1_OFFSET UNITYSDK_OFFSET(0x1A8EDC60)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1A8EDBD0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_6EC43D7B2FBF75C0_OFFSET UNITYSDK_OFFSET(0x1A8F0440)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_714C578DA15C5453_OFFSET UNITYSDK_OFFSET(0x1A8F2950)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_7CC30AC1293C219D_OFFSET UNITYSDK_OFFSET(0x1A8EF310)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_7F479C51A6BB116C_OFFSET UNITYSDK_OFFSET(0x1A8EFD40)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_865E5B58FDDFEA9D_OFFSET UNITYSDK_OFFSET(0x1A8F03B0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_9B3A33D2FBBCF38B_OFFSET UNITYSDK_OFFSET(0x1A8EDD90)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x1A8ED5D0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1A8EDAD0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_A5C2033D676A7828_OFFSET UNITYSDK_OFFSET(0x1A8F21A0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_AE65DD6C27CF6A6E_OFFSET UNITYSDK_OFFSET(0x1A8F1890)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x1A8ED6F0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_BFD9F7F7DEA39A8D_OFFSET UNITYSDK_OFFSET(0x1A8F1250)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_CE944E12A64032F6_OFFSET UNITYSDK_OFFSET(0x1A8EF370)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_CF4662834E5ABD8A_OFFSET UNITYSDK_OFFSET(0x1A8F22A0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_D103A19D2F8BB9AB_OFFSET UNITYSDK_OFFSET(0x1A8EF0F0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_D516C68C85520F4E_OFFSET UNITYSDK_OFFSET(0x1A8EDCF0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_DF3A247817A8777D_OFFSET UNITYSDK_OFFSET(0x1A8F2350)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_E2A2EE5B3C30F8D1_OFFSET UNITYSDK_OFFSET(0x1A8EFC10)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_EEF3D1E2EE990B3A_OFFSET UNITYSDK_OFFSET(0x1A8F1E70)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_F2E34E8DE2DDE7A9_OFFSET UNITYSDK_OFFSET(0x1A8F2A40)
#define CLASS_1_55FEA7ABF7079082__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8ED020)
#define CLASS_1_55FEA7ABF7079082___APPLYRANDOMCHANGEBOMBTOMULTISTYLE_B__31_0_OFFSET UNITYSDK_OFFSET(0x1A8F33F0)
#define CLASS_1_55FEA7ABF7079082___APPLYRANDOMCHANGEFRUITTOBLACKFOG_B__33_0_OFFSET UNITYSDK_OFFSET(0x1A8F34A0)
#define CLASS_1_55FEA7ABF7079082___APPLYRANDOMCHANGEFRUITTOLINEBOMB_B__32_0_OFFSET UNITYSDK_OFFSET(0x1A8F3410)

inline static constexpr unsigned int Class_1_55FEA7ABF7079082_TypeDefinitionIndex = 40142;

class Class_1_55FEA7ABF7079082 : public ::System::Object
{
public:
	::System::Random* Field_1_0; // 0x10
	::Class_3_1A9D32B2B1D681B8* Field_1_1; // 0x18
	::Class_1_D33B7D6901AE39E9* Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_3_1A9D32B2B1D681B8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_3_1A9D32B2B1D681B8*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_6B72D4EE8C6E907F_OFFSET))(this);
	}

	::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_1_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_1_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_1_017C915772AE00E9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_017C915772AE00E9_OFFSET))(this);
	}

	::System::Void Method_1_6B72D4EE8C6E907F_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_6B72D4EE8C6E907F_1_OFFSET))(this);
	}

	::System::Boolean Method_1_9B3A33D2FBBCF38B(::RPG::GameCore::Match3::Match3ConditionBase* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::Match3::Match3ConditionBase*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_9B3A33D2FBBCF38B_OFFSET))(this, a1);
	}

	::System::Void Method_1_0F72951A170469AF(::RPG::GameCore::Match3::Match3ActionBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::Match3ActionBase*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_0F72951A170469AF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_EEF3D1E2EE990B3A(::RPG::GameCore::Match3::Match3ActionBase* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::Match3::Match3ActionBase*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_EEF3D1E2EE990B3A_OFFSET))(this, a1);
	}

	::System::Void Method_1_38D99FF7D29DB041(::RPG::GameCore::Match3::Match3ChessBoardTemplate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::Match3ChessBoardTemplate*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_38D99FF7D29DB041_OFFSET))(this, a1);
	}

	::System::Void Method_1_A5C2033D676A7828(::Il2CppArray<::RPG::GameCore::Match3::Match3ChessBoardGridInfo*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::Match3::Match3ChessBoardGridInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_A5C2033D676A7828_OFFSET))(this, a1);
	}

	::System::Void Method_1_CF4662834E5ABD8A(::RPG::GameCore::Match3::Match3ChessBoardGridInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::Match3ChessBoardGridInfo*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_CF4662834E5ABD8A_OFFSET))(this, a1);
	}

	::System::Void Method_1_043AAF53DC0CD872(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_043AAF53DC0CD872_OFFSET))(this, a1);
	}

	::System::Void Method_1_D103A19D2F8BB9AB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_D103A19D2F8BB9AB_OFFSET))(this, a1);
	}

	::System::Void Method_1_7CC30AC1293C219D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_7CC30AC1293C219D_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF3A247817A8777D(::System::UInt32 a1, ::RPG::GameCore::Match3::BombType a2, ::RPG::GameCore::Match3::StyleGenerateType a3, ::System::UInt32 a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::StyleGenerateType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_DF3A247817A8777D_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_F2E34E8DE2DDE7A9(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::Match3::BombType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::Match3::BombType))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_F2E34E8DE2DDE7A9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1E16C6FDC281EC81(::RPG::GameCore::Match3::PieceTag a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::PieceTag, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_1E16C6FDC281EC81_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_714C578DA15C5453(::RPG::GameCore::Match3::GridTag a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::GridTag, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_714C578DA15C5453_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_D516C68C85520F4E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_D516C68C85520F4E_OFFSET))(this);
	}

	::System::Void Method_1_0670E1DC645EAA78(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_0670E1DC645EAA78_OFFSET))(this, a1);
	}

	::System::Void Method_1_CE944E12A64032F6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_CE944E12A64032F6_OFFSET))(this, a1);
	}

	::System::Void Method_1_E2A2EE5B3C30F8D1(::RPG::GameCore::Match3::SetEmojiReplyPatternAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::SetEmojiReplyPatternAction*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_E2A2EE5B3C30F8D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E2010B761A68AA4(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::Match3::BirdStyleWeightConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::Match3::BirdStyleWeightConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_0E2010B761A68AA4_OFFSET))(this, a1);
	}

	::System::Void Method_1_7F479C51A6BB116C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_7F479C51A6BB116C_OFFSET))(this, a1);
	}

	::System::Void Method_1_865E5B58FDDFEA9D(::System::UInt32 a1, ::RPG::Client::LittleGame::Match3::OpponentRole a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_865E5B58FDDFEA9D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6EC43D7B2FBF75C0(::RPG::GameCore::Match3::RandomFreezeBombAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::RandomFreezeBombAction*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_6EC43D7B2FBF75C0_OFFSET))(this, a1);
	}

	::System::Void Method_1_68D5BE38E1810BF8(::RPG::GameCore::Match3::RandomChangeBombToMultiStyleAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::RandomChangeBombToMultiStyleAction*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_68D5BE38E1810BF8_OFFSET))(this, a1);
	}

	::System::Void Method_1_BFD9F7F7DEA39A8D(::RPG::GameCore::Match3::RandomChangeFruitToLineBombAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::RandomChangeFruitToLineBombAction*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_BFD9F7F7DEA39A8D_OFFSET))(this, a1);
	}

	::System::Void Method_1_AE65DD6C27CF6A6E(::RPG::GameCore::Match3::RandomChangeFruitToBlackFogAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::RandomChangeFruitToBlackFogAction*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_AE65DD6C27CF6A6E_OFFSET))(this, a1);
	}

	::System::Boolean __ApplyRandomChangeBombToMultiStyle_b__31_0(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082___APPLYRANDOMCHANGEBOMBTOMULTISTYLE_B__31_0_OFFSET))(this, a1);
	}

	::System::Boolean __ApplyRandomChangeFruitToLineBomb_b__32_0(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082___APPLYRANDOMCHANGEFRUITTOLINEBOMB_B__32_0_OFFSET))(this, a1);
	}

	::System::Boolean __ApplyRandomChangeFruitToBlackFog_b__33_0(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082___APPLYRANDOMCHANGEFRUITTOBLACKFOG_B__33_0_OFFSET))(this, a1);
	}
};
