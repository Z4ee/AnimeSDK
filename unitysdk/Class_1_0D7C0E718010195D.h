#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_23F1CA212FDF734B.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/Object.h"

class Class_3_898F909148BCCF95;
class Class_3_E9FF194CA9EF9D04;
namespace MoleMole { class UIBossBattleData; }
namespace MoleMole { class UIBossBattleDataDialogContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_1_516A565475879095;

#define CLASS_1_0D7C0E718010195D_METHOD_1_00D9C214C63942A7_OFFSET UNITYSDK_OFFSET(0x14CB9FE0)
#define CLASS_1_0D7C0E718010195D_METHOD_1_1580654D6B5359FD_OFFSET UNITYSDK_OFFSET(0x14CBB1C0)
#define CLASS_1_0D7C0E718010195D_METHOD_1_2430E919D6460318_OFFSET UNITYSDK_OFFSET(0x14CBA860)
#define CLASS_1_0D7C0E718010195D_METHOD_1_268C75343445269B_OFFSET UNITYSDK_OFFSET(0x14CBF3F0)
#define CLASS_1_0D7C0E718010195D_METHOD_1_286DF95E4766A4A9_OFFSET UNITYSDK_OFFSET(0x14CBAA60)
#define CLASS_1_0D7C0E718010195D_METHOD_1_39D78A8EB32A5315_OFFSET UNITYSDK_OFFSET(0x14CBEA60)
#define CLASS_1_0D7C0E718010195D_METHOD_1_41E39C0C1C27A76F_1_OFFSET UNITYSDK_OFFSET(0x14CBB0A0)
#define CLASS_1_0D7C0E718010195D_METHOD_1_41E39C0C1C27A76F_2_OFFSET UNITYSDK_OFFSET(0x14CBCAD0)
#define CLASS_1_0D7C0E718010195D_METHOD_1_41E39C0C1C27A76F_OFFSET UNITYSDK_OFFSET(0x14CBAF90)
#define CLASS_1_0D7C0E718010195D_METHOD_1_4C2989EEB27120A3_OFFSET UNITYSDK_OFFSET(0x14CBF060)
#define CLASS_1_0D7C0E718010195D_METHOD_1_62F05ED99D270362_OFFSET UNITYSDK_OFFSET(0x14CBCBF0)
#define CLASS_1_0D7C0E718010195D_METHOD_1_85FAEC580BA21CED_OFFSET UNITYSDK_OFFSET(0x14CBA080)
#define CLASS_1_0D7C0E718010195D_METHOD_1_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0x14CB9D40)
#define CLASS_1_0D7C0E718010195D_METHOD_1_AAB32E21DFABBE55_OFFSET UNITYSDK_OFFSET(0x14CBA4B0)
#define CLASS_1_0D7C0E718010195D_METHOD_1_B01F5292A1B6EB04_OFFSET UNITYSDK_OFFSET(0x14CBEF70)
#define CLASS_1_0D7C0E718010195D_METHOD_1_E02890A35E025E6A_OFFSET UNITYSDK_OFFSET(0x14CB9C00)
#define CLASS_1_0D7C0E718010195D_METHOD_1_E0D282746C145AC5_OFFSET UNITYSDK_OFFSET(0x14CBACE0)
#define CLASS_1_0D7C0E718010195D_METHOD_1_E33D4140B8737261_OFFSET UNITYSDK_OFFSET(0x14CB9B40)
#define CLASS_1_0D7C0E718010195D_METHOD_1_EE3781318F806EF0_OFFSET UNITYSDK_OFFSET(0x14CBA6A0)
#define CLASS_1_0D7C0E718010195D_METHOD_1_F0DC72F0E51FD233_OFFSET UNITYSDK_OFFSET(0x14CBECF0)
#define CLASS_1_0D7C0E718010195D_METHOD_1_F7BA13C72A6B3F58_1_OFFSET UNITYSDK_OFFSET(0x14CBEE30)
#define CLASS_1_0D7C0E718010195D_METHOD_1_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x14CBEBB0)
#define CLASS_1_0D7C0E718010195D__CCTOR_OFFSET UNITYSDK_OFFSET(0x14CB99C0)

inline static constexpr unsigned int Class_1_0D7C0E718010195D_TypeDefinitionIndex = 54494;

class Class_1_0D7C0E718010195D : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0D7C0E718010195D_TypeDefinitionIndex)->GetStaticField(0x4B8A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0D7C0E718010195D__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_E33D4140B8737261(::Share::ENotificationBadgeType a1)
	{
		return ((::System::Void(*)(::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + CLASS_1_0D7C0E718010195D_METHOD_1_E33D4140B8737261_OFFSET))(a1);
	}

	static ::System::Void Method_1_885DF4DA0F709E3E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0D7C0E718010195D_METHOD_1_885DF4DA0F709E3E_OFFSET))();
	}

	static ::System::String* Method_1_85FAEC580BA21CED(::Enum_3_23F1CA212FDF734B a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::Enum_3_23F1CA212FDF734B, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0D7C0E718010195D_METHOD_1_85FAEC580BA21CED_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_AAB32E21DFABBE55(::Class_1_516A565475879095<::System::UInt32, ::Class_3_898F909148BCCF95*>* a1, ::Enum_3_23F1CA212FDF734B a2)
	{
		return ((::System::Boolean(*)(::Class_1_516A565475879095<::System::UInt32, ::Class_3_898F909148BCCF95*>*, ::Enum_3_23F1CA212FDF734B))((::PBYTE)hIl2Cpp + CLASS_1_0D7C0E718010195D_METHOD_1_AAB32E21DFABBE55_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2430E919D6460318(::MoleMole::UIBossBattleDataDialogContext* a1)
	{
		return ((::System::Void(*)(::MoleMole::UIBossBattleDataDialogContext*))((::PBYTE)hIl2Cpp + CLASS_1_0D7C0E718010195D_METHOD_1_2430E919D6460318_OFFSET))(a1);
	}

	static ::System::Void Method_1_41E39C0C1C27A76F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0D7C0E718010195D_METHOD_1_41E39C0C1C27A76F_OFFSET))(a1);
	}

	static ::System::Void Method_1_41E39C0C1C27A76F_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0D7C0E718010195D_METHOD_1_41E39C0C1C27A76F_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_41E39C0C1C27A76F_2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0D7C0E718010195D_METHOD_1_41E39C0C1C27A76F_2_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_39D78A8EB32A5315()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0D7C0E718010195D_METHOD_1_39D78A8EB32A5315_OFFSET))();
	}

	static ::System::Void Method_1_E0D282746C145AC5(::Share::ENotificationBadgeType a1)
	{
		return ((::System::Void(*)(::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + CLASS_1_0D7C0E718010195D_METHOD_1_E0D282746C145AC5_OFFSET))(a1);
	}

	static ::System::Void Method_1_00D9C214C63942A7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0D7C0E718010195D_METHOD_1_00D9C214C63942A7_OFFSET))();
	}

	static ::System::Void Method_1_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0D7C0E718010195D_METHOD_1_F7BA13C72A6B3F58_OFFSET))();
	}

	static ::System::String* Method_1_F0DC72F0E51FD233(::Enum_3_23F1CA212FDF734B a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::Enum_3_23F1CA212FDF734B, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0D7C0E718010195D_METHOD_1_F0DC72F0E51FD233_OFFSET))(a1, a2);
	}

	static ::Share::ENotificationBadgeType Method_1_286DF95E4766A4A9()
	{
		return ((::Share::ENotificationBadgeType(*)())((::PBYTE)hIl2Cpp + CLASS_1_0D7C0E718010195D_METHOD_1_286DF95E4766A4A9_OFFSET))();
	}

	static ::System::Void Method_1_F7BA13C72A6B3F58_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0D7C0E718010195D_METHOD_1_F7BA13C72A6B3F58_1_OFFSET))();
	}

	static ::System::Boolean Method_1_E02890A35E025E6A(::Share::ENotificationBadgeType a1)
	{
		return ((::System::Boolean(*)(::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + CLASS_1_0D7C0E718010195D_METHOD_1_E02890A35E025E6A_OFFSET))(a1);
	}

	static ::System::Void Method_1_B01F5292A1B6EB04()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0D7C0E718010195D_METHOD_1_B01F5292A1B6EB04_OFFSET))();
	}

	static ::Enum_3_23F1CA212FDF734B Method_1_EE3781318F806EF0()
	{
		return ((::Enum_3_23F1CA212FDF734B(*)())((::PBYTE)hIl2Cpp + CLASS_1_0D7C0E718010195D_METHOD_1_EE3781318F806EF0_OFFSET))();
	}

	static ::Class_3_E9FF194CA9EF9D04* Method_1_4C2989EEB27120A3(::System::Collections::Generic::IEnumerable_1<::Class_3_E9FF194CA9EF9D04*>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::Class_3_E9FF194CA9EF9D04*(*)(::System::Collections::Generic::IEnumerable_1<::Class_3_E9FF194CA9EF9D04*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0D7C0E718010195D_METHOD_1_4C2989EEB27120A3_OFFSET))(a1, a2, a3);
	}

	static ::Class_3_E9FF194CA9EF9D04* Method_1_268C75343445269B(::System::Collections::Generic::IEnumerable_1<::Class_3_E9FF194CA9EF9D04*>* a1, ::System::Int32 a2)
	{
		return ((::Class_3_E9FF194CA9EF9D04*(*)(::System::Collections::Generic::IEnumerable_1<::Class_3_E9FF194CA9EF9D04*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0D7C0E718010195D_METHOD_1_268C75343445269B_OFFSET))(a1, a2);
	}

	static ::MoleMole::UIBossBattleData* Method_1_62F05ED99D270362(::System::Int32 a1)
	{
		return ((::MoleMole::UIBossBattleData*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0D7C0E718010195D_METHOD_1_62F05ED99D270362_OFFSET))(a1);
	}

	static ::MoleMole::UIBossBattleData* Method_1_1580654D6B5359FD(::System::Int32 a1)
	{
		return ((::MoleMole::UIBossBattleData*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0D7C0E718010195D_METHOD_1_1580654D6B5359FD_OFFSET))(a1);
	}
};
