#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B4FF51A33B9736E7.h"
#include "unitysdk/MoleMole/Config/AbilitySpecialParamType.h"
#include "unitysdk/MoleMole/Config/InLevelAbilityTarget.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Share/EItemType.h"
#include "unitysdk/Struct_2_745325AFD7021EFB.h"
#include "unitysdk/Struct_2_8A77D15D7EA8B8D3.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_18;
class Class_0_16E4307DCC419505_213;
class Class_0_16E4307DCC419505_581;
class Class_0_16E4307DCC419505_763;
class Class_1_0D6706375CDAAE8C;
class Class_1_5DA2E7556103D5A3_340;
class Class_1_BAF3B1E12B7EBB99;
class Class_1_BFC2F9D5895EB2FB;
class Class_2_167BB37617B940E3;
class Class_2_C6B63E29A82327F2;
class Class_3_14AE4CFCAF24E59E;
class Class_3_5609242270A80DFB;
class Class_3_BE6F3C2838BC0038_1;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_044AC6E0D3867427_OFFSET UNITYSDK_OFFSET(0x114DEC40)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_046CBD215D8E9642_OFFSET UNITYSDK_OFFSET(0x114E2640)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_0610DA7223AD57E5_OFFSET UNITYSDK_OFFSET(0x114E14A0)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_0A09C1CD1FFDB543_OFFSET UNITYSDK_OFFSET(0x114DBE80)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_21C701078C366ECE_OFFSET UNITYSDK_OFFSET(0x114DFB20)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_397EC98D91717E61_OFFSET UNITYSDK_OFFSET(0x114DC2D0)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_3E2C808A7EB507FF_OFFSET UNITYSDK_OFFSET(0x114E1790)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_40EFAD3C637E8ACA_OFFSET UNITYSDK_OFFSET(0x114E0C10)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_4217D9198B14F3E0_OFFSET UNITYSDK_OFFSET(0x114E28A0)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_4FDEC5339B1BFB28_OFFSET UNITYSDK_OFFSET(0x114DF2A0)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_5F5CB296827BD99A_OFFSET UNITYSDK_OFFSET(0x114E21B0)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_5F5E7B6E7E9936CC_OFFSET UNITYSDK_OFFSET(0x114DD790)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_5F6EC7FE626FF680_OFFSET UNITYSDK_OFFSET(0x114DDD00)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_62351D3B080B89F9_OFFSET UNITYSDK_OFFSET(0x114E0FE0)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x114DD400)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_805830491F987E9F_OFFSET UNITYSDK_OFFSET(0x114DBC00)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_899438222947524C_OFFSET UNITYSDK_OFFSET(0x114E06D0)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_8D8F0B7297A36F46_OFFSET UNITYSDK_OFFSET(0x114DCD40)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_909DEAE0BE28526D_OFFSET UNITYSDK_OFFSET(0x114DF760)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_98A9759E35CFA94D_OFFSET UNITYSDK_OFFSET(0x114DF8E0)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_A0E08F59D639B049_OFFSET UNITYSDK_OFFSET(0x114E1300)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_A3EA6C61C622F4CC_OFFSET UNITYSDK_OFFSET(0x114E19E0)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_A856BA5FF710C031_OFFSET UNITYSDK_OFFSET(0x114E1E70)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_AE37A894988953D6_OFFSET UNITYSDK_OFFSET(0x114E0A50)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_AEC308AAF3504104_OFFSET UNITYSDK_OFFSET(0x114DF340)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_AF9B73C9965C6444_OFFSET UNITYSDK_OFFSET(0x114DF500)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_B4538AC3D8550C6A_OFFSET UNITYSDK_OFFSET(0x114DFA70)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_B6D97D9909A8E8A2_OFFSET UNITYSDK_OFFSET(0x114DF200)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_B846D859AED47F23_OFFSET UNITYSDK_OFFSET(0x114DD810)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_C5303E414109A7BA_OFFSET UNITYSDK_OFFSET(0x114E2B30)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_C642856F8AD8C4C2_OFFSET UNITYSDK_OFFSET(0x114E2940)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_C6FA11BBB8773F09_OFFSET UNITYSDK_OFFSET(0x114E0430)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_DF98A50084370C21_OFFSET UNITYSDK_OFFSET(0x114E1680)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_E950AF6B7F812D5E_OFFSET UNITYSDK_OFFSET(0x114DDE80)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_EB3DB8F54C41F053_OFFSET UNITYSDK_OFFSET(0x114E1F10)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_EDE2797117DA8027_OFFSET UNITYSDK_OFFSET(0x114E1F60)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_F08183F245BCB533_OFFSET UNITYSDK_OFFSET(0x114E1740)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_F368D1EED41A4958_OFFSET UNITYSDK_OFFSET(0x114E0AB0)
#define CLASS_1_CA26F5CC3F0FA568_METHOD_1_F456A547F2792AFA_OFFSET UNITYSDK_OFFSET(0x114DE090)
#define CLASS_1_CA26F5CC3F0FA568__CCTOR_OFFSET UNITYSDK_OFFSET(0x114DBAF0)

inline static constexpr unsigned int Class_1_CA26F5CC3F0FA568_TypeDefinitionIndex = 82629;

class Class_1_CA26F5CC3F0FA568 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Char>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CA26F5CC3F0FA568_TypeDefinitionIndex)->GetStaticField(0x47CE0);
	}
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::InLevelAbilityTarget, ::System::String*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::Config::InLevelAbilityTarget, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CA26F5CC3F0FA568_TypeDefinitionIndex)->GetStaticField(0x47CE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_805830491F987E9F(::System::UInt32 a1, ::System::String* a2, ::Il2CppArray<::System::String*>* a3)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_805830491F987E9F_OFFSET))(a1, a2, a3);
	}

	static ::Enum_3_B4FF51A33B9736E7 Method_1_397EC98D91717E61(::MoleMole::EntityHandle a1)
	{
		return ((::Enum_3_B4FF51A33B9736E7(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_397EC98D91717E61_OFFSET))(a1);
	}

	static ::System::Void Method_1_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_67D41ACFEF39E84E_OFFSET))();
	}

	static ::System::Void Method_1_5F5E7B6E7E9936CC(::Class_3_14AE4CFCAF24E59E* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_14AE4CFCAF24E59E*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_5F5E7B6E7E9936CC_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_BAF3B1E12B7EBB99* Method_1_B846D859AED47F23(::Class_0_16E4307DCC419505_18* a1)
	{
		return ((::Class_1_BAF3B1E12B7EBB99*(*)(::Class_0_16E4307DCC419505_18*))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_B846D859AED47F23_OFFSET))(a1);
	}

	static ::System::Void Method_1_F456A547F2792AFA(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_F456A547F2792AFA_OFFSET))(a1, a2);
	}

	static ::Class_2_167BB37617B940E3* Method_1_B6D97D9909A8E8A2(::Class_3_F41D242A20F8FE06* a1, ::System::Int32 a2)
	{
		return ((::Class_2_167BB37617B940E3*(*)(::Class_3_F41D242A20F8FE06*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_B6D97D9909A8E8A2_OFFSET))(a1, a2);
	}

	static ::Struct_2_8A77D15D7EA8B8D3 Method_1_4FDEC5339B1BFB28(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Struct_2_8A77D15D7EA8B8D3(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_4FDEC5339B1BFB28_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AF9B73C9965C6444()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_AF9B73C9965C6444_OFFSET))();
	}

	static ::System::Boolean Method_1_98A9759E35CFA94D(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_98A9759E35CFA94D_OFFSET))(a1, a2);
	}

	static ::Struct_2_8A77D15D7EA8B8D3 Method_1_AEC308AAF3504104(::Class_1_BAF3B1E12B7EBB99* a1, ::System::Boolean a2)
	{
		return ((::Struct_2_8A77D15D7EA8B8D3(*)(::Class_1_BAF3B1E12B7EBB99*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_AEC308AAF3504104_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_21C701078C366ECE(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_21C701078C366ECE_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_AE37A894988953D6(::Class_1_0D6706375CDAAE8C* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::Class_1_0D6706375CDAAE8C*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_AE37A894988953D6_OFFSET))(a1, a2);
	}

	static ::Class_1_BAF3B1E12B7EBB99* Method_1_F368D1EED41A4958(::Class_0_16E4307DCC419505_581* a1)
	{
		return ((::Class_1_BAF3B1E12B7EBB99*(*)(::Class_0_16E4307DCC419505_581*))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_F368D1EED41A4958_OFFSET))(a1);
	}

	static ::System::Void Method_1_40EFAD3C637E8ACA(::MoleMole::EntityHandle a1, ::System::String* a2, ::System::String* a3, ::MoleMole::Config::AbilitySpecialParamType a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::String*, ::System::String*, ::MoleMole::Config::AbilitySpecialParamType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_40EFAD3C637E8ACA_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_62351D3B080B89F9(::Class_1_5DA2E7556103D5A3_340* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3)
	{
		return ((::System::Void(*)(::Class_1_5DA2E7556103D5A3_340*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_62351D3B080B89F9_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_A0E08F59D639B049(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_A0E08F59D639B049_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0610DA7223AD57E5(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_0610DA7223AD57E5_OFFSET))(a1, a2);
	}

	static ::Enum_3_B4FF51A33B9736E7 Method_1_E950AF6B7F812D5E(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::Enum_3_B4FF51A33B9736E7(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_E950AF6B7F812D5E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_DF98A50084370C21(::Enum_3_B4FF51A33B9736E7 a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::Enum_3_B4FF51A33B9736E7, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_DF98A50084370C21_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3E2C808A7EB507FF(::Class_0_16E4307DCC419505_763* a1, ::System::Collections::Generic::List_1<::Class_1_BAF3B1E12B7EBB99*>* a2)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_763*, ::System::Collections::Generic::List_1<::Class_1_BAF3B1E12B7EBB99*>*))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_3E2C808A7EB507FF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A3EA6C61C622F4CC(::System::Int32 a1, ::Class_3_BE6F3C2838BC0038_1* a2, ::Class_3_5609242270A80DFB* a3)
	{
		return ((::System::Void(*)(::System::Int32, ::Class_3_BE6F3C2838BC0038_1*, ::Class_3_5609242270A80DFB*))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_A3EA6C61C622F4CC_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F08183F245BCB533(::Enum_3_B4FF51A33B9736E7 a1, ::Enum_3_B4FF51A33B9736E7 a2)
	{
		return ((::System::Boolean(*)(::Enum_3_B4FF51A33B9736E7, ::Enum_3_B4FF51A33B9736E7))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_F08183F245BCB533_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0A09C1CD1FFDB543(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2, ::Il2CppArray<::System::String*>* a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_0A09C1CD1FFDB543_OFFSET))(a1, a2, a3);
	}

	static ::Struct_2_8A77D15D7EA8B8D3 Method_1_A856BA5FF710C031(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_745325AFD7021EFB>* a2, ::System::Boolean a3)
	{
		return ((::Struct_2_8A77D15D7EA8B8D3(*)(::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_745325AFD7021EFB>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_A856BA5FF710C031_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_8D8F0B7297A36F46(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_8D8F0B7297A36F46_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_EB3DB8F54C41F053(::System::Int32 a1, ::Share::EItemType a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::Share::EItemType))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_EB3DB8F54C41F053_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_EDE2797117DA8027(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_EDE2797117DA8027_OFFSET))(a1);
	}

	static ::System::Void Method_1_5F5CB296827BD99A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_5F5CB296827BD99A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C6FA11BBB8773F09(::System::String* a1, ::MoleMole::Config::InLevelAbilityTarget a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::Config::InLevelAbilityTarget))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_C6FA11BBB8773F09_OFFSET))(a1, a2);
	}

	static ::Class_1_BAF3B1E12B7EBB99* Method_1_044AC6E0D3867427(::System::Int32 a1, ::Class_0_16E4307DCC419505_213* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_745325AFD7021EFB>* a3)
	{
		return ((::Class_1_BAF3B1E12B7EBB99*(*)(::System::Int32, ::Class_0_16E4307DCC419505_213*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_745325AFD7021EFB>*))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_044AC6E0D3867427_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_BAF3B1E12B7EBB99* Method_1_046CBD215D8E9642(::Class_2_C6B63E29A82327F2* a1)
	{
		return ((::Class_1_BAF3B1E12B7EBB99*(*)(::Class_2_C6B63E29A82327F2*))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_046CBD215D8E9642_OFFSET))(a1);
	}

	static ::System::Void Method_1_4217D9198B14F3E0(::MoleMole::EntityHandle a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_4217D9198B14F3E0_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_B4538AC3D8550C6A(::MoleMole::EntityHandle a1, ::Enum_3_B4FF51A33B9736E7 a2)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle, ::Enum_3_B4FF51A33B9736E7))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_B4538AC3D8550C6A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_899438222947524C(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_899438222947524C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C642856F8AD8C4C2(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_C642856F8AD8C4C2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_909DEAE0BE28526D(::Struct_2_8A77D15D7EA8B8D3 a1)
	{
		return ((::System::Void(*)(::Struct_2_8A77D15D7EA8B8D3))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_909DEAE0BE28526D_OFFSET))(a1);
	}

	static ::System::Void Method_1_5F6EC7FE626FF680(::Class_1_BFC2F9D5895EB2FB* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_1_BFC2F9D5895EB2FB*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_5F6EC7FE626FF680_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_C5303E414109A7BA(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CA26F5CC3F0FA568_METHOD_1_C5303E414109A7BA_OFFSET))(a1);
	}
};
