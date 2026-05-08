#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Enum_3_F00DC819D834EFD2.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/Struct_2_2CEE35A1FF4AE199.h"
#include "unitysdk/Struct_2_5119F8C34F295015.h"
#include "unitysdk/Struct_2_733B8EC4B9916061.h"
#include "unitysdk/Struct_2_9F85650CFFBE9F44.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_207206F45DEB584F;
class Class_1_3A46F934F31B990A;
class Class_1_73F7DED90F9FA901;
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

#define CLASS_2_ACE9F07052632BA1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10DCE480)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_02BCA75037596595_OFFSET UNITYSDK_OFFSET(0x10DD4BB0)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_05679872695EE5DE_OFFSET UNITYSDK_OFFSET(0x10DCFC30)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_10BA33E5106447FB_OFFSET UNITYSDK_OFFSET(0x10DD4240)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_13523FD4EA5101C4_OFFSET UNITYSDK_OFFSET(0x10DD3A00)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_173FD135F59C6273_OFFSET UNITYSDK_OFFSET(0x10DCFB80)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x10DD3C60)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x10DD11A0)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_283C25FC229B03DF_OFFSET UNITYSDK_OFFSET(0x10DD24F0)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_2FA8AE0519AC7829_OFFSET UNITYSDK_OFFSET(0x10DCE570)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_354231F5E00AF9B6_OFFSET UNITYSDK_OFFSET(0x10DD31C0)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_3A0CD6F3468A02E3_OFFSET UNITYSDK_OFFSET(0x10DCE700)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_416DF51B59CCB5FB_OFFSET UNITYSDK_OFFSET(0x10DCEE10)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0x10DD2340)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_493E793FA8ED892B_OFFSET UNITYSDK_OFFSET(0x10DCF350)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_544C8251E16F2754_OFFSET UNITYSDK_OFFSET(0x10DCF090)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x10DD3CC0)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_5DFE3579DF424BD9_OFFSET UNITYSDK_OFFSET(0x10DCEA40)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_5F40A650E3C29243_OFFSET UNITYSDK_OFFSET(0x10DD37F0)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_6338CB48D171EC2D_OFFSET UNITYSDK_OFFSET(0x10DCF560)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_64C034C6442E8F81_OFFSET UNITYSDK_OFFSET(0x10DD2C10)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_64F9290EE4F3FA15_OFFSET UNITYSDK_OFFSET(0x10DD0160)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0x10DD3B80)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_6CD0070896D25F1D_OFFSET UNITYSDK_OFFSET(0x10DD4DA0)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_77ADDD74D0B4B1EB_OFFSET UNITYSDK_OFFSET(0x10DCF600)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_7E9AC3FFDA4606D5_OFFSET UNITYSDK_OFFSET(0x10DD21C0)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x10DD3270)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_8C52CCF09BB2DB2F_OFFSET UNITYSDK_OFFSET(0x10DD0FA0)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_8C65E80245C58F5D_OFFSET UNITYSDK_OFFSET(0x10DCFC90)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x10DCF260)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_90B44BD0ECA17820_OFFSET UNITYSDK_OFFSET(0x10DCE990)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x10DCF210)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_99AC52A5C48A589D_OFFSET UNITYSDK_OFFSET(0x10DD2240)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_9AC88009E20BF876_OFFSET UNITYSDK_OFFSET(0x10DD3D10)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_9E9988CBA7F7999C_OFFSET UNITYSDK_OFFSET(0x10DD0D60)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_A00EAD174EF85E42_OFFSET UNITYSDK_OFFSET(0x10DD3B00)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_A16E7856498E5381_OFFSET UNITYSDK_OFFSET(0x10DD2140)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_BD4A9C99D7EDC06B_OFFSET UNITYSDK_OFFSET(0x10DD1200)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_BFC5623CCD8DAEAB_OFFSET UNITYSDK_OFFSET(0x10DCFAA0)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x10DD2A00)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x10DD4BA0)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_C7FBDF23D94CBF9A_OFFSET UNITYSDK_OFFSET(0x10DD4D90)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10DD3100)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x10DD3150)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10DD22F0)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_CD0F559E399AB5D2_OFFSET UNITYSDK_OFFSET(0x10DD35C0)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_CDEB5A211F02C596_1_OFFSET UNITYSDK_OFFSET(0x10DD1110)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_CDEB5A211F02C596_2_OFFSET UNITYSDK_OFFSET(0x10DD4B00)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_CDEB5A211F02C596_OFFSET UNITYSDK_OFFSET(0x10DD1060)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0x10DCF660)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_CEEA8717F1571454_OFFSET UNITYSDK_OFFSET(0x10DD41C0)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_D26781BB4DC04F18_OFFSET UNITYSDK_OFFSET(0x10DD4A70)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_D91427AB3E4D4A0E_OFFSET UNITYSDK_OFFSET(0x10DCEB90)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_E23A4DD35F635FCD_OFFSET UNITYSDK_OFFSET(0x10DD34B0)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_EBDEB81FA3C1F4D1_OFFSET UNITYSDK_OFFSET(0x10DD2A10)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_EF6E535007F18893_OFFSET UNITYSDK_OFFSET(0x10DD2690)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10DD29F0)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_F09E2FC85882F429_OFFSET UNITYSDK_OFFSET(0x10DCFF50)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_F20FA1DA4846651D_OFFSET UNITYSDK_OFFSET(0x10DD3F10)
#define CLASS_2_ACE9F07052632BA1_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x10DCEDC0)
#define CLASS_2_ACE9F07052632BA1_ONCREATE_OFFSET UNITYSDK_OFFSET(0x10DCE4D0)
#define CLASS_2_ACE9F07052632BA1__CTOR_OFFSET UNITYSDK_OFFSET(0x10DCE5E0)

inline static constexpr unsigned int Class_2_ACE9F07052632BA1_TypeDefinitionIndex = 53284;

class Class_2_ACE9F07052632BA1 : public ::Foundation::SingletonDisposable_1<::Class_2_ACE9F07052632BA1*>
{
public:
	// static const ::System::Single Field_2_1; // 0x0
	::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::String*>* Field_2_8; // 0x10
	::System::Action_1<::System::Boolean>* Field_2_13; // 0x18
	::Class_1_207206F45DEB584F* Field_2_18; // 0x20
	::System::String* Field_2_9; // 0x28
	::System::Collections::Generic::Queue_1<::System::Func_1<::System::Boolean>*>* Field_2_19; // 0x30
	::MoleMole::UIMainCityChatPlayWidgetController* Field_2_10; // 0x38
	::Class_1_CEBEFC8BE3C58B6D* Field_2_11; // 0x40
	::System::Action* Field_2_3; // 0x48
	::Struct_2_5119F8C34F295015 Field_2_7; // 0x50
	::System::Action* Field_2_12; // 0xC0
	::System::Action_1<::System::Boolean>* Field_2_14; // 0xC8
	::System::Int32 Field_2_15; // 0xD0
	::System::Int32 Field_2_6; // 0xD4
	::System::Int32 Field_2_2; // 0xD8
	::System::Boolean Field_2_0; // 0xDC
	::System::Boolean Field_2_4; // 0xDD
	::System::Boolean Field_2_5; // 0xDE
	::System::Boolean Field_2_16; // 0xDF
	::System::Boolean Field_2_17; // 0xE0
	::System::UInt32 Field_2_20; // 0xE4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_3A0CD6F3468A02E3(::Class_1_3A46F934F31B990A* a1, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a2, ::PipelineCamera::FinalCameraData a3, ::Enum_3_F00DC819D834EFD2 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A46F934F31B990A*, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*, ::PipelineCamera::FinalCameraData, ::Enum_3_F00DC819D834EFD2))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_3A0CD6F3468A02E3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_D91427AB3E4D4A0E(::Enum_3_F00DC819D834EFD2 a1, ::PipelineCamera::FinalCameraData a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F00DC819D834EFD2, ::PipelineCamera::FinalCameraData))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_D91427AB3E4D4A0E_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_2_2FA8AE0519AC7829()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_2FA8AE0519AC7829_OFFSET))(this);
	}

	::Class_1_207206F45DEB584F* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_207206F45DEB584F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_2_416DF51B59CCB5FB(::Class_1_73F7DED90F9FA901* a1, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a2, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a3, ::System::String* a4, ::Enum_3_F00DC819D834EFD2 a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_73F7DED90F9FA901*, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::String*, ::Enum_3_F00DC819D834EFD2))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_416DF51B59CCB5FB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_5119F8C34F295015 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_5119F8C34F295015))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_493E793FA8ED892B(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean a3, ::Struct_2_2CEE35A1FF4AE199& a4)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::Struct_2_2CEE35A1FF4AE199&))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_493E793FA8ED892B_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_2_6338CB48D171EC2D(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_6338CB48D171EC2D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CEA32FF190776922()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_CEA32FF190776922_OFFSET))(this);
	}

	::Struct_2_733B8EC4B9916061 Method_2_BFC5623CCD8DAEAB(::Class_1_3A46F934F31B990A* a1)
	{
		return ((::Struct_2_733B8EC4B9916061(*)(::PVOID, ::Class_1_3A46F934F31B990A*))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_BFC5623CCD8DAEAB_OFFSET))(this, a1);
	}

	::System::Void Method_2_173FD135F59C6273(::Class_1_CEBEFC8BE3C58B6D* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CEBEFC8BE3C58B6D*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_173FD135F59C6273_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_05679872695EE5DE(::Class_1_207206F45DEB584F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_207206F45DEB584F*))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_05679872695EE5DE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8C65E80245C58F5D(::System::Int32 a1, ::System::String* a2, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a3, ::MoleMole::Battle::Entity* a4, ::System::String* a5, ::System::Int32 a6, ::Enum_3_F00DC819D834EFD2 a7, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a8)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32, ::Enum_3_F00DC819D834EFD2, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_8C65E80245C58F5D_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_9E9988CBA7F7999C(::Enum_3_F00DC819D834EFD2 a1, ::System::UInt32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F00DC819D834EFD2, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_9E9988CBA7F7999C_OFFSET))(this, a1, a2, a3);
	}

	static ::System::String* Method_2_8C52CCF09BB2DB2F(::Struct_2_9F85650CFFBE9F44 a1, ::Struct_2_9F85650CFFBE9F44 a2, ::System::String* a3)
	{
		return ((::System::String*(*)(::Struct_2_9F85650CFFBE9F44, ::Struct_2_9F85650CFFBE9F44, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_8C52CCF09BB2DB2F_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_2_CDEB5A211F02C596(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_CDEB5A211F02C596_OFFSET))(this, a1);
	}

	::System::Void Method_2_CDEB5A211F02C596_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_CDEB5A211F02C596_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_BD4A9C99D7EDC06B(::Enum_3_F00DC819D834EFD2 a1, ::System::UInt32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F00DC819D834EFD2, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_BD4A9C99D7EDC06B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_99AC52A5C48A589D(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_99AC52A5C48A589D_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_2_458DAEAB6170C584()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_458DAEAB6170C584_OFFSET))();
	}

	::System::Boolean Method_2_5DFE3579DF424BD9(::System::Int32 a1, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a2, ::PipelineCamera::FinalCameraData a3, ::Enum_3_F00DC819D834EFD2 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*, ::PipelineCamera::FinalCameraData, ::Enum_3_F00DC819D834EFD2))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_5DFE3579DF424BD9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_EF6E535007F18893(::Class_1_3A46F934F31B990A* a1, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a2, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a3, ::System::String* a4, ::Enum_3_F00DC819D834EFD2 a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A46F934F31B990A*, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::String*, ::Enum_3_F00DC819D834EFD2))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_EF6E535007F18893_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_64F9290EE4F3FA15(::System::Int32 a1, ::System::String* a2, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a3, ::Enum_3_F00DC819D834EFD2 a4, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*, ::Enum_3_F00DC819D834EFD2, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_64F9290EE4F3FA15_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_EBDEB81FA3C1F4D1(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_EBDEB81FA3C1F4D1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_544C8251E16F2754(::System::Int32 a1, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a2, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a3, ::System::String* a4, ::Enum_3_F00DC819D834EFD2 a5, ::System::Nullable_1<::Struct_2_733B8EC4B9916061> a6, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::String*, ::Enum_3_F00DC819D834EFD2, ::System::Nullable_1<::Struct_2_733B8EC4B9916061>, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_544C8251E16F2754_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_64C034C6442E8F81(::Enum_3_F00DC819D834EFD2 a1, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a2, ::System::String* a3, ::System::Nullable_1<::Struct_2_733B8EC4B9916061> a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F00DC819D834EFD2, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::String*, ::System::Nullable_1<::Struct_2_733B8EC4B9916061>))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_64C034C6442E8F81_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_77ADDD74D0B4B1EB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_77ADDD74D0B4B1EB_OFFSET))(this, a1);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_2_E23A4DD35F635FCD(::Class_1_3A46F934F31B990A* a1, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a2, ::MoleMole::Battle::Entity* a3, ::System::String* a4, ::System::Int32 a5, ::Enum_3_F00DC819D834EFD2 a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A46F934F31B990A*, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32, ::Enum_3_F00DC819D834EFD2))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_E23A4DD35F635FCD_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_5F40A650E3C29243(::System::Int32 a1, ::System::String* a2, ::MoleMole::Battle::Entity* a3, ::System::String* a4, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_5F40A650E3C29243_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Struct_2_733B8EC4B9916061 Method_2_354231F5E00AF9B6(::System::String* a1, ::System::Nullable_1<::Struct_2_733B8EC4B9916061> a2)
	{
		return ((::Struct_2_733B8EC4B9916061(*)(::PVOID, ::System::String*, ::System::Nullable_1<::Struct_2_733B8EC4B9916061>))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_354231F5E00AF9B6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_13523FD4EA5101C4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_13523FD4EA5101C4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A00EAD174EF85E42(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_A00EAD174EF85E42_OFFSET))(this, a1);
	}

	::System::Void Method_2_664C062015F0C2D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_664C062015F0C2D3_OFFSET))(this, a1);
	}

	static ::MoleMole::Cameras::DefaultFrameTwoShapeConfig* Method_2_A16E7856498E5381(::System::String* a1)
	{
		return ((::MoleMole::Cameras::DefaultFrameTwoShapeConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_A16E7856498E5381_OFFSET))(a1);
	}

	::System::Boolean Method_2_283C25FC229B03DF(::System::Int32 a1, ::System::String* a2, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_283C25FC229B03DF_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_CEBEFC8BE3C58B6D* Method_2_7E9AC3FFDA4606D5()
	{
		return ((::Class_1_CEBEFC8BE3C58B6D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_7E9AC3FFDA4606D5_OFFSET))(this);
	}

	::System::UInt32 Method_2_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_5CEC4607322705E5_OFFSET))(this);
	}

	static ::MoleMole::Cameras::VariableCameraConfig* Method_2_9AC88009E20BF876()
	{
		return ((::MoleMole::Cameras::VariableCameraConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_9AC88009E20BF876_OFFSET))();
	}

	::System::Void Method_2_F20FA1DA4846651D(::Class_1_73F7DED90F9FA901* a1, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a2, ::MoleMole::Battle::Entity* a3, ::System::String* a4, ::System::Int32 a5, ::Enum_3_F00DC819D834EFD2 a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_73F7DED90F9FA901*, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32, ::Enum_3_F00DC819D834EFD2))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_F20FA1DA4846651D_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_90B44BD0ECA17820(::Class_1_3A46F934F31B990A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A46F934F31B990A*))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_90B44BD0ECA17820_OFFSET))(this, a1);
	}

	::System::Void Method_2_10BA33E5106447FB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_10BA33E5106447FB_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F09E2FC85882F429(::System::Int32 a1, ::System::String* a2, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a3, ::MoleMole::Battle::Entity* a4, ::System::String* a5, ::System::Int32 a6, ::Enum_3_F00DC819D834EFD2 a7, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a8)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32, ::Enum_3_F00DC819D834EFD2, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_F09E2FC85882F429_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_2_D26781BB4DC04F18(::Enum_3_F00DC819D834EFD2 a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F00DC819D834EFD2, ::System::UInt32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_D26781BB4DC04F18_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CEEA8717F1571454(::Class_1_73F7DED90F9FA901* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_73F7DED90F9FA901*))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_CEEA8717F1571454_OFFSET))(this, a1);
	}

	::System::Void Method_2_CDEB5A211F02C596_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_CDEB5A211F02C596_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_2_02BCA75037596595(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_02BCA75037596595_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::String*>* Method_2_C7FBDF23D94CBF9A()
	{
		return ((::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_C7FBDF23D94CBF9A_OFFSET))(this);
	}

	::System::Void Method_2_CD0F559E399AB5D2(::System::Int32 a1, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a2, ::MoleMole::Battle::Entity* a3, ::System::String* a4, ::System::Int32 a5, ::Enum_3_F00DC819D834EFD2 a6, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32, ::Enum_3_F00DC819D834EFD2, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_CD0F559E399AB5D2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_6CD0070896D25F1D(::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_METHOD_2_6CD0070896D25F1D_OFFSET))(this, a1);
	}
};
