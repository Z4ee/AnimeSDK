#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_827373C1CEDFE355;
class Class_1_BD800F5B29A08E1F;
namespace RPG::GameCore { class ComplexSkillAISourceIsCombatPowerWeightedRandomTarget; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E1F0F77725E0ADF0_CLASS_1_2EAC2DB4DA0A99A1_CLEAR_OFFSET UNITYSDK_OFFSET(0x1197E640)
#define CLASS_2_E1F0F77725E0ADF0_CLASS_1_2EAC2DB4DA0A99A1_METHOD_1_1095AF0479330A13_OFFSET UNITYSDK_OFFSET(0x1197CC70)
#define CLASS_2_E1F0F77725E0ADF0_CLASS_1_2EAC2DB4DA0A99A1_METHOD_1_167E299044E62D22_OFFSET UNITYSDK_OFFSET(0x1197E5B0)
#define CLASS_2_E1F0F77725E0ADF0_CLASS_1_2EAC2DB4DA0A99A1_METHOD_1_37F04D5E56F349AD_OFFSET UNITYSDK_OFFSET(0x1197E6F0)
#define CLASS_2_E1F0F77725E0ADF0_CLASS_1_2EAC2DB4DA0A99A1_METHOD_1_4C2ACACD89F4EF1A_OFFSET UNITYSDK_OFFSET(0x1197E860)
#define CLASS_2_E1F0F77725E0ADF0_CLASS_1_2EAC2DB4DA0A99A1_METHOD_1_A902D0B2D0497CD9_OFFSET UNITYSDK_OFFSET(0x1197DCF0)
#define CLASS_2_E1F0F77725E0ADF0_CLASS_1_2EAC2DB4DA0A99A1_METHOD_1_E92814806745DCEF_OFFSET UNITYSDK_OFFSET(0x1197D930)
#define CLASS_2_E1F0F77725E0ADF0_CLASS_1_2EAC2DB4DA0A99A1_METHOD_1_FB2EE04E8EB05E51_OFFSET UNITYSDK_OFFSET(0x1197E120)
#define CLASS_2_E1F0F77725E0ADF0_CLASS_1_2EAC2DB4DA0A99A1_METHOD_1_FB2F21EBB919B56A_OFFSET UNITYSDK_OFFSET(0x1197CD40)
#define CLASS_2_E1F0F77725E0ADF0_CLASS_1_2EAC2DB4DA0A99A1__CTOR_OFFSET UNITYSDK_OFFSET(0x1197DC60)

inline static constexpr unsigned int Class_2_E1F0F77725E0ADF0_Class_1_2EAC2DB4DA0A99A1_TypeDefinitionIndex = 43461;

class Class_2_E1F0F77725E0ADF0_Class_1_2EAC2DB4DA0A99A1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_0; // 0x10
	::Class_1_827373C1CEDFE355* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_CLASS_1_2EAC2DB4DA0A99A1__CTOR_OFFSET))(this);
	}

	static ::Class_2_E1F0F77725E0ADF0_Class_1_2EAC2DB4DA0A99A1* Method_1_167E299044E62D22(::RPG::GameCore::GameWorld* a1)
	{
		return ((::Class_2_E1F0F77725E0ADF0_Class_1_2EAC2DB4DA0A99A1*(*)(::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_CLASS_1_2EAC2DB4DA0A99A1_METHOD_1_167E299044E62D22_OFFSET))(a1);
	}

	static ::Class_2_E1F0F77725E0ADF0_Class_1_2EAC2DB4DA0A99A1* Method_1_1095AF0479330A13(::Class_1_BD800F5B29A08E1F* a1)
	{
		return ((::Class_2_E1F0F77725E0ADF0_Class_1_2EAC2DB4DA0A99A1*(*)(::Class_1_BD800F5B29A08E1F*))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_CLASS_1_2EAC2DB4DA0A99A1_METHOD_1_1095AF0479330A13_OFFSET))(a1);
	}

	::System::Void Method_1_FB2F21EBB919B56A(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::Class_1_827373C1CEDFE355* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::Class_1_827373C1CEDFE355*))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_CLASS_1_2EAC2DB4DA0A99A1_METHOD_1_FB2F21EBB919B56A_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_CLASS_1_2EAC2DB4DA0A99A1_CLEAR_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_37F04D5E56F349AD(::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget*))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_CLASS_1_2EAC2DB4DA0A99A1_METHOD_1_37F04D5E56F349AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C2ACACD89F4EF1A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_CLASS_1_2EAC2DB4DA0A99A1_METHOD_1_4C2ACACD89F4EF1A_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_FB2EE04E8EB05E51(::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget*))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_CLASS_1_2EAC2DB4DA0A99A1_METHOD_1_FB2EE04E8EB05E51_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_A902D0B2D0497CD9(::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_CLASS_1_2EAC2DB4DA0A99A1_METHOD_1_A902D0B2D0497CD9_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::FixPoint Method_1_E92814806745DCEF(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget*))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_CLASS_1_2EAC2DB4DA0A99A1_METHOD_1_E92814806745DCEF_OFFSET))(this, a1, a2);
	}
};
