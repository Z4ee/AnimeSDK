#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AC66714FF5876767_Struct_2_028675BFBEB6582A.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_5.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_73D621BDD90E61A7;
class Class_1_AC66714FF5876767;
class Class_1_D808E3F47C1941B7;
class Class_2_074660E1B46C96C1_Class_1_9D2500B7447E67F1;
namespace RPG::GameCore { class ComplexSkillAIAxis; }
namespace RPG::GameCore { class ComplexSkillAIConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class SkillData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_074660E1B46C96C1_METHOD_2_0456E5D2102A96F0_OFFSET UNITYSDK_OFFSET(0xAFED2B0)
#define CLASS_2_074660E1B46C96C1_METHOD_2_0CE847FF527A969C_OFFSET UNITYSDK_OFFSET(0xAFEDFB0)
#define CLASS_2_074660E1B46C96C1_METHOD_2_40A3233404DDB201_OFFSET UNITYSDK_OFFSET(0xAFEEF70)
#define CLASS_2_074660E1B46C96C1_METHOD_2_4B43826ED7933F7B_OFFSET UNITYSDK_OFFSET(0xAFEE5B0)
#define CLASS_2_074660E1B46C96C1_METHOD_2_512073A5E70F4E39_OFFSET UNITYSDK_OFFSET(0xAFEF5A0)
#define CLASS_2_074660E1B46C96C1_METHOD_2_55357EED91DD300A_OFFSET UNITYSDK_OFFSET(0xAFEEEF0)
#define CLASS_2_074660E1B46C96C1_METHOD_2_594B16EC13924620_OFFSET UNITYSDK_OFFSET(0xAFEEDF0)
#define CLASS_2_074660E1B46C96C1_METHOD_2_5A4F244FA80C999D_OFFSET UNITYSDK_OFFSET(0xAFED0A0)
#define CLASS_2_074660E1B46C96C1_METHOD_2_7B79FC85A5EDBF4B_OFFSET UNITYSDK_OFFSET(0xAFEF520)
#define CLASS_2_074660E1B46C96C1_METHOD_2_7C350CDAB199DC24_OFFSET UNITYSDK_OFFSET(0xAFEED20)
#define CLASS_2_074660E1B46C96C1_METHOD_2_A42DC4450468C0E0_OFFSET UNITYSDK_OFFSET(0xAFEE7A0)
#define CLASS_2_074660E1B46C96C1_METHOD_2_B7E646E7463E1B89_OFFSET UNITYSDK_OFFSET(0xAFECB50)
#define CLASS_2_074660E1B46C96C1_METHOD_2_C76FBF5BDDCD86A3_OFFSET UNITYSDK_OFFSET(0xAFEEB00)
#define CLASS_2_074660E1B46C96C1_METHOD_2_CB7312DC9E225D46_OFFSET UNITYSDK_OFFSET(0xAFEEC80)
#define CLASS_2_074660E1B46C96C1_METHOD_2_D0E12D959862FC72_OFFSET UNITYSDK_OFFSET(0xAFEE340)
#define CLASS_2_074660E1B46C96C1_METHOD_2_DC4F7BE1519B0B0B_OFFSET UNITYSDK_OFFSET(0xAFEE400)
#define CLASS_2_074660E1B46C96C1__CTOR_OFFSET UNITYSDK_OFFSET(0xAFECAB0)

inline static constexpr unsigned int Class_2_074660E1B46C96C1_TypeDefinitionIndex = 50824;

class Class_2_074660E1B46C96C1 : public ::Class_1_F9FBCC956DFCF137_5
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_074660E1B46C96C1_Class_1_9D2500B7447E67F1*>* Field_2_0; // 0x18
	::RPG::GameCore::ComplexSkillAIAxis* Field_2_1; // 0x20
	::Class_1_73D621BDD90E61A7* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::ComplexSkillAIAxis* a1, ::Class_1_AC66714FF5876767* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ComplexSkillAIAxis*, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_074660E1B46C96C1__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_B7E646E7463E1B89()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_074660E1B46C96C1_METHOD_2_B7E646E7463E1B89_OFFSET))(this);
	}

	static ::System::Int32 Method_2_CB7312DC9E225D46(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_074660E1B46C96C1_METHOD_2_CB7312DC9E225D46_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Method_2_594B16EC13924620(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_074660E1B46C96C1_METHOD_2_594B16EC13924620_OFFSET))(a1);
	}

	::System::Boolean Method_2_0CE847FF527A969C(::Class_1_AC66714FF5876767* a1, ::Class_1_73D621BDD90E61A7* a2, ::RPG::GameCore::SkillData* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AC66714FF5876767*, ::Class_1_73D621BDD90E61A7*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_074660E1B46C96C1_METHOD_2_0CE847FF527A969C_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_5A4F244FA80C999D(::Class_1_AC66714FF5876767* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_074660E1B46C96C1_METHOD_2_5A4F244FA80C999D_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntityList* Method_2_D0E12D959862FC72(::System::Int32 a1, ::Class_1_AC66714FF5876767* a2)
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::System::Int32, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_074660E1B46C96C1_METHOD_2_D0E12D959862FC72_OFFSET))(this, a1, a2);
	}

	::Class_2_074660E1B46C96C1_Class_1_9D2500B7447E67F1* Method_2_DC4F7BE1519B0B0B(::System::Int32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::Class_1_AC66714FF5876767* a3)
	{
		return ((::Class_2_074660E1B46C96C1_Class_1_9D2500B7447E67F1*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_074660E1B46C96C1_METHOD_2_DC4F7BE1519B0B0B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C76FBF5BDDCD86A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_074660E1B46C96C1_METHOD_2_C76FBF5BDDCD86A3_OFFSET))(this);
	}

	static ::RPG::GameCore::ComplexSkillAIConfig* Method_2_7B79FC85A5EDBF4B(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::RPG::GameCore::ComplexSkillAIConfig*(*)(::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_074660E1B46C96C1_METHOD_2_7B79FC85A5EDBF4B_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_2_7C350CDAB199DC24(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_074660E1B46C96C1_METHOD_2_7C350CDAB199DC24_OFFSET))(a1);
	}

	static ::Class_1_AC66714FF5876767_Struct_2_028675BFBEB6582A Method_2_A42DC4450468C0E0(::Class_1_AC66714FF5876767* a1, ::System::Int32 a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a5, ::Class_2_074660E1B46C96C1_Class_1_9D2500B7447E67F1* a6, ::Class_1_73D621BDD90E61A7* a7)
	{
		return ((::Class_1_AC66714FF5876767_Struct_2_028675BFBEB6582A(*)(::Class_1_AC66714FF5876767*, ::System::Int32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::Class_2_074660E1B46C96C1_Class_1_9D2500B7447E67F1*, ::Class_1_73D621BDD90E61A7*))((::PBYTE)hIl2Cpp + CLASS_2_074660E1B46C96C1_METHOD_2_A42DC4450468C0E0_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_0456E5D2102A96F0(::Class_1_AC66714FF5876767* a1, ::Class_1_73D621BDD90E61A7* a2, ::System::Collections::Generic::List_1<::System::Int32>*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC66714FF5876767*, ::Class_1_73D621BDD90E61A7*, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_2_074660E1B46C96C1_METHOD_2_0456E5D2102A96F0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4B43826ED7933F7B(::Class_1_AC66714FF5876767* a1, ::RPG::GameCore::GameEntityList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC66714FF5876767*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_2_074660E1B46C96C1_METHOD_2_4B43826ED7933F7B_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::Boolean, ::RPG::GameCore::FixPoint> Method_2_40A3233404DDB201(::Class_1_AC66714FF5876767* a1, ::Class_1_73D621BDD90E61A7* a2, ::RPG::GameCore::SkillData* a3)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::RPG::GameCore::FixPoint>(*)(::PVOID, ::Class_1_AC66714FF5876767*, ::Class_1_73D621BDD90E61A7*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_074660E1B46C96C1_METHOD_2_40A3233404DDB201_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_D808E3F47C1941B7* Method_2_55357EED91DD300A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_D808E3F47C1941B7*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_074660E1B46C96C1_METHOD_2_55357EED91DD300A_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_512073A5E70F4E39()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_074660E1B46C96C1_METHOD_2_512073A5E70F4E39_OFFSET))(this);
	}
};
