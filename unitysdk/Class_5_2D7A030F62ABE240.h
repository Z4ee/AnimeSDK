#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_93634F3CC4949B49.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/ChallengeQuestType.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/Struct_2_5B421F8FFABD4CA3.h"
#include "unitysdk/Struct_2_8A77D15D7EA8B8D3.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_449B1BB2E3AA2D13;
class Class_1_A26009A270D71B3D;
class Class_1_B7E341C5F1A6F199;
class Class_2_208CC9941471731A_1186;
class Class_2_208CC9941471731A_508;
class Class_3_46655DA07E3EA26B_2;
class Class_3_D9B8A457D8A4B7BB_10;
namespace MoleMole { class AvatarInitData; }
namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole { class InLevelBuddyDataItem; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_1_27F786FF2A30778C;

#define CLASS_5_2D7A030F62ABE240_METHOD_5_047D34745A4B98A3_OFFSET UNITYSDK_OFFSET(0x145C0A50)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_072C2AF518464B01_OFFSET UNITYSDK_OFFSET(0x145C0B60)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_07E567B3C6C3D7D7_OFFSET UNITYSDK_OFFSET(0x145C0F50)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_1092C5537716905B_OFFSET UNITYSDK_OFFSET(0x145BFE30)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x145BFF90)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_184AE6D5B1216FA2_OFFSET UNITYSDK_OFFSET(0x145BA2E0)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_1CC1F49C95DCD42C_OFFSET UNITYSDK_OFFSET(0x145C0260)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_2716D98066D67BC1_OFFSET UNITYSDK_OFFSET(0x145BEE30)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_2C106911016E0D23_OFFSET UNITYSDK_OFFSET(0x145BFE40)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_384ED41279DAB668_OFFSET UNITYSDK_OFFSET(0x145BF560)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x145BF090)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x145BB670)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_4A73CFFCCC9062B8_OFFSET UNITYSDK_OFFSET(0x145BF1E0)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_4DE65AB3A4860CEB_1_OFFSET UNITYSDK_OFFSET(0x145BFA50)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_4DE65AB3A4860CEB_OFFSET UNITYSDK_OFFSET(0x145BF890)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_50D16A65A008CAAE_OFFSET UNITYSDK_OFFSET(0x145C0FB0)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_50FE2EEE56A0F16C_OFFSET UNITYSDK_OFFSET(0x145BDB20)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_521826A696DC94B2_OFFSET UNITYSDK_OFFSET(0x145BE4D0)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_534C7923B6C66CF6_OFFSET UNITYSDK_OFFSET(0x145BFE20)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_545EA2409BA42998_OFFSET UNITYSDK_OFFSET(0x145BAA50)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_58892FC23B8E126E_1_OFFSET UNITYSDK_OFFSET(0x145BDAB0)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_58892FC23B8E126E_OFFSET UNITYSDK_OFFSET(0x145C0390)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0x145BF6A0)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_5F58982B6F5D69DD_OFFSET UNITYSDK_OFFSET(0x145BFFB0)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_60C4E0466D5CD820_OFFSET UNITYSDK_OFFSET(0x145C0FC0)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_61C5AD913C0E9473_OFFSET UNITYSDK_OFFSET(0x145BE470)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_6EAF967EC6FB557E_OFFSET UNITYSDK_OFFSET(0x145BAD20)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_720185CC9B2BDF01_OFFSET UNITYSDK_OFFSET(0x145BE080)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_8559B8E793FA5652_OFFSET UNITYSDK_OFFSET(0x145BFEE0)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_858CF2EC5EE423D3_OFFSET UNITYSDK_OFFSET(0x145BA4C0)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_85E43FE58216B6E3_OFFSET UNITYSDK_OFFSET(0x145BFC10)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_86C26F11E8531403_OFFSET UNITYSDK_OFFSET(0x145BB6B0)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x145BD010)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_8E753D0A7DA5F566_OFFSET UNITYSDK_OFFSET(0x145BD190)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_926DA1DD56014091_OFFSET UNITYSDK_OFFSET(0x145C0FA0)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_9477F20452094A8F_1_OFFSET UNITYSDK_OFFSET(0x145BC080)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_9477F20452094A8F_2_OFFSET UNITYSDK_OFFSET(0x145BC330)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_9477F20452094A8F_OFFSET UNITYSDK_OFFSET(0x145BA890)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x145C0200)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_96EA794D43A34CBA_OFFSET UNITYSDK_OFFSET(0x145BB8E0)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_97D481F1A9B51827_OFFSET UNITYSDK_OFFSET(0x145BC4F0)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x145BB600)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_A44F655ECE4EE169_OFFSET UNITYSDK_OFFSET(0x145BD960)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_A572622C7508F2B4_OFFSET UNITYSDK_OFFSET(0x145BB330)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0x145C0300)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_AAD237E957D9ECE7_OFFSET UNITYSDK_OFFSET(0x145BBCE0)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x145BAC10)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x145BB430)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_BF127EAB1F26ACD2_OFFSET UNITYSDK_OFFSET(0x145C08A0)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_C528AE3EFA8FD384_OFFSET UNITYSDK_OFFSET(0x145BF120)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_C860B930B334C9E8_OFFSET UNITYSDK_OFFSET(0x145BFFA0)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x145BFF50)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x145C0810)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x145BA4E0)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_CB357ACEB066731E_OFFSET UNITYSDK_OFFSET(0x145C0040)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_CB534650C1220AB8_OFFSET UNITYSDK_OFFSET(0x145C0A70)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_CB90D463EEA11F23_OFFSET UNITYSDK_OFFSET(0x145BC240)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_CDF70FE530E72A55_OFFSET UNITYSDK_OFFSET(0x145C0D60)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_CE1E91DD093C1865_OFFSET UNITYSDK_OFFSET(0x145BA540)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_D77509E8163ED84B_OFFSET UNITYSDK_OFFSET(0x145C0400)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_DC6CC7A123458A71_OFFSET UNITYSDK_OFFSET(0x145BDF00)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_EB1185A0882011DE_OFFSET UNITYSDK_OFFSET(0x145BDE10)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x145BA4D0)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_F1C27C0837BEBFB1_OFFSET UNITYSDK_OFFSET(0x145C0A60)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x145BFC00)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_F8D1399F1CCCBB77_OFFSET UNITYSDK_OFFSET(0x145C0B50)
#define CLASS_5_2D7A030F62ABE240_METHOD_5_FE3C90DE856D8612_OFFSET UNITYSDK_OFFSET(0x145BE240)
#define CLASS_5_2D7A030F62ABE240__CCTOR_OFFSET UNITYSDK_OFFSET(0x145BF060)
#define CLASS_5_2D7A030F62ABE240__CTOR_OFFSET UNITYSDK_OFFSET(0x145BEF50)

inline static constexpr unsigned int Class_5_2D7A030F62ABE240_TypeDefinitionIndex = 49875;

class Class_5_2D7A030F62ABE240 : public ::Class_4_93634F3CC4949B49
{
public:
	static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>** StaticGet_Field_5_7()
	{
		return (::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_2D7A030F62ABE240_TypeDefinitionIndex)->GetStaticField(0x390B0);
	}
	static ::System::UInt32* StaticGet_Field_5_6()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_5_2D7A030F62ABE240_TypeDefinitionIndex)->GetStaticField(0xD790);
	}
	static ::System::Int32* StaticGet_Field_5_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_5_2D7A030F62ABE240_TypeDefinitionIndex)->GetStaticField(0xD794);
	}
	static ::System::Boolean* StaticGet_Field_5_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_5_2D7A030F62ABE240_TypeDefinitionIndex)->GetStaticField(0xD798);
	}
	static ::System::Boolean* StaticGet_Field_5_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_5_2D7A030F62ABE240_TypeDefinitionIndex)->GetStaticField(0xD799);
	}
	// static const ::System::String* Field_5_5; // 0x0
	::System::Collections::Generic::Dictionary_2<::MoleMole::FlowCanvas::Nodes::ChallengeQuestType, ::System::Collections::Generic::List_1<::Class_1_A26009A270D71B3D*>*>* Field_5_15; // 0x2D0
	::Class_2_208CC9941471731A_508* Field_5_10; // 0x2D8
	::System::Collections::Generic::List_1<::Struct_2_8A77D15D7EA8B8D3>* Field_5_9; // 0x2E0
	::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>* Field_5_11; // 0x2E8
	::System::Collections::Generic::List_1<::Struct_2_8A77D15D7EA8B8D3>* Field_5_8; // 0x2F0
	::System::Int32 Field_5_14; // 0x2F8
	::System::UInt32 Field_5_4; // 0x2FC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240__CCTOR_OFFSET))();
	}

	::System::UInt32 Method_5_184AE6D5B1216FA2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_184AE6D5B1216FA2_OFFSET))(this);
	}

	::MoleMole::ELocalPlayType Method_5_858CF2EC5EE423D3()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_858CF2EC5EE423D3_OFFSET))(this);
	}

	::System::Boolean Method_5_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_5_CE1E91DD093C1865(::Class_1_449B1BB2E3AA2D13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_449B1BB2E3AA2D13*))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_CE1E91DD093C1865_OFFSET))(this, a1);
	}

	::System::Void Method_5_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_5_A572622C7508F2B4(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_A572622C7508F2B4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_5_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Boolean Method_5_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_5_86C26F11E8531403(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* a1, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_86C26F11E8531403_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*> Method_5_96EA794D43A34CBA(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* a1, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* a2)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*>(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_96EA794D43A34CBA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_AAD237E957D9ECE7(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_AAD237E957D9ECE7_OFFSET))(this, a1);
	}

	::System::Void Method_5_CB90D463EEA11F23(::Class_2_208CC9941471731A_1186* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_1186*))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_CB90D463EEA11F23_OFFSET))(this, a1);
	}

	::System::Void Method_5_97D481F1A9B51827(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_97D481F1A9B51827_OFFSET))(this, a1);
	}

	::System::Void Method_5_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::Void Method_5_8E753D0A7DA5F566(::Class_3_46655DA07E3EA26B_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_46655DA07E3EA26B_2*))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_8E753D0A7DA5F566_OFFSET))(this, a1);
	}

	::System::Single Method_5_61C5AD913C0E9473()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_61C5AD913C0E9473_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_5B421F8FFABD4CA3>* Method_5_521826A696DC94B2()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_5B421F8FFABD4CA3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_521826A696DC94B2_OFFSET))(this);
	}

	::MoleMole::UIBaseController* Method_5_2716D98066D67BC1(::MoleMole::UIBaseController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_2716D98066D67BC1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_50FE2EEE56A0F16C(::MoleMole::Level::RatingType& a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Level::RatingType&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_50FE2EEE56A0F16C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_5_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*> Method_5_C528AE3EFA8FD384(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* a1, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* a2)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*>(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_C528AE3EFA8FD384_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Struct_2_5B421F8FFABD4CA3>* Method_5_4A73CFFCCC9062B8()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_5B421F8FFABD4CA3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_4A73CFFCCC9062B8_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_A26009A270D71B3D*>* Method_5_384ED41279DAB668(::MoleMole::FlowCanvas::Nodes::ChallengeQuestType a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_A26009A270D71B3D*>*(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ChallengeQuestType))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_384ED41279DAB668_OFFSET))(this, a1);
	}

	::System::Void Method_5_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_5F08B426ADF31FF5_OFFSET))(this);
	}

	::System::Void Method_5_4DE65AB3A4860CEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_4DE65AB3A4860CEB_OFFSET))(this);
	}

	::System::Void Method_5_4DE65AB3A4860CEB_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_4DE65AB3A4860CEB_1_OFFSET))(this);
	}

	::System::Void Method_5_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_5_85E43FE58216B6E3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_85E43FE58216B6E3_OFFSET))(this, a1);
	}

	::System::Void Method_5_534C7923B6C66CF6(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_534C7923B6C66CF6_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_5_720185CC9B2BDF01(::MoleMole::FlowCanvas::Nodes::ChallengeQuestType a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ChallengeQuestType))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_720185CC9B2BDF01_OFFSET))(this, a1);
	}

	::System::Void Method_5_1092C5537716905B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_1092C5537716905B_OFFSET))(this);
	}

	::System::Void Method_5_2C106911016E0D23(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_2C106911016E0D23_OFFSET))(this, a1, a2);
	}

	::Class_1_27F786FF2A30778C<::System::UInt32>* Method_5_545EA2409BA42998()
	{
		return ((::Class_1_27F786FF2A30778C<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_545EA2409BA42998_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_5_8559B8E793FA5652(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_8559B8E793FA5652_OFFSET))(this, a1);
	}

	::System::UInt32 Method_5_9477F20452094A8F()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_9477F20452094A8F_OFFSET))(this);
	}

	::System::Void Method_5_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_17BD30EFE8176014_OFFSET))(this);
	}

	::System::UInt32 Method_5_C860B930B334C9E8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_C860B930B334C9E8_OFFSET))(this);
	}

	::Class_3_D9B8A457D8A4B7BB_10* Method_5_5F58982B6F5D69DD(::System::Int32 a1)
	{
		return ((::Class_3_D9B8A457D8A4B7BB_10*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_5F58982B6F5D69DD_OFFSET))(this, a1);
	}

	::Class_1_27F786FF2A30778C<::Class_3_D9B8A457D8A4B7BB_10*>* Method_5_CB357ACEB066731E()
	{
		return ((::Class_1_27F786FF2A30778C<::Class_3_D9B8A457D8A4B7BB_10*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_CB357ACEB066731E_OFFSET))(this);
	}

	::System::Int32 Method_5_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_95780ED94B90ED36_OFFSET))(this);
	}

	::MoleMole::UIBaseController* Method_5_1CC1F49C95DCD42C(::MoleMole::UIBaseController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_1CC1F49C95DCD42C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	::Class_1_27F786FF2A30778C<::System::UInt32>* Method_5_58892FC23B8E126E(::System::Int32 a1)
	{
		return ((::Class_1_27F786FF2A30778C<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_58892FC23B8E126E_OFFSET))(this, a1);
	}

	::System::Void Method_5_D77509E8163ED84B(::MoleMole::FlowCanvas::Nodes::ChallengeQuestType a1, ::Class_1_A26009A270D71B3D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ChallengeQuestType, ::Class_1_A26009A270D71B3D*))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_D77509E8163ED84B_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_5_DC6CC7A123458A71(::MoleMole::FlowCanvas::Nodes::ChallengeQuestType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ChallengeQuestType))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_DC6CC7A123458A71_OFFSET))(this, a1);
	}

	::System::UInt32 Method_5_9477F20452094A8F_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_9477F20452094A8F_1_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::UInt32>* Method_5_BF127EAB1F26ACD2()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_BF127EAB1F26ACD2_OFFSET))(this);
	}

	::System::Int32 Method_5_A44F655ECE4EE169()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_A44F655ECE4EE169_OFFSET))(this);
	}

	::System::Int32 Method_5_EB1185A0882011DE(::MoleMole::FlowCanvas::Nodes::ChallengeQuestType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ChallengeQuestType))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_EB1185A0882011DE_OFFSET))(this, a1);
	}

	::System::Void Method_5_047D34745A4B98A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_047D34745A4B98A3_OFFSET))(this);
	}

	::System::Void Method_5_F1C27C0837BEBFB1(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* a1, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_F1C27C0837BEBFB1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_CB534650C1220AB8(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_CB534650C1220AB8_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* Method_5_6EAF967EC6FB557E()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_6EAF967EC6FB557E_OFFSET))(this);
	}

	::System::Void Method_5_F8D1399F1CCCBB77(::Class_1_449B1BB2E3AA2D13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_449B1BB2E3AA2D13*))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_F8D1399F1CCCBB77_OFFSET))(this, a1);
	}

	::Class_1_A26009A270D71B3D* Method_5_072C2AF518464B01(::MoleMole::FlowCanvas::Nodes::ChallengeQuestType a1, ::System::Int32 a2)
	{
		return ((::Class_1_A26009A270D71B3D*(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ChallengeQuestType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_072C2AF518464B01_OFFSET))(this, a1, a2);
	}

	::Class_1_27F786FF2A30778C<::System::UInt32>* Method_5_58892FC23B8E126E_1(::System::Int32 a1)
	{
		return ((::Class_1_27F786FF2A30778C<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_58892FC23B8E126E_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_5_9477F20452094A8F_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_9477F20452094A8F_2_OFFSET))(this);
	}

	::Class_1_A26009A270D71B3D* Method_5_CDF70FE530E72A55(::MoleMole::FlowCanvas::Nodes::ChallengeQuestType a1)
	{
		return ((::Class_1_A26009A270D71B3D*(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ChallengeQuestType))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_CDF70FE530E72A55_OFFSET))(this, a1);
	}

	::System::Void Method_5_07E567B3C6C3D7D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_07E567B3C6C3D7D7_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_5_FE3C90DE856D8612(::MoleMole::FlowCanvas::Nodes::ChallengeQuestType a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ChallengeQuestType))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_FE3C90DE856D8612_OFFSET))(this, a1);
	}

	::System::Void Method_5_926DA1DD56014091(::Class_2_208CC9941471731A_1186* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_1186*))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_926DA1DD56014091_OFFSET))(this, a1);
	}

	::System::Void Method_5_50D16A65A008CAAE(::Class_3_46655DA07E3EA26B_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_46655DA07E3EA26B_2*))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_50D16A65A008CAAE_OFFSET))(this, a1);
	}

	::System::Int32 Method_5_60C4E0466D5CD820()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240_METHOD_5_60C4E0466D5CD820_OFFSET))(this);
	}
};
