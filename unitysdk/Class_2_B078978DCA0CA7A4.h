#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AC66714FF5876767_Struct_2_028675BFBEB6582A.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_4.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_73D621BDD90E61A7;
class Class_1_AC66714FF5876767;
class Class_1_D808E3F47C1941B7;
class Class_2_B078978DCA0CA7A4_Class_1_9D2500B7447E67F1;
namespace RPG::GameCore { class ComplexSkillAIAxis; }
namespace RPG::GameCore { class ComplexSkillAIConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class SkillData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B078978DCA0CA7A4_METHOD_2_0CE847FF527A969C_OFFSET UNITYSDK_OFFSET(0x161798E0)
#define CLASS_2_B078978DCA0CA7A4_METHOD_2_40A3233404DDB201_OFFSET UNITYSDK_OFFSET(0x1617A810)
#define CLASS_2_B078978DCA0CA7A4_METHOD_2_55357EED91DD300A_OFFSET UNITYSDK_OFFSET(0x1617A790)
#define CLASS_2_B078978DCA0CA7A4_METHOD_2_594B16EC13924620_OFFSET UNITYSDK_OFFSET(0x1617A690)
#define CLASS_2_B078978DCA0CA7A4_METHOD_2_5A4F244FA80C999D_OFFSET UNITYSDK_OFFSET(0x16178900)
#define CLASS_2_B078978DCA0CA7A4_METHOD_2_7B23922E4C775970_OFFSET UNITYSDK_OFFSET(0x16179ED0)
#define CLASS_2_B078978DCA0CA7A4_METHOD_2_7B79FC85A5EDBF4B_OFFSET UNITYSDK_OFFSET(0x1617ADC0)
#define CLASS_2_B078978DCA0CA7A4_METHOD_2_7C350CDAB199DC24_OFFSET UNITYSDK_OFFSET(0x1617A5C0)
#define CLASS_2_B078978DCA0CA7A4_METHOD_2_A13A778D4D3E962F_OFFSET UNITYSDK_OFFSET(0x1617A500)
#define CLASS_2_B078978DCA0CA7A4_METHOD_2_A42DC4450468C0E0_OFFSET UNITYSDK_OFFSET(0x1617A020)
#define CLASS_2_B078978DCA0CA7A4_METHOD_2_B7E646E7463E1B89_OFFSET UNITYSDK_OFFSET(0x16178320)
#define CLASS_2_B078978DCA0CA7A4_METHOD_2_C76FBF5BDDCD86A3_OFFSET UNITYSDK_OFFSET(0x1617A380)
#define CLASS_2_B078978DCA0CA7A4_METHOD_2_D0E12D959862FC72_OFFSET UNITYSDK_OFFSET(0x16179C70)
#define CLASS_2_B078978DCA0CA7A4_METHOD_2_DC4F7BE1519B0B0B_OFFSET UNITYSDK_OFFSET(0x16179D30)
#define CLASS_2_B078978DCA0CA7A4_METHOD_2_FEA73477BA929C29_OFFSET UNITYSDK_OFFSET(0x16178B20)
#define CLASS_2_B078978DCA0CA7A4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1617AE40)
#define CLASS_2_B078978DCA0CA7A4__CTOR_OFFSET UNITYSDK_OFFSET(0x16178280)

inline static constexpr unsigned int Class_2_B078978DCA0CA7A4_TypeDefinitionIndex = 51909;

class Class_2_B078978DCA0CA7A4 : public ::Class_1_F9FBCC956DFCF137_4
{
public:
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B078978DCA0CA7A4_TypeDefinitionIndex)->GetStaticField(0x32460);
	}
	static ::System::String** StaticGet_Field_2_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B078978DCA0CA7A4_TypeDefinitionIndex)->GetStaticField(0x32468);
	}
	::RPG::GameCore::ComplexSkillAIAxis* Field_2_2; // 0x18
	::Class_1_73D621BDD90E61A7* Field_2_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_B078978DCA0CA7A4_Class_1_9D2500B7447E67F1*>* Field_2_4; // 0x28

	::System::Void _ctor(::RPG::GameCore::ComplexSkillAIAxis* a1, ::Class_1_AC66714FF5876767* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ComplexSkillAIAxis*, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_B078978DCA0CA7A4__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B078978DCA0CA7A4__CCTOR_OFFSET))();
	}

	::RPG::GameCore::FixPoint Method_2_B7E646E7463E1B89()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B078978DCA0CA7A4_METHOD_2_B7E646E7463E1B89_OFFSET))(this);
	}

	static ::System::Int32 Method_2_A13A778D4D3E962F(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B078978DCA0CA7A4_METHOD_2_A13A778D4D3E962F_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Method_2_594B16EC13924620(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_B078978DCA0CA7A4_METHOD_2_594B16EC13924620_OFFSET))(a1);
	}

	::System::Boolean Method_2_0CE847FF527A969C(::Class_1_AC66714FF5876767* a1, ::Class_1_73D621BDD90E61A7* a2, ::RPG::GameCore::SkillData* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AC66714FF5876767*, ::Class_1_73D621BDD90E61A7*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_B078978DCA0CA7A4_METHOD_2_0CE847FF527A969C_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_5A4F244FA80C999D(::Class_1_AC66714FF5876767* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_B078978DCA0CA7A4_METHOD_2_5A4F244FA80C999D_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntityList* Method_2_D0E12D959862FC72(::System::Int32 a1, ::Class_1_AC66714FF5876767* a2)
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::System::Int32, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_B078978DCA0CA7A4_METHOD_2_D0E12D959862FC72_OFFSET))(this, a1, a2);
	}

	::Class_2_B078978DCA0CA7A4_Class_1_9D2500B7447E67F1* Method_2_DC4F7BE1519B0B0B(::System::Int32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::Class_1_AC66714FF5876767* a3)
	{
		return ((::Class_2_B078978DCA0CA7A4_Class_1_9D2500B7447E67F1*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_B078978DCA0CA7A4_METHOD_2_DC4F7BE1519B0B0B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C76FBF5BDDCD86A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B078978DCA0CA7A4_METHOD_2_C76FBF5BDDCD86A3_OFFSET))(this);
	}

	static ::RPG::GameCore::ComplexSkillAIConfig* Method_2_7B79FC85A5EDBF4B(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::RPG::GameCore::ComplexSkillAIConfig*(*)(::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B078978DCA0CA7A4_METHOD_2_7B79FC85A5EDBF4B_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_2_7C350CDAB199DC24(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B078978DCA0CA7A4_METHOD_2_7C350CDAB199DC24_OFFSET))(a1);
	}

	static ::Class_1_AC66714FF5876767_Struct_2_028675BFBEB6582A Method_2_A42DC4450468C0E0(::Class_1_AC66714FF5876767* a1, ::System::Int32 a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a5, ::Class_2_B078978DCA0CA7A4_Class_1_9D2500B7447E67F1* a6, ::Class_1_73D621BDD90E61A7* a7)
	{
		return ((::Class_1_AC66714FF5876767_Struct_2_028675BFBEB6582A(*)(::Class_1_AC66714FF5876767*, ::System::Int32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::Class_2_B078978DCA0CA7A4_Class_1_9D2500B7447E67F1*, ::Class_1_73D621BDD90E61A7*))((::PBYTE)hIl2Cpp + CLASS_2_B078978DCA0CA7A4_METHOD_2_A42DC4450468C0E0_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_FEA73477BA929C29(::Class_1_AC66714FF5876767* a1, ::Class_1_73D621BDD90E61A7* a2, ::System::Collections::Generic::List_1<::System::Int32>*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC66714FF5876767*, ::Class_1_73D621BDD90E61A7*, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_2_B078978DCA0CA7A4_METHOD_2_FEA73477BA929C29_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7B23922E4C775970(::Class_1_AC66714FF5876767* a1, ::RPG::GameCore::GameEntityList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC66714FF5876767*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_2_B078978DCA0CA7A4_METHOD_2_7B23922E4C775970_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::Boolean, ::RPG::GameCore::FixPoint> Method_2_40A3233404DDB201(::Class_1_AC66714FF5876767* a1, ::Class_1_73D621BDD90E61A7* a2, ::RPG::GameCore::SkillData* a3)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::RPG::GameCore::FixPoint>(*)(::PVOID, ::Class_1_AC66714FF5876767*, ::Class_1_73D621BDD90E61A7*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_B078978DCA0CA7A4_METHOD_2_40A3233404DDB201_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_D808E3F47C1941B7* Method_2_55357EED91DD300A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_D808E3F47C1941B7*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B078978DCA0CA7A4_METHOD_2_55357EED91DD300A_OFFSET))(this, a1);
	}
};
