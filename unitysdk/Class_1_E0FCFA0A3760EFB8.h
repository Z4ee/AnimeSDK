#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Ability/InLevelAbilityTargetMask.h"
#include "unitysdk/MoleMole/Config/AbilitySpecialParamType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Share/EItemType.h"
#include "unitysdk/Struct_2_745325AFD7021EFB_1.h"
#include "unitysdk/Struct_2_8A77D15D7EA8B8D3.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_22;
class Class_0_16E4307DCC419505_494;
class Class_0_16E4307DCC419505_614;
class Class_0_16E4307DCC419505_615;
class Class_1_0D6706375CDAAE8C;
class Class_1_5DA2E7556103D5A3_415;
class Class_1_BFC2F9D5895EB2FB;
class Class_1_D81DF5412653B7EF;
class Class_2_167BB37617B940E3;
class Class_2_C6B63E29A82327F2;
class Class_3_14AE4CFCAF24E59E;
class Class_3_5609242270A80DFB;
class Class_3_D9B49139DBB5CEDE;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_044AC6E0D3867427_OFFSET UNITYSDK_OFFSET(0x13079240)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_046CBD215D8E9642_OFFSET UNITYSDK_OFFSET(0x1307AC60)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_0610DA7223AD57E5_OFFSET UNITYSDK_OFFSET(0x1307B020)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_0A09C1CD1FFDB543_OFFSET UNITYSDK_OFFSET(0x13077620)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_10CFD50E8EF3A36E_OFFSET UNITYSDK_OFFSET(0x1307ABA0)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_3B3AF3D89B4DD2A9_OFFSET UNITYSDK_OFFSET(0x13079C70)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_3E2C808A7EB507FF_OFFSET UNITYSDK_OFFSET(0x1307CE30)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_4217D9198B14F3E0_OFFSET UNITYSDK_OFFSET(0x13079BD0)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_4FDEC5339B1BFB28_OFFSET UNITYSDK_OFFSET(0x1307BC20)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_5F5CB296827BD99A_OFFSET UNITYSDK_OFFSET(0x13078DB0)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_5F5E7B6E7E9936CC_OFFSET UNITYSDK_OFFSET(0x1307B200)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_5F6EC7FE626FF680_OFFSET UNITYSDK_OFFSET(0x13077A60)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_62351D3B080B89F9_OFFSET UNITYSDK_OFFSET(0x13077300)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x1307CA00)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_805830491F987E9F_OFFSET UNITYSDK_OFFSET(0x1307A250)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_899438222947524C_OFFSET UNITYSDK_OFFSET(0x13076DF0)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_8D8F0B7297A36F46_OFFSET UNITYSDK_OFFSET(0x13078650)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_909DEAE0BE28526D_OFFSET UNITYSDK_OFFSET(0x13076A20)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_91DA588FEB18F070_OFFSET UNITYSDK_OFFSET(0x13077BE0)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_98A9759E35CFA94D_OFFSET UNITYSDK_OFFSET(0x1307C870)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_A0E08F59D639B049_OFFSET UNITYSDK_OFFSET(0x1307A050)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_A3EA6C61C622F4CC_OFFSET UNITYSDK_OFFSET(0x1307A4D0)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_A856BA5FF710C031_OFFSET UNITYSDK_OFFSET(0x1307CD90)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_ADB64D8C4E95B790_OFFSET UNITYSDK_OFFSET(0x13077170)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_AE37A894988953D6_OFFSET UNITYSDK_OFFSET(0x1307A1F0)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_AEC308AAF3504104_OFFSET UNITYSDK_OFFSET(0x13079800)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_AF9B73C9965C6444_OFFSET UNITYSDK_OFFSET(0x130767C0)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_B6D97D9909A8E8A2_OFFSET UNITYSDK_OFFSET(0x1307BB80)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_B846D859AED47F23_OFFSET UNITYSDK_OFFSET(0x1307B280)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_BD989E86AABA327B_OFFSET UNITYSDK_OFFSET(0x130799C0)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_BE50BF84F69EC6D3_OFFSET UNITYSDK_OFFSET(0x13078D00)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_C5303E414109A7BA_OFFSET UNITYSDK_OFFSET(0x1307B770)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_C642856F8AD8C4C2_OFFSET UNITYSDK_OFFSET(0x1307A9B0)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_EB3DB8F54C41F053_OFFSET UNITYSDK_OFFSET(0x1307A960)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_EDE2797117DA8027_OFFSET UNITYSDK_OFFSET(0x13076BA0)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_F368D1EED41A4958_OFFSET UNITYSDK_OFFSET(0x1307AEC0)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_F36AB64F7A25FA17_OFFSET UNITYSDK_OFFSET(0x130772B0)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_F456A547F2792AFA_OFFSET UNITYSDK_OFFSET(0x1307BCC0)
#define CLASS_1_E0FCFA0A3760EFB8__CCTOR_OFFSET UNITYSDK_OFFSET(0x13076730)

inline static constexpr unsigned int Class_1_E0FCFA0A3760EFB8_TypeDefinitionIndex = 62435;

class Class_1_E0FCFA0A3760EFB8 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Char>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E0FCFA0A3760EFB8_TypeDefinitionIndex)->GetStaticField(0x3B350);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_AF9B73C9965C6444()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_AF9B73C9965C6444_OFFSET))();
	}

	static ::System::Boolean Method_1_EDE2797117DA8027(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_EDE2797117DA8027_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_899438222947524C(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_899438222947524C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F36AB64F7A25FA17(::MoleMole::Ability::InLevelAbilityTargetMask a1, ::MoleMole::Ability::InLevelAbilityTargetMask a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Ability::InLevelAbilityTargetMask, ::MoleMole::Ability::InLevelAbilityTargetMask))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_F36AB64F7A25FA17_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_62351D3B080B89F9(::Class_1_5DA2E7556103D5A3_415* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3)
	{
		return ((::System::Void(*)(::Class_1_5DA2E7556103D5A3_415*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_62351D3B080B89F9_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_5F6EC7FE626FF680(::Class_1_BFC2F9D5895EB2FB* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_1_BFC2F9D5895EB2FB*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_5F6EC7FE626FF680_OFFSET))(a1, a2);
	}

	static ::MoleMole::Ability::InLevelAbilityTargetMask Method_1_91DA588FEB18F070(::MoleMole::EntityHandle a1)
	{
		return ((::MoleMole::Ability::InLevelAbilityTargetMask(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_91DA588FEB18F070_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_BE50BF84F69EC6D3(::MoleMole::EntityHandle a1, ::MoleMole::Ability::InLevelAbilityTargetMask a2)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle, ::MoleMole::Ability::InLevelAbilityTargetMask))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_BE50BF84F69EC6D3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5F5CB296827BD99A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_5F5CB296827BD99A_OFFSET))(a1);
	}

	static ::MoleMole::Ability::InLevelAbilityTargetMask Method_1_BD989E86AABA327B(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::MoleMole::Ability::InLevelAbilityTargetMask(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_BD989E86AABA327B_OFFSET))(a1);
	}

	static ::System::Void Method_1_4217D9198B14F3E0(::MoleMole::EntityHandle a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_4217D9198B14F3E0_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_3B3AF3D89B4DD2A9(::MoleMole::EntityHandle a1, ::System::String* a2, ::System::String* a3, ::MoleMole::Config::AbilitySpecialParamType a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::String*, ::System::String*, ::MoleMole::Config::AbilitySpecialParamType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_3B3AF3D89B4DD2A9_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_A0E08F59D639B049(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_A0E08F59D639B049_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_805830491F987E9F(::System::UInt32 a1, ::System::String* a2, ::Il2CppArray<::System::String*>* a3)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_805830491F987E9F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_A3EA6C61C622F4CC(::System::Int32 a1, ::Class_3_D9B49139DBB5CEDE* a2, ::Class_3_5609242270A80DFB* a3)
	{
		return ((::System::Void(*)(::System::Int32, ::Class_3_D9B49139DBB5CEDE*, ::Class_3_5609242270A80DFB*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_A3EA6C61C622F4CC_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_EB3DB8F54C41F053(::System::Int32 a1, ::Share::EItemType a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::Share::EItemType))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_EB3DB8F54C41F053_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C642856F8AD8C4C2(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_C642856F8AD8C4C2_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_10CFD50E8EF3A36E(::MoleMole::Ability::InLevelAbilityTargetMask a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Ability::InLevelAbilityTargetMask, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_10CFD50E8EF3A36E_OFFSET))(a1, a2);
	}

	static ::Class_1_D81DF5412653B7EF* Method_1_046CBD215D8E9642(::Class_2_C6B63E29A82327F2* a1)
	{
		return ((::Class_1_D81DF5412653B7EF*(*)(::Class_2_C6B63E29A82327F2*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_046CBD215D8E9642_OFFSET))(a1);
	}

	static ::System::Void Method_1_0610DA7223AD57E5(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_0610DA7223AD57E5_OFFSET))(a1, a2);
	}

	static ::Class_1_D81DF5412653B7EF* Method_1_B846D859AED47F23(::Class_0_16E4307DCC419505_22* a1)
	{
		return ((::Class_1_D81DF5412653B7EF*(*)(::Class_0_16E4307DCC419505_22*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_B846D859AED47F23_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C5303E414109A7BA(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_C5303E414109A7BA_OFFSET))(a1);
	}

	static ::Class_1_D81DF5412653B7EF* Method_1_044AC6E0D3867427(::System::Int32 a1, ::Class_0_16E4307DCC419505_614* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_745325AFD7021EFB_1>* a3)
	{
		return ((::Class_1_D81DF5412653B7EF*(*)(::System::Int32, ::Class_0_16E4307DCC419505_614*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_745325AFD7021EFB_1>*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_044AC6E0D3867427_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_5F5E7B6E7E9936CC(::Class_3_14AE4CFCAF24E59E* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_14AE4CFCAF24E59E*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_5F5E7B6E7E9936CC_OFFSET))(a1, a2, a3);
	}

	static ::Class_2_167BB37617B940E3* Method_1_B6D97D9909A8E8A2(::Class_3_F41D242A20F8FE06* a1, ::System::Int32 a2)
	{
		return ((::Class_2_167BB37617B940E3*(*)(::Class_3_F41D242A20F8FE06*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_B6D97D9909A8E8A2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0A09C1CD1FFDB543(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2, ::Il2CppArray<::System::String*>* a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_0A09C1CD1FFDB543_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_909DEAE0BE28526D(::Struct_2_8A77D15D7EA8B8D3 a1)
	{
		return ((::System::Void(*)(::Struct_2_8A77D15D7EA8B8D3))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_909DEAE0BE28526D_OFFSET))(a1);
	}

	static ::Class_1_D81DF5412653B7EF* Method_1_F368D1EED41A4958(::Class_0_16E4307DCC419505_615* a1)
	{
		return ((::Class_1_D81DF5412653B7EF*(*)(::Class_0_16E4307DCC419505_615*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_F368D1EED41A4958_OFFSET))(a1);
	}

	static ::Struct_2_8A77D15D7EA8B8D3 Method_1_4FDEC5339B1BFB28(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Struct_2_8A77D15D7EA8B8D3(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_4FDEC5339B1BFB28_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F456A547F2792AFA(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_F456A547F2792AFA_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_98A9759E35CFA94D(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_98A9759E35CFA94D_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_8D8F0B7297A36F46(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_8D8F0B7297A36F46_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_ADB64D8C4E95B790(::System::String* a1, ::MoleMole::Ability::InLevelAbilityTargetMask a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::Ability::InLevelAbilityTargetMask))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_ADB64D8C4E95B790_OFFSET))(a1, a2);
	}

	static ::Struct_2_8A77D15D7EA8B8D3 Method_1_AEC308AAF3504104(::Class_1_D81DF5412653B7EF* a1, ::System::Boolean a2)
	{
		return ((::Struct_2_8A77D15D7EA8B8D3(*)(::Class_1_D81DF5412653B7EF*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_AEC308AAF3504104_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_AE37A894988953D6(::Class_1_0D6706375CDAAE8C* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::Class_1_0D6706375CDAAE8C*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_AE37A894988953D6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_67D41ACFEF39E84E_OFFSET))();
	}

	static ::Struct_2_8A77D15D7EA8B8D3 Method_1_A856BA5FF710C031(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_745325AFD7021EFB_1>* a2, ::System::Boolean a3)
	{
		return ((::Struct_2_8A77D15D7EA8B8D3(*)(::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_745325AFD7021EFB_1>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_A856BA5FF710C031_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_3E2C808A7EB507FF(::Class_0_16E4307DCC419505_494* a1, ::System::Collections::Generic::List_1<::Class_1_D81DF5412653B7EF*>* a2)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_494*, ::System::Collections::Generic::List_1<::Class_1_D81DF5412653B7EF*>*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_3E2C808A7EB507FF_OFFSET))(a1, a2);
	}
};
