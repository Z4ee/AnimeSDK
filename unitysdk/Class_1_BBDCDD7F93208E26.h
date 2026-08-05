#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_65593FAB9D2A0EF1_Enum_3_F25456077B59DF83.h"
#include "unitysdk/Enum_3_F1DF75B9FFBC1A27.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"
#include "unitysdk/Struct_2_E5666136A508B56A.h"
#include "unitysdk/System/Object.h"

class Class_1_02F52C677A3937D5;
class Class_1_077219EE5F3510E3;
class Class_1_13897C6414229108;
class Class_1_6205A6C2B1CC7E97;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_2A56CCCB20A346FA;
class Class_2_9B5CFD640DDF761C_3;
class Class_3_816015CAFD8353F7;
class Class_3_97F99D2BC471ECEC;
class Class_3_F25C0BD4B2C92757;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BBDCDD7F93208E26_METHOD_1_012E43180BC4474F_OFFSET UNITYSDK_OFFSET(0xF844390)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_09B8F368BEF6ADA5_OFFSET UNITYSDK_OFFSET(0xF845450)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_1198AAFA77E68E6E_OFFSET UNITYSDK_OFFSET(0xF842FF0)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_11A539FB1D62D9C0_OFFSET UNITYSDK_OFFSET(0xF8460D0)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_19B911E6848D24CA_OFFSET UNITYSDK_OFFSET(0xF844EE0)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xF843FE0)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xF843B70)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_2FF85733DB45EE9C_OFFSET UNITYSDK_OFFSET(0xF844BF0)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_33DA1CE058BA7A0A_1_OFFSET UNITYSDK_OFFSET(0xF844830)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_33DA1CE058BA7A0A_2_OFFSET UNITYSDK_OFFSET(0xF844B60)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_33DA1CE058BA7A0A_OFFSET UNITYSDK_OFFSET(0xF844310)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xF8448C0)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_391A84BCD9F51317_2_OFFSET UNITYSDK_OFFSET(0xF8453A0)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_391A84BCD9F51317_3_OFFSET UNITYSDK_OFFSET(0xF8453F0)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_391A84BCD9F51317_4_OFFSET UNITYSDK_OFFSET(0xF846080)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xF8440E0)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_3D3391E10B296328_OFFSET UNITYSDK_OFFSET(0xF845DE0)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_3DB5F68CB0570825_OFFSET UNITYSDK_OFFSET(0xF845C20)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0xF844CB0)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_4DB9800DEB145F5D_OFFSET UNITYSDK_OFFSET(0xF843E10)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_5BA5DA8B69498A1E_OFFSET UNITYSDK_OFFSET(0xF844460)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_83A6FE948E0549BB_OFFSET UNITYSDK_OFFSET(0xF844910)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_8D16DF5650796DB5_OFFSET UNITYSDK_OFFSET(0xF843BD0)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_8E89BE9866A768ED_OFFSET UNITYSDK_OFFSET(0xF845AB0)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_8FD0952225841B46_OFFSET UNITYSDK_OFFSET(0xF844040)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xF8454D0)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_95ADE8ED590C5559_OFFSET UNITYSDK_OFFSET(0xF846140)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_A27B18660EC868DB_OFFSET UNITYSDK_OFFSET(0xF8451E0)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_A3042EE0C88FB010_OFFSET UNITYSDK_OFFSET(0xF8450A0)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_A86A455D6AB5B836_OFFSET UNITYSDK_OFFSET(0xF843DB0)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_AE66D05B2E2EA8BB_OFFSET UNITYSDK_OFFSET(0xF844D50)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_BB7992808E7DFB2C_OFFSET UNITYSDK_OFFSET(0xF845440)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_C101CD8C5CF89A5A_OFFSET UNITYSDK_OFFSET(0xF844280)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0xF845E80)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_CF7605F84ECDA97C_OFFSET UNITYSDK_OFFSET(0xF845530)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_DE9B241D58964D4D_OFFSET UNITYSDK_OFFSET(0xF845300)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xF846320)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xF8440D0)
#define CLASS_1_BBDCDD7F93208E26_METHOD_1_F9DB1E8573354AB9_OFFSET UNITYSDK_OFFSET(0xF844130)
#define CLASS_1_BBDCDD7F93208E26__CTOR_OFFSET UNITYSDK_OFFSET(0xF842AA0)

inline static constexpr unsigned int Class_1_BBDCDD7F93208E26_TypeDefinitionIndex = 59884;

class Class_1_BBDCDD7F93208E26 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_1_20; // 0x10
	::System::Collections::Generic::List_1<::Class_1_02F52C677A3937D5*>* Field_1_1; // 0x18
	::System::Action_1<::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>*>* Field_1_13; // 0x20
	::System::Action_1<::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>*>* Field_1_19; // 0x28
	::Class_3_97F99D2BC471ECEC* Field_1_15; // 0x30
	::MoleMole::Battle::Entity* Field_1_5; // 0x38
	::Class_2_9B5CFD640DDF761C_3* Field_1_17; // 0x40
	::System::Collections::Generic::List_1<::Struct_2_E5666136A508B56A>* Field_1_18; // 0x48
	::Class_3_F25C0BD4B2C92757* Field_1_14; // 0x50
	::System::Action_1<::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>*>* Field_1_12; // 0x58
	::Class_3_816015CAFD8353F7* Field_1_8; // 0x60
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_9; // 0x68
	::Class_1_13897C6414229108* Field_1_7; // 0x70
	::Enum_3_F1DF75B9FFBC1A27 Field_1_10; // 0x78
	::MoleMole::Config::AidAttackType Field_1_0; // 0x7C
	::System::Boolean Field_1_22; // 0x80
	::System::Boolean Field_1_11; // 0x81
	::System::Boolean Field_1_16; // 0x82
	::System::Int32 Field_1_23; // 0x84
	::System::Boolean Field_1_6; // 0x88
	::System::Boolean Field_1_21; // 0x89
	::System::Int32 Field_1_4; // 0x8C

	::System::Void _ctor(::Class_2_9B5CFD640DDF761C_3* a1, ::Class_3_816015CAFD8353F7* a2, ::Class_2_14986121AA61AD99* a3, ::Class_1_077219EE5F3510E3* a4, ::Class_1_6205A6C2B1CC7E97* a5, ::Enum_3_F1DF75B9FFBC1A27 a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9B5CFD640DDF761C_3*, ::Class_3_816015CAFD8353F7*, ::Class_2_14986121AA61AD99*, ::Class_1_077219EE5F3510E3*, ::Class_1_6205A6C2B1CC7E97*, ::Enum_3_F1DF75B9FFBC1A27, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_8D16DF5650796DB5(::Class_3_97F99D2BC471ECEC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_97F99D2BC471ECEC*))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_8D16DF5650796DB5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_1_8FD0952225841B46()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_8FD0952225841B46_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_F9DB1E8573354AB9(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_F9DB1E8573354AB9_OFFSET))(this, a1);
	}

	::System::String* Method_1_C101CD8C5CF89A5A()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_C101CD8C5CF89A5A_OFFSET))(this);
	}

	::MoleMole::Config::ConfigPosRot* Method_1_33DA1CE058BA7A0A()
	{
		return ((::MoleMole::Config::ConfigPosRot*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_33DA1CE058BA7A0A_OFFSET))(this);
	}

	::System::Void Method_1_012E43180BC4474F(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_012E43180BC4474F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5BA5DA8B69498A1E(::System::Collections::Generic::HashSet_1<::System::String*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_5BA5DA8B69498A1E_OFFSET))(this, a1);
	}

	::MoleMole::Config::ConfigPosRot* Method_1_33DA1CE058BA7A0A_1()
	{
		return ((::MoleMole::Config::ConfigPosRot*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_33DA1CE058BA7A0A_1_OFFSET))(this);
	}

	::System::Boolean Method_1_A86A455D6AB5B836(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_A86A455D6AB5B836_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_1_83A6FE948E0549BB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_83A6FE948E0549BB_OFFSET))(this, a1);
	}

	::MoleMole::Config::ConfigPosRot* Method_1_33DA1CE058BA7A0A_2()
	{
		return ((::MoleMole::Config::ConfigPosRot*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_33DA1CE058BA7A0A_2_OFFSET))(this);
	}

	::System::Void Method_1_2FF85733DB45EE9C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_2FF85733DB45EE9C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_42C5BADE1C9EFC80()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_42C5BADE1C9EFC80_OFFSET))(this);
	}

	::System::Void Method_1_AE66D05B2E2EA8BB(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4, ::MoleMole::Config::ConfigPosRot* a5, ::MoleMole::Config::ConfigPosRot* a6, ::MoleMole::Config::ConfigPosRot* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Int32, ::MoleMole::Config::ConfigPosRot*, ::MoleMole::Config::ConfigPosRot*, ::MoleMole::Config::ConfigPosRot*))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_AE66D05B2E2EA8BB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_1_A3042EE0C88FB010()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_A3042EE0C88FB010_OFFSET))(this);
	}

	::System::Void Method_1_A27B18660EC868DB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_A27B18660EC868DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_391A84BCD9F51317_2_OFFSET))(this);
	}

	::System::Boolean Method_1_4DB9800DEB145F5D(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_4DB9800DEB145F5D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_391A84BCD9F51317_3_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Method_1_BB7992808E7DFB2C()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_BB7992808E7DFB2C_OFFSET))(this);
	}

	::System::Int32 Method_1_09B8F368BEF6ADA5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_09B8F368BEF6ADA5_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_1_19B911E6848D24CA(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_19B911E6848D24CA_OFFSET))(this, a1);
	}

	::System::Void Method_1_1198AAFA77E68E6E(::System::Boolean a1, ::System::UInt32 a2, ::System::Collections::Generic::HashSet_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_1198AAFA77E68E6E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8E89BE9866A768ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_8E89BE9866A768ED_OFFSET))(this);
	}

	::System::Void Method_1_CF7605F84ECDA97C(::System::Boolean a1, ::System::UInt32 a2, ::System::Collections::Generic::HashSet_1<::System::String*>* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_CF7605F84ECDA97C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_3D3391E10B296328()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_3D3391E10B296328_OFFSET))(this);
	}

	::System::Void Method_1_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_CCFD131833AE484B_OFFSET))(this);
	}

	::System::Void Method_1_3DB5F68CB0570825(::Class_2_65593FAB9D2A0EF1_Enum_3_F25456077B59DF83 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_65593FAB9D2A0EF1_Enum_3_F25456077B59DF83))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_3DB5F68CB0570825_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_391A84BCD9F51317_4_OFFSET))(this);
	}

	::System::Void Method_1_11A539FB1D62D9C0(::System::Action_1<::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>*>* a1, ::System::Action_1<::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>*>* a2, ::System::Action_1<::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>*>*, ::System::Action_1<::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>*>*, ::System::Action_1<::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_11A539FB1D62D9C0_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_1_DE9B241D58964D4D(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_DE9B241D58964D4D_OFFSET))(a1, a2);
	}

	::System::Void Method_1_95ADE8ED590C5559(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_95ADE8ED590C5559_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDCDD7F93208E26_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}
};
