#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Enum_3_F00DC819D834EFD2.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/Struct_2_2CEE35A1FF4AE199.h"
#include "unitysdk/Struct_2_5119F8C34F295015.h"
#include "unitysdk/Struct_2_54FCE7C27CC6FA7F.h"
#include "unitysdk/Struct_2_733B8EC4B9916061.h"
#include "unitysdk/Struct_2_9F85650CFFBE9F44.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_207206F45DEB584F;
class Class_1_3A46F934F31B990A;
class Class_1_6B8B8EFC8C59DAD1;
class Class_1_A27C3E06CB3501A8;
class Class_1_CEBEFC8BE3C58B6D;
class Class_1_D65512A83CF70AB7;
namespace MoleMole { class UIMainCityChatPlayWidgetController; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class DefaultFrameTwoShapeConfig; }
namespace MoleMole::Cameras { class VariableCameraConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_2_02D73D6F71BFD29F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11383A30)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_02BCA75037596595_OFFSET UNITYSDK_OFFSET(0x113891D0)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_10BA33E5106447FB_OFFSET UNITYSDK_OFFSET(0x113870C0)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_13523FD4EA5101C4_OFFSET UNITYSDK_OFFSET(0x11389FC0)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_173FD135F59C6273_OFFSET UNITYSDK_OFFSET(0x11388140)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x1138A470)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x11384250)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_283C25FC229B03DF_OFFSET UNITYSDK_OFFSET(0x11384950)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_2FA8AE0519AC7829_OFFSET UNITYSDK_OFFSET(0x11383B20)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_306DAC2D59D4D5C7_OFFSET UNITYSDK_OFFSET(0x11389BB0)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_30807F982F8F902A_OFFSET UNITYSDK_OFFSET(0x11389D20)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_354231F5E00AF9B6_OFFSET UNITYSDK_OFFSET(0x11388E40)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_3A0CD6F3468A02E3_OFFSET UNITYSDK_OFFSET(0x11383DA0)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_3CAB3F134E5CEF52_OFFSET UNITYSDK_OFFSET(0x11387EA0)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_493E793FA8ED892B_OFFSET UNITYSDK_OFFSET(0x11388B20)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_5CEC4607322705E5_1_OFFSET UNITYSDK_OFFSET(0x113886C0)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x11383D50)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_5DFE3579DF424BD9_OFFSET UNITYSDK_OFFSET(0x113840E0)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_5F40A650E3C29243_OFFSET UNITYSDK_OFFSET(0x11389980)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_6338CB48D171EC2D_OFFSET UNITYSDK_OFFSET(0x1138A8A0)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0x11388060)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_6CD0070896D25F1D_OFFSET UNITYSDK_OFFSET(0x11388D30)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_77ADDD74D0B4B1EB_OFFSET UNITYSDK_OFFSET(0x11384730)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_7E9AC3FFDA4606D5_OFFSET UNITYSDK_OFFSET(0x11386F50)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_861CC293077D00AA_OFFSET UNITYSDK_OFFSET(0x11384F40)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x113844B0)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_8C52CCF09BB2DB2F_OFFSET UNITYSDK_OFFSET(0x11385EA0)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x11388D40)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_90B44BD0ECA17820_OFFSET UNITYSDK_OFFSET(0x11384030)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1138A4D0)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_99AC52A5C48A589D_OFFSET UNITYSDK_OFFSET(0x11389C60)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_9AC88009E20BF876_OFFSET UNITYSDK_OFFSET(0x113842B0)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_A00EAD174EF85E42_OFFSET UNITYSDK_OFFSET(0x11388640)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_A16E7856498E5381_OFFSET UNITYSDK_OFFSET(0x11386ED0)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_A2B367B0851E24FC_OFFSET UNITYSDK_OFFSET(0x11384790)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_A2B4FB217768416F_OFFSET UNITYSDK_OFFSET(0x113893C0)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_AC8637899E0F42C6_OFFSET UNITYSDK_OFFSET(0x1138A520)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_B09659D9C80B2513_OFFSET UNITYSDK_OFFSET(0x11384AF0)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_BC181EA5CEC43C39_OFFSET UNITYSDK_OFFSET(0x1138A5B0)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_BFC5623CCD8DAEAB_OFFSET UNITYSDK_OFFSET(0x11386FE0)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_C015690E1D90E56F_OFFSET UNITYSDK_OFFSET(0x11388EF0)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x113881F0)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x11389D10)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_C7FBDF23D94CBF9A_OFFSET UNITYSDK_OFFSET(0x11388050)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11388760)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1138A310)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x113846E0)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_CD0F559E399AB5D2_OFFSET UNITYSDK_OFFSET(0x1138A0B0)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_CDEB5A211F02C596_1_OFFSET UNITYSDK_OFFSET(0x11387930)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_CDEB5A211F02C596_2_OFFSET UNITYSDK_OFFSET(0x11389140)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_CDEB5A211F02C596_OFFSET UNITYSDK_OFFSET(0x11387BE0)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0x11388200)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_CEEA8717F1571454_OFFSET UNITYSDK_OFFSET(0x11383CD0)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_D34465BA9D69BB29_OFFSET UNITYSDK_OFFSET(0x11389700)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_D91427AB3E4D4A0E_OFFSET UNITYSDK_OFFSET(0x11387C70)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_E23A4DD35F635FCD_OFFSET UNITYSDK_OFFSET(0x1138A360)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_E35B52F94ADD3569_OFFSET UNITYSDK_OFFSET(0x11385F60)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_EBDEB81FA3C1F4D1_OFFSET UNITYSDK_OFFSET(0x113879E0)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_EF6E535007F18893_OFFSET UNITYSDK_OFFSET(0x113887C0)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x113893B0)
#define CLASS_2_02D73D6F71BFD29F_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x11388710)
#define CLASS_2_02D73D6F71BFD29F_ONCREATE_OFFSET UNITYSDK_OFFSET(0x11383A80)
#define CLASS_2_02D73D6F71BFD29F__CTOR_OFFSET UNITYSDK_OFFSET(0x11383BA0)

inline static constexpr unsigned int Class_2_02D73D6F71BFD29F_TypeDefinitionIndex = 75565;

class Class_2_02D73D6F71BFD29F : public ::Foundation::SingletonDisposable_1<::Class_2_02D73D6F71BFD29F*>
{
public:
	// static const ::System::Single Field_2_1; // 0x0
	::System::Collections::Generic::Queue_1<::System::Func_1<::System::Boolean>*>* Field_2_20; // 0x10
	::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::String*>* Field_2_8; // 0x18
	::System::Action_1<::System::Boolean>* Field_2_13; // 0x20
	::System::Action* Field_2_12; // 0x28
	::System::Action_1<::System::Boolean>* Field_2_14; // 0x30
	::MoleMole::UIMainCityChatPlayWidgetController* Field_2_10; // 0x38
	::Struct_2_5119F8C34F295015 Field_2_7; // 0x40
	::System::String* Field_2_9; // 0xB8
	::Class_1_207206F45DEB584F* Field_2_18; // 0xC0
	::Class_1_CEBEFC8BE3C58B6D* Field_2_11; // 0xC8
	::System::Action* Field_2_3; // 0xD0
	::Class_1_A27C3E06CB3501A8* Field_2_19; // 0xD8
	::System::Boolean Field_2_0; // 0xE0
	::System::Boolean Field_2_4; // 0xE1
	::System::Int32 Field_2_2; // 0xE4
	::System::UInt32 Field_2_21; // 0xE8
	::System::UInt32 Field_2_22; // 0xEC
	::System::Int32 Field_2_15; // 0xF0
	::System::Int32 Field_2_6; // 0xF4
	::System::Boolean Field_2_5; // 0xF8
	::System::Boolean Field_2_17; // 0xF9
	::System::Boolean Field_2_16; // 0xFA

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_CEEA8717F1571454(::Class_1_6B8B8EFC8C59DAD1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6B8B8EFC8C59DAD1*))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_CEEA8717F1571454_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Void Method_2_3A0CD6F3468A02E3(::Class_1_3A46F934F31B990A* a1, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a2, ::PipelineCamera::FinalCameraData a3, ::Enum_3_F00DC819D834EFD2 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A46F934F31B990A*, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*, ::PipelineCamera::FinalCameraData, ::Enum_3_F00DC819D834EFD2))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_3A0CD6F3468A02E3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	static ::MoleMole::Cameras::VariableCameraConfig* Method_2_9AC88009E20BF876()
	{
		return ((::MoleMole::Cameras::VariableCameraConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_9AC88009E20BF876_OFFSET))();
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_77ADDD74D0B4B1EB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_77ADDD74D0B4B1EB_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A2B367B0851E24FC(::System::Int32 a1, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a2, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a3, ::System::String* a4, ::Enum_3_F00DC819D834EFD2 a5, ::System::Nullable_1<::Struct_2_733B8EC4B9916061> a6, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a7, ::MoleMole::Battle::Entity* a8)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::String*, ::Enum_3_F00DC819D834EFD2, ::System::Nullable_1<::Struct_2_733B8EC4B9916061>, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_A2B367B0851E24FC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::String* Method_2_8C52CCF09BB2DB2F(::Struct_2_9F85650CFFBE9F44 a1, ::Struct_2_9F85650CFFBE9F44 a2, ::System::String* a3)
	{
		return ((::System::String*(*)(::Struct_2_9F85650CFFBE9F44, ::Struct_2_9F85650CFFBE9F44, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_8C52CCF09BB2DB2F_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_2_E35B52F94ADD3569(::Enum_3_F00DC819D834EFD2 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F00DC819D834EFD2, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_E35B52F94ADD3569_OFFSET))(this, a1, a2, a3, a4);
	}

	::Struct_2_733B8EC4B9916061 Method_2_BFC5623CCD8DAEAB(::Class_1_3A46F934F31B990A* a1)
	{
		return ((::Struct_2_733B8EC4B9916061(*)(::PVOID, ::Class_1_3A46F934F31B990A*))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_BFC5623CCD8DAEAB_OFFSET))(this, a1);
	}

	::System::Void Method_2_10BA33E5106447FB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_10BA33E5106447FB_OFFSET))(this, a1);
	}

	::System::Void Method_2_CDEB5A211F02C596(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_CDEB5A211F02C596_OFFSET))(this, a1);
	}

	::System::Void Method_2_D91427AB3E4D4A0E(::Enum_3_F00DC819D834EFD2 a1, ::PipelineCamera::FinalCameraData a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F00DC819D834EFD2, ::PipelineCamera::FinalCameraData))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_D91427AB3E4D4A0E_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_3CAB3F134E5CEF52()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_3CAB3F134E5CEF52_OFFSET))();
	}

	::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::String*>* Method_2_C7FBDF23D94CBF9A()
	{
		return ((::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_C7FBDF23D94CBF9A_OFFSET))(this);
	}

	::System::Void Method_2_664C062015F0C2D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_664C062015F0C2D3_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_CEA32FF190776922()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_CEA32FF190776922_OFFSET))(this);
	}

	::System::Boolean Method_2_A00EAD174EF85E42(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_A00EAD174EF85E42_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_5CEC4607322705E5_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_5CEC4607322705E5_1_OFFSET))(this);
	}

	::Class_1_207206F45DEB584F* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_207206F45DEB584F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_2_173FD135F59C6273(::Class_1_CEBEFC8BE3C58B6D* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CEBEFC8BE3C58B6D*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_173FD135F59C6273_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_EF6E535007F18893(::Class_1_3A46F934F31B990A* a1, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a2, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a3, ::System::String* a4, ::Enum_3_F00DC819D834EFD2 a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A46F934F31B990A*, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::String*, ::Enum_3_F00DC819D834EFD2))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_EF6E535007F18893_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_2_493E793FA8ED892B(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean a3, ::Struct_2_2CEE35A1FF4AE199& a4)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::Struct_2_2CEE35A1FF4AE199&))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_493E793FA8ED892B_OFFSET))(a1, a2, a3, a4);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_2_2FA8AE0519AC7829()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_2FA8AE0519AC7829_OFFSET))(this);
	}

	::System::Void Method_2_CDEB5A211F02C596_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_CDEB5A211F02C596_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_6CD0070896D25F1D(::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_6CD0070896D25F1D_OFFSET))(this, a1);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_5119F8C34F295015 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_5119F8C34F295015))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::Struct_2_733B8EC4B9916061 Method_2_354231F5E00AF9B6(::System::String* a1, ::System::Nullable_1<::Struct_2_733B8EC4B9916061> a2)
	{
		return ((::Struct_2_733B8EC4B9916061(*)(::PVOID, ::System::String*, ::System::Nullable_1<::Struct_2_733B8EC4B9916061>))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_354231F5E00AF9B6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C015690E1D90E56F(::Enum_3_F00DC819D834EFD2 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F00DC819D834EFD2, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_C015690E1D90E56F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CDEB5A211F02C596_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_CDEB5A211F02C596_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_02BCA75037596595(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_02BCA75037596595_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_A2B4FB217768416F(::System::Int32 a1, ::System::String* a2, ::MoleMole::Battle::Entity* a3, ::System::String* a4, ::System::Int32 a5, ::Struct_2_54FCE7C27CC6FA7F a6, ::MoleMole::Battle::Entity* a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32, ::Struct_2_54FCE7C27CC6FA7F, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_A2B4FB217768416F_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_2_5DFE3579DF424BD9(::System::Int32 a1, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a2, ::PipelineCamera::FinalCameraData a3, ::Enum_3_F00DC819D834EFD2 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*, ::PipelineCamera::FinalCameraData, ::Enum_3_F00DC819D834EFD2))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_5DFE3579DF424BD9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_5F40A650E3C29243(::System::Int32 a1, ::System::String* a2, ::MoleMole::Battle::Entity* a3, ::System::String* a4, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_5F40A650E3C29243_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_D34465BA9D69BB29(::System::Int32 a1, ::System::String* a2, ::MoleMole::Battle::Entity* a3, ::System::String* a4, ::System::Int32 a5, ::Struct_2_54FCE7C27CC6FA7F a6, ::MoleMole::Battle::Entity* a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32, ::Struct_2_54FCE7C27CC6FA7F, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_D34465BA9D69BB29_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_306DAC2D59D4D5C7(::Enum_3_F00DC819D834EFD2 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F00DC819D834EFD2, ::System::UInt32, ::System::UInt32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_306DAC2D59D4D5C7_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_90B44BD0ECA17820(::Class_1_3A46F934F31B990A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A46F934F31B990A*))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_90B44BD0ECA17820_OFFSET))(this, a1);
	}

	::System::Void Method_2_EBDEB81FA3C1F4D1(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_EBDEB81FA3C1F4D1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_99AC52A5C48A589D(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_99AC52A5C48A589D_OFFSET))(this, a1);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_2_30807F982F8F902A(::Class_1_6B8B8EFC8C59DAD1* a1, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a2, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a3, ::System::String* a4, ::Enum_3_F00DC819D834EFD2 a5, ::MoleMole::Battle::Entity* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6B8B8EFC8C59DAD1*, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::String*, ::Enum_3_F00DC819D834EFD2, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_30807F982F8F902A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_1_CEBEFC8BE3C58B6D* Method_2_7E9AC3FFDA4606D5()
	{
		return ((::Class_1_CEBEFC8BE3C58B6D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_7E9AC3FFDA4606D5_OFFSET))(this);
	}

	::System::Boolean Method_2_283C25FC229B03DF(::System::Int32 a1, ::System::String* a2, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_283C25FC229B03DF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_13523FD4EA5101C4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_13523FD4EA5101C4_OFFSET))(this, a1);
	}

	::System::Void Method_2_CD0F559E399AB5D2(::System::Int32 a1, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a2, ::MoleMole::Battle::Entity* a3, ::System::String* a4, ::System::Int32 a5, ::Enum_3_F00DC819D834EFD2 a6, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32, ::Enum_3_F00DC819D834EFD2, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_CD0F559E399AB5D2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_B09659D9C80B2513(::Enum_3_F00DC819D834EFD2 a1, ::MoleMole::Battle::Entity* a2, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a3, ::System::String* a4, ::System::Nullable_1<::Struct_2_733B8EC4B9916061> a5)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F00DC819D834EFD2, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::String*, ::System::Nullable_1<::Struct_2_733B8EC4B9916061>))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_B09659D9C80B2513_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_E23A4DD35F635FCD(::Class_1_3A46F934F31B990A* a1, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a2, ::MoleMole::Battle::Entity* a3, ::System::String* a4, ::System::Int32 a5, ::Enum_3_F00DC819D834EFD2 a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A46F934F31B990A*, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32, ::Enum_3_F00DC819D834EFD2))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_E23A4DD35F635FCD_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_2_AC8637899E0F42C6(::Class_1_207206F45DEB584F* a1, ::Class_1_A27C3E06CB3501A8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_207206F45DEB584F*, ::Class_1_A27C3E06CB3501A8*))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_AC8637899E0F42C6_OFFSET))(this, a1, a2);
	}

	static ::MoleMole::Cameras::DefaultFrameTwoShapeConfig* Method_2_A16E7856498E5381(::System::String* a1)
	{
		return ((::MoleMole::Cameras::DefaultFrameTwoShapeConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_A16E7856498E5381_OFFSET))(a1);
	}

	::System::Void Method_2_861CC293077D00AA(::System::Int32 a1, ::System::String* a2, ::Struct_2_54FCE7C27CC6FA7F a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::Struct_2_54FCE7C27CC6FA7F))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_861CC293077D00AA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_BC181EA5CEC43C39(::Class_1_6B8B8EFC8C59DAD1* a1, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a2, ::MoleMole::Battle::Entity* a3, ::System::String* a4, ::System::Int32 a5, ::Enum_3_F00DC819D834EFD2 a6, ::MoleMole::Battle::Entity* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6B8B8EFC8C59DAD1*, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32, ::Enum_3_F00DC819D834EFD2, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_BC181EA5CEC43C39_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_6338CB48D171EC2D(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_METHOD_2_6338CB48D171EC2D_OFFSET))(this, a1, a2);
	}
};
