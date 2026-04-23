#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/GridTag.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/RPG/GameCore/Match3/StyleGenerateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_867B6CE75953535A;
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

#define CLASS_1_55FEA7ABF7079082_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1807C2A0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x1807CA60)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_15B43422E4FE68DE_OFFSET UNITYSDK_OFFSET(0x1807D950)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_1C6AD2DA62FB6EB1_OFFSET UNITYSDK_OFFSET(0x1807C7C0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_228E3444D290BEE7_OFFSET UNITYSDK_OFFSET(0x1807CC40)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_2757AE2486125A62_OFFSET UNITYSDK_OFFSET(0x1807E3A0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_2D0EF4C8B528FC1E_OFFSET UNITYSDK_OFFSET(0x1807E340)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_38D99FF7D29DB041_OFFSET UNITYSDK_OFFSET(0x1807E210)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_543F8938BA868A0C_OFFSET UNITYSDK_OFFSET(0x1807C8E0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_54DFF0367D2379DF_OFFSET UNITYSDK_OFFSET(0x18081340)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_5523771D33FA0F68_OFFSET UNITYSDK_OFFSET(0x1807E900)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_68D5BE38E1810BF8_OFFSET UNITYSDK_OFFSET(0x1807FD70)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_6C952DD93A0AECED_OFFSET UNITYSDK_OFFSET(0x1807ED50)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_714C578DA15C5453_OFFSET UNITYSDK_OFFSET(0x18081D50)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_7CC30AC1293C219D_OFFSET UNITYSDK_OFFSET(0x1807E5C0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_865E5B58FDDFEA9D_OFFSET UNITYSDK_OFFSET(0x1807F580)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_8DC652D916C182B2_OFFSET UNITYSDK_OFFSET(0x1807CEE0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_96EEF7AE9086E789_OFFSET UNITYSDK_OFFSET(0x1807F610)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1807CCB0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_A336B675D07ADF0C_OFFSET UNITYSDK_OFFSET(0x1807CF80)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_A5C2033D676A7828_OFFSET UNITYSDK_OFFSET(0x180815E0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_A6483272094C4057_OFFSET UNITYSDK_OFFSET(0x18081FB0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_CE944E12A64032F6_OFFSET UNITYSDK_OFFSET(0x1807E620)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_CF4662834E5ABD8A_OFFSET UNITYSDK_OFFSET(0x180816F0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_DF3A247817A8777D_OFFSET UNITYSDK_OFFSET(0x180817A0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_DF91309240A960F3_OFFSET UNITYSDK_OFFSET(0x18080C80)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_EB4B7D497A198F4C_1_OFFSET UNITYSDK_OFFSET(0x1807CE50)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_EB4B7D497A198F4C_OFFSET UNITYSDK_OFFSET(0x1807CDC0)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_EC5536E4F30B0718_OFFSET UNITYSDK_OFFSET(0x18080540)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_EE25B4DE52676DE8_OFFSET UNITYSDK_OFFSET(0x1807EE80)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_F2E34E8DE2DDE7A9_OFFSET UNITYSDK_OFFSET(0x18081E40)
#define CLASS_1_55FEA7ABF7079082_METHOD_1_F44FB68367AA4B58_OFFSET UNITYSDK_OFFSET(0x18081A80)
#define CLASS_1_55FEA7ABF7079082__CTOR_OFFSET UNITYSDK_OFFSET(0x1807C220)
#define CLASS_1_55FEA7ABF7079082___APPLYRANDOMCHANGEBOMBTOMULTISTYLE_B__31_0_OFFSET UNITYSDK_OFFSET(0x18082620)
#define CLASS_1_55FEA7ABF7079082___APPLYRANDOMCHANGEFRUITTOBLACKFOG_B__33_0_OFFSET UNITYSDK_OFFSET(0x18082690)
#define CLASS_1_55FEA7ABF7079082___APPLYRANDOMCHANGEFRUITTOLINEBOMB_B__32_0_OFFSET UNITYSDK_OFFSET(0x18082640)

inline static constexpr unsigned int Class_1_55FEA7ABF7079082_TypeDefinitionIndex = 38566;

class Class_1_55FEA7ABF7079082 : public ::System::Object
{
public:
	::System::Random* Field_1_0; // 0x10
	::Class_1_867B6CE75953535A* Field_1_1; // 0x18
	::Class_3_1A9D32B2B1D681B8* Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_3_1A9D32B2B1D681B8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_3_1A9D32B2B1D681B8*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_EB4B7D497A198F4C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_EB4B7D497A198F4C_OFFSET))(this);
	}

	::System::Void Method_1_543F8938BA868A0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_543F8938BA868A0C_OFFSET))(this);
	}

	::System::Void Method_1_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_1_1C6AD2DA62FB6EB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_1C6AD2DA62FB6EB1_OFFSET))(this);
	}

	::System::Void Method_1_228E3444D290BEE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_228E3444D290BEE7_OFFSET))(this);
	}

	::System::Void Method_1_EB4B7D497A198F4C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_EB4B7D497A198F4C_1_OFFSET))(this);
	}

	::System::Boolean Method_1_A336B675D07ADF0C(::RPG::GameCore::Match3::Match3ConditionBase* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::Match3::Match3ConditionBase*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_A336B675D07ADF0C_OFFSET))(this, a1);
	}

	::System::Void Method_1_15B43422E4FE68DE(::RPG::GameCore::Match3::Match3ActionBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::Match3ActionBase*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_15B43422E4FE68DE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_54DFF0367D2379DF(::RPG::GameCore::Match3::Match3ActionBase* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::Match3::Match3ActionBase*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_54DFF0367D2379DF_OFFSET))(this, a1);
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

	::System::Void Method_1_2D0EF4C8B528FC1E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_2D0EF4C8B528FC1E_OFFSET))(this, a1);
	}

	::System::Void Method_1_2757AE2486125A62(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_2757AE2486125A62_OFFSET))(this, a1);
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

	::System::Void Method_1_F44FB68367AA4B58(::RPG::GameCore::Match3::PieceTag a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::PieceTag, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_F44FB68367AA4B58_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_714C578DA15C5453(::RPG::GameCore::Match3::GridTag a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::GridTag, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_714C578DA15C5453_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_8DC652D916C182B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_8DC652D916C182B2_OFFSET))(this);
	}

	::System::Void Method_1_A6483272094C4057(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_A6483272094C4057_OFFSET))(this, a1);
	}

	::System::Void Method_1_CE944E12A64032F6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_CE944E12A64032F6_OFFSET))(this, a1);
	}

	::System::Void Method_1_6C952DD93A0AECED(::RPG::GameCore::Match3::SetEmojiReplyPatternAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::SetEmojiReplyPatternAction*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_6C952DD93A0AECED_OFFSET))(this, a1);
	}

	::System::Void Method_1_5523771D33FA0F68(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::Match3::BirdStyleWeightConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::Match3::BirdStyleWeightConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_5523771D33FA0F68_OFFSET))(this, a1);
	}

	::System::Void Method_1_EE25B4DE52676DE8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_EE25B4DE52676DE8_OFFSET))(this, a1);
	}

	::System::Void Method_1_865E5B58FDDFEA9D(::System::UInt32 a1, ::RPG::Client::LittleGame::Match3::OpponentRole a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_865E5B58FDDFEA9D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_96EEF7AE9086E789(::RPG::GameCore::Match3::RandomFreezeBombAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::RandomFreezeBombAction*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_96EEF7AE9086E789_OFFSET))(this, a1);
	}

	::System::Void Method_1_68D5BE38E1810BF8(::RPG::GameCore::Match3::RandomChangeBombToMultiStyleAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::RandomChangeBombToMultiStyleAction*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_68D5BE38E1810BF8_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC5536E4F30B0718(::RPG::GameCore::Match3::RandomChangeFruitToLineBombAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::RandomChangeFruitToLineBombAction*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_EC5536E4F30B0718_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF91309240A960F3(::RPG::GameCore::Match3::RandomChangeFruitToBlackFogAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::RandomChangeFruitToBlackFogAction*))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082_METHOD_1_DF91309240A960F3_OFFSET))(this, a1);
	}

	::System::Boolean __ApplyRandomChangeBombToMultiStyle_b__31_0(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> rowAndCol)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082___APPLYRANDOMCHANGEBOMBTOMULTISTYLE_B__31_0_OFFSET))(this, rowAndCol);
	}

	::System::Boolean __ApplyRandomChangeFruitToLineBomb_b__32_0(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> rowAndCol)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082___APPLYRANDOMCHANGEFRUITTOLINEBOMB_B__32_0_OFFSET))(this, rowAndCol);
	}

	::System::Boolean __ApplyRandomChangeFruitToBlackFog_b__33_0(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> rowAndCol)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_55FEA7ABF7079082___APPLYRANDOMCHANGEFRUITTOBLACKFOG_B__33_0_OFFSET))(this, rowAndCol);
	}
};
