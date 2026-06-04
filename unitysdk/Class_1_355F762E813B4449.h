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

#define CLASS_1_355F762E813B4449_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18CCA3B0)
#define CLASS_1_355F762E813B4449_METHOD_1_0EF0F54D577DB832_OFFSET UNITYSDK_OFFSET(0x18CCAE50)
#define CLASS_1_355F762E813B4449_METHOD_1_23D88A822209791B_OFFSET UNITYSDK_OFFSET(0x18CCB180)
#define CLASS_1_355F762E813B4449_METHOD_1_5D3B488F64C9B0F7_OFFSET UNITYSDK_OFFSET(0x18CCC3E0)
#define CLASS_1_355F762E813B4449_METHOD_1_70D461E1E65CA593_OFFSET UNITYSDK_OFFSET(0x18CCBCF0)
#define CLASS_1_355F762E813B4449_METHOD_1_90CC2B17856535F7_OFFSET UNITYSDK_OFFSET(0x18CCA830)
#define CLASS_1_355F762E813B4449_METHOD_1_996A0158217ACEAE_OFFSET UNITYSDK_OFFSET(0x18CCC2C0)
#define CLASS_1_355F762E813B4449_METHOD_1_A97107D69EC6875F_OFFSET UNITYSDK_OFFSET(0x18CCA590)
#define CLASS_1_355F762E813B4449_METHOD_1_C32A39625565D517_OFFSET UNITYSDK_OFFSET(0x18CCC110)
#define CLASS_1_355F762E813B4449_METHOD_1_CE4FE93ADD820033_OFFSET UNITYSDK_OFFSET(0x18CCBB90)
#define CLASS_1_355F762E813B4449_METHOD_1_ECFF7404C9E24A2F_OFFSET UNITYSDK_OFFSET(0x18CCA9F0)
#define CLASS_1_355F762E813B4449_METHOD_1_EF8294849E6D30F7_OFFSET UNITYSDK_OFFSET(0x18CCB660)
#define CLASS_1_355F762E813B4449_METHOD_1_EFA30C330A9FD2CA_OFFSET UNITYSDK_OFFSET(0x18CCB9A0)
#define CLASS_1_355F762E813B4449_METHOD_1_F357F57C56651CFC_OFFSET UNITYSDK_OFFSET(0x18CCBFC0)
#define CLASS_1_355F762E813B4449__CTOR_OFFSET UNITYSDK_OFFSET(0x18CCA3A0)

inline static constexpr unsigned int Class_1_355F762E813B4449_TypeDefinitionIndex = 39331;

class Class_1_355F762E813B4449 : public ::System::Object
{
public:
	::Class_1_D33B7D6901AE39E9* Field_1_0; // 0x10
	::Class_3_1A9D32B2B1D681B8* Field_1_1; // 0x18

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

	::System::Void Method_1_90CC2B17856535F7(::RPG::GameCore::Match3::Match3ActionBase* a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::Match3ActionBase*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_355F762E813B4449_METHOD_1_90CC2B17856535F7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_ECFF7404C9E24A2F(::RPG::GameCore::Match3::BirdSkillActionGenerateBomb* a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::BirdSkillActionGenerateBomb*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_355F762E813B4449_METHOD_1_ECFF7404C9E24A2F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0EF0F54D577DB832(::RPG::GameCore::Match3::BirdSkillActionGeneratePiece* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::BirdSkillActionGeneratePiece*))((::PBYTE)hIl2Cpp + CLASS_1_355F762E813B4449_METHOD_1_0EF0F54D577DB832_OFFSET))(this, a1);
	}

	::System::Void Method_1_23D88A822209791B(::RPG::GameCore::Match3::BirdSkillActionGainRandomProp* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::BirdSkillActionGainRandomProp*))((::PBYTE)hIl2Cpp + CLASS_1_355F762E813B4449_METHOD_1_23D88A822209791B_OFFSET))(this, a1);
	}

	::System::Void Method_1_EF8294849E6D30F7(::RPG::GameCore::Match3::BirdSkillActionGenerateItemPack* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::BirdSkillActionGenerateItemPack*))((::PBYTE)hIl2Cpp + CLASS_1_355F762E813B4449_METHOD_1_EF8294849E6D30F7_OFFSET))(this, a1);
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
