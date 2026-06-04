#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7256E7A2FB36A46D.h"
#include "unitysdk/Class_1_D4E2A0605A71F3AC_FadingDoneActionType.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingConsequenceClass.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingDistanceTier.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingEntryResolveResult.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingImmediateFinishReason.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingInvalidReason.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingLowRejectedReason.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingPriority.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingPriorityModifierFlags.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingSizeTier.h"
#include "unitysdk/Struct_2_3D5F31420A8FFFAB.h"

class Class_1_303D5A33D1401D59;
class Class_1_43BD383C98B4C0C5_178;
class Class_1_5B228A4605C15E47;
class Class_1_8A6989C352B0F0F0;
class Class_1_D70A30D666F20D90;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F2C0B67BFD1BE2D4_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA70DB60)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_006CD1FEA47A0047_OFFSET UNITYSDK_OFFSET(0xA714310)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_05679872695EE5DE_OFFSET UNITYSDK_OFFSET(0xA70F0F0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_0DC83DAD98592ADE_OFFSET UNITYSDK_OFFSET(0xA7141C0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_1576E1CE6A5A6899_OFFSET UNITYSDK_OFFSET(0xA70F390)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_17138B761264CC88_OFFSET UNITYSDK_OFFSET(0xA715480)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_1851C433B7254E4E_OFFSET UNITYSDK_OFFSET(0xA70D6C0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0xA70D940)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_1B940836A1F34C87_OFFSET UNITYSDK_OFFSET(0xA70EE70)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_1E65D5278B14D1FD_OFFSET UNITYSDK_OFFSET(0xA711710)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_1FAABE846E698D1A_OFFSET UNITYSDK_OFFSET(0xA7164D0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_20DC6DCB117C6B7A_OFFSET UNITYSDK_OFFSET(0xA715130)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_20F4806358A3520A_OFFSET UNITYSDK_OFFSET(0xA7140F0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_23A1C0849632D0BE_OFFSET UNITYSDK_OFFSET(0xA7157E0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_2736DB93587355B8_OFFSET UNITYSDK_OFFSET(0xA716550)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_2759ADA20E855CE8_OFFSET UNITYSDK_OFFSET(0xA711BE0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_2BB6C2E76A7F3DC4_OFFSET UNITYSDK_OFFSET(0xA710260)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_2C20843CF7095E31_OFFSET UNITYSDK_OFFSET(0xA714470)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_2E47F09A457E7E05_OFFSET UNITYSDK_OFFSET(0xA712D60)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_2F8FA374EC52F23F_OFFSET UNITYSDK_OFFSET(0xA714E80)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_38740012B28097EB_OFFSET UNITYSDK_OFFSET(0xA7156F0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xA70F0A0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0xA711620)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_3CFDF6770C17E70E_OFFSET UNITYSDK_OFFSET(0xA712E50)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_3E6FB3DE27C4C8EC_OFFSET UNITYSDK_OFFSET(0xA715D10)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_3FBC1A60355758EB_OFFSET UNITYSDK_OFFSET(0xA714520)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_42AE4B7779F3CD9E_OFFSET UNITYSDK_OFFSET(0xA713130)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_4DC8F3BA94C1B88F_OFFSET UNITYSDK_OFFSET(0xA714570)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_4ED5A32649C8BEBA_OFFSET UNITYSDK_OFFSET(0xA7162D0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_4F23460C1EEEBEFF_OFFSET UNITYSDK_OFFSET(0xA712F80)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_50884DFE76178C82_OFFSET UNITYSDK_OFFSET(0xA70F740)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_52AC5A7E30C57CDD_OFFSET UNITYSDK_OFFSET(0xA716B40)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_5810DC41D2A93362_OFFSET UNITYSDK_OFFSET(0xA711F80)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_599021EE91C695A9_OFFSET UNITYSDK_OFFSET(0xA715D60)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_5B0BFDE53F3EF8D7_OFFSET UNITYSDK_OFFSET(0xA716C40)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_5B50D83CCA9B8737_OFFSET UNITYSDK_OFFSET(0xA714860)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_667279DBE105F9CF_OFFSET UNITYSDK_OFFSET(0xA70FC40)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_673217A779339F67_OFFSET UNITYSDK_OFFSET(0xA715C10)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_6CE5AE8639ED54AC_OFFSET UNITYSDK_OFFSET(0xA70DDA0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_70FDDCEE7F0781C2_OFFSET UNITYSDK_OFFSET(0xA716600)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_7626A278984F5E39_OFFSET UNITYSDK_OFFSET(0xA710920)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_7BA8DD80C3AB9B17_OFFSET UNITYSDK_OFFSET(0xA716840)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_7F68D6D1D153FE6C_OFFSET UNITYSDK_OFFSET(0xA70F620)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_8122CA65A8871E31_OFFSET UNITYSDK_OFFSET(0xA7150D0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_814B2B0F621DA493_OFFSET UNITYSDK_OFFSET(0xA70ED30)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_841D90BDB3E94FF6_OFFSET UNITYSDK_OFFSET(0xA710040)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_86AB569C8CD2E4F7_OFFSET UNITYSDK_OFFSET(0xA714600)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_88A5B850784109E7_OFFSET UNITYSDK_OFFSET(0xA714C90)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xA70D160)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_98984F75628BD4A0_OFFSET UNITYSDK_OFFSET(0xA715090)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A1075642AC8E7495_OFFSET UNITYSDK_OFFSET(0xA710BC0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xA711B20)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A1B22949C6040DE2_OFFSET UNITYSDK_OFFSET(0xA715DE0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0xA715790)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xA716D30)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A28BA6B5EDF7FCB8_OFFSET UNITYSDK_OFFSET(0xA713CA0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A3F50826E47AF91B_OFFSET UNITYSDK_OFFSET(0xA7143D0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A44A18C9451109E4_OFFSET UNITYSDK_OFFSET(0xA70F890)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_AA71AA0AD2B25A32_OFFSET UNITYSDK_OFFSET(0xA714FB0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_ACEE8F0463BB6E80_OFFSET UNITYSDK_OFFSET(0xA716400)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0xA712E00)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_B0C9E856F8614857_OFFSET UNITYSDK_OFFSET(0xA714E30)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_B26D020C1C1FC342_OFFSET UNITYSDK_OFFSET(0xA716CC0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_BA766F2847F0EC0E_OFFSET UNITYSDK_OFFSET(0xA70EF40)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_BEE647E2828D043F_OFFSET UNITYSDK_OFFSET(0xA7146B0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_C3C97913312CE9BA_OFFSET UNITYSDK_OFFSET(0xA716780)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_C66F716788CC7B7A_OFFSET UNITYSDK_OFFSET(0xA7149A0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA716DB0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xA7116D0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA716D70)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_CA8345F08AB32EBF_1_OFFSET UNITYSDK_OFFSET(0xA70F330)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_CA8345F08AB32EBF_OFFSET UNITYSDK_OFFSET(0xA7167E0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_D017EF9147EE9630_OFFSET UNITYSDK_OFFSET(0xA711790)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_D0ACB47B641DF879_OFFSET UNITYSDK_OFFSET(0xA7118A0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_D1DAA01ABF3D4077_OFFSET UNITYSDK_OFFSET(0xA70F2F0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_D1FD1530F1D49001_OFFSET UNITYSDK_OFFSET(0xA70FE40)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_DCCBD38EA65D68E3_OFFSET UNITYSDK_OFFSET(0xA7151A0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_E02E69A2C8DC0BB2_OFFSET UNITYSDK_OFFSET(0xA715CC0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_E42A8E9F39D94A22_OFFSET UNITYSDK_OFFSET(0xA714010)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_E665B6DBFA4CE79A_OFFSET UNITYSDK_OFFSET(0xA713F10)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_F4499003B6A4CCA7_OFFSET UNITYSDK_OFFSET(0xA712CA0)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_F70931C4E29FD115_OFFSET UNITYSDK_OFFSET(0xA70F040)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_F7591C7E101B67A9_OFFSET UNITYSDK_OFFSET(0xA712900)
#define CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0xA7111F0)
#define CLASS_2_F2C0B67BFD1BE2D4__CCTOR_OFFSET UNITYSDK_OFFSET(0xA716DF0)
#define CLASS_2_F2C0B67BFD1BE2D4__CTOR_OFFSET UNITYSDK_OFFSET(0xA70D1B0)

inline static constexpr unsigned int Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex = 69033;

class Class_2_F2C0B67BFD1BE2D4 : public ::Class_1_7256E7A2FB36A46D
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_0()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x5B630);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_1()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x5B638);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_2()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x5B640);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_3()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x5B648);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_4()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x5B650);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_5()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x5B658);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_6()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x5B660);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_7()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x5B668);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_8()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x5B670);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_9()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x5B678);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_10()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x5B680);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_11()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x5B688);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_12()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x5B690);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_13()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x5B698);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_14()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x5B6A0);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_15()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x5B6A8);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_16()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x5B6B0);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_17()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x5B6B8);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_18()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x5B6C0);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_19()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x5B6C8);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_20()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F2C0B67BFD1BE2D4_TypeDefinitionIndex)->GetStaticField(0x5B6D0);
	}
	// static const ::System::Single Field_2_21; // 0x0
	// static const ::System::Single Field_2_22; // 0x0
	// static const ::System::Single Field_2_23; // 0x0
	// static const ::System::Single Field_2_24; // 0x0
	// static const ::System::Single Field_2_25; // 0x0
	// static const ::System::Single Field_2_26; // 0x0
	// static const ::System::Single Field_2_27; // 0x0
	// static const ::System::Int32 Field_2_28 = 0xB4; // 0x0
	// static const ::System::Int32 Field_2_29 = 0x12C; // 0x0
	// static const ::System::Int32 Field_2_30 = 0x3C; // 0x0
	// static const ::System::Int32 Field_2_31 = 0xC; // 0x0
	// static const ::System::Int32 Field_2_32 = 0xF; // 0x0
	// static const ::System::Int32 Field_2_33 = 0x2; // 0x0
	// static const ::System::Int32 Field_2_34 = 0x8; // 0x0
	// static const ::System::Int32 Field_2_35 = 0x1; // 0x0
	// static const ::System::Int32 Field_2_36 = 0x40; // 0x0
	// static const ::System::Int32 Field_2_37 = 0x1A4; // 0x0
	// static const ::System::Int32 Field_2_38 = 0x2D; // 0x0
	// static const ::System::Int32 Field_2_39 = 0xC; // 0x0
	// static const ::System::Int32 Field_2_40 = 0x8; // 0x0
	// static const ::System::Int32 Field_2_41 = 0x78; // 0x0
	// static const ::System::Int32 Field_2_42 = 0xB4; // 0x0
	// static const ::System::Int32 Field_2_43 = 0x12C; // 0x0
	// static const ::System::Int32 Field_2_44 = 0x5A; // 0x0
	::Il2CppArray<::System::Int32>* Field_2_45; // 0x18
	::System::Collections::Generic::HashSet_1<::Class_1_8A6989C352B0F0F0*>* Field_2_46; // 0x20
	::Il2CppArray<::System::Int32>* Field_2_47; // 0x28
	::Il2CppArray<::System::Int32>* Field_2_48; // 0x30
	::System::Collections::Generic::HashSet_1<::Class_1_8A6989C352B0F0F0*>* Field_2_49; // 0x38
	::Il2CppArray<::System::Int32>* Field_2_50; // 0x40
	::System::Collections::Generic::Dictionary_2<::Class_1_8A6989C352B0F0F0*, ::Class_1_43BD383C98B4C0C5_178*>* Field_2_51; // 0x48
	::Il2CppArray<::System::Int32>* Field_2_52; // 0x50
	::System::Collections::Generic::List_1<::Class_1_8A6989C352B0F0F0*>* Field_2_53; // 0x58
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_178*>* Field_2_54; // 0x60
	::System::Collections::Generic::List_1<::Class_1_8A6989C352B0F0F0*>* Field_2_55; // 0x68
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_178*>* Field_2_56; // 0x70
	::Il2CppArray<::System::Int32>* Field_2_57; // 0x78
	::Il2CppArray<::System::Int32>* Field_2_58; // 0x80
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_178*>* Field_2_59; // 0x88
	::Il2CppArray<::System::Int32>* Field_2_60; // 0x90
	::System::Int32 Field_2_61; // 0x98
	::System::Int32 Field_2_62; // 0x9C
	::System::Int32 Field_2_63; // 0xA0
	::System::Int32 Field_2_64; // 0xA4
	::System::Int32 Field_2_65; // 0xA8
	::System::Int32 Field_2_66; // 0xAC
	::System::Int32 Field_2_67; // 0xB0
	::System::Int32 Field_2_68; // 0xB4
	::System::Int32 Field_2_69; // 0xB8
	::System::Boolean Field_2_70; // 0xBC
	::System::Int32 Field_2_71; // 0xC0
	::System::Int32 Field_2_72; // 0xC4
	::System::Int32 Field_2_73; // 0xC8
	::System::Int32 Field_2_74; // 0xCC
	::System::Int32 Field_2_75; // 0xD0
	::System::Int32 Field_2_76; // 0xD4

	::System::Void _ctor(::Class_1_D70A30D666F20D90* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4__CCTOR_OFFSET))();
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_2_1851C433B7254E4E(::Class_1_D70A30D666F20D90* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_1851C433B7254E4E_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_6CE5AE8639ED54AC(::Class_1_8A6989C352B0F0F0* a1, ::Class_1_5B228A4605C15E47* a2, ::Class_1_303D5A33D1401D59* a3, ::Class_1_D4E2A0605A71F3AC_FadingDoneActionType a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::Class_1_5B228A4605C15E47*, ::Class_1_303D5A33D1401D59*, ::Class_1_D4E2A0605A71F3AC_FadingDoneActionType))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_6CE5AE8639ED54AC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_1576E1CE6A5A6899(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_1576E1CE6A5A6899_OFFSET))(this, a1);
	}

	::System::Void Method_2_841D90BDB3E94FF6(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_841D90BDB3E94FF6_OFFSET))(this, a1);
	}

	::System::Void Method_2_7626A278984F5E39(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_7626A278984F5E39_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1075642AC8E7495(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A1075642AC8E7495_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F4499003B6A4CCA7(::Struct_2_3D5F31420A8FFFAB a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_F4499003B6A4CCA7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F7591C7E101B67A9(::Struct_2_3D5F31420A8FFFAB a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_F7591C7E101B67A9_OFFSET))(this, a1);
	}

	::Struct_2_3D5F31420A8FFFAB Method_2_667279DBE105F9CF(::System::Boolean a1)
	{
		return ((::Struct_2_3D5F31420A8FFFAB(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_667279DBE105F9CF_OFFSET))(this, a1);
	}

	::RPG::Client::OpenWorld::FadingImmediateFinishReason Method_2_1E65D5278B14D1FD(::Struct_2_3D5F31420A8FFFAB a1, ::System::Boolean a2)
	{
		return ((::RPG::Client::OpenWorld::FadingImmediateFinishReason(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_1E65D5278B14D1FD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2759ADA20E855CE8(::Struct_2_3D5F31420A8FFFAB a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_2759ADA20E855CE8_OFFSET))(this, a1);
	}

	::System::Void Method_2_5810DC41D2A93362(::Struct_2_3D5F31420A8FFFAB a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_5810DC41D2A93362_OFFSET))(this, a1);
	}

	::RPG::Client::OpenWorld::FadingEntryResolveResult Method_2_2C20843CF7095E31(::Class_1_43BD383C98B4C0C5_178* a1, ::Struct_2_3D5F31420A8FFFAB a2, ::RPG::Client::OpenWorld::FadingImmediateFinishReason& a3)
	{
		return ((::RPG::Client::OpenWorld::FadingEntryResolveResult(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_178*, ::Struct_2_3D5F31420A8FFFAB, ::RPG::Client::OpenWorld::FadingImmediateFinishReason&))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_2C20843CF7095E31_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_BEE647E2828D043F(::Class_1_43BD383C98B4C0C5_178* a1, ::Struct_2_3D5F31420A8FFFAB a2, ::RPG::Client::OpenWorld::FadingImmediateFinishReason& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_178*, ::Struct_2_3D5F31420A8FFFAB, ::RPG::Client::OpenWorld::FadingImmediateFinishReason&))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_BEE647E2828D043F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_86AB569C8CD2E4F7(::Class_1_43BD383C98B4C0C5_178* a1, ::Struct_2_3D5F31420A8FFFAB a2, ::RPG::Client::OpenWorld::FadingImmediateFinishReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_178*, ::Struct_2_3D5F31420A8FFFAB, ::RPG::Client::OpenWorld::FadingImmediateFinishReason))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_86AB569C8CD2E4F7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_42AE4B7779F3CD9E(::Struct_2_3D5F31420A8FFFAB a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_42AE4B7779F3CD9E_OFFSET))(this, a1);
	}

	::RPG::Client::OpenWorld::FadingPriority Method_2_C66F716788CC7B7A(::Class_1_43BD383C98B4C0C5_178* a1, ::Struct_2_3D5F31420A8FFFAB a2, ::RPG::Client::OpenWorld::FadingPriority& a3, ::RPG::Client::OpenWorld::FadingPriorityModifierFlags& a4, ::System::Boolean& a5, ::RPG::Client::OpenWorld::FadingLowRejectedReason& a6, ::System::Boolean& a7)
	{
		return ((::RPG::Client::OpenWorld::FadingPriority(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_178*, ::Struct_2_3D5F31420A8FFFAB, ::RPG::Client::OpenWorld::FadingPriority&, ::RPG::Client::OpenWorld::FadingPriorityModifierFlags&, ::System::Boolean&, ::RPG::Client::OpenWorld::FadingLowRejectedReason&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_C66F716788CC7B7A_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::RPG::Client::OpenWorld::FadingPriority Method_2_88A5B850784109E7(::Class_1_43BD383C98B4C0C5_178* a1, ::RPG::Client::OpenWorld::FadingPriority a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::RPG::Client::OpenWorld::FadingPriority(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_178*, ::RPG::Client::OpenWorld::FadingPriority, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_88A5B850784109E7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_A28BA6B5EDF7FCB8(::RPG::Client::OpenWorld::FadingPriority a1, ::Struct_2_3D5F31420A8FFFAB a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::FadingPriority, ::Struct_2_3D5F31420A8FFFAB))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A28BA6B5EDF7FCB8_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_DCCBD38EA65D68E3(::RPG::Client::OpenWorld::FadingPriority a1, ::Struct_2_3D5F31420A8FFFAB a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::FadingPriority, ::Struct_2_3D5F31420A8FFFAB, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_DCCBD38EA65D68E3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_E665B6DBFA4CE79A(::Struct_2_3D5F31420A8FFFAB a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_E665B6DBFA4CE79A_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_E42A8E9F39D94A22(::Struct_2_3D5F31420A8FFFAB a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_E42A8E9F39D94A22_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_20F4806358A3520A(::Struct_2_3D5F31420A8FFFAB a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_20F4806358A3520A_OFFSET))(this, a1);
	}

	::Class_1_43BD383C98B4C0C5_178* Method_2_17138B761264CC88(::Struct_2_3D5F31420A8FFFAB a1)
	{
		return ((::Class_1_43BD383C98B4C0C5_178*(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_17138B761264CC88_OFFSET))(this, a1);
	}

	::System::Void Method_2_0DC83DAD98592ADE(::Struct_2_3D5F31420A8FFFAB a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_0DC83DAD98592ADE_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_23A1C0849632D0BE(::Struct_2_3D5F31420A8FFFAB a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_23A1C0849632D0BE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7F68D6D1D153FE6C(::Class_1_43BD383C98B4C0C5_178* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_178*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_7F68D6D1D153FE6C_OFFSET))(this, a1);
	}

	::System::Void Method_2_D1FD1530F1D49001(::Struct_2_3D5F31420A8FFFAB a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_D1FD1530F1D49001_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_D017EF9147EE9630(::Struct_2_3D5F31420A8FFFAB a1, ::RPG::Client::OpenWorld::FadingImmediateFinishReason a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB, ::RPG::Client::OpenWorld::FadingImmediateFinishReason))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_D017EF9147EE9630_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3CFDF6770C17E70E(::Struct_2_3D5F31420A8FFFAB a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_3CFDF6770C17E70E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4F23460C1EEEBEFF(::Struct_2_3D5F31420A8FFFAB a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_3D5F31420A8FFFAB))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_4F23460C1EEEBEFF_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2BB6C2E76A7F3DC4(::Class_1_43BD383C98B4C0C5_178* a1, ::Struct_2_3D5F31420A8FFFAB a2, ::System::Boolean a3, ::RPG::Client::OpenWorld::FadingImmediateFinishReason a4, ::RPG::Client::OpenWorld::FadingPriority a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_178*, ::Struct_2_3D5F31420A8FFFAB, ::System::Boolean, ::RPG::Client::OpenWorld::FadingImmediateFinishReason, ::RPG::Client::OpenWorld::FadingPriority))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_2BB6C2E76A7F3DC4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_20DC6DCB117C6B7A(::Class_1_43BD383C98B4C0C5_178* a1, ::RPG::Client::OpenWorld::FadingPriority a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_178*, ::RPG::Client::OpenWorld::FadingPriority))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_20DC6DCB117C6B7A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_50884DFE76178C82(::Class_1_43BD383C98B4C0C5_178* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_178*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_50884DFE76178C82_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD3B916300F77FDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_FD3B916300F77FDA_OFFSET))(this);
	}

	::System::Void Method_2_A44A18C9451109E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A44A18C9451109E4_OFFSET))(this);
	}

	::System::Void Method_2_A1B22949C6040DE2(::Class_1_43BD383C98B4C0C5_178* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_178*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A1B22949C6040DE2_OFFSET))(this, a1);
	}

	::System::Void Method_2_4ED5A32649C8BEBA(::Class_1_43BD383C98B4C0C5_178* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_178*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_4ED5A32649C8BEBA_OFFSET))(this, a1);
	}

	::System::Void Method_2_ACEE8F0463BB6E80(::Class_1_43BD383C98B4C0C5_178* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_178*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_ACEE8F0463BB6E80_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_2736DB93587355B8(::Class_1_43BD383C98B4C0C5_178* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_178*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_2736DB93587355B8_OFFSET))(this, a1);
	}

	::System::Void Method_2_70FDDCEE7F0781C2(::Class_1_43BD383C98B4C0C5_178* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_178*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_70FDDCEE7F0781C2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_05679872695EE5DE(::Class_1_43BD383C98B4C0C5_178* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_178*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_05679872695EE5DE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_006CD1FEA47A0047(::Class_1_43BD383C98B4C0C5_178* a1, ::RPG::Client::OpenWorld::FadingInvalidReason& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_178*, ::RPG::Client::OpenWorld::FadingInvalidReason&))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_006CD1FEA47A0047_OFFSET))(this, a1, a2);
	}

	::RPG::Client::OpenWorld::FadingConsequenceClass Method_2_1B940836A1F34C87(::Class_1_8A6989C352B0F0F0* a1, ::Class_1_D4E2A0605A71F3AC_FadingDoneActionType a2)
	{
		return ((::RPG::Client::OpenWorld::FadingConsequenceClass(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::Class_1_D4E2A0605A71F3AC_FadingDoneActionType))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_1B940836A1F34C87_OFFSET))(this, a1, a2);
	}

	static ::RPG::Client::OpenWorld::FadingPriority Method_2_F70931C4E29FD115(::RPG::Client::OpenWorld::FadingConsequenceClass a1)
	{
		return ((::RPG::Client::OpenWorld::FadingPriority(*)(::RPG::Client::OpenWorld::FadingConsequenceClass))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_F70931C4E29FD115_OFFSET))(a1);
	}

	static ::RPG::Client::OpenWorld::FadingPriority Method_2_C3C97913312CE9BA(::RPG::Client::OpenWorld::FadingConsequenceClass a1)
	{
		return ((::RPG::Client::OpenWorld::FadingPriority(*)(::RPG::Client::OpenWorld::FadingConsequenceClass))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_C3C97913312CE9BA_OFFSET))(a1);
	}

	static ::RPG::Client::OpenWorld::FadingPriority Method_2_AA71AA0AD2B25A32(::RPG::Client::OpenWorld::FadingConsequenceClass a1, ::RPG::Client::OpenWorld::FadingPriority a2)
	{
		return ((::RPG::Client::OpenWorld::FadingPriority(*)(::RPG::Client::OpenWorld::FadingConsequenceClass, ::RPG::Client::OpenWorld::FadingPriority))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_AA71AA0AD2B25A32_OFFSET))(a1, a2);
	}

	static ::RPG::Client::OpenWorld::FadingPriority Method_2_B0C9E856F8614857(::RPG::Client::OpenWorld::FadingPriority a1, ::RPG::Client::OpenWorld::FadingPriority a2)
	{
		return ((::RPG::Client::OpenWorld::FadingPriority(*)(::RPG::Client::OpenWorld::FadingPriority, ::RPG::Client::OpenWorld::FadingPriority))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_B0C9E856F8614857_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_98984F75628BD4A0(::RPG::Client::OpenWorld::FadingPriority a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::OpenWorld::FadingPriority))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_98984F75628BD4A0_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_673217A779339F67(::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_178*>* a1, ::Class_1_43BD383C98B4C0C5_178* a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_178*>*, ::Class_1_43BD383C98B4C0C5_178*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_673217A779339F67_OFFSET))(a1, a2);
	}

	static ::RPG::Client::OpenWorld::FadingSizeTier Method_2_BA766F2847F0EC0E(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::RPG::Client::OpenWorld::FadingSizeTier(*)(::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_BA766F2847F0EC0E_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_A3F50826E47AF91B(::Class_1_8A6989C352B0F0F0* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Boolean(*)(::Class_1_8A6989C352B0F0F0*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A3F50826E47AF91B_OFFSET))(a1, a2);
	}

	::RPG::Client::OpenWorld::FadingDistanceTier Method_2_5B50D83CCA9B8737(::Class_1_43BD383C98B4C0C5_178* a1, ::Struct_2_3D5F31420A8FFFAB a2)
	{
		return ((::RPG::Client::OpenWorld::FadingDistanceTier(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_178*, ::Struct_2_3D5F31420A8FFFAB))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_5B50D83CCA9B8737_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_2F8FA374EC52F23F(::Class_1_43BD383C98B4C0C5_178* a1, ::System::Int32 a2, ::RPG::Client::OpenWorld::FadingLowRejectedReason& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_178*, ::System::Int32, ::RPG::Client::OpenWorld::FadingLowRejectedReason&))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_2F8FA374EC52F23F_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_2_8122CA65A8871E31(::Class_1_43BD383C98B4C0C5_178* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::Class_1_43BD383C98B4C0C5_178*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_8122CA65A8871E31_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_38740012B28097EB(::RPG::Client::OpenWorld::FadingPriority a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::FadingPriority, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_38740012B28097EB_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Int32 Method_2_814B2B0F621DA493()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_814B2B0F621DA493_OFFSET))(this);
	}

	::System::Void Method_2_CA8345F08AB32EBF(::Class_1_43BD383C98B4C0C5_178* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_178*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_CA8345F08AB32EBF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA8345F08AB32EBF_1(::Class_1_43BD383C98B4C0C5_178* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_178*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_CA8345F08AB32EBF_1_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_2_D1DAA01ABF3D4077(::Class_1_43BD383C98B4C0C5_178* a1)
	{
		return ((::System::Boolean(*)(::Class_1_43BD383C98B4C0C5_178*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_D1DAA01ABF3D4077_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_7BA8DD80C3AB9B17(::Class_1_43BD383C98B4C0C5_178* a1)
	{
		return ((::System::Boolean(*)(::Class_1_43BD383C98B4C0C5_178*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_7BA8DD80C3AB9B17_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_52AC5A7E30C57CDD(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_52AC5A7E30C57CDD_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_5B0BFDE53F3EF8D7(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_5B0BFDE53F3EF8D7_OFFSET))(a1, a2);
	}

	static ::System::String* Method_2_1FAABE846E698D1A(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_1FAABE846E698D1A_OFFSET))(a1);
	}

	static ::System::String* Method_2_4DC8F3BA94C1B88F(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_4DC8F3BA94C1B88F_OFFSET))(a1, a2);
	}

	::System::Void Method_2_D0ACB47B641DF879()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_D0ACB47B641DF879_OFFSET))(this);
	}

	::System::Void Method_2_3CF43707BF2E9BBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_3CF43707BF2E9BBA_OFFSET))(this);
	}

	::System::Void Method_2_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A1ADC999CFACEB89_OFFSET))(this);
	}

	static ::System::Void Method_2_B26D020C1C1FC342(::Il2CppArray<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_B26D020C1C1FC342_OFFSET))(a1);
	}

	::System::Void Method_2_E02E69A2C8DC0BB2(::RPG::Client::OpenWorld::FadingPriority a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::FadingPriority))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_E02E69A2C8DC0BB2_OFFSET))(this, a1);
	}

	::System::Void Method_2_599021EE91C695A9(::RPG::Client::OpenWorld::FadingPriority a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::FadingPriority))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_599021EE91C695A9_OFFSET))(this, a1);
	}

	::System::Void Method_2_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_2_3E6FB3DE27C4C8EC(::RPG::Client::OpenWorld::FadingImmediateFinishReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::FadingImmediateFinishReason))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_3E6FB3DE27C4C8EC_OFFSET))(this, a1);
	}

	::System::Void Method_2_3FBC1A60355758EB(::RPG::Client::OpenWorld::FadingInvalidReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::FadingInvalidReason))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_3FBC1A60355758EB_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_A1D8CD775DEC3C21_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_2E47F09A457E7E05(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F2C0B67BFD1BE2D4_METHOD_2_2E47F09A457E7E05_OFFSET))(this, a1);
	}
};
