#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_33FA60A0452137B1_Struct_2_04E70A334141E598_11.h"
#include "unitysdk/Enum_3_96F6662CA3713095_16.h"
#include "unitysdk/Enum_3_DB663931210BBC27_8.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_4561C29B96A890D9.h"
#include "unitysdk/Struct_2_A655331BCFE3443C.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_36;
class Class_1_3002D7CF5FEE9D3A;
class Class_1_A0B1A57C6DC75B0F;
class Class_1_B6B0D4D95C980CCC;
class Class_1_E081FCEC8F87505A;
class Class_2_1824EF69C8E376A3;
class Class_2_208CC9941471731A_172;
class Class_2_208CC9941471731A_663;
class Class_2_208CC9941471731A_963;
class Class_3_39E7492E16896206;
class Class_3_C2426F57DB2A743B;
class Class_3_F97B015544BE936B;
class Class_3_FDC05815C552A565;
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

#define CLASS_1_33FA60A0452137B1_METHOD_1_026B1AF4C91E87B4_OFFSET UNITYSDK_OFFSET(0x17FF84D0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_035E52B513EAE93E_OFFSET UNITYSDK_OFFSET(0x17FEB580)
#define CLASS_1_33FA60A0452137B1_METHOD_1_050F8D3ADC730BDA_OFFSET UNITYSDK_OFFSET(0x17FF3B70)
#define CLASS_1_33FA60A0452137B1_METHOD_1_09C12C022758CB94_OFFSET UNITYSDK_OFFSET(0x17FEE540)
#define CLASS_1_33FA60A0452137B1_METHOD_1_0A781BEBB08F1D8F_OFFSET UNITYSDK_OFFSET(0x17FE8A90)
#define CLASS_1_33FA60A0452137B1_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x17FEFDF0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_1DFBC41759F4035F_OFFSET UNITYSDK_OFFSET(0x17FF29E0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_1F447D8915407ABB_OFFSET UNITYSDK_OFFSET(0x17FE8840)
#define CLASS_1_33FA60A0452137B1_METHOD_1_200CDBC2C45CE60C_OFFSET UNITYSDK_OFFSET(0x17FF58C0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_217F0E60F8D1D97A_OFFSET UNITYSDK_OFFSET(0x17FF78B0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_235073C63B8023BB_OFFSET UNITYSDK_OFFSET(0x17FED790)
#define CLASS_1_33FA60A0452137B1_METHOD_1_243FE6C3FEE914F1_OFFSET UNITYSDK_OFFSET(0x17FF5E80)
#define CLASS_1_33FA60A0452137B1_METHOD_1_2729240C81C0D6B1_OFFSET UNITYSDK_OFFSET(0x17FEB2A0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_2DA142A440162124_OFFSET UNITYSDK_OFFSET(0x17FF4D30)
#define CLASS_1_33FA60A0452137B1_METHOD_1_3110E4E8F534D28F_OFFSET UNITYSDK_OFFSET(0x17FEE770)
#define CLASS_1_33FA60A0452137B1_METHOD_1_31F97ECF9528FD2E_OFFSET UNITYSDK_OFFSET(0x17FE8B10)
#define CLASS_1_33FA60A0452137B1_METHOD_1_32E612650C7FD094_OFFSET UNITYSDK_OFFSET(0x17FEC400)
#define CLASS_1_33FA60A0452137B1_METHOD_1_348D12085F9FAF59_OFFSET UNITYSDK_OFFSET(0x17FEE800)
#define CLASS_1_33FA60A0452137B1_METHOD_1_34B33DD03AE8F365_OFFSET UNITYSDK_OFFSET(0x17FF2140)
#define CLASS_1_33FA60A0452137B1_METHOD_1_37B66AFBA5D8D591_OFFSET UNITYSDK_OFFSET(0x17FF4EB0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_40120439DEA27193_OFFSET UNITYSDK_OFFSET(0x17FF2EA0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_416A68392A038D14_OFFSET UNITYSDK_OFFSET(0x17FF1810)
#define CLASS_1_33FA60A0452137B1_METHOD_1_4608810E9806E791_OFFSET UNITYSDK_OFFSET(0x17FF72D0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_4A41C63BFE58D26F_OFFSET UNITYSDK_OFFSET(0x17FF0710)
#define CLASS_1_33FA60A0452137B1_METHOD_1_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0x17FEC0F0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_4F0DE9BF9ABACB42_OFFSET UNITYSDK_OFFSET(0x17FF7EA0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_5233AE8E8D4817F3_OFFSET UNITYSDK_OFFSET(0x17FEDEA0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_56F4E076BA826A75_OFFSET UNITYSDK_OFFSET(0x17FEBBA0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_5825ECD6DD9C3215_OFFSET UNITYSDK_OFFSET(0x17FF7B40)
#define CLASS_1_33FA60A0452137B1_METHOD_1_5AB71671F8A7CEA9_OFFSET UNITYSDK_OFFSET(0x17FF1410)
#define CLASS_1_33FA60A0452137B1_METHOD_1_5F0D98E92F7CF6D6_OFFSET UNITYSDK_OFFSET(0x17FF0C30)
#define CLASS_1_33FA60A0452137B1_METHOD_1_5FC161C807EF23DD_OFFSET UNITYSDK_OFFSET(0x17FF3C40)
#define CLASS_1_33FA60A0452137B1_METHOD_1_61ABD1899501C29D_OFFSET UNITYSDK_OFFSET(0x17FF19D0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_63AD4DFFBE8F3099_OFFSET UNITYSDK_OFFSET(0x17FEFF80)
#define CLASS_1_33FA60A0452137B1_METHOD_1_64139B4C7E2EBBFA_OFFSET UNITYSDK_OFFSET(0x17FF6F10)
#define CLASS_1_33FA60A0452137B1_METHOD_1_6CEAC0E2AADB03FC_OFFSET UNITYSDK_OFFSET(0x17FEE2A0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_76E715A0F04C9C5B_OFFSET UNITYSDK_OFFSET(0x17FF7100)
#define CLASS_1_33FA60A0452137B1_METHOD_1_7B448D3A6DF5ACCA_OFFSET UNITYSDK_OFFSET(0x17FF2C70)
#define CLASS_1_33FA60A0452137B1_METHOD_1_7D7E7EC051CA8EF7_OFFSET UNITYSDK_OFFSET(0x17FECFD0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_8E7754B36829FE46_OFFSET UNITYSDK_OFFSET(0x17FF15E0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_924E730A1CBC1287_OFFSET UNITYSDK_OFFSET(0x17FF8070)
#define CLASS_1_33FA60A0452137B1_METHOD_1_94A347BC077AF668_OFFSET UNITYSDK_OFFSET(0x17FEA250)
#define CLASS_1_33FA60A0452137B1_METHOD_1_94F91C0A832C2F8F_1_OFFSET UNITYSDK_OFFSET(0x17FEAC20)
#define CLASS_1_33FA60A0452137B1_METHOD_1_94F91C0A832C2F8F_OFFSET UNITYSDK_OFFSET(0x17FEA690)
#define CLASS_1_33FA60A0452137B1_METHOD_1_98F5BADE9637350E_OFFSET UNITYSDK_OFFSET(0x17FF1520)
#define CLASS_1_33FA60A0452137B1_METHOD_1_9A57F29F28168952_1_OFFSET UNITYSDK_OFFSET(0x17FE8A40)
#define CLASS_1_33FA60A0452137B1_METHOD_1_9A57F29F28168952_OFFSET UNITYSDK_OFFSET(0x17FF0BE0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_9CD550033F4AC22F_OFFSET UNITYSDK_OFFSET(0x17FE8C50)
#define CLASS_1_33FA60A0452137B1_METHOD_1_9FD586A83CE58DFE_1_OFFSET UNITYSDK_OFFSET(0x17FEB380)
#define CLASS_1_33FA60A0452137B1_METHOD_1_9FD586A83CE58DFE_OFFSET UNITYSDK_OFFSET(0x17FEB480)
#define CLASS_1_33FA60A0452137B1_METHOD_1_A2172401030892FD_OFFSET UNITYSDK_OFFSET(0x17FEED80)
#define CLASS_1_33FA60A0452137B1_METHOD_1_A3F77E208807FA6F_OFFSET UNITYSDK_OFFSET(0x17FEE0C0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_A57296D1929045EC_OFFSET UNITYSDK_OFFSET(0x17FEB030)
#define CLASS_1_33FA60A0452137B1_METHOD_1_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x17FF3120)
#define CLASS_1_33FA60A0452137B1_METHOD_1_AB1A8DFD378DB0BE_OFFSET UNITYSDK_OFFSET(0x17FEAAC0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_B0DF1EC82B2FBA92_OFFSET UNITYSDK_OFFSET(0x17FF2030)
#define CLASS_1_33FA60A0452137B1_METHOD_1_B157E89DC8EC7468_OFFSET UNITYSDK_OFFSET(0x17FF3420)
#define CLASS_1_33FA60A0452137B1_METHOD_1_B872EAF1B63F18B9_OFFSET UNITYSDK_OFFSET(0x17FE9350)
#define CLASS_1_33FA60A0452137B1_METHOD_1_BC18648869EC0F4E_OFFSET UNITYSDK_OFFSET(0x17FE8CF0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_C362773AD16ADA69_OFFSET UNITYSDK_OFFSET(0x17FF3F80)
#define CLASS_1_33FA60A0452137B1_METHOD_1_C4F46877E8289260_1_OFFSET UNITYSDK_OFFSET(0x17FF7F30)
#define CLASS_1_33FA60A0452137B1_METHOD_1_C4F46877E8289260_OFFSET UNITYSDK_OFFSET(0x17FF1250)
#define CLASS_1_33FA60A0452137B1_METHOD_1_CB40E23B16A73F9D_OFFSET UNITYSDK_OFFSET(0x17FF1EA0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_CBEF0167F2638887_OFFSET UNITYSDK_OFFSET(0x17FECE10)
#define CLASS_1_33FA60A0452137B1_METHOD_1_CC1BA9FF4BA9760E_OFFSET UNITYSDK_OFFSET(0x17FF09F0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0x17FECA10)
#define CLASS_1_33FA60A0452137B1_METHOD_1_CEB227D73563CBDB_OFFSET UNITYSDK_OFFSET(0x17FF4AD0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_D501DA148B38EB38_1_OFFSET UNITYSDK_OFFSET(0x17FEB760)
#define CLASS_1_33FA60A0452137B1_METHOD_1_D501DA148B38EB38_OFFSET UNITYSDK_OFFSET(0x17FEB980)
#define CLASS_1_33FA60A0452137B1_METHOD_1_D990A8C70081F8B2_OFFSET UNITYSDK_OFFSET(0x17FEFAB0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_DE6CD40296DEC157_1_OFFSET UNITYSDK_OFFSET(0x17FF0D30)
#define CLASS_1_33FA60A0452137B1_METHOD_1_DE6CD40296DEC157_OFFSET UNITYSDK_OFFSET(0x17FE9210)
#define CLASS_1_33FA60A0452137B1_METHOD_1_DFA9492EED364D37_OFFSET UNITYSDK_OFFSET(0x17FF2340)
#define CLASS_1_33FA60A0452137B1_METHOD_1_E6747474F84B139E_1_OFFSET UNITYSDK_OFFSET(0x17FF7D20)
#define CLASS_1_33FA60A0452137B1_METHOD_1_E6747474F84B139E_OFFSET UNITYSDK_OFFSET(0x17FF10D0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_E6790DC973D37923_OFFSET UNITYSDK_OFFSET(0x17FF0E70)
#define CLASS_1_33FA60A0452137B1_METHOD_1_EECA10D7EF2EEF04_OFFSET UNITYSDK_OFFSET(0x17FF65F0)
#define CLASS_1_33FA60A0452137B1_METHOD_1_F07F32F6824B6423_1_OFFSET UNITYSDK_OFFSET(0x17FF3520)
#define CLASS_1_33FA60A0452137B1_METHOD_1_F07F32F6824B6423_OFFSET UNITYSDK_OFFSET(0x17FF1C50)
#define CLASS_1_33FA60A0452137B1_METHOD_1_FB5D4A0069D79953_OFFSET UNITYSDK_OFFSET(0x17FF3770)
#define CLASS_1_33FA60A0452137B1__CCTOR_OFFSET UNITYSDK_OFFSET(0x17FE87A0)

inline static constexpr unsigned int Class_1_33FA60A0452137B1_TypeDefinitionIndex = 91018;

class Class_1_33FA60A0452137B1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_172*>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_172*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_33FA60A0452137B1_TypeDefinitionIndex)->GetStaticField(0x4EDF0);
	}
	static ::System::Collections::Generic::List_1<::Foundation::ViewObject::GroupMemberIdentifier>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Foundation::ViewObject::GroupMemberIdentifier>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_33FA60A0452137B1_TypeDefinitionIndex)->GetStaticField(0x4EDF8);
	}
	static ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_663*>** StaticGet_Field_1_6()
	{
		return (::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_663*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_33FA60A0452137B1_TypeDefinitionIndex)->GetStaticField(0x4EE00);
	}
	static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_33FA60A0452137B1_TypeDefinitionIndex)->GetStaticField(0x4EE08);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_33FA60A0452137B1_TypeDefinitionIndex)->GetStaticField(0x12290);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1__CCTOR_OFFSET))();
	}

	static ::Class_3_C2426F57DB2A743B* Method_1_1F447D8915407ABB(::Class_3_39E7492E16896206*& a1, ::System::Int32& a2)
	{
		return ((::Class_3_C2426F57DB2A743B*(*)(::Class_3_39E7492E16896206*&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_1F447D8915407ABB_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_31F97ECF9528FD2E(::Class_3_C2426F57DB2A743B*& a1, ::Enum_3_96F6662CA3713095_16& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::Class_3_C2426F57DB2A743B*&, ::Enum_3_96F6662CA3713095_16&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_31F97ECF9528FD2E_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_BC18648869EC0F4E()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_BC18648869EC0F4E_OFFSET))();
	}

	static ::System::Void Method_1_DE6CD40296DEC157(::Class_3_C2426F57DB2A743B*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_C2426F57DB2A743B*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_DE6CD40296DEC157_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B872EAF1B63F18B9(::Class_1_E081FCEC8F87505A* a1, ::System::Action_1<::System::Action*>* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::Class_1_E081FCEC8F87505A*, ::System::Action_1<::System::Action*>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_B872EAF1B63F18B9_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::IEnumerable_1<::MoleMole::EntityHandle>* Method_1_94F91C0A832C2F8F(::System::Int32& a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::EntityHandle>*(*)(::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_94F91C0A832C2F8F_OFFSET))(a1);
	}

	static ::System::Collections::Generic::IEnumerable_1<::MoleMole::EntityHandle>* Method_1_94F91C0A832C2F8F_1(::System::Int32& a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::EntityHandle>*(*)(::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_94F91C0A832C2F8F_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_A57296D1929045EC(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_A57296D1929045EC_OFFSET))(a1);
	}

	static ::System::Void Method_1_2729240C81C0D6B1(::Class_3_C2426F57DB2A743B*& a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_3_C2426F57DB2A743B*&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_2729240C81C0D6B1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_035E52B513EAE93E(::System::Int32& a1, ::System::Int32& a2)
	{
		return ((::System::Void(*)(::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_035E52B513EAE93E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_56F4E076BA826A75(::Enum_3_DB663931210BBC27_8 a1)
	{
		return ((::System::Void(*)(::Enum_3_DB663931210BBC27_8))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_56F4E076BA826A75_OFFSET))(a1);
	}

	static ::Class_1_B6B0D4D95C980CCC* Method_1_CBEF0167F2638887(::System::Int32 a1, ::System::Int32 a2, ::System::Int32& a3)
	{
		return ((::Class_1_B6B0D4D95C980CCC*(*)(::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_CBEF0167F2638887_OFFSET))(a1, a2, a3);
	}

	static ::Struct_2_A655331BCFE3443C Method_1_7D7E7EC051CA8EF7(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::Foundation::ViewObject::GroupMemberIdentifier a3, ::System::Int32 a4)
	{
		return ((::Struct_2_A655331BCFE3443C(*)(::System::Int32, ::UnityEngine::Vector3, ::Foundation::ViewObject::GroupMemberIdentifier, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_7D7E7EC051CA8EF7_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_5233AE8E8D4817F3(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_5233AE8E8D4817F3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A3F77E208807FA6F(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_A3F77E208807FA6F_OFFSET))(a1);
	}

	static ::System::Collections::Generic::IEnumerable_1<::Class_3_C2426F57DB2A743B*>* Method_1_D501DA148B38EB38(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_3_C2426F57DB2A743B*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_D501DA148B38EB38_OFFSET))(a1);
	}

	static ::MoleMole::EntityHandle Method_1_6CEAC0E2AADB03FC(::MoleMole::EntityHandle a1, ::System::Int32 a2)
	{
		return ((::MoleMole::EntityHandle(*)(::MoleMole::EntityHandle, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_6CEAC0E2AADB03FC_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3110E4E8F534D28F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_3110E4E8F534D28F_OFFSET))(a1);
	}

	static ::System::Void Method_1_348D12085F9FAF59(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_348D12085F9FAF59_OFFSET))(a1);
	}

	static ::System::Void Method_1_A2172401030892FD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_A2172401030892FD_OFFSET))();
	}

	static ::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_18982EFD3B740683_OFFSET))();
	}

	static ::System::Collections::Generic::IEnumerable_1<::Class_3_C2426F57DB2A743B*>* Method_1_D501DA148B38EB38_1(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_3_C2426F57DB2A743B*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_D501DA148B38EB38_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_4A41C63BFE58D26F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_4A41C63BFE58D26F_OFFSET))();
	}

	static ::System::String* Method_1_CC1BA9FF4BA9760E(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_CC1BA9FF4BA9760E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9A57F29F28168952(::Class_3_39E7492E16896206* a1)
	{
		return ((::System::Boolean(*)(::Class_3_39E7492E16896206*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_9A57F29F28168952_OFFSET))(a1);
	}

	static ::System::Void Method_1_5F0D98E92F7CF6D6(::Class_3_C2426F57DB2A743B*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_C2426F57DB2A743B*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_5F0D98E92F7CF6D6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CEA32FF190776922()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_CEA32FF190776922_OFFSET))();
	}

	static ::System::Boolean Method_1_E6747474F84B139E(::Class_3_C2426F57DB2A743B* a1)
	{
		return ((::System::Boolean(*)(::Class_3_C2426F57DB2A743B*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_E6747474F84B139E_OFFSET))(a1);
	}

	static ::System::String* Method_1_C4F46877E8289260(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_C4F46877E8289260_OFFSET))(a1);
	}

	static ::System::Void Method_1_235073C63B8023BB(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_235073C63B8023BB_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_9A57F29F28168952_1(::Class_3_39E7492E16896206* a1)
	{
		return ((::System::Boolean(*)(::Class_3_39E7492E16896206*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_9A57F29F28168952_1_OFFSET))(a1);
	}

	static ::MoleMole::EntityHandle Method_1_5AB71671F8A7CEA9(::MoleMole::EntityHandle a1, ::System::Int32 a2)
	{
		return ((::MoleMole::EntityHandle(*)(::MoleMole::EntityHandle, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_5AB71671F8A7CEA9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_98F5BADE9637350E(::MoleMole::QuickEditContext* a1)
	{
		return ((::System::Void(*)(::MoleMole::QuickEditContext*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_98F5BADE9637350E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_8E7754B36829FE46(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_8E7754B36829FE46_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F07F32F6824B6423(::Class_1_516A565475879095<::System::UInt32, ::System::Int32>* a1, ::Class_3_F97B015544BE936B* a2)
	{
		return ((::System::Void(*)(::Class_1_516A565475879095<::System::UInt32, ::System::Int32>*, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_F07F32F6824B6423_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>* Method_1_63AD4DFFBE8F3099(::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* a1, ::Class_1_3002D7CF5FEE9D3A* a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>*(*)(::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>*, ::Class_1_3002D7CF5FEE9D3A*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_63AD4DFFBE8F3099_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CB40E23B16A73F9D(::System::Collections::Generic::IEnumerable_1<::Class_3_C2426F57DB2A743B*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::Class_3_C2426F57DB2A743B*>*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_CB40E23B16A73F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_0A781BEBB08F1D8F(::Class_3_C2426F57DB2A743B*& a1, ::Enum_3_96F6662CA3713095_16& a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::Class_3_C2426F57DB2A743B*&, ::Enum_3_96F6662CA3713095_16&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_0A781BEBB08F1D8F_OFFSET))(a1, a2, a3);
	}

	static ::System::UInt32 Method_1_B0DF1EC82B2FBA92(::MoleMole::EntityHandle& a1)
	{
		return ((::System::UInt32(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_B0DF1EC82B2FBA92_OFFSET))(a1);
	}

	static ::System::Void Method_1_34B33DD03AE8F365(::Struct_2_4561C29B96A890D9 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::Struct_2_4561C29B96A890D9, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_34B33DD03AE8F365_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AB1A8DFD378DB0BE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_AB1A8DFD378DB0BE_OFFSET))();
	}

	static ::System::Void Method_1_09C12C022758CB94(::Class_3_F97B015544BE936B*& a1, ::MoleMole::Config::BaseProperty& a2, ::System::Double& a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*&, ::MoleMole::Config::BaseProperty&, ::System::Double&))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_09C12C022758CB94_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::UIRoleSelectPageContext* Method_1_DFA9492EED364D37(::System::Int32 a1, ::Il2CppArray<::Class_2_1824EF69C8E376A3*>* a2)
	{
		return ((::MoleMole::UIRoleSelectPageContext*(*)(::System::Int32, ::Il2CppArray<::Class_2_1824EF69C8E376A3*>*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_DFA9492EED364D37_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_1DFBC41759F4035F(::System::Int32 a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_1DFBC41759F4035F_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_A8F6F688241E6DBC_OFFSET))();
	}

	static ::System::Void Method_1_B157E89DC8EC7468(::Class_1_516A565475879095<::System::UInt32, ::System::Int32>* a1, ::Class_3_F97B015544BE936B* a2)
	{
		return ((::System::Void(*)(::Class_1_516A565475879095<::System::UInt32, ::System::Int32>*, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_B157E89DC8EC7468_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_9CD550033F4AC22F(::Class_3_C2426F57DB2A743B*& a1, ::Enum_3_96F6662CA3713095_16& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::Class_3_C2426F57DB2A743B*&, ::Enum_3_96F6662CA3713095_16&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_9CD550033F4AC22F_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_FB5D4A0069D79953(::Class_3_39E7492E16896206* a1)
	{
		return ((::System::Boolean(*)(::Class_3_39E7492E16896206*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_FB5D4A0069D79953_OFFSET))(a1);
	}

	static ::System::Void Method_1_5FC161C807EF23DD(::System::Int32 a1, ::System::Action_1<::System::Action*>* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Action_1<::System::Action*>*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_5FC161C807EF23DD_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_61ABD1899501C29D(::System::Action_1<::System::Action*>* a1, ::System::Action* a2, ::System::Action* a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::System::Action_1<::System::Action*>*, ::System::Action*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_61ABD1899501C29D_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_3_C2426F57DB2A743B* Method_1_32E612650C7FD094(::MoleMole::EntityHandle& a1)
	{
		return ((::Class_3_C2426F57DB2A743B*(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_32E612650C7FD094_OFFSET))(a1);
	}

	static ::Class_3_C2426F57DB2A743B* Method_1_CEB227D73563CBDB(::MoleMole::EntityHandle a1)
	{
		return ((::Class_3_C2426F57DB2A743B*(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_CEB227D73563CBDB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_2DA142A440162124(::Class_1_A0B1A57C6DC75B0F* a1, ::System::Action_1<::System::Boolean>* a2)
	{
		return ((::System::Boolean(*)(::Class_1_A0B1A57C6DC75B0F*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_2DA142A440162124_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_37B66AFBA5D8D591(::Class_2_208CC9941471731A_963* a1, ::Class_1_33FA60A0452137B1_Struct_2_04E70A334141E598_11& a2)
	{
		return ((::System::Boolean(*)(::Class_2_208CC9941471731A_963*, ::Class_1_33FA60A0452137B1_Struct_2_04E70A334141E598_11&))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_37B66AFBA5D8D591_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_416A68392A038D14(::Struct_2_4561C29B96A890D9 a1)
	{
		return ((::System::Boolean(*)(::Struct_2_4561C29B96A890D9))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_416A68392A038D14_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_200CDBC2C45CE60C(::Class_1_E081FCEC8F87505A* a1)
	{
		return ((::System::Boolean(*)(::Class_1_E081FCEC8F87505A*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_200CDBC2C45CE60C_OFFSET))(a1);
	}

	static ::System::Void Method_1_243FE6C3FEE914F1(::System::Boolean a1, ::Struct_2_B6A3FA7992F9F37E_2 a2, ::System::Action* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::System::Boolean, ::Struct_2_B6A3FA7992F9F37E_2, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_243FE6C3FEE914F1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_EECA10D7EF2EEF04(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_EECA10D7EF2EEF04_OFFSET))(a1);
	}

	static ::System::Void Method_1_C362773AD16ADA69(::System::Action_1<::System::Action*>* a1, ::System::Int32 a2, ::System::Action* a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::System::Action_1<::System::Action*>*, ::System::Int32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_C362773AD16ADA69_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_4AADAF19CDCB660E()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_4AADAF19CDCB660E_OFFSET))();
	}

	static ::System::Void Method_1_F07F32F6824B6423_1(::Class_1_516A565475879095<::System::UInt32, ::System::Int32>* a1, ::Class_3_F97B015544BE936B* a2)
	{
		return ((::System::Void(*)(::Class_1_516A565475879095<::System::UInt32, ::System::Int32>*, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_F07F32F6824B6423_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_7B448D3A6DF5ACCA(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_7B448D3A6DF5ACCA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_64139B4C7E2EBBFA(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_64139B4C7E2EBBFA_OFFSET))(a1);
	}

	static ::System::Void Method_1_DE6CD40296DEC157_1(::Class_3_C2426F57DB2A743B*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_C2426F57DB2A743B*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_DE6CD40296DEC157_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_76E715A0F04C9C5B(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_76E715A0F04C9C5B_OFFSET))(a1);
	}

	static ::System::Void Method_1_4608810E9806E791(::Class_1_E081FCEC8F87505A* a1, ::System::Action_1<::System::Action*>* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::Class_1_E081FCEC8F87505A*, ::System::Action_1<::System::Action*>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_4608810E9806E791_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_217F0E60F8D1D97A(::System::Int32 a1)
	{
		return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_217F0E60F8D1D97A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_5825ECD6DD9C3215(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_5825ECD6DD9C3215_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_050F8D3ADC730BDA(::Class_3_C2426F57DB2A743B* a1)
	{
		return ((::System::Boolean(*)(::Class_3_C2426F57DB2A743B*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_050F8D3ADC730BDA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_40120439DEA27193(::Struct_2_4561C29B96A890D9 a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Boolean(*)(::Struct_2_4561C29B96A890D9, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_40120439DEA27193_OFFSET))(a1, a2, a3);
	}

	static ::Class_3_C2426F57DB2A743B* Method_1_4F0DE9BF9ABACB42(::MoleMole::EntityHandle a1)
	{
		return ((::Class_3_C2426F57DB2A743B*(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_4F0DE9BF9ABACB42_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E6747474F84B139E_1(::Class_3_C2426F57DB2A743B* a1)
	{
		return ((::System::Boolean(*)(::Class_3_C2426F57DB2A743B*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_E6747474F84B139E_1_OFFSET))(a1);
	}

	static ::System::String* Method_1_C4F46877E8289260_1(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_C4F46877E8289260_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D990A8C70081F8B2()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_D990A8C70081F8B2_OFFSET))();
	}

	static ::System::Boolean Method_1_94A347BC077AF668(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_94A347BC077AF668_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_924E730A1CBC1287(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_924E730A1CBC1287_OFFSET))(a1);
	}

	static ::System::Void Method_1_9FD586A83CE58DFE(::Class_3_C2426F57DB2A743B*& a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_3_C2426F57DB2A743B*&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_9FD586A83CE58DFE_OFFSET))(a1, a2);
	}

	static ::MoleMole::UIActivePropsWindowContext* Method_1_026B1AF4C91E87B4(::MoleMole::UIActivePropsWindowContext* a1)
	{
		return ((::MoleMole::UIActivePropsWindowContext*(*)(::MoleMole::UIActivePropsWindowContext*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_026B1AF4C91E87B4_OFFSET))(a1);
	}

	static ::System::Void Method_1_9FD586A83CE58DFE_1(::Class_3_C2426F57DB2A743B*& a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_3_C2426F57DB2A743B*&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_9FD586A83CE58DFE_1_OFFSET))(a1, a2);
	}

	static ::Class_3_FDC05815C552A565* Method_1_E6790DC973D37923()
	{
		return ((::Class_3_FDC05815C552A565*(*)())((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_METHOD_1_E6790DC973D37923_OFFSET))();
	}
};
