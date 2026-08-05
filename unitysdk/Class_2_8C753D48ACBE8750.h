#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Enum_3_F00DC819D834EFD2.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/Struct_2_2CEE35A1FF4AE199.h"
#include "unitysdk/Struct_2_5119F8C34F295015.h"
#include "unitysdk/Struct_2_596DA7D950138634.h"
#include "unitysdk/Struct_2_733B8EC4B9916061.h"
#include "unitysdk/Struct_2_9F85650CFFBE9F44.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_207206F45DEB584F;
class Class_1_3A46F934F31B990A;
class Class_1_6B8B8EFC8C59DAD1;
class Class_1_A27C3E06CB3501A8;
class Class_1_CEBEFC8BE3C58B6D;
class Class_2_CEC585D0736F3660;
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

#define CLASS_2_8C753D48ACBE8750_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF0B7E70)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_02BCA75037596595_OFFSET UNITYSDK_OFFSET(0xF0BDC90)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_05391BA0600E1851_OFFSET UNITYSDK_OFFSET(0xF0BB550)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_09080A8107D90514_OFFSET UNITYSDK_OFFSET(0xF0BD6D0)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_11746A9768F89C9A_OFFSET UNITYSDK_OFFSET(0xF0B8570)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_173FD135F59C6273_OFFSET UNITYSDK_OFFSET(0xF0BB270)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xF0B9490)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xF0B96D0)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_2FA8AE0519AC7829_OFFSET UNITYSDK_OFFSET(0xF0B7F60)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_306DAC2D59D4D5C7_OFFSET UNITYSDK_OFFSET(0xF0BBEA0)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_354231F5E00AF9B6_OFFSET UNITYSDK_OFFSET(0xF0BB380)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_35FCC843AF810F22_OFFSET UNITYSDK_OFFSET(0xF0BAE20)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_493E793FA8ED892B_OFFSET UNITYSDK_OFFSET(0xF0BDE80)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_5CEC4607322705E5_1_OFFSET UNITYSDK_OFFSET(0xF0BEEB0)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0xF0B9680)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_5D974071EE609B08_OFFSET UNITYSDK_OFFSET(0xF0BD960)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_62778034624FE999_OFFSET UNITYSDK_OFFSET(0xF0BE8D0)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_6338CB48D171EC2D_OFFSET UNITYSDK_OFFSET(0xF0BE830)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0xF0BB190)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_6CD0070896D25F1D_OFFSET UNITYSDK_OFFSET(0xF0BE820)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_7717C88AF70B3D45_OFFSET UNITYSDK_OFFSET(0xF0B8830)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_77ADDD74D0B4B1EB_OFFSET UNITYSDK_OFFSET(0xF0BB320)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_7C948EFF3312BB06_OFFSET UNITYSDK_OFFSET(0xF0BBD00)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_7E9AC3FFDA4606D5_OFFSET UNITYSDK_OFFSET(0xF0BDAD0)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_7EAC9FCC8607F2E4_OFFSET UNITYSDK_OFFSET(0xF0B83B0)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_861CC293077D00AA_OFFSET UNITYSDK_OFFSET(0xF0B9CF0)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_8C52CCF09BB2DB2F_OFFSET UNITYSDK_OFFSET(0xF0BDB50)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0xF0BB430)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_90B44BD0ECA17820_OFFSET UNITYSDK_OFFSET(0xF0B84C0)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xF0B87E0)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_99AC52A5C48A589D_OFFSET UNITYSDK_OFFSET(0xF0B8300)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_9AC88009E20BF876_OFFSET UNITYSDK_OFFSET(0xF0BEF80)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_A00EAD174EF85E42_OFFSET UNITYSDK_OFFSET(0xF0BEF00)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_A16E7856498E5381_OFFSET UNITYSDK_OFFSET(0xF0BDC10)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0xF0BBAD0)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_A2B4FB217768416F_OFFSET UNITYSDK_OFFSET(0xF0B9730)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_AC8637899E0F42C6_OFFSET UNITYSDK_OFFSET(0xF0BEB90)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_B25D5F2052C133FD_OFFSET UNITYSDK_OFFSET(0xF0B8BF0)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_BFA64B78785A381C_OFFSET UNITYSDK_OFFSET(0xF0BB8F0)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_BFC5623CCD8DAEAB_OFFSET UNITYSDK_OFFSET(0xF0B95A0)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_C015690E1D90E56F_OFFSET UNITYSDK_OFFSET(0xF0BD480)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xF0B8BE0)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xF0BEE50)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_C7FBDF23D94CBF9A_OFFSET UNITYSDK_OFFSET(0xF0BE5C0)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xF0BE4D0)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xF0BEE60)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF0B8930)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_CDEB5A211F02C596_1_OFFSET UNITYSDK_OFFSET(0xF0B94F0)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_CDEB5A211F02C596_2_OFFSET UNITYSDK_OFFSET(0xF0BE530)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_CDEB5A211F02C596_OFFSET UNITYSDK_OFFSET(0xF0BC420)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0xF0BE090)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_CEEA8717F1571454_OFFSET UNITYSDK_OFFSET(0xF0BB110)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_D20527A0A7131645_OFFSET UNITYSDK_OFFSET(0xF0BBF50)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_D34465BA9D69BB29_OFFSET UNITYSDK_OFFSET(0xF0B9A70)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_DC065EC9A30CE7AB_OFFSET UNITYSDK_OFFSET(0xF0B8980)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0xF0BEC10)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_DED14F11698E74E2_OFFSET UNITYSDK_OFFSET(0xF0BE5E0)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_E35B52F94ADD3569_OFFSET UNITYSDK_OFFSET(0xF0BC4C0)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_EBDEB81FA3C1F4D1_OFFSET UNITYSDK_OFFSET(0xF0B8100)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xF0BE5D0)
#define CLASS_2_8C753D48ACBE8750_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xF0BBCB0)
#define CLASS_2_8C753D48ACBE8750_ONCREATE_OFFSET UNITYSDK_OFFSET(0xF0B7EC0)
#define CLASS_2_8C753D48ACBE8750__CTOR_OFFSET UNITYSDK_OFFSET(0xF0B7FD0)

inline static constexpr unsigned int Class_2_8C753D48ACBE8750_TypeDefinitionIndex = 53584;

class Class_2_8C753D48ACBE8750 : public ::Foundation::SingletonDisposable_1<::Class_2_8C753D48ACBE8750*>
{
public:
	// static const ::System::Single Field_2_7; // 0x0
	::System::Action* Field_2_12; // 0x10
	::System::Collections::Generic::Queue_1<::System::Func_1<::System::Boolean>*>* Field_2_20; // 0x18
	::Class_1_A27C3E06CB3501A8* Field_2_21; // 0x20
	::System::Action_1<::System::Boolean>* Field_2_18; // 0x28
	::Class_1_207206F45DEB584F* Field_2_22; // 0x30
	::System::String* Field_2_15; // 0x38
	::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::String*>* Field_2_8; // 0x40
	::Class_1_CEBEFC8BE3C58B6D* Field_2_13; // 0x48
	::Struct_2_5119F8C34F295015 Field_2_9; // 0x50
	::System::Action_1<::System::Boolean>* Field_2_19; // 0xD0
	::MoleMole::UIMainCityChatPlayWidgetController* Field_2_14; // 0xD8
	::System::Action* Field_2_5; // 0xE0
	::System::Int32 Field_2_17; // 0xE8
	::System::UInt32 Field_2_26; // 0xEC
	::System::Int32 Field_2_6; // 0xF0
	::System::UInt32 Field_2_27; // 0xF4
	::System::Boolean Field_2_16; // 0xF8
	::System::Boolean Field_2_0; // 0xF9
	::System::Int32 Field_2_10; // 0xFC
	::System::Boolean Field_2_4; // 0x100
	::System::Boolean Field_2_23; // 0x101
	::System::Boolean Field_2_11; // 0x102

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_EBDEB81FA3C1F4D1(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_EBDEB81FA3C1F4D1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_99AC52A5C48A589D(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_99AC52A5C48A589D_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_2_2FA8AE0519AC7829()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_2FA8AE0519AC7829_OFFSET))(this);
	}

	::System::Void Method_2_7EAC9FCC8607F2E4(::Class_1_3A46F934F31B990A* a1, ::System::Action_1<::Class_2_CEC585D0736F3660*>* a2, ::MoleMole::Battle::Entity* a3, ::System::String* a4, ::System::Int32 a5, ::Enum_3_F00DC819D834EFD2 a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A46F934F31B990A*, ::System::Action_1<::Class_2_CEC585D0736F3660*>*, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32, ::Enum_3_F00DC819D834EFD2))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_7EAC9FCC8607F2E4_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_2_7717C88AF70B3D45(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_7717C88AF70B3D45_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_DC065EC9A30CE7AB(::Enum_3_F00DC819D834EFD2 a1, ::PipelineCamera::FinalCameraData a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F00DC819D834EFD2, ::PipelineCamera::FinalCameraData))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_DC065EC9A30CE7AB_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_B25D5F2052C133FD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_B25D5F2052C133FD_OFFSET))(this, a1);
	}

	::Struct_2_733B8EC4B9916061 Method_2_BFC5623CCD8DAEAB(::Class_1_3A46F934F31B990A* a1)
	{
		return ((::Struct_2_733B8EC4B9916061(*)(::PVOID, ::Class_1_3A46F934F31B990A*))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_BFC5623CCD8DAEAB_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_A2B4FB217768416F(::System::Int32 a1, ::System::String* a2, ::MoleMole::Battle::Entity* a3, ::System::String* a4, ::System::Int32 a5, ::Struct_2_596DA7D950138634 a6, ::MoleMole::Battle::Entity* a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32, ::Struct_2_596DA7D950138634, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_A2B4FB217768416F_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_35FCC843AF810F22(::Class_1_6B8B8EFC8C59DAD1* a1, ::System::Action_1<::Class_2_CEC585D0736F3660*>* a2, ::MoleMole::Battle::Entity* a3, ::System::String* a4, ::System::Int32 a5, ::Enum_3_F00DC819D834EFD2 a6, ::MoleMole::Battle::Entity* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6B8B8EFC8C59DAD1*, ::System::Action_1<::Class_2_CEC585D0736F3660*>*, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32, ::Enum_3_F00DC819D834EFD2, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_35FCC843AF810F22_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_664C062015F0C2D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_664C062015F0C2D3_OFFSET))(this, a1);
	}

	::System::Void Method_2_77ADDD74D0B4B1EB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_77ADDD74D0B4B1EB_OFFSET))(this, a1);
	}

	::Struct_2_733B8EC4B9916061 Method_2_354231F5E00AF9B6(::System::String* a1, ::System::Nullable_1<::Struct_2_733B8EC4B9916061> a2)
	{
		return ((::Struct_2_733B8EC4B9916061(*)(::PVOID, ::System::String*, ::System::Nullable_1<::Struct_2_733B8EC4B9916061>))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_354231F5E00AF9B6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_5119F8C34F295015 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_5119F8C34F295015))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_05391BA0600E1851(::Class_1_3A46F934F31B990A* a1, ::System::Action_1<::Class_2_CEC585D0736F3660*>* a2, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a3, ::System::String* a4, ::Enum_3_F00DC819D834EFD2 a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A46F934F31B990A*, ::System::Action_1<::Class_2_CEC585D0736F3660*>*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::String*, ::Enum_3_F00DC819D834EFD2))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_05391BA0600E1851_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_11746A9768F89C9A(::System::Int32 a1, ::System::Action_1<::Class_2_CEC585D0736F3660*>* a2, ::MoleMole::Battle::Entity* a3, ::System::String* a4, ::System::Int32 a5, ::Enum_3_F00DC819D834EFD2 a6, ::System::Action_1<::Class_2_CEC585D0736F3660*>* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_2_CEC585D0736F3660*>*, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32, ::Enum_3_F00DC819D834EFD2, ::System::Action_1<::Class_2_CEC585D0736F3660*>*))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_11746A9768F89C9A_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_861CC293077D00AA(::System::Int32 a1, ::System::String* a2, ::Struct_2_596DA7D950138634 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::Struct_2_596DA7D950138634))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_861CC293077D00AA_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_207206F45DEB584F* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_207206F45DEB584F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Boolean Method_2_D34465BA9D69BB29(::System::Int32 a1, ::System::String* a2, ::MoleMole::Battle::Entity* a3, ::System::String* a4, ::System::Int32 a5, ::Struct_2_596DA7D950138634 a6, ::MoleMole::Battle::Entity* a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32, ::Struct_2_596DA7D950138634, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_D34465BA9D69BB29_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_2_A1781348F0A89177()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_A1781348F0A89177_OFFSET))();
	}

	::System::Void Method_2_D20527A0A7131645(::Enum_3_F00DC819D834EFD2 a1, ::MoleMole::Battle::Entity* a2, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a3, ::System::String* a4, ::System::Nullable_1<::Struct_2_733B8EC4B9916061> a5)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F00DC819D834EFD2, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::String*, ::System::Nullable_1<::Struct_2_733B8EC4B9916061>))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_D20527A0A7131645_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_CDEB5A211F02C596(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_CDEB5A211F02C596_OFFSET))(this, a1);
	}

	::System::Void Method_2_306DAC2D59D4D5C7(::Enum_3_F00DC819D834EFD2 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F00DC819D834EFD2, ::System::UInt32, ::System::UInt32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_306DAC2D59D4D5C7_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Boolean Method_2_BFA64B78785A381C(::System::Int32 a1, ::System::Action_1<::Class_2_CEC585D0736F3660*>* a2, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a3, ::System::String* a4, ::Enum_3_F00DC819D834EFD2 a5, ::System::Nullable_1<::Struct_2_733B8EC4B9916061> a6, ::Struct_2_596DA7D950138634 a7, ::MoleMole::Battle::Entity* a8)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_2_CEC585D0736F3660*>*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::String*, ::Enum_3_F00DC819D834EFD2, ::System::Nullable_1<::Struct_2_733B8EC4B9916061>, ::Struct_2_596DA7D950138634, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_BFA64B78785A381C_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_09080A8107D90514(::Class_1_3A46F934F31B990A* a1, ::System::Action_1<::Class_2_CEC585D0736F3660*>* a2, ::PipelineCamera::FinalCameraData a3, ::Enum_3_F00DC819D834EFD2 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A46F934F31B990A*, ::System::Action_1<::Class_2_CEC585D0736F3660*>*, ::PipelineCamera::FinalCameraData, ::Enum_3_F00DC819D834EFD2))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_09080A8107D90514_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_CEBEFC8BE3C58B6D* Method_2_7E9AC3FFDA4606D5()
	{
		return ((::Class_1_CEBEFC8BE3C58B6D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_7E9AC3FFDA4606D5_OFFSET))(this);
	}

	::System::Void Method_2_C015690E1D90E56F(::Enum_3_F00DC819D834EFD2 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F00DC819D834EFD2, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_C015690E1D90E56F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_E35B52F94ADD3569(::Enum_3_F00DC819D834EFD2 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F00DC819D834EFD2, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_E35B52F94ADD3569_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_02BCA75037596595(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_02BCA75037596595_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_493E793FA8ED892B(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean a3, ::Struct_2_2CEE35A1FF4AE199& a4)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::Struct_2_2CEE35A1FF4AE199&))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_493E793FA8ED892B_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_2_CEA32FF190776922()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_CEA32FF190776922_OFFSET))(this);
	}

	::System::Void Method_2_CDEB5A211F02C596_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_CDEB5A211F02C596_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_2_5D974071EE609B08(::System::Int32 a1, ::System::Action_1<::Class_2_CEC585D0736F3660*>* a2, ::PipelineCamera::FinalCameraData a3, ::Enum_3_F00DC819D834EFD2 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_2_CEC585D0736F3660*>*, ::PipelineCamera::FinalCameraData, ::Enum_3_F00DC819D834EFD2))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_5D974071EE609B08_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_7C948EFF3312BB06(::System::Int32 a1, ::System::String* a2, ::System::Action_1<::Class_2_CEC585D0736F3660*>* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Action_1<::Class_2_CEC585D0736F3660*>*))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_7C948EFF3312BB06_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CDEB5A211F02C596_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_CDEB5A211F02C596_2_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::String*>* Method_2_C7FBDF23D94CBF9A()
	{
		return ((::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_C7FBDF23D94CBF9A_OFFSET))(this);
	}

	static ::MoleMole::Cameras::DefaultFrameTwoShapeConfig* Method_2_A16E7856498E5381(::System::String* a1)
	{
		return ((::MoleMole::Cameras::DefaultFrameTwoShapeConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_A16E7856498E5381_OFFSET))(a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_DED14F11698E74E2(::System::Int32 a1, ::System::String* a2, ::MoleMole::Battle::Entity* a3, ::System::String* a4, ::System::Action_1<::Class_2_CEC585D0736F3660*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Action_1<::Class_2_CEC585D0736F3660*>*))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_DED14F11698E74E2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_6CD0070896D25F1D(::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_6CD0070896D25F1D_OFFSET))(this, a1);
	}

	::System::Void Method_2_6338CB48D171EC2D(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_6338CB48D171EC2D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_62778034624FE999(::Class_1_6B8B8EFC8C59DAD1* a1, ::System::Action_1<::Class_2_CEC585D0736F3660*>* a2, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a3, ::System::String* a4, ::Enum_3_F00DC819D834EFD2 a5, ::MoleMole::Battle::Entity* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6B8B8EFC8C59DAD1*, ::System::Action_1<::Class_2_CEC585D0736F3660*>*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::String*, ::Enum_3_F00DC819D834EFD2, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_62778034624FE999_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_AC8637899E0F42C6(::Class_1_207206F45DEB584F* a1, ::Class_1_A27C3E06CB3501A8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_207206F45DEB584F*, ::Class_1_A27C3E06CB3501A8*))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_AC8637899E0F42C6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_DE52BD42C4B0B772_OFFSET))(this);
	}

	::System::Void Method_2_CEEA8717F1571454(::Class_1_6B8B8EFC8C59DAD1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6B8B8EFC8C59DAD1*))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_CEEA8717F1571454_OFFSET))(this, a1);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::UInt32 Method_2_5CEC4607322705E5_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_5CEC4607322705E5_1_OFFSET))(this);
	}

	::System::Boolean Method_2_A00EAD174EF85E42(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_A00EAD174EF85E42_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_8C52CCF09BB2DB2F(::Struct_2_9F85650CFFBE9F44 a1, ::Struct_2_9F85650CFFBE9F44 a2, ::System::String* a3)
	{
		return ((::System::String*(*)(::Struct_2_9F85650CFFBE9F44, ::Struct_2_9F85650CFFBE9F44, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_8C52CCF09BB2DB2F_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::Cameras::VariableCameraConfig* Method_2_9AC88009E20BF876()
	{
		return ((::MoleMole::Cameras::VariableCameraConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_9AC88009E20BF876_OFFSET))();
	}

	::System::Void Method_2_90B44BD0ECA17820(::Class_1_3A46F934F31B990A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A46F934F31B990A*))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_90B44BD0ECA17820_OFFSET))(this, a1);
	}

	::System::Void Method_2_173FD135F59C6273(::Class_1_CEBEFC8BE3C58B6D* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CEBEFC8BE3C58B6D*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_METHOD_2_173FD135F59C6273_OFFSET))(this, a1, a2);
	}
};
