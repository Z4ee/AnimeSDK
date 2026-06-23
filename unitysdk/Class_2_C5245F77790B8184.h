#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_54486B88E1863A04.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/Enum_3_E64C24AE0799EB7C.h"
#include "unitysdk/Foundation/NapPlatform.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/MoleMole/Battle/AvatarSwitchSortType.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/FontThicknessMode.h"
#include "unitysdk/MoleMole/HollowUseItemOperateType.h"
#include "unitysdk/MoleMole/MobileInLevelQTECancelType.h"
#include "unitysdk/MoleMole/PCShortcutWheelOperateType.h"
#include "unitysdk/Struct_2_7734F33592BF49F6_5.h"

class Class_1_1EA8435E138F2E03;
class Class_1_83665B095F1535B5;
class Class_1_CDA44BE4158CAA8A;
class Class_3_8069852B6FA1A544_8;
namespace MoleMole { class SystemSettingEntryBase; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C5245F77790B8184_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1406BB00)
#define CLASS_2_C5245F77790B8184_METHOD_2_3316A40EE3735C50_OFFSET UNITYSDK_OFFSET(0x1406D580)
#define CLASS_2_C5245F77790B8184_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1406FD10)
#define CLASS_2_C5245F77790B8184_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x14070E90)
#define CLASS_2_C5245F77790B8184_METHOD_2_4363CA0E0DEF2DA7_OFFSET UNITYSDK_OFFSET(0x1406E110)
#define CLASS_2_C5245F77790B8184_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x14070DE0)
#define CLASS_2_C5245F77790B8184_METHOD_2_4E0E9D5777BB5D7B_OFFSET UNITYSDK_OFFSET(0x1406E2B0)
#define CLASS_2_C5245F77790B8184_METHOD_2_60D297F59E796118_OFFSET UNITYSDK_OFFSET(0x1406DF80)
#define CLASS_2_C5245F77790B8184_METHOD_2_6B1AC48741A89B3F_OFFSET UNITYSDK_OFFSET(0x1406C430)
#define CLASS_2_C5245F77790B8184_METHOD_2_73052712910A9EE7_OFFSET UNITYSDK_OFFSET(0x1406B940)
#define CLASS_2_C5245F77790B8184_METHOD_2_77168FB3A280CA38_OFFSET UNITYSDK_OFFSET(0x1406E820)
#define CLASS_2_C5245F77790B8184_METHOD_2_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x140711F0)
#define CLASS_2_C5245F77790B8184_METHOD_2_A034459144CE7919_OFFSET UNITYSDK_OFFSET(0x1406E5B0)
#define CLASS_2_C5245F77790B8184_METHOD_2_A05F1CDA2A5D49AA_OFFSET UNITYSDK_OFFSET(0x1406CA80)
#define CLASS_2_C5245F77790B8184_METHOD_2_A7E2AA03D5DD14A2_OFFSET UNITYSDK_OFFSET(0x1406FF20)
#define CLASS_2_C5245F77790B8184_METHOD_2_AC1788F376960B88_OFFSET UNITYSDK_OFFSET(0x1406BEB0)
#define CLASS_2_C5245F77790B8184_METHOD_2_B1C39A6EA5C82239_OFFSET UNITYSDK_OFFSET(0x14070EF0)
#define CLASS_2_C5245F77790B8184_METHOD_2_B2B696B57E2C9AED_OFFSET UNITYSDK_OFFSET(0x1406C650)
#define CLASS_2_C5245F77790B8184_METHOD_2_B36E629C3DBCCDB8_OFFSET UNITYSDK_OFFSET(0x1406C340)
#define CLASS_2_C5245F77790B8184_METHOD_2_B40B1AE0F1D94CCD_OFFSET UNITYSDK_OFFSET(0x1406DC00)
#define CLASS_2_C5245F77790B8184_METHOD_2_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x140706E0)
#define CLASS_2_C5245F77790B8184_METHOD_2_B789C15B34ADE8FD_OFFSET UNITYSDK_OFFSET(0x14071AE0)
#define CLASS_2_C5245F77790B8184_METHOD_2_B7ECF8EB0F585FB7_OFFSET UNITYSDK_OFFSET(0x1406E020)
#define CLASS_2_C5245F77790B8184_METHOD_2_C320308800812E93_OFFSET UNITYSDK_OFFSET(0x1406FC30)
#define CLASS_2_C5245F77790B8184_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1406BE20)
#define CLASS_2_C5245F77790B8184_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x14070620)
#define CLASS_2_C5245F77790B8184_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1406BDE0)
#define CLASS_2_C5245F77790B8184_METHOD_2_D029DB755D8199A2_OFFSET UNITYSDK_OFFSET(0x1406D3D0)
#define CLASS_2_C5245F77790B8184_METHOD_2_D07199E8CB9D21F0_OFFSET UNITYSDK_OFFSET(0x14071C80)
#define CLASS_2_C5245F77790B8184_METHOD_2_D83C291FE8591B95_OFFSET UNITYSDK_OFFSET(0x1406EC90)
#define CLASS_2_C5245F77790B8184_METHOD_2_DDEBC38EA7122E9D_OFFSET UNITYSDK_OFFSET(0x1406C050)
#define CLASS_2_C5245F77790B8184_METHOD_2_DE42A8FBAF5D656C_OFFSET UNITYSDK_OFFSET(0x1406EB20)
#define CLASS_2_C5245F77790B8184_METHOD_2_DFBE8DB93173BC07_OFFSET UNITYSDK_OFFSET(0x1406E980)
#define CLASS_2_C5245F77790B8184_METHOD_2_E581466EEA407771_OFFSET UNITYSDK_OFFSET(0x1406FBD0)
#define CLASS_2_C5245F77790B8184_METHOD_2_F2FB03460D714C2F_OFFSET UNITYSDK_OFFSET(0x1406FD60)
#define CLASS_2_C5245F77790B8184_METHOD_2_F3B17F9790505620_OFFSET UNITYSDK_OFFSET(0x1406D080)
#define CLASS_2_C5245F77790B8184_METHOD_2_F82DF5E806F12AEB_1_OFFSET UNITYSDK_OFFSET(0x140711A0)
#define CLASS_2_C5245F77790B8184_METHOD_2_F82DF5E806F12AEB_OFFSET UNITYSDK_OFFSET(0x14070690)
#define CLASS_2_C5245F77790B8184_METHOD_2_FF4B306E87CBBA8D_OFFSET UNITYSDK_OFFSET(0x1406DA60)
#define CLASS_2_C5245F77790B8184_METHOD_2_FFF8A982A18EC676_OFFSET UNITYSDK_OFFSET(0x1406D880)
#define CLASS_2_C5245F77790B8184_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1406B800)
#define CLASS_2_C5245F77790B8184__CTOR_OFFSET UNITYSDK_OFFSET(0x1406BE60)

inline static constexpr unsigned int Class_2_C5245F77790B8184_TypeDefinitionIndex = 63768;

class Class_2_C5245F77790B8184 : public ::Foundation::SingletonDisposable_1<::Class_2_C5245F77790B8184*>
{
public:
	::System::Collections::Generic::Dictionary_2<::Enum_3_54486B88E1863A04, ::Class_1_CDA44BE4158CAA8A*>* Field_2_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::Enum_3_54486B88E1863A04, ::System::Collections::Generic::List_1<::Struct_2_7734F33592BF49F6_5>*>* Field_2_1; // 0x18
	::System::Int32 Field_2_31; // 0x20
	::MoleMole::MobileInLevelQTECancelType Field_2_8; // 0x24
	::MoleMole::PCShortcutWheelOperateType Field_2_17; // 0x28
	::MoleMole::Battle::AvatarSwitchSortType Field_2_9; // 0x2C
	::System::Single Field_2_21; // 0x30
	::System::Int32 Field_2_30; // 0x34
	::MoleMole::HollowUseItemOperateType Field_2_19; // 0x38
	::System::Int32 Field_2_29; // 0x3C
	::System::Int32 Field_2_24; // 0x40
	::System::Int32 Field_2_28; // 0x44
	::System::Boolean Field_2_27; // 0x48
	::System::Boolean Field_2_2; // 0x49
	::System::Boolean Field_2_3; // 0x4A
	::System::Boolean Field_2_5; // 0x4B
	::System::Int32 Field_2_34; // 0x4C
	::MoleMole::FontThicknessMode Field_2_16; // 0x50
	::System::Int32 Field_2_33; // 0x54
	::System::Int32 Field_2_10; // 0x58
	::System::Int32 Field_2_32; // 0x5C
	::System::Boolean Field_2_20; // 0x60
	::System::Boolean Field_2_15; // 0x61
	::System::Boolean Field_2_26; // 0x62
	::System::Boolean Field_2_23; // 0x63
	::System::Boolean Field_2_12; // 0x64
	::System::Boolean Field_2_13; // 0x65
	::System::Boolean Field_2_22; // 0x66
	::System::Boolean Field_2_6; // 0x67
	::System::Boolean Field_2_18; // 0x68
	::System::Int32 Field_2_25; // 0x6C
	::System::Boolean Field_2_11; // 0x70
	::System::Boolean Field_2_7; // 0x71
	::System::Boolean Field_2_4; // 0x72
	::System::Boolean Field_2_14; // 0x73

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::Class_1_1EA8435E138F2E03* Method_2_AC1788F376960B88(::MoleMole::ESystemSettingType a1)
	{
		return ((::Class_1_1EA8435E138F2E03*(*)(::PVOID, ::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_AC1788F376960B88_OFFSET))(this, a1);
	}

	::System::Void Method_2_DDEBC38EA7122E9D(::System::Collections::Generic::List_1<::Enum_3_54486B88E1863A04>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Enum_3_54486B88E1863A04>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_DDEBC38EA7122E9D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6B1AC48741A89B3F(::MoleMole::ESystemSettingType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_6B1AC48741A89B3F_OFFSET))(this, a1);
	}

	::System::Void Method_2_F3B17F9790505620(::System::Collections::Generic::List_1<::Enum_3_54486B88E1863A04>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Enum_3_54486B88E1863A04>*))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_F3B17F9790505620_OFFSET))(this, a1);
	}

	::System::Void Method_2_D029DB755D8199A2(::Enum_3_54486B88E1863A04 a1, ::System::Int32 a2, ::Enum_3_A019F766F8C74696 a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_54486B88E1863A04, ::System::Int32, ::Enum_3_A019F766F8C74696, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_D029DB755D8199A2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_3316A40EE3735C50(::System::Collections::Generic::List_1<::Enum_3_54486B88E1863A04>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Enum_3_54486B88E1863A04>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_3316A40EE3735C50_OFFSET))(this, a1, a2);
	}

	::Class_1_1EA8435E138F2E03* Method_2_FFF8A982A18EC676(::MoleMole::ESystemSettingType a1, ::Enum_3_54486B88E1863A04 a2)
	{
		return ((::Class_1_1EA8435E138F2E03*(*)(::PVOID, ::MoleMole::ESystemSettingType, ::Enum_3_54486B88E1863A04))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_FFF8A982A18EC676_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FF4B306E87CBBA8D(::MoleMole::ESystemSettingType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_FF4B306E87CBBA8D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_7734F33592BF49F6_5>* Method_2_60D297F59E796118(::Enum_3_54486B88E1863A04 a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_7734F33592BF49F6_5>*(*)(::PVOID, ::Enum_3_54486B88E1863A04))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_60D297F59E796118_OFFSET))(this, a1);
	}

	::System::Void Method_2_4363CA0E0DEF2DA7(::Enum_3_54486B88E1863A04 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_54486B88E1863A04, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_4363CA0E0DEF2DA7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4E0E9D5777BB5D7B(::Enum_3_54486B88E1863A04 a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_54486B88E1863A04, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_4E0E9D5777BB5D7B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_B2B696B57E2C9AED(::MoleMole::ESystemSettingType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_B2B696B57E2C9AED_OFFSET))(this, a1);
	}

	::System::Void Method_2_77168FB3A280CA38(::Enum_3_54486B88E1863A04 a1, ::System::Int32 a2, ::System::Action* a3, ::System::Action* a4, ::System::Boolean a5, ::Class_1_83665B095F1535B5* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_54486B88E1863A04, ::System::Int32, ::System::Action*, ::System::Action*, ::System::Boolean, ::Class_1_83665B095F1535B5*))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_77168FB3A280CA38_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_1_1EA8435E138F2E03* Method_2_DFBE8DB93173BC07(::Enum_3_54486B88E1863A04 a1)
	{
		return ((::Class_1_1EA8435E138F2E03*(*)(::PVOID, ::Enum_3_54486B88E1863A04))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_DFBE8DB93173BC07_OFFSET))(this, a1);
	}

	::System::Void Method_2_A05F1CDA2A5D49AA(::System::Collections::Generic::List_1<::Enum_3_54486B88E1863A04>* a1, ::MoleMole::ESystemSettingType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Enum_3_54486B88E1863A04>*, ::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_A05F1CDA2A5D49AA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A034459144CE7919(::Enum_3_54486B88E1863A04 a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_54486B88E1863A04, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_A034459144CE7919_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_E581466EEA407771(::Enum_3_E64C24AE0799EB7C a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_E64C24AE0799EB7C))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_E581466EEA407771_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DE42A8FBAF5D656C(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_DE42A8FBAF5D656C_OFFSET))(this, a1);
	}

	::System::Void Method_2_B40B1AE0F1D94CCD(::Enum_3_54486B88E1863A04 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_54486B88E1863A04))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_B40B1AE0F1D94CCD_OFFSET))(this, a1);
	}

	::System::Void Method_2_D83C291FE8591B95(::System::Collections::Generic::List_1<::Enum_3_54486B88E1863A04>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Enum_3_54486B88E1863A04>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_D83C291FE8591B95_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C320308800812E93(::Enum_3_54486B88E1863A04 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_54486B88E1863A04, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_C320308800812E93_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_F2FB03460D714C2F(::Class_3_8069852B6FA1A544_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_8069852B6FA1A544_8*))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_F2FB03460D714C2F_OFFSET))(this, a1);
	}

	::System::Void Method_2_A7E2AA03D5DD14A2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_A7E2AA03D5DD14A2_OFFSET))(this);
	}

	::System::Void Method_2_F82DF5E806F12AEB(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_F82DF5E806F12AEB_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B7ECF8EB0F585FB7(::Enum_3_54486B88E1863A04 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_54486B88E1863A04))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_B7ECF8EB0F585FB7_OFFSET))(this, a1);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1C39A6EA5C82239(::System::Collections::Generic::List_1<::Enum_3_54486B88E1863A04>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Enum_3_54486B88E1863A04>*))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_B1C39A6EA5C82239_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_73052712910A9EE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_73052712910A9EE7_OFFSET))(this);
	}

	::Class_1_CDA44BE4158CAA8A* Method_2_B36E629C3DBCCDB8(::Enum_3_54486B88E1863A04 a1)
	{
		return ((::Class_1_CDA44BE4158CAA8A*(*)(::PVOID, ::Enum_3_54486B88E1863A04))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_B36E629C3DBCCDB8_OFFSET))(this, a1);
	}

	::System::Void Method_2_F82DF5E806F12AEB_1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_F82DF5E806F12AEB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_2_B789C15B34ADE8FD(::Enum_3_54486B88E1863A04 a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_54486B88E1863A04, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_B789C15B34ADE8FD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_D07199E8CB9D21F0(::Foundation::NapPlatform a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NapPlatform))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_D07199E8CB9D21F0_OFFSET))(this, a1);
	}

	::System::Void Method_2_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5245F77790B8184_METHOD_2_B43C848B078B3C34_OFFSET))(this);
	}
};
