#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_867B6CE75953535A;
class Class_2_536CC4186B095618;
class Class_3_1A9D32B2B1D681B8;
namespace RPG::GameCore::Match3 { class BirdSkillActionGainRandomProp; }
namespace RPG::GameCore::Match3 { class BirdSkillActionGenerateBomb; }
namespace RPG::GameCore::Match3 { class BirdSkillActionGenerateItemPack; }
namespace RPG::GameCore::Match3 { class BirdSkillActionGeneratePiece; }
namespace RPG::GameCore::Match3 { class Match3ActionBase; }

#define CLASS_1_3BEB0001ADA26FB9_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16A19B50)
#define CLASS_1_3BEB0001ADA26FB9_METHOD_1_026012875D2CBDC8_OFFSET UNITYSDK_OFFSET(0x16A1B9B0)
#define CLASS_1_3BEB0001ADA26FB9_METHOD_1_042F570292746869_OFFSET UNITYSDK_OFFSET(0x16A1A170)
#define CLASS_1_3BEB0001ADA26FB9_METHOD_1_0DE9F36AFB69C9F4_OFFSET UNITYSDK_OFFSET(0x16A1B770)
#define CLASS_1_3BEB0001ADA26FB9_METHOD_1_0EF0F54D577DB832_OFFSET UNITYSDK_OFFSET(0x16A1A570)
#define CLASS_1_3BEB0001ADA26FB9_METHOD_1_1B1544D1209405CD_OFFSET UNITYSDK_OFFSET(0x16A1A920)
#define CLASS_1_3BEB0001ADA26FB9_METHOD_1_61C590145D122529_OFFSET UNITYSDK_OFFSET(0x16A19FD0)
#define CLASS_1_3BEB0001ADA26FB9_METHOD_1_70D461E1E65CA593_OFFSET UNITYSDK_OFFSET(0x16A1B3A0)
#define CLASS_1_3BEB0001ADA26FB9_METHOD_1_741A41CE0A023F45_OFFSET UNITYSDK_OFFSET(0x16A1B670)
#define CLASS_1_3BEB0001ADA26FB9_METHOD_1_7D33F05C17AC33AA_OFFSET UNITYSDK_OFFSET(0x16A1AD10)
#define CLASS_1_3BEB0001ADA26FB9_METHOD_1_81DE48467F234C5A_OFFSET UNITYSDK_OFFSET(0x16A1B8D0)
#define CLASS_1_3BEB0001ADA26FB9_METHOD_1_A97107D69EC6875F_OFFSET UNITYSDK_OFFSET(0x16A19D30)
#define CLASS_1_3BEB0001ADA26FB9_METHOD_1_B991F0E3AEE27E3A_OFFSET UNITYSDK_OFFSET(0x16A1B240)
#define CLASS_1_3BEB0001ADA26FB9_METHOD_1_EFA30C330A9FD2CA_OFFSET UNITYSDK_OFFSET(0x16A1B0B0)
#define CLASS_1_3BEB0001ADA26FB9__CTOR_OFFSET UNITYSDK_OFFSET(0x16A19B40)

inline static constexpr unsigned int Class_1_3BEB0001ADA26FB9_TypeDefinitionIndex = 32774;

class Class_1_3BEB0001ADA26FB9 : public ::System::Object
{
public:
	::Class_3_1A9D32B2B1D681B8* Field_1_1; // 0x10
	::Class_1_867B6CE75953535A* Field_1_0; // 0x18

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_3_1A9D32B2B1D681B8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_3_1A9D32B2B1D681B8*))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0001ADA26FB9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0001ADA26FB9_EXECUTE_OFFSET))(this);
	}

	::System::Boolean Method_1_A97107D69EC6875F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0001ADA26FB9_METHOD_1_A97107D69EC6875F_OFFSET))(this);
	}

	::System::Void Method_1_61C590145D122529(::RPG::GameCore::Match3::Match3ActionBase* a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::Match3ActionBase*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0001ADA26FB9_METHOD_1_61C590145D122529_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_042F570292746869(::RPG::GameCore::Match3::BirdSkillActionGenerateBomb* a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::BirdSkillActionGenerateBomb*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0001ADA26FB9_METHOD_1_042F570292746869_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0EF0F54D577DB832(::RPG::GameCore::Match3::BirdSkillActionGeneratePiece* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::BirdSkillActionGeneratePiece*))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0001ADA26FB9_METHOD_1_0EF0F54D577DB832_OFFSET))(this, a1);
	}

	::System::Void Method_1_1B1544D1209405CD(::RPG::GameCore::Match3::BirdSkillActionGainRandomProp* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::BirdSkillActionGainRandomProp*))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0001ADA26FB9_METHOD_1_1B1544D1209405CD_OFFSET))(this, a1);
	}

	::System::Void Method_1_7D33F05C17AC33AA(::RPG::GameCore::Match3::BirdSkillActionGenerateItemPack* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::BirdSkillActionGenerateItemPack*))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0001ADA26FB9_METHOD_1_7D33F05C17AC33AA_OFFSET))(this, a1);
	}

	::System::Void Method_1_70D461E1E65CA593(::Class_2_536CC4186B095618* a1, ::RPG::GameCore::Match3::BombType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_536CC4186B095618*, ::RPG::GameCore::Match3::BombType))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0001ADA26FB9_METHOD_1_70D461E1E65CA593_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B991F0E3AEE27E3A(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::RPG::GameCore::Match3::BombType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::Match3::BombType))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0001ADA26FB9_METHOD_1_B991F0E3AEE27E3A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_EFA30C330A9FD2CA(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::Boolean a2, ::RPG::GameCore::Match3::BombType a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Boolean, ::RPG::GameCore::Match3::BombType))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0001ADA26FB9_METHOD_1_EFA30C330A9FD2CA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0DE9F36AFB69C9F4(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::UInt32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0001ADA26FB9_METHOD_1_0DE9F36AFB69C9F4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_026012875D2CBDC8(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0001ADA26FB9_METHOD_1_026012875D2CBDC8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_741A41CE0A023F45(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0001ADA26FB9_METHOD_1_741A41CE0A023F45_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_81DE48467F234C5A(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0001ADA26FB9_METHOD_1_81DE48467F234C5A_OFFSET))(this, a1);
	}
};
