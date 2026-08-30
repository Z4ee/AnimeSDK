#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_D33B7D6901AE39E9;
class Class_2_4706D3AD6019CD01;
class Class_3_1A9D32B2B1D681B8;
namespace RPG::GameCore::Match3 { class BirdSkillActionGainRandomProp; }
namespace RPG::GameCore::Match3 { class BirdSkillActionGenerateBomb; }
namespace RPG::GameCore::Match3 { class BirdSkillActionGenerateItemPack; }
namespace RPG::GameCore::Match3 { class BirdSkillActionGeneratePiece; }
namespace RPG::GameCore::Match3 { class Match3ActionBase; }

#define CLASS_1_355F762E813B4449_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C487BC0)
#define CLASS_1_355F762E813B4449_METHOD_1_5D3B488F64C9B0F7_OFFSET UNITYSDK_OFFSET(0x1C489AD0)
#define CLASS_1_355F762E813B4449_METHOD_1_70D461E1E65CA593_OFFSET UNITYSDK_OFFSET(0x1C4893E0)
#define CLASS_1_355F762E813B4449_METHOD_1_7D33F05C17AC33AA_OFFSET UNITYSDK_OFFSET(0x1C488D80)
#define CLASS_1_355F762E813B4449_METHOD_1_8170540C9E924154_OFFSET UNITYSDK_OFFSET(0x1C488040)
#define CLASS_1_355F762E813B4449_METHOD_1_8852AD9920684229_OFFSET UNITYSDK_OFFSET(0x1C488630)
#define CLASS_1_355F762E813B4449_METHOD_1_8AB2D4466E05DAB4_OFFSET UNITYSDK_OFFSET(0x1C488200)
#define CLASS_1_355F762E813B4449_METHOD_1_996A0158217ACEAE_OFFSET UNITYSDK_OFFSET(0x1C4899B0)
#define CLASS_1_355F762E813B4449_METHOD_1_A97107D69EC6875F_OFFSET UNITYSDK_OFFSET(0x1C487DA0)
#define CLASS_1_355F762E813B4449_METHOD_1_AC2817EB7771479E_OFFSET UNITYSDK_OFFSET(0x1C488940)
#define CLASS_1_355F762E813B4449_METHOD_1_C32A39625565D517_OFFSET UNITYSDK_OFFSET(0x1C489800)
#define CLASS_1_355F762E813B4449_METHOD_1_CE4FE93ADD820033_OFFSET UNITYSDK_OFFSET(0x1C489280)
#define CLASS_1_355F762E813B4449_METHOD_1_EFA30C330A9FD2CA_OFFSET UNITYSDK_OFFSET(0x1C489090)
#define CLASS_1_355F762E813B4449_METHOD_1_F357F57C56651CFC_OFFSET UNITYSDK_OFFSET(0x1C4896B0)
#define CLASS_1_355F762E813B4449__CTOR_OFFSET UNITYSDK_OFFSET(0x1C487BB0)

inline static constexpr unsigned int Class_1_355F762E813B4449_TypeDefinitionIndex = 41019;

class Class_1_355F762E813B4449 : public ::System::Object
{
public:
	::Class_3_1A9D32B2B1D681B8* PDENFEFCAGN; // 0x10
	::Class_1_D33B7D6901AE39E9* FKINCGODJEP; // 0x18

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_3_1A9D32B2B1D681B8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_3_1A9D32B2B1D681B8*))((::PBYTE)hIl2Cpp + CLASS_1_355F762E813B4449__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355F762E813B4449_EXECUTE_OFFSET))(this);
	}

	::System::Boolean Method_1_A97107D69EC6875F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355F762E813B4449_METHOD_1_A97107D69EC6875F_OFFSET))(this);
	}

	::System::Void Method_1_8170540C9E924154(::RPG::GameCore::Match3::Match3ActionBase* a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::Match3ActionBase*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_355F762E813B4449_METHOD_1_8170540C9E924154_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8AB2D4466E05DAB4(::RPG::GameCore::Match3::BirdSkillActionGenerateBomb* a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::BirdSkillActionGenerateBomb*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_355F762E813B4449_METHOD_1_8AB2D4466E05DAB4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8852AD9920684229(::RPG::GameCore::Match3::BirdSkillActionGeneratePiece* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::BirdSkillActionGeneratePiece*))((::PBYTE)hIl2Cpp + CLASS_1_355F762E813B4449_METHOD_1_8852AD9920684229_OFFSET))(this, a1);
	}

	::System::Void Method_1_AC2817EB7771479E(::RPG::GameCore::Match3::BirdSkillActionGainRandomProp* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::BirdSkillActionGainRandomProp*))((::PBYTE)hIl2Cpp + CLASS_1_355F762E813B4449_METHOD_1_AC2817EB7771479E_OFFSET))(this, a1);
	}

	::System::Void Method_1_7D33F05C17AC33AA(::RPG::GameCore::Match3::BirdSkillActionGenerateItemPack* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::BirdSkillActionGenerateItemPack*))((::PBYTE)hIl2Cpp + CLASS_1_355F762E813B4449_METHOD_1_7D33F05C17AC33AA_OFFSET))(this, a1);
	}

	::System::Void Method_1_70D461E1E65CA593(::Class_2_4706D3AD6019CD01* a1, ::RPG::GameCore::Match3::BombType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4706D3AD6019CD01*, ::RPG::GameCore::Match3::BombType))((::PBYTE)hIl2Cpp + CLASS_1_355F762E813B4449_METHOD_1_70D461E1E65CA593_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CE4FE93ADD820033(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::RPG::GameCore::Match3::BombType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::Match3::BombType))((::PBYTE)hIl2Cpp + CLASS_1_355F762E813B4449_METHOD_1_CE4FE93ADD820033_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_EFA30C330A9FD2CA(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::Boolean a2, ::RPG::GameCore::Match3::BombType a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Boolean, ::RPG::GameCore::Match3::BombType))((::PBYTE)hIl2Cpp + CLASS_1_355F762E813B4449_METHOD_1_EFA30C330A9FD2CA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C32A39625565D517(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::UInt32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_355F762E813B4449_METHOD_1_C32A39625565D517_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5D3B488F64C9B0F7(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_355F762E813B4449_METHOD_1_5D3B488F64C9B0F7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F357F57C56651CFC(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_355F762E813B4449_METHOD_1_F357F57C56651CFC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_996A0158217ACEAE(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_355F762E813B4449_METHOD_1_996A0158217ACEAE_OFFSET))(this, a1);
	}
};
