#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Ability/InLevelAbilityTargetMask.h"
#include "unitysdk/MoleMole/Config/AbilitySpecialParamType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Share/EItemType.h"
#include "unitysdk/Struct_2_745325AFD7021EFB_1.h"
#include "unitysdk/Struct_2_8A77D15D7EA8B8D3.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_21;
class Class_0_16E4307DCC419505_637;
class Class_0_16E4307DCC419505_798;
class Class_0_16E4307DCC419505_822;
class Class_1_0D6706375CDAAE8C;
class Class_1_5DA2E7556103D5A3_299;
class Class_1_663AFC2250EC21C9;
class Class_1_D81DF5412653B7EF;
class Class_2_14986121AA61AD99;
class Class_2_C6B63E29A82327F2;
class Class_3_14AE4CFCAF24E59E;
class Class_3_5609242270A80DFB;
class Class_3_BE6F3C2838BC0038_1;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_046CBD215D8E9642_OFFSET UNITYSDK_OFFSET(0x13B969C0)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_0610DA7223AD57E5_OFFSET UNITYSDK_OFFSET(0x13B958D0)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_0A09C1CD1FFDB543_OFFSET UNITYSDK_OFFSET(0x13B92A80)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_0FDC2A9CA380769E_OFFSET UNITYSDK_OFFSET(0x13B93050)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_10CFD50E8EF3A36E_OFFSET UNITYSDK_OFFSET(0x13B95180)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_260A7E98769B9CFD_OFFSET UNITYSDK_OFFSET(0x13B93F70)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_3537B5C76A9161CC_OFFSET UNITYSDK_OFFSET(0x13B96970)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_3B3AF3D89B4DD2A9_OFFSET UNITYSDK_OFFSET(0x13B96330)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_3E2C808A7EB507FF_OFFSET UNITYSDK_OFFSET(0x13B96720)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_4217D9198B14F3E0_OFFSET UNITYSDK_OFFSET(0x13B950E0)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_4F15A34A7C3A31A7_OFFSET UNITYSDK_OFFSET(0x13B973D0)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_4FDEC5339B1BFB28_OFFSET UNITYSDK_OFFSET(0x13B91C10)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_5F5CB296827BD99A_OFFSET UNITYSDK_OFFSET(0x13B95440)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_5F5E7B6E7E9936CC_OFFSET UNITYSDK_OFFSET(0x13B95AC0)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_5F6EC7FE626FF680_OFFSET UNITYSDK_OFFSET(0x13B92ED0)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_62351D3B080B89F9_OFFSET UNITYSDK_OFFSET(0x13B92750)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x13B97E60)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_805830491F987E9F_OFFSET UNITYSDK_OFFSET(0x13B981F0)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_819020CCE0A8C080_OFFSET UNITYSDK_OFFSET(0x13B91CB0)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_8D8F0B7297A36F46_OFFSET UNITYSDK_OFFSET(0x13B949D0)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_909DEAE0BE28526D_OFFSET UNITYSDK_OFFSET(0x13B93DF0)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_971A30603E96C170_OFFSET UNITYSDK_OFFSET(0x13B95BF0)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_98A9759E35CFA94D_OFFSET UNITYSDK_OFFSET(0x13B96D90)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_A0E08F59D639B049_OFFSET UNITYSDK_OFFSET(0x13B95290)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_A3EA6C61C622F4CC_OFFSET UNITYSDK_OFFSET(0x13B977D0)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_A856BA5FF710C031_OFFSET UNITYSDK_OFFSET(0x13B97330)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_ADB64D8C4E95B790_OFFSET UNITYSDK_OFFSET(0x13B92400)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_AE37A894988953D6_OFFSET UNITYSDK_OFFSET(0x13B95080)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_AEC308AAF3504104_OFFSET UNITYSDK_OFFSET(0x13B92240)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_AF9B73C9965C6444_OFFSET UNITYSDK_OFFSET(0x13B93B90)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_B6D97D9909A8E8A2_OFFSET UNITYSDK_OFFSET(0x13B97730)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_BD989E86AABA327B_OFFSET UNITYSDK_OFFSET(0x13B92540)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_BE50BF84F69EC6D3_OFFSET UNITYSDK_OFFSET(0x13B95B40)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_C5303E414109A7BA_OFFSET UNITYSDK_OFFSET(0x13B96F20)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_CA247195A3C436CC_OFFSET UNITYSDK_OFFSET(0x13B97C60)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_EDE2797117DA8027_OFFSET UNITYSDK_OFFSET(0x13B960E0)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_F368D1EED41A4958_OFFSET UNITYSDK_OFFSET(0x13B96C20)
#define CLASS_1_E0FCFA0A3760EFB8_METHOD_1_F36AB64F7A25FA17_OFFSET UNITYSDK_OFFSET(0x13B95240)
#define CLASS_1_E0FCFA0A3760EFB8__CCTOR_OFFSET UNITYSDK_OFFSET(0x13B91B80)

inline static constexpr unsigned int Class_1_E0FCFA0A3760EFB8_TypeDefinitionIndex = 85268;

class Class_1_E0FCFA0A3760EFB8 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Char>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E0FCFA0A3760EFB8_TypeDefinitionIndex)->GetStaticField(0x47800);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8__CCTOR_OFFSET))();
	}

	static ::Struct_2_8A77D15D7EA8B8D3 Method_1_4FDEC5339B1BFB28(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Struct_2_8A77D15D7EA8B8D3(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_4FDEC5339B1BFB28_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_ADB64D8C4E95B790(::System::String* a1, ::MoleMole::Ability::InLevelAbilityTargetMask a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::Ability::InLevelAbilityTargetMask))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_ADB64D8C4E95B790_OFFSET))(a1, a2);
	}

	static ::MoleMole::Ability::InLevelAbilityTargetMask Method_1_BD989E86AABA327B(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::MoleMole::Ability::InLevelAbilityTargetMask(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_BD989E86AABA327B_OFFSET))(a1);
	}

	static ::System::Void Method_1_62351D3B080B89F9(::Class_1_5DA2E7556103D5A3_299* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3)
	{
		return ((::System::Void(*)(::Class_1_5DA2E7556103D5A3_299*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_62351D3B080B89F9_OFFSET))(a1, a2, a3);
	}

	static ::Struct_2_8A77D15D7EA8B8D3 Method_1_AEC308AAF3504104(::Class_1_D81DF5412653B7EF* a1, ::System::Boolean a2)
	{
		return ((::Struct_2_8A77D15D7EA8B8D3(*)(::Class_1_D81DF5412653B7EF*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_AEC308AAF3504104_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5F6EC7FE626FF680(::Class_1_663AFC2250EC21C9* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_1_663AFC2250EC21C9*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_5F6EC7FE626FF680_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0FDC2A9CA380769E(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_0FDC2A9CA380769E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0A09C1CD1FFDB543(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2, ::Il2CppArray<::System::String*>* a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_0A09C1CD1FFDB543_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_AF9B73C9965C6444()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_AF9B73C9965C6444_OFFSET))();
	}

	static ::MoleMole::Ability::InLevelAbilityTargetMask Method_1_260A7E98769B9CFD(::MoleMole::EntityHandle a1)
	{
		return ((::MoleMole::Ability::InLevelAbilityTargetMask(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_260A7E98769B9CFD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_AE37A894988953D6(::Class_1_0D6706375CDAAE8C* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::Class_1_0D6706375CDAAE8C*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_AE37A894988953D6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4217D9198B14F3E0(::MoleMole::EntityHandle a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_4217D9198B14F3E0_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_10CFD50E8EF3A36E(::MoleMole::Ability::InLevelAbilityTargetMask a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Ability::InLevelAbilityTargetMask, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_10CFD50E8EF3A36E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A0E08F59D639B049(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_A0E08F59D639B049_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5F5CB296827BD99A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_5F5CB296827BD99A_OFFSET))(a1);
	}

	static ::System::Void Method_1_0610DA7223AD57E5(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_0610DA7223AD57E5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_BE50BF84F69EC6D3(::MoleMole::EntityHandle a1, ::MoleMole::Ability::InLevelAbilityTargetMask a2)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle, ::MoleMole::Ability::InLevelAbilityTargetMask))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_BE50BF84F69EC6D3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5F5E7B6E7E9936CC(::Class_3_14AE4CFCAF24E59E* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_14AE4CFCAF24E59E*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_5F5E7B6E7E9936CC_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_D81DF5412653B7EF* Method_1_971A30603E96C170(::Class_0_16E4307DCC419505_21* a1)
	{
		return ((::Class_1_D81DF5412653B7EF*(*)(::Class_0_16E4307DCC419505_21*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_971A30603E96C170_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_EDE2797117DA8027(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_EDE2797117DA8027_OFFSET))(a1);
	}

	static ::System::Void Method_1_3B3AF3D89B4DD2A9(::MoleMole::EntityHandle a1, ::System::String* a2, ::System::String* a3, ::MoleMole::Config::AbilitySpecialParamType a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::String*, ::System::String*, ::MoleMole::Config::AbilitySpecialParamType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_3B3AF3D89B4DD2A9_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_3E2C808A7EB507FF(::Class_0_16E4307DCC419505_798* a1, ::System::Collections::Generic::List_1<::Class_1_D81DF5412653B7EF*>* a2)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_798*, ::System::Collections::Generic::List_1<::Class_1_D81DF5412653B7EF*>*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_3E2C808A7EB507FF_OFFSET))(a1, a2);
	}

	static ::Class_1_D81DF5412653B7EF* Method_1_819020CCE0A8C080(::System::Int32 a1, ::Class_0_16E4307DCC419505_637* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_745325AFD7021EFB_1>* a3)
	{
		return ((::Class_1_D81DF5412653B7EF*(*)(::System::Int32, ::Class_0_16E4307DCC419505_637*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_745325AFD7021EFB_1>*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_819020CCE0A8C080_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_3537B5C76A9161CC(::System::Int32 a1, ::Share::EItemType a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::Share::EItemType))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_3537B5C76A9161CC_OFFSET))(a1, a2);
	}

	static ::Class_1_D81DF5412653B7EF* Method_1_046CBD215D8E9642(::Class_2_C6B63E29A82327F2* a1)
	{
		return ((::Class_1_D81DF5412653B7EF*(*)(::Class_2_C6B63E29A82327F2*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_046CBD215D8E9642_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F36AB64F7A25FA17(::MoleMole::Ability::InLevelAbilityTargetMask a1, ::MoleMole::Ability::InLevelAbilityTargetMask a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Ability::InLevelAbilityTargetMask, ::MoleMole::Ability::InLevelAbilityTargetMask))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_F36AB64F7A25FA17_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_98A9759E35CFA94D(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_98A9759E35CFA94D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_C5303E414109A7BA(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_C5303E414109A7BA_OFFSET))(a1);
	}

	static ::System::Void Method_1_909DEAE0BE28526D(::Struct_2_8A77D15D7EA8B8D3 a1)
	{
		return ((::System::Void(*)(::Struct_2_8A77D15D7EA8B8D3))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_909DEAE0BE28526D_OFFSET))(a1);
	}

	static ::Struct_2_8A77D15D7EA8B8D3 Method_1_A856BA5FF710C031(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_745325AFD7021EFB_1>* a2, ::System::Boolean a3)
	{
		return ((::Struct_2_8A77D15D7EA8B8D3(*)(::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_745325AFD7021EFB_1>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_A856BA5FF710C031_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_4F15A34A7C3A31A7(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_4F15A34A7C3A31A7_OFFSET))(a1, a2);
	}

	static ::Class_2_14986121AA61AD99* Method_1_B6D97D9909A8E8A2(::Class_3_F41D242A20F8FE06* a1, ::System::Int32 a2)
	{
		return ((::Class_2_14986121AA61AD99*(*)(::Class_3_F41D242A20F8FE06*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_B6D97D9909A8E8A2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A3EA6C61C622F4CC(::System::Int32 a1, ::Class_3_BE6F3C2838BC0038_1* a2, ::Class_3_5609242270A80DFB* a3)
	{
		return ((::System::Void(*)(::System::Int32, ::Class_3_BE6F3C2838BC0038_1*, ::Class_3_5609242270A80DFB*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_A3EA6C61C622F4CC_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_CA247195A3C436CC(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_CA247195A3C436CC_OFFSET))(a1, a2);
	}

	static ::Class_1_D81DF5412653B7EF* Method_1_F368D1EED41A4958(::Class_0_16E4307DCC419505_822* a1)
	{
		return ((::Class_1_D81DF5412653B7EF*(*)(::Class_0_16E4307DCC419505_822*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_F368D1EED41A4958_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_8D8F0B7297A36F46(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_8D8F0B7297A36F46_OFFSET))(a1);
	}

	static ::System::Void Method_1_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_67D41ACFEF39E84E_OFFSET))();
	}

	static ::System::Void Method_1_805830491F987E9F(::System::UInt32 a1, ::System::String* a2, ::Il2CppArray<::System::String*>* a3)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_E0FCFA0A3760EFB8_METHOD_1_805830491F987E9F_OFFSET))(a1, a2, a3);
	}
};
