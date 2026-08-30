#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAirshipWorkingState.h"
#include "unitysdk/RPG/Client/EAirshipDriveType.h"
#include "unitysdk/RPG/Client/EAirshipMoorState.h"
#include "unitysdk/Struct_2_BBE13FFEB7E1D73E.h"
#include "unitysdk/Struct_2_F93DE209E992FF0D.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AirlineStation; }
namespace RPG::Client { class AirlineWay; }
namespace RPG::Client { class Airship; }
namespace RPG::Client { class AirshipAudio; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define CLASS_1_5F439A66B759DFD0_CLEAR_OFFSET UNITYSDK_OFFSET(0xBC02CC0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0xBC103C0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_0253F359144E289E_OFFSET UNITYSDK_OFFSET(0xBC066F0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_067C1326F0892759_OFFSET UNITYSDK_OFFSET(0xBC030A0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_070E78F7BE10761C_OFFSET UNITYSDK_OFFSET(0xBC0FB10)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_08C5265FFA615F64_OFFSET UNITYSDK_OFFSET(0xBC0DBD0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xBC02EF0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xBC10880)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_1EFD76CC50FB2B65_OFFSET UNITYSDK_OFFSET(0xBC11170)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_2353202B45D6E037_OFFSET UNITYSDK_OFFSET(0xBC0AAB0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_23A12CF51C4D1CD7_OFFSET UNITYSDK_OFFSET(0xBC0C650)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0xBC06770)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_2685B6183E614529_2_OFFSET UNITYSDK_OFFSET(0xBC11100)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xBC02C60)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_2C6672007BE63034_OFFSET UNITYSDK_OFFSET(0xBC07600)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_2C771EB291568E4D_OFFSET UNITYSDK_OFFSET(0xBC0E160)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0xBC10910)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xBC10CF0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_3AA80D5D5930F294_OFFSET UNITYSDK_OFFSET(0xBC0ED70)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_46F38B806BD98B70_OFFSET UNITYSDK_OFFSET(0xBC10CB0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0xBC10EF0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0xBC108F0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0xBC10A80)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0xBC10CE0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_5323F2DF46A044DA_3_OFFSET UNITYSDK_OFFSET(0xBC11380)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xBC10970)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_5398DA58EF899567_OFFSET UNITYSDK_OFFSET(0xBC0D370)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_5DBDA3EDAF0D0D60_OFFSET UNITYSDK_OFFSET(0xBC0F0E0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_60A8497E9F4D23B5_OFFSET UNITYSDK_OFFSET(0xBC10A90)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_62BB36E1B63D890A_OFFSET UNITYSDK_OFFSET(0xBC10900)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_63EDAB3EFF913F92_OFFSET UNITYSDK_OFFSET(0xBC0AC10)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_67279C5A1773B295_OFFSET UNITYSDK_OFFSET(0xBC06B00)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_6F2456C76DDD8FEF_OFFSET UNITYSDK_OFFSET(0xBC0FF10)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_705E08CFA4305919_OFFSET UNITYSDK_OFFSET(0xBC0C8D0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_712BC650D354352C_OFFSET UNITYSDK_OFFSET(0xBC0D680)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_71491C77820F89D9_OFFSET UNITYSDK_OFFSET(0xBC0AF60)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_7240807274B59CCB_OFFSET UNITYSDK_OFFSET(0xBC0D9B0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_768CE08CF973C3AE_OFFSET UNITYSDK_OFFSET(0xBC0FC50)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_7889E856344009E9_OFFSET UNITYSDK_OFFSET(0xBC0EB20)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_8327FEEFBF3EC917_OFFSET UNITYSDK_OFFSET(0xBC11390)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_86B21C1B58DDBC0C_OFFSET UNITYSDK_OFFSET(0xBC0E030)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_8823D7033E22C9AB_OFFSET UNITYSDK_OFFSET(0xBC07200)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_8C6E66D260CC37AD_1_OFFSET UNITYSDK_OFFSET(0xBC10310)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_8C6E66D260CC37AD_OFFSET UNITYSDK_OFFSET(0xBC10260)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_8D269C28ED2523C1_OFFSET UNITYSDK_OFFSET(0xBC0D430)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0xBC0FE70)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_918A08DD192ECC19_OFFSET UNITYSDK_OFFSET(0xBC0F280)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_94495B6E6891BC89_OFFSET UNITYSDK_OFFSET(0xBC07D10)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_9B4C7F34580CBB5C_OFFSET UNITYSDK_OFFSET(0xBC0D0F0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_A60C7A3E87B4184B_OFFSET UNITYSDK_OFFSET(0xBC10DE0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_A7A30E84C9695D06_OFFSET UNITYSDK_OFFSET(0xBC10680)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_AB19BA40985AFDA1_1_OFFSET UNITYSDK_OFFSET(0xBC038D0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_AB19BA40985AFDA1_OFFSET UNITYSDK_OFFSET(0xBC037F0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_ACE1B76C3A7F6CE1_OFFSET UNITYSDK_OFFSET(0xBC0EC10)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_B32450F72E27B86B_OFFSET UNITYSDK_OFFSET(0xBC0CBC0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_B57F730366B2744A_OFFSET UNITYSDK_OFFSET(0xBC06820)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_BDBBC0A9899323B9_OFFSET UNITYSDK_OFFSET(0xBC0F810)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_C19E9E281EA0E4DD_OFFSET UNITYSDK_OFFSET(0xBC0CF90)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xBC03780)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBC067D0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xBC10D40)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_CB78C78F939D7364_OFFSET UNITYSDK_OFFSET(0xBC0E740)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_CF667B25396A76F4_OFFSET UNITYSDK_OFFSET(0xBC03A60)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_D64FD9A228A1C4E0_1_OFFSET UNITYSDK_OFFSET(0xBC109A0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xBC039D0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_D9D71746F01543A5_OFFSET UNITYSDK_OFFSET(0xBC0E4A0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_E03449F98239C5D4_OFFSET UNITYSDK_OFFSET(0xBC07DD0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_E7157096354B482A_OFFSET UNITYSDK_OFFSET(0xBC029B0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_EB624220834C5CE8_OFFSET UNITYSDK_OFFSET(0xBC02F50)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_EC7FB863D548C3EF_OFFSET UNITYSDK_OFFSET(0xBC10130)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_ED8B6CC5B0FE966A_OFFSET UNITYSDK_OFFSET(0xBC06C80)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xBC07D00)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0xBC10CC0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0xBC10CD0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0xBC11370)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xBC108E0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_F6044E7AC73C3A15_OFFSET UNITYSDK_OFFSET(0xBC0B010)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_FB4BE762B6186C23_1_OFFSET UNITYSDK_OFFSET(0xBC10980)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_FB4BE762B6186C23_2_OFFSET UNITYSDK_OFFSET(0xBC10A50)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0xBC0EBF0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_FC353143FEF1A387_OFFSET UNITYSDK_OFFSET(0xBC0F730)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_FC9926C19FB6003D_OFFSET UNITYSDK_OFFSET(0xBC10FC0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0xBC101E0)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xBC0D310)
#define CLASS_1_5F439A66B759DFD0_METHOD_1_FFD073C9AC28751B_OFFSET UNITYSDK_OFFSET(0xBC07800)
#define CLASS_1_5F439A66B759DFD0__CCTOR_OFFSET UNITYSDK_OFFSET(0xBC116B0)
#define CLASS_1_5F439A66B759DFD0__CTOR_OFFSET UNITYSDK_OFFSET(0xBC028E0)

inline static constexpr unsigned int Class_1_5F439A66B759DFD0_TypeDefinitionIndex = 59926;

class Class_1_5F439A66B759DFD0 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_KHKAPDIEKKH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F439A66B759DFD0_TypeDefinitionIndex)->GetStaticField(0x129C0);
	}
	static ::System::Int32* StaticGet_MFDMAFAFDOA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F439A66B759DFD0_TypeDefinitionIndex)->GetStaticField(0x129C4);
	}
	static ::System::Int32* StaticGet_JGCOFIOHCHO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F439A66B759DFD0_TypeDefinitionIndex)->GetStaticField(0x129C8);
	}
	static ::System::Int32* StaticGet_GIOJMIGICCP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F439A66B759DFD0_TypeDefinitionIndex)->GetStaticField(0x129CC);
	}
	static ::System::Int32* StaticGet_BBHOEIAOEJJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F439A66B759DFD0_TypeDefinitionIndex)->GetStaticField(0x129D0);
	}
	// static const ::System::Single ENEIACENMAD; // 0x0
	// static const ::System::Single MKKDHENLMBC; // 0x0
	::RPG::Client::AirshipAudio* INJBDHEANIA; // 0x10
	::Struct_2_BBE13FFEB7E1D73E MOJOBECBPPA; // 0x18
	::Struct_2_BBE13FFEB7E1D73E HPMKDFPIPCI; // 0x60
	::Class_1_5F439A66B759DFD0* IFKCKKFEEMO; // 0xA8
	::System::Collections::Generic::List_1<::Class_1_5F439A66B759DFD0*>* MPAEADFKOOP; // 0xB0
	::RPG::Client::Airship* EHHCPMFKNKP; // 0xB8
	::System::Int32 FLFHKELNJEG; // 0xC0
	::RPG::Client::EAirshipMoorState IEBBGCCGMNG; // 0xC4
	::System::Single OPKAAOEOEGM; // 0xC8
	::System::Single OFAIJMBBPCC; // 0xCC
	::System::Single PMKEHMCJMKJ; // 0xD0
	::System::Single GPNONFBBNHC; // 0xD4
	::System::Single HCHDDFFINGC; // 0xD8
	::System::Single CECBHBJJDHD; // 0xDC
	::System::Int32 HGIGNADJBAE; // 0xE0
	::System::Single NJLLNKOBDCK; // 0xE4
	::System::Single OBDODMLPIGH; // 0xE8
	::System::Single BNPEDEHPCFN; // 0xEC
	::System::Single CMKOGEKIOJL; // 0xF0
	::System::Single CIDBBGANFFK; // 0xF4
	::UnityEngine::Vector3 BKGGIADOMFP; // 0xF8
	::System::Single KMEGJIGEOJG; // 0x104
	::System::Single JACEHJBPOJB; // 0x108
	::System::Single OJMJMLBBJCH; // 0x10C
	::System::Single JGFDPFIKDCJ; // 0x110
	::RPG::Client::EAirshipDriveType LNPGBOKLEPO; // 0x114
	::System::Single LBHOAPLLECN; // 0x118
	::System::Single FHAEMNFFFLM; // 0x11C
	::System::Single MIHBHGABGMM; // 0x120
	::System::Boolean GHKDBJKJHMN; // 0x124
	::System::Boolean GLKNAGNAFLK; // 0x125
	::System::Boolean JELADKDAMJN; // 0x126
	::System::Single BLOFKKJFBOG; // 0x128
	::System::Single AIPDJMFBEMF; // 0x12C
	::System::Single AOCHMPGLPLA; // 0x130
	::System::Single CDIMALHJJOG; // 0x134
	::UnityEngine::Vector3 CCKGJGIAGOD; // 0x138
	::UnityEngine::Vector3 MANBOKHMMGN; // 0x144
	::System::Single GOMPPOJEFDK; // 0x150
	::System::Single DBMGANHFAEH; // 0x154
	::System::Single DPKDGJAGHJH; // 0x158
	::System::Boolean GENEAPGPNDI; // 0x15C
	::System::Boolean AIIAHINAIJE; // 0x15D
	::System::Boolean GJHOHBILDMD; // 0x15E
	::System::Boolean MECDICPBLML; // 0x15F

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0__CCTOR_OFFSET))();
	}

	::System::Void Method_1_E7157096354B482A(::RPG::Client::Airship* a1, ::System::Collections::Generic::List_1<::Class_1_5F439A66B759DFD0*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Airship*, ::System::Collections::Generic::List_1<::Class_1_5F439A66B759DFD0*>*))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_E7157096354B482A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_EB624220834C5CE8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_EB624220834C5CE8_OFFSET))(this, a1);
	}

	::System::Void Method_1_067C1326F0892759(::Struct_2_F93DE209E992FF0D a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F93DE209E992FF0D, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_067C1326F0892759_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0253F359144E289E(::EAirshipWorkingState a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::EAirshipWorkingState, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_0253F359144E289E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_2685B6183E614529_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_B57F730366B2744A(::RPG::Client::EAirshipDriveType a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EAirshipDriveType, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_B57F730366B2744A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_2C6672007BE63034(::RPG::Client::EAirshipDriveType a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EAirshipDriveType, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_2C6672007BE63034_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FFD073C9AC28751B(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_FFD073C9AC28751B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_94495B6E6891BC89(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_94495B6E6891BC89_OFFSET))(this, a1);
	}

	::System::Void Method_1_2353202B45D6E037(::RPG::Client::AirlineStation* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AirlineStation*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_2353202B45D6E037_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E03449F98239C5D4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_E03449F98239C5D4_OFFSET))(this, a1);
	}

	::System::Void Method_1_CF667B25396A76F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_CF667B25396A76F4_OFFSET))(this);
	}

	::System::Void Method_1_7240807274B59CCB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_7240807274B59CCB_OFFSET))(this, a1);
	}

	::System::Void Method_1_7889E856344009E9(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_7889E856344009E9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_08C5265FFA615F64(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_08C5265FFA615F64_OFFSET))(this, a1);
	}

	::System::Void Method_1_ACE1B76C3A7F6CE1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_ACE1B76C3A7F6CE1_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_5398DA58EF899567(::RPG::Client::AirlineWay* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::AirlineWay*))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_5398DA58EF899567_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_3AA80D5D5930F294(::Struct_2_BBE13FFEB7E1D73E a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Struct_2_BBE13FFEB7E1D73E))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_3AA80D5D5930F294_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_5DBDA3EDAF0D0D60(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::UnityEngine::Vector3 a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_5DBDA3EDAF0D0D60_OFFSET))(this, a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_D9D71746F01543A5(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_D9D71746F01543A5_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Quaternion Method_1_918A08DD192ECC19(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_918A08DD192ECC19_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_86B21C1B58DDBC0C(::Struct_2_BBE13FFEB7E1D73E a1, ::System::Single& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BBE13FFEB7E1D73E, ::System::Single&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_86B21C1B58DDBC0C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8D269C28ED2523C1(::Struct_2_BBE13FFEB7E1D73E a1, ::UnityEngine::Vector3 a2, ::System::Single& a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BBE13FFEB7E1D73E, ::UnityEngine::Vector3, ::System::Single&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_8D269C28ED2523C1_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_712BC650D354352C(::Struct_2_BBE13FFEB7E1D73E a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Struct_2_BBE13FFEB7E1D73E, ::System::Single, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_712BC650D354352C_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_2C771EB291568E4D(::Struct_2_BBE13FFEB7E1D73E a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Struct_2_BBE13FFEB7E1D73E, ::System::Single, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_2C771EB291568E4D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_705E08CFA4305919(::RPG::Client::AirlineWay* a1, ::System::Single a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AirlineWay*, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_705E08CFA4305919_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Vector3 Method_1_B32450F72E27B86B(::RPG::Client::AirlineWay* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::AirlineWay*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_B32450F72E27B86B_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Single Method_1_23A12CF51C4D1CD7(::RPG::Client::AirlineWay* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::AirlineWay*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_23A12CF51C4D1CD7_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_AB19BA40985AFDA1(::RPG::Client::AirlineWay* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::AirlineWay*))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_AB19BA40985AFDA1_OFFSET))(this, a1);
	}

	::System::Single Method_1_AB19BA40985AFDA1_1(::RPG::Client::AirlineWay* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::AirlineWay*))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_AB19BA40985AFDA1_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_FC353143FEF1A387(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_FC353143FEF1A387_OFFSET))(this, a1);
	}

	::System::Single Method_1_ED8B6CC5B0FE966A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_ED8B6CC5B0FE966A_OFFSET))(this);
	}

	::System::Single Method_1_BDBBC0A9899323B9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_BDBBC0A9899323B9_OFFSET))(this);
	}

	::System::Void Method_1_070E78F7BE10761C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_070E78F7BE10761C_OFFSET))(this, a1);
	}

	::System::Void Method_1_768CE08CF973C3AE(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_768CE08CF973C3AE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8823D7033E22C9AB(::System::Boolean a1, ::RPG::Client::EAirshipDriveType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::EAirshipDriveType))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_8823D7033E22C9AB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_1_6F2456C76DDD8FEF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_6F2456C76DDD8FEF_OFFSET))(this, a1);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C6E66D260CC37AD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_8C6E66D260CC37AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C6E66D260CC37AD_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_8C6E66D260CC37AD_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_0076C796B2045359_OFFSET))(this);
	}

	::System::Void Method_1_A7A30E84C9695D06(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_A7A30E84C9695D06_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_5F439A66B759DFD0*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_5F439A66B759DFD0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::RPG::Client::AirlineStation* Method_1_EC7FB863D548C3EF()
	{
		return ((::RPG::Client::AirlineStation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_EC7FB863D548C3EF_OFFSET))(this);
	}

	::RPG::Client::Airship* Method_1_62BB36E1B63D890A()
	{
		return ((::RPG::Client::Airship*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_62BB36E1B63D890A_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_38B862BB2192EC08()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_38B862BB2192EC08_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_FB4BE762B6186C23_1_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_D64FD9A228A1C4E0_1_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_FB4BE762B6186C23_2_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Void Method_1_60A8497E9F4D23B5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_60A8497E9F4D23B5_OFFSET))(this, a1);
	}

	::RPG::Client::AirshipAudio* Method_1_46F38B806BD98B70()
	{
		return ((::RPG::Client::AirshipAudio*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_46F38B806BD98B70_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_5323F2DF46A044DA_2_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_1_A60C7A3E87B4184B(::Class_1_5F439A66B759DFD0* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5F439A66B759DFD0*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_A60C7A3E87B4184B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FC9926C19FB6003D(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_FC9926C19FB6003D_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_2685B6183E614529_2_OFFSET))(this, a1);
	}

	::System::Single Method_1_67279C5A1773B295()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_67279C5A1773B295_OFFSET))(this);
	}

	::System::Void Method_1_1EFD76CC50FB2B65(::RPG::Client::AirlineWay* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AirlineWay*))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_1EFD76CC50FB2B65_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_F0088C88851A7DFB_4_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_5323F2DF46A044DA_3_OFFSET))(this);
	}

	::System::Void Method_1_71491C77820F89D9(::Il2CppArray<::UnityEngine::Renderer*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_71491C77820F89D9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C19E9E281EA0E4DD(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_C19E9E281EA0E4DD_OFFSET))(this, a1);
	}

	::System::Void Method_1_9B4C7F34580CBB5C(::RPG::Client::AirlineWay* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AirlineWay*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_9B4C7F34580CBB5C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8327FEEFBF3EC917()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_8327FEEFBF3EC917_OFFSET))(this);
	}

	::System::Void Method_1_CB78C78F939D7364(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_CB78C78F939D7364_OFFSET))(this, a1);
	}

	::System::Void Method_1_F6044E7AC73C3A15(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_F6044E7AC73C3A15_OFFSET))(this, a1);
	}

	::System::Void Method_1_63EDAB3EFF913F92(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5F439A66B759DFD0_METHOD_1_63EDAB3EFF913F92_OFFSET))(this, a1);
	}
};
