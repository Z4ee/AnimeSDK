#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_33FA60A0452137B1_Struct_2_04E70A334141E598_1.h"
#include "unitysdk/Enum_3_96F6662CA3713095_7.h"
#include "unitysdk/Enum_3_DB663931210BBC27_29.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_A655331BCFE3443C.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E.h"
#include "unitysdk/Struct_2_E0D0A34AE1807B71.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_29;
class Class_1_A0B1A57C6DC75B0F;
class Class_1_A0EE873EACD64B72;
class Class_1_E081FCEC8F87505A;
class Class_2_1824EF69C8E376A3;
class Class_2_208CC9941471731A_741;
class Class_2_208CC9941471731A_927;
class Class_2_208CC9941471731A_945;
class Class_3_39E7492E16896206_2;
class Class_3_C2426F57DB2A743B;
class Class_3_F97B015544BE936B;
namespace MoleMole { class QuickEditContext; }
namespace MoleMole { class UIActivePropsWindowContext; }
namespace MoleMole { class UIRoleSelectPageContext; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_1_516A565475879095;

#define CLASS_1_33FA60A0452137B1_METHOD_1_026B1AF4C91E87B4_OFFSET UNITYSDK_OFFSET(0xE0671E0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_035E52B513EAE93E_OFFSET UNITYSDK_OFFSET(0xE066F00)
#define CLASS_1_33FA60A0452137B1_METHOD_1_050F8D3ADC730BDA_OFFSET UNITYSDK_OFFSET(0xE0668D0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_09C12C022758CB94_OFFSET UNITYSDK_OFFSET(0xE066070)
#define CLASS_1_33FA60A0452137B1_METHOD_1_0A781BEBB08F1D8F_OFFSET UNITYSDK_OFFSET(0x167DA1C0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_0FC2F7BB5FD6430F_OFFSET UNITYSDK_OFFSET(0x167DA4F0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_10BA33E5106447FB_OFFSET UNITYSDK_OFFSET(0xE068110)
#define CLASS_1_33FA60A0452137B1_METHOD_1_1417878EADFB0EA3_OFFSET UNITYSDK_OFFSET(0xE063880)
#define CLASS_1_33FA60A0452137B1_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x167DD030)
#define CLASS_1_33FA60A0452137B1_METHOD_1_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0xE0609C0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_1DFBC41759F4035F_OFFSET UNITYSDK_OFFSET(0xE067C50)
#define CLASS_1_33FA60A0452137B1_METHOD_1_1F447D8915407ABB_OFFSET UNITYSDK_OFFSET(0x167D9F70)
#define CLASS_1_33FA60A0452137B1_METHOD_1_200CDBC2C45CE60C_OFFSET UNITYSDK_OFFSET(0xE0632C0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_217F0E60F8D1D97A_OFFSET UNITYSDK_OFFSET(0x167DD670)
#define CLASS_1_33FA60A0452137B1_METHOD_1_235073C63B8023BB_OFFSET UNITYSDK_OFFSET(0xE069B60)
#define CLASS_1_33FA60A0452137B1_METHOD_1_243FE6C3FEE914F1_OFFSET UNITYSDK_OFFSET(0x167DB5A0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_2729240C81C0D6B1_OFFSET UNITYSDK_OFFSET(0x167DA410)
#define CLASS_1_33FA60A0452137B1_METHOD_1_2DA142A440162124_OFFSET UNITYSDK_OFFSET(0xE066C00)
#define CLASS_1_33FA60A0452137B1_METHOD_1_3110E4E8F534D28F_OFFSET UNITYSDK_OFFSET(0xE069AD0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_31F97ECF9528FD2E_OFFSET UNITYSDK_OFFSET(0xE06BBD0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_339D138657CBCACE_OFFSET UNITYSDK_OFFSET(0x167DBE10)
#define CLASS_1_33FA60A0452137B1_METHOD_1_348D12085F9FAF59_OFFSET UNITYSDK_OFFSET(0x167DA860)
#define CLASS_1_33FA60A0452137B1_METHOD_1_34B33DD03AE8F365_OFFSET UNITYSDK_OFFSET(0x167D9D70)
#define CLASS_1_33FA60A0452137B1_METHOD_1_40120439DEA27193_OFFSET UNITYSDK_OFFSET(0x167DAEE0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_416A68392A038D14_OFFSET UNITYSDK_OFFSET(0xE061F20)
#define CLASS_1_33FA60A0452137B1_METHOD_1_4608810E9806E791_OFFSET UNITYSDK_OFFSET(0x167DC4C0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0xE067640)
#define CLASS_1_33FA60A0452137B1_METHOD_1_50B18E1E38B1D2E9_OFFSET UNITYSDK_OFFSET(0xE061910)
#define CLASS_1_33FA60A0452137B1_METHOD_1_5233AE8E8D4817F3_OFFSET UNITYSDK_OFFSET(0xE06B000)
#define CLASS_1_33FA60A0452137B1_METHOD_1_56F4E076BA826A75_OFFSET UNITYSDK_OFFSET(0xE0656C0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_5825ECD6DD9C3215_OFFSET UNITYSDK_OFFSET(0xE06AE20)
#define CLASS_1_33FA60A0452137B1_METHOD_1_5AB71671F8A7CEA9_OFFSET UNITYSDK_OFFSET(0x167DADD0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_5F0D98E92F7CF6D6_OFFSET UNITYSDK_OFFSET(0x167DA760)
#define CLASS_1_33FA60A0452137B1_METHOD_1_5FC161C807EF23DD_OFFSET UNITYSDK_OFFSET(0xE065D30)
#define CLASS_1_33FA60A0452137B1_METHOD_1_64139B4C7E2EBBFA_OFFSET UNITYSDK_OFFSET(0xE061690)
#define CLASS_1_33FA60A0452137B1_METHOD_1_6CEAC0E2AADB03FC_OFFSET UNITYSDK_OFFSET(0xE06A550)
#define CLASS_1_33FA60A0452137B1_METHOD_1_76E715A0F04C9C5B_OFFSET UNITYSDK_OFFSET(0x167DA240)
#define CLASS_1_33FA60A0452137B1_METHOD_1_784FAB6F1D3E8D3D_OFFSET UNITYSDK_OFFSET(0xE064730)
#define CLASS_1_33FA60A0452137B1_METHOD_1_7B448D3A6DF5ACCA_OFFSET UNITYSDK_OFFSET(0xE067EE0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_7D7E7EC051CA8EF7_OFFSET UNITYSDK_OFFSET(0xE06B220)
#define CLASS_1_33FA60A0452137B1_METHOD_1_87995814908E373B_OFFSET UNITYSDK_OFFSET(0x167DCD00)
#define CLASS_1_33FA60A0452137B1_METHOD_1_8E7754B36829FE46_OFFSET UNITYSDK_OFFSET(0xE062920)
#define CLASS_1_33FA60A0452137B1_METHOD_1_924E730A1CBC1287_OFFSET UNITYSDK_OFFSET(0xE062B40)
#define CLASS_1_33FA60A0452137B1_METHOD_1_94F91C0A832C2F8F_1_OFFSET UNITYSDK_OFFSET(0xE0605B0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_94F91C0A832C2F8F_OFFSET UNITYSDK_OFFSET(0xE060020)
#define CLASS_1_33FA60A0452137B1_METHOD_1_9765352E01408D38_OFFSET UNITYSDK_OFFSET(0xE0620E0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_98F5BADE9637350E_OFFSET UNITYSDK_OFFSET(0xE06AD60)
#define CLASS_1_33FA60A0452137B1_METHOD_1_9A57F29F28168952_1_OFFSET UNITYSDK_OFFSET(0x167DA170)
#define CLASS_1_33FA60A0452137B1_METHOD_1_9A57F29F28168952_OFFSET UNITYSDK_OFFSET(0xE0667E0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_9CD550033F4AC22F_OFFSET UNITYSDK_OFFSET(0xE066830)
#define CLASS_1_33FA60A0452137B1_METHOD_1_9FD586A83CE58DFE_1_OFFSET UNITYSDK_OFFSET(0xE0699D0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_9FD586A83CE58DFE_OFFSET UNITYSDK_OFFSET(0xE0670E0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_A3F77E208807FA6F_OFFSET UNITYSDK_OFFSET(0xE062FA0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_A57296D1929045EC_OFFSET UNITYSDK_OFFSET(0xE0644C0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_A6F16CC27E7B2BFE_OFFSET UNITYSDK_OFFSET(0xE0642F0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0xE067950)
#define CLASS_1_33FA60A0452137B1_METHOD_1_AB1A8DFD378DB0BE_OFFSET UNITYSDK_OFFSET(0xE060450)
#define CLASS_1_33FA60A0452137B1_METHOD_1_B0DF1EC82B2FBA92_OFFSET UNITYSDK_OFFSET(0x167DBD00)
#define CLASS_1_33FA60A0452137B1_METHOD_1_B157E89DC8EC7468_OFFSET UNITYSDK_OFFSET(0x167DD570)
#define CLASS_1_33FA60A0452137B1_METHOD_1_B76189B21194BF1F_OFFSET UNITYSDK_OFFSET(0x167DB3B0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_B872EAF1B63F18B9_OFFSET UNITYSDK_OFFSET(0xE068AD0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_BA59B01FFB0E0365_OFFSET UNITYSDK_OFFSET(0xE061880)
#define CLASS_1_33FA60A0452137B1_METHOD_1_BC18648869EC0F4E_OFFSET UNITYSDK_OFFSET(0xE062400)
#define CLASS_1_33FA60A0452137B1_METHOD_1_BD3078E21D74E44F_OFFSET UNITYSDK_OFFSET(0xE06A270)
#define CLASS_1_33FA60A0452137B1_METHOD_1_C362773AD16ADA69_OFFSET UNITYSDK_OFFSET(0xE064B80)
#define CLASS_1_33FA60A0452137B1_METHOD_1_C4F46877E8289260_1_OFFSET UNITYSDK_OFFSET(0xE06BA10)
#define CLASS_1_33FA60A0452137B1_METHOD_1_C4F46877E8289260_OFFSET UNITYSDK_OFFSET(0xE065BF0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_CB40E23B16A73F9D_OFFSET UNITYSDK_OFFSET(0xE0674B0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_CEB227D73563CBDB_OFFSET UNITYSDK_OFFSET(0xE0669A0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_D501DA148B38EB38_1_OFFSET UNITYSDK_OFFSET(0x167DD350)
#define CLASS_1_33FA60A0452137B1_METHOD_1_D501DA148B38EB38_OFFSET UNITYSDK_OFFSET(0xE061470)
#define CLASS_1_33FA60A0452137B1_METHOD_1_DE6CD40296DEC157_1_OFFSET UNITYSDK_OFFSET(0xE0662A0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_DE6CD40296DEC157_OFFSET UNITYSDK_OFFSET(0xE063180)
#define CLASS_1_33FA60A0452137B1_METHOD_1_E6747474F84B139E_1_OFFSET UNITYSDK_OFFSET(0x167DD1D0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_E6747474F84B139E_OFFSET UNITYSDK_OFFSET(0xE066D80)
#define CLASS_1_33FA60A0452137B1_METHOD_1_F07F32F6824B6423_1_OFFSET UNITYSDK_OFFSET(0x167DCAB0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_F07F32F6824B6423_OFFSET UNITYSDK_OFFSET(0x167DB160)
#define CLASS_1_33FA60A0452137B1_METHOD_1_FB5D4A0069D79953_OFFSET UNITYSDK_OFFSET(0xE0663E0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_FFF2EE3774F00F79_OFFSET UNITYSDK_OFFSET(0xE06A800)
#define CLASS_1_33FA60A0452137B1__CCTOR_OFFSET UNITYSDK_OFFSET(0xE05FF80)

inline static constexpr unsigned int Class_1_33FA60A0452137B1_TypeDefinitionIndex = 44818;

class Class_1_33FA60A0452137B1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_927*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_927*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_33FA60A0452137B1_TypeDefinitionIndex)->GetStaticField(0x4A360);
	}
	static ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_945*>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_945*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_33FA60A0452137B1_TypeDefinitionIndex)->GetStaticField(0x4A368);
	}
	static ::System::Collections::Generic::List_1<::Foundation::ViewObject::GroupMemberIdentifier>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::Foundation::ViewObject::GroupMemberIdentifier>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_33FA60A0452137B1_TypeDefinitionIndex)->GetStaticField(0x4A370);
	}
	static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_33FA60A0452137B1_TypeDefinitionIndex)->GetStaticField(0x4A378);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_33FA60A0452137B1_TypeDefinitionIndex)->GetStaticField(0x11880);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::IEnumerable_1<::MoleMole::EntityHandle>* Method_1_94F91C0A832C2F8F(::System::Int32& a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::EntityHandle>*(*)(::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_94F91C0A832C2F8F_OFFSET))(a1);
	}

	static ::System::Collections::Generic::IEnumerable_1<::MoleMole::EntityHandle>* Method_1_94F91C0A832C2F8F_1(::System::Int32& a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::EntityHandle>*(*)(::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_94F91C0A832C2F8F_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_19FB5FBEA9EA66CD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_19FB5FBEA9EA66CD_OFFSET))();
	}

	static ::System::Collections::Generic::IEnumerable_1<::Class_3_C2426F57DB2A743B*>* Method_1_D501DA148B38EB38(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_3_C2426F57DB2A743B*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_D501DA148B38EB38_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_64139B4C7E2EBBFA(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_64139B4C7E2EBBFA_OFFSET))(a1);
	}

	static ::Class_3_C2426F57DB2A743B* Method_1_BA59B01FFB0E0365(::MoleMole::EntityHandle a1)
	{
		return ((::Class_3_C2426F57DB2A743B*(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_BA59B01FFB0E0365_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_416A68392A038D14(::Struct_2_E0D0A34AE1807B71 a1)
	{
		return ((::System::Boolean(*)(::Struct_2_E0D0A34AE1807B71))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_416A68392A038D14_OFFSET))(a1);
	}

	static ::System::Void Method_1_9765352E01408D38()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_9765352E01408D38_OFFSET))();
	}

	static ::System::Boolean Method_1_BC18648869EC0F4E()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_BC18648869EC0F4E_OFFSET))();
	}

	static ::System::Void Method_1_AB1A8DFD378DB0BE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_AB1A8DFD378DB0BE_OFFSET))();
	}

	static ::System::Boolean Method_1_8E7754B36829FE46(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_8E7754B36829FE46_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_924E730A1CBC1287(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_924E730A1CBC1287_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A3F77E208807FA6F(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_A3F77E208807FA6F_OFFSET))(a1);
	}

	static ::System::Void Method_1_DE6CD40296DEC157(::Class_3_C2426F57DB2A743B*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_C2426F57DB2A743B*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_DE6CD40296DEC157_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_200CDBC2C45CE60C(::Class_1_E081FCEC8F87505A* a1)
	{
		return ((::System::Boolean(*)(::Class_1_E081FCEC8F87505A*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_200CDBC2C45CE60C_OFFSET))(a1);
	}

	static ::Class_1_A0EE873EACD64B72* Method_1_A6F16CC27E7B2BFE(::System::Int32 a1, ::System::Int32 a2, ::System::Int32& a3)
	{
		return ((::Class_1_A0EE873EACD64B72*(*)(::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_A6F16CC27E7B2BFE_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_A57296D1929045EC(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_A57296D1929045EC_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_784FAB6F1D3E8D3D(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_784FAB6F1D3E8D3D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C362773AD16ADA69(::System::Action_1<::System::Action*>* a1, ::System::Int32 a2, ::System::Action* a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::System::Action_1<::System::Action*>*, ::System::Int32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_C362773AD16ADA69_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_1_C4F46877E8289260(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_C4F46877E8289260_OFFSET))(a1);
	}

	static ::System::Void Method_1_5FC161C807EF23DD(::System::Int32 a1, ::System::Action_1<::System::Action*>* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Action_1<::System::Action*>*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_5FC161C807EF23DD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_09C12C022758CB94(::Class_3_F97B015544BE936B*& a1, ::MoleMole::Config::BaseProperty& a2, ::System::Double& a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*&, ::MoleMole::Config::BaseProperty&, ::System::Double&))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_09C12C022758CB94_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_DE6CD40296DEC157_1(::Class_3_C2426F57DB2A743B*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_C2426F57DB2A743B*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_DE6CD40296DEC157_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_FB5D4A0069D79953(::Class_3_39E7492E16896206_2* a1)
	{
		return ((::System::Boolean(*)(::Class_3_39E7492E16896206_2*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_FB5D4A0069D79953_OFFSET))(a1);
	}

	static ::Class_3_C2426F57DB2A743B* Method_1_CEB227D73563CBDB(::MoleMole::EntityHandle a1)
	{
		return ((::Class_3_C2426F57DB2A743B*(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_CEB227D73563CBDB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_2DA142A440162124(::Class_1_A0B1A57C6DC75B0F* a1, ::System::Action_1<::System::Boolean>* a2)
	{
		return ((::System::Boolean(*)(::Class_1_A0B1A57C6DC75B0F*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_2DA142A440162124_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_050F8D3ADC730BDA(::Class_3_C2426F57DB2A743B* a1)
	{
		return ((::System::Boolean(*)(::Class_3_C2426F57DB2A743B*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_050F8D3ADC730BDA_OFFSET))(a1);
	}

	static ::System::Void Method_1_035E52B513EAE93E(::System::Int32& a1, ::System::Int32& a2)
	{
		return ((::System::Void(*)(::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_035E52B513EAE93E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9FD586A83CE58DFE(::Class_3_C2426F57DB2A743B*& a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_3_C2426F57DB2A743B*&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_9FD586A83CE58DFE_OFFSET))(a1, a2);
	}

	static ::MoleMole::UIActivePropsWindowContext* Method_1_026B1AF4C91E87B4(::MoleMole::UIActivePropsWindowContext* a1)
	{
		return ((::MoleMole::UIActivePropsWindowContext*(*)(::MoleMole::UIActivePropsWindowContext*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_026B1AF4C91E87B4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E6747474F84B139E(::Class_3_C2426F57DB2A743B* a1)
	{
		return ((::System::Boolean(*)(::Class_3_C2426F57DB2A743B*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_E6747474F84B139E_OFFSET))(a1);
	}

	static ::System::Void Method_1_CB40E23B16A73F9D(::System::Collections::Generic::IEnumerable_1<::Class_3_C2426F57DB2A743B*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::Class_3_C2426F57DB2A743B*>*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_CB40E23B16A73F9D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_4AADAF19CDCB660E()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_4AADAF19CDCB660E_OFFSET))();
	}

	static ::System::Boolean Method_1_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_A8F6F688241E6DBC_OFFSET))();
	}

	static ::System::Boolean Method_1_1DFBC41759F4035F(::System::Int32 a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_1DFBC41759F4035F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_56F4E076BA826A75(::Enum_3_DB663931210BBC27_29 a1)
	{
		return ((::System::Void(*)(::Enum_3_DB663931210BBC27_29))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_56F4E076BA826A75_OFFSET))(a1);
	}

	static ::System::Void Method_1_10BA33E5106447FB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_10BA33E5106447FB_OFFSET))(a1);
	}

	static ::System::Void Method_1_B872EAF1B63F18B9(::Class_1_E081FCEC8F87505A* a1, ::System::Action_1<::System::Action*>* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::Class_1_E081FCEC8F87505A*, ::System::Action_1<::System::Action*>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_B872EAF1B63F18B9_OFFSET))(a1, a2, a3);
	}

	static ::Class_3_C2426F57DB2A743B* Method_1_50B18E1E38B1D2E9(::MoleMole::EntityHandle& a1)
	{
		return ((::Class_3_C2426F57DB2A743B*(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_50B18E1E38B1D2E9_OFFSET))(a1);
	}

	static ::System::Void Method_1_9FD586A83CE58DFE_1(::Class_3_C2426F57DB2A743B*& a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_3_C2426F57DB2A743B*&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_9FD586A83CE58DFE_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3110E4E8F534D28F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_3110E4E8F534D28F_OFFSET))(a1);
	}

	static ::System::Void Method_1_235073C63B8023BB(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_235073C63B8023BB_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_BD3078E21D74E44F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_BD3078E21D74E44F_OFFSET))();
	}

	static ::System::Boolean Method_1_9A57F29F28168952(::Class_3_39E7492E16896206_2* a1)
	{
		return ((::System::Boolean(*)(::Class_3_39E7492E16896206_2*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_9A57F29F28168952_OFFSET))(a1);
	}

	static ::MoleMole::EntityHandle Method_1_6CEAC0E2AADB03FC(::MoleMole::EntityHandle a1, ::System::Int32 a2)
	{
		return ((::MoleMole::EntityHandle(*)(::MoleMole::EntityHandle, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_6CEAC0E2AADB03FC_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_9CD550033F4AC22F(::Class_3_C2426F57DB2A743B*& a1, ::Enum_3_96F6662CA3713095_7& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::Class_3_C2426F57DB2A743B*&, ::Enum_3_96F6662CA3713095_7&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_9CD550033F4AC22F_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>* Method_1_FFF2EE3774F00F79(::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>*(*)(::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_FFF2EE3774F00F79_OFFSET))(a1);
	}

	static ::System::Void Method_1_98F5BADE9637350E(::MoleMole::QuickEditContext* a1)
	{
		return ((::System::Void(*)(::MoleMole::QuickEditContext*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_98F5BADE9637350E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_5825ECD6DD9C3215(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_5825ECD6DD9C3215_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_5233AE8E8D4817F3(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_5233AE8E8D4817F3_OFFSET))(a1);
	}

	static ::Struct_2_A655331BCFE3443C Method_1_7D7E7EC051CA8EF7(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::Foundation::ViewObject::GroupMemberIdentifier a3, ::System::Int32 a4)
	{
		return ((::Struct_2_A655331BCFE3443C(*)(::System::Int32, ::UnityEngine::Vector3, ::Foundation::ViewObject::GroupMemberIdentifier, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_7D7E7EC051CA8EF7_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_7B448D3A6DF5ACCA(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_7B448D3A6DF5ACCA_OFFSET))(a1);
	}

	static ::System::String* Method_1_C4F46877E8289260_1(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_C4F46877E8289260_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_1417878EADFB0EA3(::Class_2_208CC9941471731A_741* a1, ::Class_1_33FA60A0452137B1_Struct_2_04E70A334141E598_1& a2)
	{
		return ((::System::Boolean(*)(::Class_2_208CC9941471731A_741*, ::Class_1_33FA60A0452137B1_Struct_2_04E70A334141E598_1&))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_1417878EADFB0EA3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_31F97ECF9528FD2E(::Class_3_C2426F57DB2A743B*& a1, ::Enum_3_96F6662CA3713095_7& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::Class_3_C2426F57DB2A743B*&, ::Enum_3_96F6662CA3713095_7&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_31F97ECF9528FD2E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_34B33DD03AE8F365(::Struct_2_E0D0A34AE1807B71 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::Struct_2_E0D0A34AE1807B71, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_34B33DD03AE8F365_OFFSET))(a1, a2);
	}

	static ::Class_3_C2426F57DB2A743B* Method_1_1F447D8915407ABB(::Class_3_39E7492E16896206_2*& a1, ::System::Int32& a2)
	{
		return ((::Class_3_C2426F57DB2A743B*(*)(::Class_3_39E7492E16896206_2*&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_1F447D8915407ABB_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_76E715A0F04C9C5B(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_76E715A0F04C9C5B_OFFSET))(a1);
	}

	static ::System::Void Method_1_2729240C81C0D6B1(::Class_3_C2426F57DB2A743B*& a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_3_C2426F57DB2A743B*&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_2729240C81C0D6B1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_0FC2F7BB5FD6430F(::System::Action_1<::System::Action*>* a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Boolean(*)(::System::Action_1<::System::Action*>*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_0FC2F7BB5FD6430F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_5F0D98E92F7CF6D6(::Class_3_C2426F57DB2A743B*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_C2426F57DB2A743B*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_5F0D98E92F7CF6D6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_348D12085F9FAF59(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_348D12085F9FAF59_OFFSET))(a1);
	}

	static ::MoleMole::EntityHandle Method_1_5AB71671F8A7CEA9(::MoleMole::EntityHandle a1, ::System::Int32 a2)
	{
		return ((::MoleMole::EntityHandle(*)(::MoleMole::EntityHandle, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_5AB71671F8A7CEA9_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_40120439DEA27193(::Struct_2_E0D0A34AE1807B71 a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Boolean(*)(::Struct_2_E0D0A34AE1807B71, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_40120439DEA27193_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0A781BEBB08F1D8F(::Class_3_C2426F57DB2A743B*& a1, ::Enum_3_96F6662CA3713095_7& a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::Class_3_C2426F57DB2A743B*&, ::Enum_3_96F6662CA3713095_7&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_0A781BEBB08F1D8F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_F07F32F6824B6423(::Class_1_516A565475879095<::System::UInt32, ::System::Int32>* a1, ::Class_3_F97B015544BE936B* a2)
	{
		return ((::System::Void(*)(::Class_1_516A565475879095<::System::UInt32, ::System::Int32>*, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_F07F32F6824B6423_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_B76189B21194BF1F(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_B76189B21194BF1F_OFFSET))(a1);
	}

	static ::System::Void Method_1_243FE6C3FEE914F1(::System::Boolean a1, ::Struct_2_B6A3FA7992F9F37E a2, ::System::Action* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::System::Boolean, ::Struct_2_B6A3FA7992F9F37E, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_243FE6C3FEE914F1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::UInt32 Method_1_B0DF1EC82B2FBA92(::MoleMole::EntityHandle& a1)
	{
		return ((::System::UInt32(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_B0DF1EC82B2FBA92_OFFSET))(a1);
	}

	static ::MoleMole::UIRoleSelectPageContext* Method_1_339D138657CBCACE(::System::Int32 a1, ::Il2CppArray<::Class_2_1824EF69C8E376A3*>* a2)
	{
		return ((::MoleMole::UIRoleSelectPageContext*(*)(::System::Int32, ::Il2CppArray<::Class_2_1824EF69C8E376A3*>*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_339D138657CBCACE_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_9A57F29F28168952_1(::Class_3_39E7492E16896206_2* a1)
	{
		return ((::System::Boolean(*)(::Class_3_39E7492E16896206_2*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_9A57F29F28168952_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_4608810E9806E791(::Class_1_E081FCEC8F87505A* a1, ::System::Action_1<::System::Action*>* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::Class_1_E081FCEC8F87505A*, ::System::Action_1<::System::Action*>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_4608810E9806E791_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_F07F32F6824B6423_1(::Class_1_516A565475879095<::System::UInt32, ::System::Int32>* a1, ::Class_3_F97B015544BE936B* a2)
	{
		return ((::System::Void(*)(::Class_1_516A565475879095<::System::UInt32, ::System::Int32>*, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_F07F32F6824B6423_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_87995814908E373B()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_87995814908E373B_OFFSET))();
	}

	static ::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_18982EFD3B740683_OFFSET))();
	}

	static ::System::Boolean Method_1_E6747474F84B139E_1(::Class_3_C2426F57DB2A743B* a1)
	{
		return ((::System::Boolean(*)(::Class_3_C2426F57DB2A743B*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_E6747474F84B139E_1_OFFSET))(a1);
	}

	static ::System::Collections::Generic::IEnumerable_1<::Class_3_C2426F57DB2A743B*>* Method_1_D501DA148B38EB38_1(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_3_C2426F57DB2A743B*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_D501DA148B38EB38_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_B157E89DC8EC7468(::Class_1_516A565475879095<::System::UInt32, ::System::Int32>* a1, ::Class_3_F97B015544BE936B* a2)
	{
		return ((::System::Void(*)(::Class_1_516A565475879095<::System::UInt32, ::System::Int32>*, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_B157E89DC8EC7468_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_217F0E60F8D1D97A(::System::Int32 a1)
	{
		return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_217F0E60F8D1D97A_OFFSET))(a1);
	}
};
