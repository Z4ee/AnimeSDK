#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1BD9A352EF1010C8.h"
#include "unitysdk/Class_1_98FD5665AA08A0E4_ValueModifyType.h"
#include "unitysdk/RPG/Client/ParkourGame/EModifyEngineFlags.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1399A6DB7EE460C3;
class Class_1_843EA87CD32A873D;
class Class_1_98FD5665AA08A0E4;
class Class_1_C47576BEFCFAD595;
class Class_1_D55F09DAAE2EA440;
class Class_1_F2EADB0CA33C76B0;
class Class_2_55373297DA27393D;
class Class_2_913EDB5071198DA2;
class Class_2_F3F43255EC92B83B_Class_1_954B1CCC55FCC6CA;
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client::ParkourGame { class MonoParkourCharacter; }
namespace RPG::Client::ParkourGame { class MonoParkourCharacterCollision; }
namespace RPG::Client::ParkourGame { class MonoParkourItem; }
namespace RPG::Client::ParkourGame { class ParkourGameLevelConfigAsset; }
namespace RPG::Client::ParkourGame { class ParkourSkillConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class SphereCollider; }
namespace UnityEngine { class Transform; }

#define CLASS_2_F3F43255EC92B83B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB53E5C0)
#define CLASS_2_F3F43255EC92B83B_GET_HITFLYBYSUPERSTARCOUNT_OFFSET UNITYSDK_OFFSET(0xB751090)
#define CLASS_2_F3F43255EC92B83B_GET_ID_OFFSET UNITYSDK_OFFSET(0xB7507D0)
#define CLASS_2_F3F43255EC92B83B_GET_ISALLOWEVENT_OFFSET UNITYSDK_OFFSET(0xB7510B0)
#define CLASS_2_F3F43255EC92B83B_GET_PROJECTILEHITCOUNT_OFFSET UNITYSDK_OFFSET(0xB751070)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_01899D0A0575317B_OFFSET UNITYSDK_OFFSET(0xB5427A0)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_096C7F7C8EC87129_OFFSET UNITYSDK_OFFSET(0xB543E50)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_11B81F453F3D1902_OFFSET UNITYSDK_OFFSET(0xB542370)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_151E25A63D14DDB0_1_OFFSET UNITYSDK_OFFSET(0xB5444D0)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xB5443E0)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_19D21DC63CFC45D5_OFFSET UNITYSDK_OFFSET(0xB53E7F0)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0xB750F00)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0xB750F10)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_24748FC20F375725_3_OFFSET UNITYSDK_OFFSET(0xB750F20)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xB750830)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_2493DD46C0F84E95_OFFSET UNITYSDK_OFFSET(0xB7512F0)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_2721D7A4F3D8E224_OFFSET UNITYSDK_OFFSET(0xB541B30)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_28141171CE1C76E0_OFFSET UNITYSDK_OFFSET(0xB541A00)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0xB542000)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_3B5C6D652C514B37_OFFSET UNITYSDK_OFFSET(0xB541EF0)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_3CAC93BF77250DAD_OFFSET UNITYSDK_OFFSET(0xB750870)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_3F07804D8892197E_1_OFFSET UNITYSDK_OFFSET(0xB544860)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_3F07804D8892197E_OFFSET UNITYSDK_OFFSET(0xB544640)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_3FC863B885E15ED5_OFFSET UNITYSDK_OFFSET(0xB53ECD0)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xB544910)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0xB543D80)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0xB542C60)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_4867D67F27947ACE_OFFSET UNITYSDK_OFFSET(0xB542AD0)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_4A78800DAA72F0F2_OFFSET UNITYSDK_OFFSET(0xB53F0E0)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_4D597ECBE57E0F7B_OFFSET UNITYSDK_OFFSET(0xB540FA0)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_4D71BCFB74C16073_OFFSET UNITYSDK_OFFSET(0xB750850)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0xB750E10)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0xB750E20)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_5323F2DF46A044DA_3_OFFSET UNITYSDK_OFFSET(0xB750E30)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_5323F2DF46A044DA_4_OFFSET UNITYSDK_OFFSET(0xB750E60)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xB750D60)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_5D720E921E37746B_OFFSET UNITYSDK_OFFSET(0xB5426A0)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_6606825E2317DFEA_OFFSET UNITYSDK_OFFSET(0xB541CB0)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_6E8E77E17A6ED590_OFFSET UNITYSDK_OFFSET(0xB750860)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_73EF77F30C1F9405_OFFSET UNITYSDK_OFFSET(0xB543340)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0xB53EE60)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0xB7508F0)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_7E7AC3DB2308603D_OFFSET UNITYSDK_OFFSET(0xB541BE0)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_82B2F7CF908F696B_OFFSET UNITYSDK_OFFSET(0xB53FB50)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_87180AFF03B611A5_OFFSET UNITYSDK_OFFSET(0xB542D60)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_8990ACCB78C14BC5_OFFSET UNITYSDK_OFFSET(0xB541810)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_91ACDF217A0C6659_OFFSET UNITYSDK_OFFSET(0xB750E70)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0xB543D30)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_A3FAE12D7B6ACD62_1_OFFSET UNITYSDK_OFFSET(0xB750FD0)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xB750F30)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_AAE74561848EA037_OFFSET UNITYSDK_OFFSET(0xB540B60)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_AB603CA7D990D95A_OFFSET UNITYSDK_OFFSET(0xB544090)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_AE7ACA9431B8342C_OFFSET UNITYSDK_OFFSET(0xB544040)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0xB5429A0)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xB542930)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_B67DCF72B717FA9F_OFFSET UNITYSDK_OFFSET(0xB53FA80)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0xB5446F0)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_B9EC3F44C1BFC5EF_1_OFFSET UNITYSDK_OFFSET(0xB542300)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_B9EC3F44C1BFC5EF_OFFSET UNITYSDK_OFFSET(0xB542290)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_C2DCBA71337C6A53_OFFSET UNITYSDK_OFFSET(0xB750880)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_C58641D420EB63CA_OFFSET UNITYSDK_OFFSET(0xB542490)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0xB750BE0)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_C74CF020AA42ED85_2_OFFSET UNITYSDK_OFFSET(0xB750D40)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_C74CF020AA42ED85_3_OFFSET UNITYSDK_OFFSET(0xB750D50)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xB750B60)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0xB750B50)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xB750B30)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB5428D0)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xB5443A0)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0xB544490)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB53EC70)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_CAAE82B2E47491A5_OFFSET UNITYSDK_OFFSET(0xB543780)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_CBFB8B02C0068841_OFFSET UNITYSDK_OFFSET(0xB541750)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_D09831639F615812_1_OFFSET UNITYSDK_OFFSET(0xB750BF0)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_D09831639F615812_OFFSET UNITYSDK_OFFSET(0xB750B70)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0xB541AC0)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_D348332A301BEB4F_OFFSET UNITYSDK_OFFSET(0xB543290)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0xB7508D0)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_E0368C9D3E92CE7C_OFFSET UNITYSDK_OFFSET(0xB750840)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_E5215111168AA04F_OFFSET UNITYSDK_OFFSET(0xB5420C0)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_E55F9EBC570605C3_OFFSET UNITYSDK_OFFSET(0xB542A20)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_E5630A859AA24FB3_OFFSET UNITYSDK_OFFSET(0xB7507E0)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_EDACF3D84F32DDEF_OFFSET UNITYSDK_OFFSET(0xB53F640)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xB750B40)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0xB750E40)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB750B20)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_F3DBA65049E25CB1_OFFSET UNITYSDK_OFFSET(0xB5445B0)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_F52588958242F29E_OFFSET UNITYSDK_OFFSET(0xB541940)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0xB750D70)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_FF7B2911BBACA4A9_2_OFFSET UNITYSDK_OFFSET(0xB750DC0)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_FF7B2911BBACA4A9_3_OFFSET UNITYSDK_OFFSET(0xB7510D0)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_FF7B2911BBACA4A9_4_OFFSET UNITYSDK_OFFSET(0xB751120)
#define CLASS_2_F3F43255EC92B83B_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xB750C70)
#define CLASS_2_F3F43255EC92B83B_SET_HITFLYBYSUPERSTARCOUNT_OFFSET UNITYSDK_OFFSET(0xB7510A0)
#define CLASS_2_F3F43255EC92B83B_SET_ISALLOWEVENT_OFFSET UNITYSDK_OFFSET(0xB7510C0)
#define CLASS_2_F3F43255EC92B83B_SET_PROJECTILEHITCOUNT_OFFSET UNITYSDK_OFFSET(0xB751080)
#define CLASS_2_F3F43255EC92B83B__ACCELERATION_B__33_0_OFFSET UNITYSDK_OFFSET(0xB7512C0)
#define CLASS_2_F3F43255EC92B83B__CCTOR_OFFSET UNITYSDK_OFFSET(0xB751170)
#define CLASS_2_F3F43255EC92B83B__CTOR_OFFSET UNITYSDK_OFFSET(0xB53DBE0)

inline static constexpr unsigned int Class_2_F3F43255EC92B83B_TypeDefinitionIndex = 69266;

class Class_2_F3F43255EC92B83B : public ::Class_1_1BD9A352EF1010C8
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F3F43255EC92B83B_TypeDefinitionIndex)->GetStaticField(0x4BC60);
	}
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_Field_2_1()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F3F43255EC92B83B_TypeDefinitionIndex)->GetStaticField(0x4BC68);
	}
	static ::System::Int32* StaticGet_Field_2_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F3F43255EC92B83B_TypeDefinitionIndex)->GetStaticField(0xE570);
	}
	static ::System::Int32* StaticGet_Field_2_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F3F43255EC92B83B_TypeDefinitionIndex)->GetStaticField(0xE574);
	}
	static ::System::Int32* StaticGet_Field_2_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F3F43255EC92B83B_TypeDefinitionIndex)->GetStaticField(0xE578);
	}
	static ::System::Int32* StaticGet_Field_2_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F3F43255EC92B83B_TypeDefinitionIndex)->GetStaticField(0xE57C);
	}
	static ::System::Int32* StaticGet_Field_2_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F3F43255EC92B83B_TypeDefinitionIndex)->GetStaticField(0xE580);
	}
	static ::System::Int32* StaticGet_Field_2_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F3F43255EC92B83B_TypeDefinitionIndex)->GetStaticField(0xE584);
	}
	static ::System::Int32* StaticGet_Field_2_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F3F43255EC92B83B_TypeDefinitionIndex)->GetStaticField(0xE588);
	}
	static ::System::Int32* StaticGet_Field_2_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F3F43255EC92B83B_TypeDefinitionIndex)->GetStaticField(0xE58C);
	}
	static ::System::Int32* StaticGet_Field_2_10()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F3F43255EC92B83B_TypeDefinitionIndex)->GetStaticField(0xE590);
	}
	// static const ::System::Int32 Field_2_11 = 0x1; // 0x0
	// static const ::System::Int32 Field_2_12 = 0x1; // 0x0
	// static const ::System::Int32 Field_2_13 = 0x2; // 0x0
	// static const ::System::Single Field_2_14; // 0x0
	::Class_1_98FD5665AA08A0E4* Field_2_15; // 0x10
	::Class_1_1399A6DB7EE460C3* Field_2_16; // 0x18
	::UnityEngine::Rigidbody* Field_2_17; // 0x20
	::RPG::Client::AttachPointMapping* Field_2_18; // 0x28
	::RPG::GameCore::GameEntity* Field_2_19; // 0x30
	::Class_1_C47576BEFCFAD595* Field_2_20; // 0x38
	::UnityEngine::Transform* Field_2_21; // 0x40
	::System::Action_1<::Class_1_1BD9A352EF1010C8*>* Field_2_22; // 0x48
	::UnityEngine::Transform* Field_2_23; // 0x50
	::Class_1_D55F09DAAE2EA440* Field_2_24; // 0x58
	::Class_1_F2EADB0CA33C76B0* Field_2_25; // 0x60
	::Class_2_F3F43255EC92B83B_Class_1_954B1CCC55FCC6CA* Field_2_26; // 0x68
	::UnityEngine::Renderer* Field_2_27; // 0x70
	::RPG::Client::ParkourGame::MonoParkourCharacter* Field_2_28; // 0x78
	::System::Action_1<::Class_1_1BD9A352EF1010C8*>* Field_2_29; // 0x80
	::UnityEngine::SphereCollider* Field_2_30; // 0x88
	::RPG::Client::ParkourGame::MonoParkourCharacterCollision* Field_2_31; // 0x90
	::System::Int32 Field_2_32; // 0x98
	::System::Single Field_2_33; // 0x9C
	::System::Int32 Field_2_34; // 0xA0
	::System::Single Field_2_35; // 0xA4
	::System::Single Field_2_36; // 0xA8
	::System::Single Field_2_37; // 0xAC
	::System::Int32 _ProjectileHitCount_k__BackingField; // 0xB0
	::UnityEngine::Vector3 Field_2_39; // 0xB4
	::System::Single Field_2_40; // 0xC0
	::System::Single Field_2_41; // 0xC4
	::System::Boolean Field_2_42; // 0xC8
	::System::Boolean _IsAllowEvent_k__BackingField; // 0xC9
	::System::Boolean Field_2_44; // 0xCA
	::System::Boolean Field_2_45; // 0xCB
	::System::Single Field_2_46; // 0xCC
	::System::Int32 Field_2_47; // 0xD0
	::System::Int32 Field_2_48; // 0xD4
	::System::Single Field_2_49; // 0xD8
	::UnityEngine::Quaternion Field_2_50; // 0xDC
	::System::Int32 _HitFlyBySuperStarCount_k__BackingField; // 0xEC
	::System::Single Field_2_52; // 0xF0
	::System::Single Field_2_53; // 0xF4
	::System::Single Field_2_54; // 0xF8
	::System::Int32 _ID_k__BackingField; // 0xFC
	::System::Int32 Field_2_56; // 0x100
	::System::Single Field_2_57; // 0x104

	::System::Void _ctor(::System::Int32 a1, ::RPG::Client::ParkourGame::MonoParkourCharacter* a2, ::Class_1_C47576BEFCFAD595* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::ParkourGame::MonoParkourCharacter*, ::Class_1_C47576BEFCFAD595*))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_19D21DC63CFC45D5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_19D21DC63CFC45D5_OFFSET))(this, a1);
	}

	::System::Void Method_2_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Void Method_2_4A78800DAA72F0F2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_4A78800DAA72F0F2_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_3FC863B885E15ED5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_3FC863B885E15ED5_OFFSET))(this);
	}

	::System::Void Method_2_82B2F7CF908F696B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_82B2F7CF908F696B_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_CBFB8B02C0068841(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_CBFB8B02C0068841_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F52588958242F29E(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_F52588958242F29E_OFFSET))(this, a1);
	}

	::System::Single Method_2_B67DCF72B717FA9F()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_B67DCF72B717FA9F_OFFSET))(this);
	}

	::System::Single Method_2_EDACF3D84F32DDEF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_EDACF3D84F32DDEF_OFFSET))(this);
	}

	::System::Boolean Method_2_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_D20BF56E36607D54_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2721D7A4F3D8E224(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_2721D7A4F3D8E224_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Transform* Method_2_7E7AC3DB2308603D(::System::String* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_7E7AC3DB2308603D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6606825E2317DFEA(::Class_2_F3F43255EC92B83B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_F3F43255EC92B83B*))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_6606825E2317DFEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_3B5C6D652C514B37(::Class_1_843EA87CD32A873D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_843EA87CD32A873D*))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_3B5C6D652C514B37_OFFSET))(this, a1);
	}

	::System::Void Method_2_B9EC3F44C1BFC5EF(::Class_2_F3F43255EC92B83B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3F43255EC92B83B*))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_B9EC3F44C1BFC5EF_OFFSET))(this, a1);
	}

	::System::Void Method_2_B9EC3F44C1BFC5EF_1(::Class_2_55373297DA27393D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_55373297DA27393D*))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_B9EC3F44C1BFC5EF_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_11B81F453F3D1902(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_11B81F453F3D1902_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C58641D420EB63CA(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_C58641D420EB63CA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_E5215111168AA04F(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_E5215111168AA04F_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::Class_1_F2EADB0CA33C76B0* Method_2_E55F9EBC570605C3(::RPG::Client::ParkourGame::ParkourSkillConfig* a1)
	{
		return ((::Class_1_F2EADB0CA33C76B0*(*)(::PVOID, ::RPG::Client::ParkourGame::ParkourSkillConfig*))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_E55F9EBC570605C3_OFFSET))(this, a1);
	}

	::System::Void Method_2_4867D67F27947ACE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_4867D67F27947ACE_OFFSET))(this, a1);
	}

	::System::Void Method_2_459C79521BFE514E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_459C79521BFE514E_OFFSET))(this, a1);
	}

	::System::Void Method_2_87180AFF03B611A5(::RPG::Client::ParkourGame::MonoParkourItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourItem*))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_87180AFF03B611A5_OFFSET))(this, a1);
	}

	::System::Void Method_2_D348332A301BEB4F(::Class_2_55373297DA27393D* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_55373297DA27393D*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_D348332A301BEB4F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4D597ECBE57E0F7B(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_4D597ECBE57E0F7B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_73EF77F30C1F9405(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_73EF77F30C1F9405_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_2_AAE74561848EA037(::UnityEngine::Quaternion a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_AAE74561848EA037_OFFSET))(this, a1);
	}

	::System::Void Method_2_CAAE82B2E47491A5(::RPG::Client::ParkourGame::MonoParkourCharacter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourCharacter*))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_CAAE82B2E47491A5_OFFSET))(this, a1);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_F3F43255EC92B83B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3F43255EC92B83B*))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void Method_2_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8990ACCB78C14BC5(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_8990ACCB78C14BC5_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_28141171CE1C76E0(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_28141171CE1C76E0_OFFSET))(this, a1);
	}

	::System::Void Method_2_5D720E921E37746B(::Class_1_98FD5665AA08A0E4_ValueModifyType a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4, ::System::Boolean a5, ::RPG::Client::ParkourGame::EModifyEngineFlags a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_98FD5665AA08A0E4_ValueModifyType, ::System::Int32, ::System::Int32, ::System::Single, ::System::Boolean, ::RPG::Client::ParkourGame::EModifyEngineFlags))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_5D720E921E37746B_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_458DAEAB6170C584_OFFSET))(this);
	}

	::System::Void Method_2_096C7F7C8EC87129()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_096C7F7C8EC87129_OFFSET))(this);
	}

	::System::Void Method_2_01899D0A0575317B(::Class_1_98FD5665AA08A0E4_ValueModifyType a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4, ::System::Boolean a5, ::RPG::Client::ParkourGame::EModifyEngineFlags a6, ::RPG::Client::ParkourGame::EModifyEngineFlags a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_98FD5665AA08A0E4_ValueModifyType, ::System::Int32, ::System::Int32, ::System::Single, ::System::Boolean, ::RPG::Client::ParkourGame::EModifyEngineFlags, ::RPG::Client::ParkourGame::EModifyEngineFlags))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_01899D0A0575317B_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_AE7ACA9431B8342C(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_AE7ACA9431B8342C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AB603CA7D990D95A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_AB603CA7D990D95A_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_151E25A63D14DDB0_1_OFFSET))(this);
	}

	::System::Void Method_2_F3DBA65049E25CB1(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_F3DBA65049E25CB1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3F07804D8892197E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_3F07804D8892197E_OFFSET))(this, a1);
	}

	::System::Void Method_2_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_2_3F07804D8892197E_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_3F07804D8892197E_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Int32 get_ID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_GET_ID_OFFSET))(this);
	}

	::Class_2_913EDB5071198DA2* Method_2_E5630A859AA24FB3()
	{
		return ((::Class_2_913EDB5071198DA2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_E5630A859AA24FB3_OFFSET))(this);
	}

	::Class_1_98FD5665AA08A0E4* Method_2_24748FC20F375725()
	{
		return ((::Class_1_98FD5665AA08A0E4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::RPG::Client::ParkourGame::MonoParkourCharacter* Method_2_E0368C9D3E92CE7C()
	{
		return ((::RPG::Client::ParkourGame::MonoParkourCharacter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_E0368C9D3E92CE7C_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_4D71BCFB74C16073()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_4D71BCFB74C16073_OFFSET))(this);
	}

	::UnityEngine::Renderer* Method_2_6E8E77E17A6ED590()
	{
		return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_6E8E77E17A6ED590_OFFSET))(this);
	}

	::UnityEngine::Collider* Method_2_3CAC93BF77250DAD()
	{
		return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_3CAC93BF77250DAD_OFFSET))(this);
	}

	::RPG::Client::ParkourGame::ParkourGameLevelConfigAsset* Method_2_C2DCBA71337C6A53()
	{
		return ((::RPG::Client::ParkourGame::ParkourGameLevelConfigAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_C2DCBA71337C6A53_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_77FD543600E00498_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_2_D09831639F615812_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_D09831639F615812_1_OFFSET))(this, a1);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_C74CF020AA42ED85_2_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85_3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_C74CF020AA42ED85_3_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_5323F2DF46A044DA_2_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_5323F2DF46A044DA_3_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA_4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_5323F2DF46A044DA_4_OFFSET))(this);
	}

	::System::UInt32 Method_2_91ACDF217A0C6659()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_91ACDF217A0C6659_OFFSET))(this);
	}

	::Class_1_D55F09DAAE2EA440* Method_2_24748FC20F375725_1()
	{
		return ((::Class_1_D55F09DAAE2EA440*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_24748FC20F375725_1_OFFSET))(this);
	}

	::Class_1_1399A6DB7EE460C3* Method_2_24748FC20F375725_2()
	{
		return ((::Class_1_1399A6DB7EE460C3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_24748FC20F375725_2_OFFSET))(this);
	}

	::Class_1_C47576BEFCFAD595* Method_2_24748FC20F375725_3()
	{
		return ((::Class_1_C47576BEFCFAD595*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_24748FC20F375725_3_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_A3FAE12D7B6ACD62_1_OFFSET))(this);
	}

	::System::Int32 get_ProjectileHitCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_GET_PROJECTILEHITCOUNT_OFFSET))(this);
	}

	::System::Void set_ProjectileHitCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_SET_PROJECTILEHITCOUNT_OFFSET))(this, a1);
	}

	::System::Int32 get_HitFlyBySuperStarCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_GET_HITFLYBYSUPERSTARCOUNT_OFFSET))(this);
	}

	::System::Void set_HitFlyBySuperStarCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_SET_HITFLYBYSUPERSTARCOUNT_OFFSET))(this, a1);
	}

	::System::Boolean get_IsAllowEvent()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_GET_ISALLOWEVENT_OFFSET))(this);
	}

	::System::Void set_IsAllowEvent(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_SET_ISALLOWEVENT_OFFSET))(this, a1);
	}

	::System::Single Method_2_FF7B2911BBACA4A9_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_FF7B2911BBACA4A9_2_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_FF7B2911BBACA4A9_3_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9_4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_FF7B2911BBACA4A9_4_OFFSET))(this);
	}

	::System::Boolean _Acceleration_b__33_0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B__ACCELERATION_B__33_0_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_2493DD46C0F84E95(::System::String* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F3F43255EC92B83B_METHOD_2_2493DD46C0F84E95_OFFSET))(this, a1);
	}
};
