#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0C5EBCCE1D54A049.h"
#include "unitysdk/Enum_3_193F3C12190537FD.h"
#include "unitysdk/Enum_3_462371125D2D5513.h"
#include "unitysdk/Enum_3_70248E32F82D4889_2.h"
#include "unitysdk/Enum_3_C3C384691A090251.h"
#include "unitysdk/Enum_3_E02FB5DE7C8D1AE7.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/MusicGame/ELiveHouseSpineEmojiType.h"
#include "unitysdk/MoleMole/MusicGame/ELiveHouseTrackHeadEmojiType.h"
#include "unitysdk/MoleMole/MusicGame/FLiveHouseSettingData.h"
#include "unitysdk/MoleMole/MusicGame/FLiveHouseSpineEmojiData.h"
#include "unitysdk/MoleMole/MusicGame/FLiveHouseTrackHeadEmojiData.h"
#include "unitysdk/Struct_2_081A2682696AA10B.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_15.h"
#include "unitysdk/Struct_2_B4A88BE55E27A7C3.h"
#include "unitysdk/Struct_2_FFBC003CFBB61A74.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_181;
class Class_1_D43702405C026A47;
class Class_3_CDD7C63403A61D90;
class Class_3_D11B47081CD802C8;
class Class_4_EDAF922741458586;
namespace MoleMole { class ActivityLivehouseRhythmBeatmapConfig; }
namespace MoleMole { class Note; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole::Config { class ActivityLiveHouseConstValue; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D1816B8957201A9F_METHOD_1_022E73465569B5C3_OFFSET UNITYSDK_OFFSET(0x194B94B0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_03E375A30E3AFF80_OFFSET UNITYSDK_OFFSET(0x194BB910)
#define CLASS_1_D1816B8957201A9F_METHOD_1_04F7CE19528E4FE5_OFFSET UNITYSDK_OFFSET(0x194B9E90)
#define CLASS_1_D1816B8957201A9F_METHOD_1_055E3BF644BB741B_OFFSET UNITYSDK_OFFSET(0x194B7C90)
#define CLASS_1_D1816B8957201A9F_METHOD_1_080936BC105064D6_1_OFFSET UNITYSDK_OFFSET(0x194BB790)
#define CLASS_1_D1816B8957201A9F_METHOD_1_080936BC105064D6_OFFSET UNITYSDK_OFFSET(0x194BA240)
#define CLASS_1_D1816B8957201A9F_METHOD_1_09A39B89545FE101_OFFSET UNITYSDK_OFFSET(0x194B7970)
#define CLASS_1_D1816B8957201A9F_METHOD_1_16A1F5578E20CC62_OFFSET UNITYSDK_OFFSET(0x194BAC80)
#define CLASS_1_D1816B8957201A9F_METHOD_1_18712DB3B1B723E8_OFFSET UNITYSDK_OFFSET(0x194B7A00)
#define CLASS_1_D1816B8957201A9F_METHOD_1_1BA49AE473484BAE_OFFSET UNITYSDK_OFFSET(0x194B8A50)
#define CLASS_1_D1816B8957201A9F_METHOD_1_231B9F7B8693F245_OFFSET UNITYSDK_OFFSET(0x194B8F00)
#define CLASS_1_D1816B8957201A9F_METHOD_1_2762DA0C58DE2FB7_OFFSET UNITYSDK_OFFSET(0x194B8C10)
#define CLASS_1_D1816B8957201A9F_METHOD_1_295A574A3B3BE00D_1_OFFSET UNITYSDK_OFFSET(0x194B8180)
#define CLASS_1_D1816B8957201A9F_METHOD_1_295A574A3B3BE00D_OFFSET UNITYSDK_OFFSET(0x194BB560)
#define CLASS_1_D1816B8957201A9F_METHOD_1_2AB16C1FA4EAF6A2_OFFSET UNITYSDK_OFFSET(0x194B9370)
#define CLASS_1_D1816B8957201A9F_METHOD_1_3150507749BCEAEC_OFFSET UNITYSDK_OFFSET(0x194B9590)
#define CLASS_1_D1816B8957201A9F_METHOD_1_340963F02BF514CA_OFFSET UNITYSDK_OFFSET(0x194BA520)
#define CLASS_1_D1816B8957201A9F_METHOD_1_3D98DB7DD083F480_OFFSET UNITYSDK_OFFSET(0x194B8850)
#define CLASS_1_D1816B8957201A9F_METHOD_1_431CEE840B9AD9EF_1_OFFSET UNITYSDK_OFFSET(0x194BAA90)
#define CLASS_1_D1816B8957201A9F_METHOD_1_431CEE840B9AD9EF_2_OFFSET UNITYSDK_OFFSET(0x194BB310)
#define CLASS_1_D1816B8957201A9F_METHOD_1_431CEE840B9AD9EF_OFFSET UNITYSDK_OFFSET(0x194BA370)
#define CLASS_1_D1816B8957201A9F_METHOD_1_4A2D31B96D58BF84_OFFSET UNITYSDK_OFFSET(0x194BBD50)
#define CLASS_1_D1816B8957201A9F_METHOD_1_4E2BCE3C8705DF5E_OFFSET UNITYSDK_OFFSET(0x194BAD80)
#define CLASS_1_D1816B8957201A9F_METHOD_1_55A6AB128FB8E363_OFFSET UNITYSDK_OFFSET(0x194BA2B0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_57A8E11FECF10345_OFFSET UNITYSDK_OFFSET(0x194B8610)
#define CLASS_1_D1816B8957201A9F_METHOD_1_5A0ABD813A2B8D81_OFFSET UNITYSDK_OFFSET(0x194B9CE0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_5B484627A8A06DD9_OFFSET UNITYSDK_OFFSET(0x194B9100)
#define CLASS_1_D1816B8957201A9F_METHOD_1_6346628F16B83983_OFFSET UNITYSDK_OFFSET(0x194BB480)
#define CLASS_1_D1816B8957201A9F_METHOD_1_67539326A6504A6B_OFFSET UNITYSDK_OFFSET(0x194BBB60)
#define CLASS_1_D1816B8957201A9F_METHOD_1_6C659294E42C280A_OFFSET UNITYSDK_OFFSET(0x194B83A0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_744DD0CF02061671_OFFSET UNITYSDK_OFFSET(0x194B8AB0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_7A3720011442FAF3_1_OFFSET UNITYSDK_OFFSET(0x194BC020)
#define CLASS_1_D1816B8957201A9F_METHOD_1_7A3720011442FAF3_OFFSET UNITYSDK_OFFSET(0x194BA310)
#define CLASS_1_D1816B8957201A9F_METHOD_1_7B634279EA4AF444_OFFSET UNITYSDK_OFFSET(0x194BB4E0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_7D4F9B568D8BC6AB_1_OFFSET UNITYSDK_OFFSET(0x194BBAA0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_7D4F9B568D8BC6AB_OFFSET UNITYSDK_OFFSET(0x194B90A0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_7F8ED38F9AEF6911_OFFSET UNITYSDK_OFFSET(0x194B7B10)
#define CLASS_1_D1816B8957201A9F_METHOD_1_8A3768DAE2FA37B5_OFFSET UNITYSDK_OFFSET(0x194B8BB0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_9B207DC6E5A6D4EB_OFFSET UNITYSDK_OFFSET(0x194BAD20)
#define CLASS_1_D1816B8957201A9F_METHOD_1_A4B358CFA248B244_1_OFFSET UNITYSDK_OFFSET(0x194BBB00)
#define CLASS_1_D1816B8957201A9F_METHOD_1_A4B358CFA248B244_OFFSET UNITYSDK_OFFSET(0x194B9530)
#define CLASS_1_D1816B8957201A9F_METHOD_1_AA2C5C495E0E542E_OFFSET UNITYSDK_OFFSET(0x194B95F0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_AA754EA59735BAD9_OFFSET UNITYSDK_OFFSET(0x194B8100)
#define CLASS_1_D1816B8957201A9F_METHOD_1_AC998F1FC9040BDA_1_OFFSET UNITYSDK_OFFSET(0x194B9050)
#define CLASS_1_D1816B8957201A9F_METHOD_1_AC998F1FC9040BDA_2_OFFSET UNITYSDK_OFFSET(0x194B8B60)
#define CLASS_1_D1816B8957201A9F_METHOD_1_AC998F1FC9040BDA_OFFSET UNITYSDK_OFFSET(0x194B8910)
#define CLASS_1_D1816B8957201A9F_METHOD_1_AE9195AF42F185CC_OFFSET UNITYSDK_OFFSET(0x194B9210)
#define CLASS_1_D1816B8957201A9F_METHOD_1_B1B131E061549818_OFFSET UNITYSDK_OFFSET(0x194BA950)
#define CLASS_1_D1816B8957201A9F_METHOD_1_B2BFA56222961CF0_1_OFFSET UNITYSDK_OFFSET(0x194BA8C0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_B2BFA56222961CF0_2_OFFSET UNITYSDK_OFFSET(0x194BAC00)
#define CLASS_1_D1816B8957201A9F_METHOD_1_B2BFA56222961CF0_OFFSET UNITYSDK_OFFSET(0x194B7F20)
#define CLASS_1_D1816B8957201A9F_METHOD_1_C1C5AB73E443B1B4_1_OFFSET UNITYSDK_OFFSET(0x194B88C0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_C1C5AB73E443B1B4_2_OFFSET UNITYSDK_OFFSET(0x194B8A00)
#define CLASS_1_D1816B8957201A9F_METHOD_1_C1C5AB73E443B1B4_3_OFFSET UNITYSDK_OFFSET(0x194B8800)
#define CLASS_1_D1816B8957201A9F_METHOD_1_C1C5AB73E443B1B4_4_OFFSET UNITYSDK_OFFSET(0x194B9F10)
#define CLASS_1_D1816B8957201A9F_METHOD_1_C1C5AB73E443B1B4_5_OFFSET UNITYSDK_OFFSET(0x194BA4D0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_C1C5AB73E443B1B4_OFFSET UNITYSDK_OFFSET(0x194B80B0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_C21DC7486A01DA55_OFFSET UNITYSDK_OFFSET(0x194BB970)
#define CLASS_1_D1816B8957201A9F_METHOD_1_C293B8F3ADB851B9_OFFSET UNITYSDK_OFFSET(0x194B8E50)
#define CLASS_1_D1816B8957201A9F_METHOD_1_C4D836FAB9875D44_OFFSET UNITYSDK_OFFSET(0x194B7CF0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_D954970F3588635B_OFFSET UNITYSDK_OFFSET(0x194B8520)
#define CLASS_1_D1816B8957201A9F_METHOD_1_DD55BBAE50946E29_OFFSET UNITYSDK_OFFSET(0x194BB820)
#define CLASS_1_D1816B8957201A9F_METHOD_1_DF289035BEA563C0_OFFSET UNITYSDK_OFFSET(0x194BA000)
#define CLASS_1_D1816B8957201A9F_METHOD_1_E2030E810407E26B_1_OFFSET UNITYSDK_OFFSET(0x194B91B0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_E2030E810407E26B_2_OFFSET UNITYSDK_OFFSET(0x194BA7F0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_E2030E810407E26B_OFFSET UNITYSDK_OFFSET(0x194B9000)
#define CLASS_1_D1816B8957201A9F_METHOD_1_E554CEBF01F65235_OFFSET UNITYSDK_OFFSET(0x194BA850)
#define CLASS_1_D1816B8957201A9F_METHOD_1_E625AB0285C2BCC8_OFFSET UNITYSDK_OFFSET(0x194B8680)
#define CLASS_1_D1816B8957201A9F_METHOD_1_E7195E00AA43B130_OFFSET UNITYSDK_OFFSET(0x194BAE00)
#define CLASS_1_D1816B8957201A9F_METHOD_1_F2256D3B7C7C8994_OFFSET UNITYSDK_OFFSET(0x194B8010)
#define CLASS_1_D1816B8957201A9F_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x194B8960)
#define CLASS_1_D1816B8957201A9F_METHOD_1_FAB42FA500CDD883_OFFSET UNITYSDK_OFFSET(0x194B9F50)
#define CLASS_1_D1816B8957201A9F_METHOD_1_FE07EFF807C70F65_OFFSET UNITYSDK_OFFSET(0x194B7FA0)
#define CLASS_1_D1816B8957201A9F__CCTOR_OFFSET UNITYSDK_OFFSET(0x194B7720)

inline static constexpr unsigned int Class_1_D1816B8957201A9F_TypeDefinitionIndex = 81932;

class Class_1_D1816B8957201A9F : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType, ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*>*>** StaticGet_Field_1_13()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType, ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1816B8957201A9F_TypeDefinitionIndex)->GetStaticField(0x38210);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MusicGame::ELiveHouseSpineEmojiType>** StaticGet_Field_1_17()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MusicGame::ELiveHouseSpineEmojiType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1816B8957201A9F_TypeDefinitionIndex)->GetStaticField(0x38218);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_10()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1816B8957201A9F_TypeDefinitionIndex)->GetStaticField(0x38220);
	}
	static ::MoleMole::Config::ActivityLiveHouseConstValue** StaticGet_Field_1_14()
	{
		return (::MoleMole::Config::ActivityLiveHouseConstValue**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1816B8957201A9F_TypeDefinitionIndex)->GetStaticField(0x38228);
	}
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseSpineEmojiType, ::MoleMole::MusicGame::FLiveHouseSpineEmojiData>** StaticGet_Field_1_12()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseSpineEmojiType, ::MoleMole::MusicGame::FLiveHouseSpineEmojiData>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1816B8957201A9F_TypeDefinitionIndex)->GetStaticField(0x38230);
	}
	static ::System::Double* StaticGet_Field_1_9()
	{
		return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1816B8957201A9F_TypeDefinitionIndex)->GetStaticField(0xD2E0);
	}
	static ::System::Boolean* StaticGet_Field_1_16()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1816B8957201A9F_TypeDefinitionIndex)->GetStaticField(0xD2E8);
	}
	static ::System::UInt32* StaticGet_Field_1_18()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1816B8957201A9F_TypeDefinitionIndex)->GetStaticField(0xD2EC);
	}
	static ::System::Single* StaticGet_Field_1_19()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1816B8957201A9F_TypeDefinitionIndex)->GetStaticField(0xD2F0);
	}
	static ::MoleMole::MusicGame::FLiveHouseSettingData* StaticGet_Field_1_15()
	{
		return (::MoleMole::MusicGame::FLiveHouseSettingData*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1816B8957201A9F_TypeDefinitionIndex)->GetStaticField(0xD2F4);
	}
	static ::System::Double* StaticGet_Field_1_8()
	{
		return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1816B8957201A9F_TypeDefinitionIndex)->GetStaticField(0xD360);
	}
	// static const ::System::Int32 Field_1_0 = 0x12D5; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x3; // 0x0
	// static const ::System::Single Field_1_6; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x30; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xFFFFFFD0; // 0x0
	// static const ::System::Single Field_1_11; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_09A39B89545FE101()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_09A39B89545FE101_OFFSET))();
	}

	static ::System::Int32 Method_1_7F8ED38F9AEF6911()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_7F8ED38F9AEF6911_OFFSET))();
	}

	static ::System::Void Method_1_055E3BF644BB741B(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_055E3BF644BB741B_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType, ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*>* Method_1_C4D836FAB9875D44(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType, ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_C4D836FAB9875D44_OFFSET))(a1);
	}

	static ::Struct_2_FFBC003CFBB61A74 Method_1_B2BFA56222961CF0(::Class_3_D11B47081CD802C8* a1)
	{
		return ((::Struct_2_FFBC003CFBB61A74(*)(::Class_3_D11B47081CD802C8*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_B2BFA56222961CF0_OFFSET))(a1);
	}

	static ::Struct_2_081A2682696AA10B Method_1_FE07EFF807C70F65(::Class_3_CDD7C63403A61D90* a1, ::Enum_3_E02FB5DE7C8D1AE7 a2)
	{
		return ((::Struct_2_081A2682696AA10B(*)(::Class_3_CDD7C63403A61D90*, ::Enum_3_E02FB5DE7C8D1AE7))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_FE07EFF807C70F65_OFFSET))(a1, a2);
	}

	static ::MoleMole::MusicGame::FLiveHouseSettingData Method_1_F2256D3B7C7C8994()
	{
		return ((::MoleMole::MusicGame::FLiveHouseSettingData(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_F2256D3B7C7C8994_OFFSET))();
	}

	static ::System::Boolean Method_1_C1C5AB73E443B1B4(::Enum_3_462371125D2D5513 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_462371125D2D5513))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_C1C5AB73E443B1B4_OFFSET))(a1);
	}

	static ::System::Double Method_1_AA754EA59735BAD9(::MoleMole::Note* a1)
	{
		return ((::System::Double(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_AA754EA59735BAD9_OFFSET))(a1);
	}

	static ::System::Double Method_1_6C659294E42C280A(::MoleMole::ActivityLivehouseRhythmBeatmapConfig* a1)
	{
		return ((::System::Double(*)(::MoleMole::ActivityLivehouseRhythmBeatmapConfig*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_6C659294E42C280A_OFFSET))(a1);
	}

	static ::System::Void Method_1_D954970F3588635B(::MoleMole::MusicGame::FLiveHouseSettingData a1)
	{
		return ((::System::Void(*)(::MoleMole::MusicGame::FLiveHouseSettingData))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_D954970F3588635B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_57A8E11FECF10345(::Struct_2_B4A88BE55E27A7C3 a1, ::Struct_2_B4A88BE55E27A7C3 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_B4A88BE55E27A7C3, ::Struct_2_B4A88BE55E27A7C3))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_57A8E11FECF10345_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_E625AB0285C2BCC8(::Struct_2_FFBC003CFBB61A74 a1)
	{
		return ((::System::Boolean(*)(::Struct_2_FFBC003CFBB61A74))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_E625AB0285C2BCC8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3D98DB7DD083F480(::Class_3_D11B47081CD802C8* a1)
	{
		return ((::System::Boolean(*)(::Class_3_D11B47081CD802C8*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_3D98DB7DD083F480_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C1C5AB73E443B1B4_1(::Enum_3_462371125D2D5513 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_462371125D2D5513))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_C1C5AB73E443B1B4_1_OFFSET))(a1);
	}

	static ::System::Double Method_1_AC998F1FC9040BDA(::MoleMole::Note* a1)
	{
		return ((::System::Double(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_AC998F1FC9040BDA_OFFSET))(a1);
	}

	static ::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_F730968E2645E14B_OFFSET))();
	}

	static ::System::Boolean Method_1_C1C5AB73E443B1B4_2(::Enum_3_462371125D2D5513 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_462371125D2D5513))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_C1C5AB73E443B1B4_2_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseSpineEmojiType, ::MoleMole::MusicGame::FLiveHouseSpineEmojiData>* Method_1_1BA49AE473484BAE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseSpineEmojiType, ::MoleMole::MusicGame::FLiveHouseSpineEmojiData>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_1BA49AE473484BAE_OFFSET))();
	}

	static ::System::Double Method_1_744DD0CF02061671(::MoleMole::Note* a1)
	{
		return ((::System::Double(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_744DD0CF02061671_OFFSET))(a1);
	}

	static ::MoleMole::Config::ActivityLiveHouseConstValue* Method_1_8A3768DAE2FA37B5()
	{
		return ((::MoleMole::Config::ActivityLiveHouseConstValue*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_8A3768DAE2FA37B5_OFFSET))();
	}

	static ::System::String* Method_1_2762DA0C58DE2FB7(::MoleMole::MusicGame::ELiveHouseSpineEmojiType a1)
	{
		return ((::System::String*(*)(::MoleMole::MusicGame::ELiveHouseSpineEmojiType))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_2762DA0C58DE2FB7_OFFSET))(a1);
	}

	static ::Class_1_D43702405C026A47* Method_1_18712DB3B1B723E8()
	{
		return ((::Class_1_D43702405C026A47*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_18712DB3B1B723E8_OFFSET))();
	}

	static ::System::Void Method_1_C293B8F3ADB851B9()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_C293B8F3ADB851B9_OFFSET))();
	}

	static ::System::Double Method_1_231B9F7B8693F245(::MoleMole::Note* a1, ::System::Double a2)
	{
		return ((::System::Double(*)(::MoleMole::Note*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_231B9F7B8693F245_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_E2030E810407E26B(::Enum_3_462371125D2D5513 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_462371125D2D5513))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_E2030E810407E26B_OFFSET))(a1);
	}

	static ::System::Double Method_1_AC998F1FC9040BDA_1(::MoleMole::Note* a1)
	{
		return ((::System::Double(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_AC998F1FC9040BDA_1_OFFSET))(a1);
	}

	static ::System::Double Method_1_AC998F1FC9040BDA_2(::MoleMole::Note* a1)
	{
		return ((::System::Double(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_AC998F1FC9040BDA_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_7D4F9B568D8BC6AB(::System::Double a1)
	{
		return ((::System::Void(*)(::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_7D4F9B568D8BC6AB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_5B484627A8A06DD9(::Enum_3_462371125D2D5513 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_462371125D2D5513))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_5B484627A8A06DD9_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E2030E810407E26B_1(::Enum_3_462371125D2D5513 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_462371125D2D5513))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_E2030E810407E26B_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_AE9195AF42F185CC(::Class_0_16E4307DCC419505_181*& a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_181*&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_AE9195AF42F185CC_OFFSET))(a1, a2);
	}

	static ::Enum_3_0C5EBCCE1D54A049 Method_1_2AB16C1FA4EAF6A2(::System::Int32 a1)
	{
		return ((::Enum_3_0C5EBCCE1D54A049(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_2AB16C1FA4EAF6A2_OFFSET))(a1);
	}

	static ::Enum_3_C3C384691A090251 Method_1_022E73465569B5C3(::MoleMole::InputActionEvent a1)
	{
		return ((::Enum_3_C3C384691A090251(*)(::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_022E73465569B5C3_OFFSET))(a1);
	}

	static ::System::Double Method_1_A4B358CFA248B244()
	{
		return ((::System::Double(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_A4B358CFA248B244_OFFSET))();
	}

	static ::System::Single Method_1_3150507749BCEAEC()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_3150507749BCEAEC_OFFSET))();
	}

	static ::System::Void Method_1_AA2C5C495E0E542E(::MoleMole::UIBaseController* a1, ::Enum_3_0C5EBCCE1D54A049 a2)
	{
		return ((::System::Void(*)(::MoleMole::UIBaseController*, ::Enum_3_0C5EBCCE1D54A049))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_AA2C5C495E0E542E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_C1C5AB73E443B1B4_3(::Enum_3_193F3C12190537FD a1)
	{
		return ((::System::Boolean(*)(::Enum_3_193F3C12190537FD))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_C1C5AB73E443B1B4_3_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_04F7CE19528E4FE5(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_04F7CE19528E4FE5_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C1C5AB73E443B1B4_4(::Enum_3_462371125D2D5513 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_462371125D2D5513))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_C1C5AB73E443B1B4_4_OFFSET))(a1);
	}

	static ::Struct_2_FFBC003CFBB61A74 Method_1_FAB42FA500CDD883(::Class_3_D11B47081CD802C8* a1, ::Enum_3_193F3C12190537FD a2, ::Enum_3_462371125D2D5513 a3, ::Enum_3_E02FB5DE7C8D1AE7 a4)
	{
		return ((::Struct_2_FFBC003CFBB61A74(*)(::Class_3_D11B47081CD802C8*, ::Enum_3_193F3C12190537FD, ::Enum_3_462371125D2D5513, ::Enum_3_E02FB5DE7C8D1AE7))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_FAB42FA500CDD883_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_DF289035BEA563C0(::MoleMole::MusicGame::ELiveHouseSpineEmojiType a1)
	{
		return ((::System::Single(*)(::MoleMole::MusicGame::ELiveHouseSpineEmojiType))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_DF289035BEA563C0_OFFSET))(a1);
	}

	static ::System::Double Method_1_080936BC105064D6(::MoleMole::Note* a1, ::System::Double a2)
	{
		return ((::System::Double(*)(::MoleMole::Note*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_080936BC105064D6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_55A6AB128FB8E363(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType, ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*>*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType, ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_55A6AB128FB8E363_OFFSET))(a1);
	}

	static ::Enum_3_70248E32F82D4889_2 Method_1_7A3720011442FAF3(::Enum_3_193F3C12190537FD a1)
	{
		return ((::Enum_3_70248E32F82D4889_2(*)(::Enum_3_193F3C12190537FD))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_7A3720011442FAF3_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_5A0ABD813A2B8D81(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_5A0ABD813A2B8D81_OFFSET))(a1);
	}

	static ::System::Double Method_1_431CEE840B9AD9EF(::MoleMole::Note* a1)
	{
		return ((::System::Double(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_431CEE840B9AD9EF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C1C5AB73E443B1B4_5(::Enum_3_193F3C12190537FD a1)
	{
		return ((::System::Boolean(*)(::Enum_3_193F3C12190537FD))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_C1C5AB73E443B1B4_5_OFFSET))(a1);
	}

	static ::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType Method_1_340963F02BF514CA(::Struct_2_FFBC003CFBB61A74 a1)
	{
		return ((::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType(*)(::Struct_2_FFBC003CFBB61A74))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_340963F02BF514CA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E554CEBF01F65235(::MoleMole::Note* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_E554CEBF01F65235_OFFSET))(a1);
	}

	static ::Struct_2_FFBC003CFBB61A74 Method_1_B2BFA56222961CF0_1(::Class_3_D11B47081CD802C8* a1)
	{
		return ((::Struct_2_FFBC003CFBB61A74(*)(::Class_3_D11B47081CD802C8*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_B2BFA56222961CF0_1_OFFSET))(a1);
	}

	static ::MoleMole::MusicGame::ELiveHouseSpineEmojiType Method_1_B1B131E061549818(::System::String* a1)
	{
		return ((::MoleMole::MusicGame::ELiveHouseSpineEmojiType(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_B1B131E061549818_OFFSET))(a1);
	}

	static ::System::Double Method_1_431CEE840B9AD9EF_1(::MoleMole::Note* a1)
	{
		return ((::System::Double(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_431CEE840B9AD9EF_1_OFFSET))(a1);
	}

	static ::Struct_2_FFBC003CFBB61A74 Method_1_B2BFA56222961CF0_2(::Class_3_D11B47081CD802C8* a1)
	{
		return ((::Struct_2_FFBC003CFBB61A74(*)(::Class_3_D11B47081CD802C8*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_B2BFA56222961CF0_2_OFFSET))(a1);
	}

	static ::Struct_2_FFBC003CFBB61A74 Method_1_16A1F5578E20CC62(::Class_3_D11B47081CD802C8* a1, ::Struct_2_4C8453486C91E3A1_15 a2)
	{
		return ((::Struct_2_FFBC003CFBB61A74(*)(::Class_3_D11B47081CD802C8*, ::Struct_2_4C8453486C91E3A1_15))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_16A1F5578E20CC62_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType, ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*>*>* Method_1_9B207DC6E5A6D4EB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType, ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*>*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_9B207DC6E5A6D4EB_OFFSET))();
	}

	static ::System::UInt32 Method_1_4E2BCE3C8705DF5E()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_4E2BCE3C8705DF5E_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_E7195E00AA43B130(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_E7195E00AA43B130_OFFSET))(a1, a2);
	}

	static ::System::Double Method_1_431CEE840B9AD9EF_2(::MoleMole::Note* a1)
	{
		return ((::System::Double(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_431CEE840B9AD9EF_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_6346628F16B83983(::MoleMole::Config::ActivityLiveHouseConstValue* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ActivityLiveHouseConstValue*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_6346628F16B83983_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E2030E810407E26B_2(::Enum_3_193F3C12190537FD a1)
	{
		return ((::System::Boolean(*)(::Enum_3_193F3C12190537FD))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_E2030E810407E26B_2_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_7B634279EA4AF444(::Class_4_EDAF922741458586* a1, ::Enum_3_C3C384691A090251 a2)
	{
		return ((::System::Boolean(*)(::Class_4_EDAF922741458586*, ::Enum_3_C3C384691A090251))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_7B634279EA4AF444_OFFSET))(a1, a2);
	}

	static ::System::Double Method_1_295A574A3B3BE00D(::MoleMole::Note* a1)
	{
		return ((::System::Double(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_295A574A3B3BE00D_OFFSET))(a1);
	}

	static ::System::Double Method_1_080936BC105064D6_1(::MoleMole::Note* a1, ::System::Double a2)
	{
		return ((::System::Double(*)(::MoleMole::Note*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_080936BC105064D6_1_OFFSET))(a1, a2);
	}

	static ::Foundation::AssetPath Method_1_DD55BBAE50946E29(::Class_4_EDAF922741458586* a1)
	{
		return ((::Foundation::AssetPath(*)(::Class_4_EDAF922741458586*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_DD55BBAE50946E29_OFFSET))(a1);
	}

	static ::System::Void Method_1_03E375A30E3AFF80(::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseSpineEmojiType, ::MoleMole::MusicGame::FLiveHouseSpineEmojiData>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseSpineEmojiType, ::MoleMole::MusicGame::FLiveHouseSpineEmojiData>*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_03E375A30E3AFF80_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>* Method_1_C21DC7486A01DA55(::System::Int32 a1, ::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType a2)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*(*)(::System::Int32, ::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_C21DC7486A01DA55_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7D4F9B568D8BC6AB_1(::System::Double a1)
	{
		return ((::System::Void(*)(::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_7D4F9B568D8BC6AB_1_OFFSET))(a1);
	}

	static ::System::Double Method_1_A4B358CFA248B244_1()
	{
		return ((::System::Double(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_A4B358CFA248B244_1_OFFSET))();
	}

	static ::MoleMole::MusicGame::ELiveHouseSpineEmojiType Method_1_67539326A6504A6B(::Struct_2_FFBC003CFBB61A74 a1)
	{
		return ((::MoleMole::MusicGame::ELiveHouseSpineEmojiType(*)(::Struct_2_FFBC003CFBB61A74))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_67539326A6504A6B_OFFSET))(a1);
	}

	static ::System::Double Method_1_295A574A3B3BE00D_1(::MoleMole::Note* a1)
	{
		return ((::System::Double(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_295A574A3B3BE00D_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_4A2D31B96D58BF84(::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseSpineEmojiType, ::MoleMole::MusicGame::FLiveHouseSpineEmojiData>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseSpineEmojiType, ::MoleMole::MusicGame::FLiveHouseSpineEmojiData>*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_4A2D31B96D58BF84_OFFSET))(a1);
	}

	static ::Enum_3_193F3C12190537FD Method_1_7A3720011442FAF3_1(::Enum_3_462371125D2D5513 a1)
	{
		return ((::Enum_3_193F3C12190537FD(*)(::Enum_3_462371125D2D5513))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_7A3720011442FAF3_1_OFFSET))(a1);
	}
};
