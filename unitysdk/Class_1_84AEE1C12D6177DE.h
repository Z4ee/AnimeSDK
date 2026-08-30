#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimCategory.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicTypeExtra.h"
#include "unitysdk/RPG/GameCore/BuildInAnimParam.h"
#include "unitysdk/RPG/GameCore/ResilienceEnum.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_1ADED1EDA7578A33.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorClipInfo.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_0_16E4307DCC419505_565;
class Class_1_451601B8BB62C38C_4;
class Class_1_84AEE1C12D6177DE_Class_1_273ED8FCC39D80E7;
class Class_1_CC76D1702CC17C09_5;
class Class_1_DB457F2E821DD51D;
class Class_2_444389D33B1116F1;
namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class AttackData; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class CharacterReactionAnimConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillTransitAnimConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define CLASS_1_84AEE1C12D6177DE_METHOD_1_0A59C14AC513B1F3_OFFSET UNITYSDK_OFFSET(0x176CE660)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_0B07C997B5AD53BE_OFFSET UNITYSDK_OFFSET(0x176CC240)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_0ED3E69CF0A6A196_OFFSET UNITYSDK_OFFSET(0x176CC700)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_1179FF255BAA25D3_OFFSET UNITYSDK_OFFSET(0x176CEA20)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_23B573F7FD360F67_OFFSET UNITYSDK_OFFSET(0x176CE6E0)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_370300924411559A_OFFSET UNITYSDK_OFFSET(0x176CBF10)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_38B08A28949FAF13_OFFSET UNITYSDK_OFFSET(0x176CC0E0)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_425E5DE9EF79C88D_OFFSET UNITYSDK_OFFSET(0x176CEFA0)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_4787E9B038D6C602_OFFSET UNITYSDK_OFFSET(0x176CD590)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_52A3FEDD63707B13_OFFSET UNITYSDK_OFFSET(0x176CBA20)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_57AA5DE7D9223C96_OFFSET UNITYSDK_OFFSET(0x176CB820)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_5B10DBC94C447F14_OFFSET UNITYSDK_OFFSET(0x176CCAC0)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_60C25AE039B90FE4_OFFSET UNITYSDK_OFFSET(0x176CBFD0)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_60DA5BDDE54D8AAD_OFFSET UNITYSDK_OFFSET(0x176CEE20)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_64DC7BE8FD04FAC2_OFFSET UNITYSDK_OFFSET(0x176CBE60)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_724DEA13BD84B25E_1_OFFSET UNITYSDK_OFFSET(0x176CBC00)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_724DEA13BD84B25E_OFFSET UNITYSDK_OFFSET(0x176CBAA0)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_7331A1455F3F12A1_OFFSET UNITYSDK_OFFSET(0x176CB960)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_841E142B9EF9A6BD_OFFSET UNITYSDK_OFFSET(0x176CEBA0)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_881817D05A3F3048_OFFSET UNITYSDK_OFFSET(0x176CE740)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_8A068F1586DCDFE1_OFFSET UNITYSDK_OFFSET(0x176CEC00)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_8AC79C1AE54BB24D_OFFSET UNITYSDK_OFFSET(0x176CD140)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_8E1DF1377AA814CB_OFFSET UNITYSDK_OFFSET(0x176CA8F0)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_971FC789D3B49430_OFFSET UNITYSDK_OFFSET(0x176CED80)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_9863F50EB4A4E758_OFFSET UNITYSDK_OFFSET(0x176CEAB0)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_A268F44328AB6500_OFFSET UNITYSDK_OFFSET(0x176CE860)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_A27557DA2EA58BD8_OFFSET UNITYSDK_OFFSET(0x176CC5E0)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_C00B8E3C377F8C08_OFFSET UNITYSDK_OFFSET(0x176CC420)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_C218B6BB4F603777_OFFSET UNITYSDK_OFFSET(0x176CDC10)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_C7BD5759A8CD263B_OFFSET UNITYSDK_OFFSET(0x176CC7D0)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_DB11C736C0498425_OFFSET UNITYSDK_OFFSET(0x176CBD60)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_DE88D0A419577E55_OFFSET UNITYSDK_OFFSET(0x176CF1F0)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_E23427139348CB82_OFFSET UNITYSDK_OFFSET(0x176CD3E0)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_EA091433E77569D3_OFFSET UNITYSDK_OFFSET(0x176CE610)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_F1C13185F6DD3EB0_OFFSET UNITYSDK_OFFSET(0x176CF240)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_F268985708848D15_OFFSET UNITYSDK_OFFSET(0x176CE5C0)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_FF5B805F6FC5BC5B_OFFSET UNITYSDK_OFFSET(0x176CBDC0)
#define CLASS_1_84AEE1C12D6177DE__CCTOR_OFFSET UNITYSDK_OFFSET(0x176CF2A0)
#define CLASS_1_84AEE1C12D6177DE__CTOR_OFFSET UNITYSDK_OFFSET(0x176CF290)

inline static constexpr unsigned int Class_1_84AEE1C12D6177DE_TypeDefinitionIndex = 59178;

class Class_1_84AEE1C12D6177DE : public ::System::Object
{
public:
	static ::System::String** StaticGet_GLAPAGKHMGK()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE_TypeDefinitionIndex)->GetStaticField(0xE7A0);
	}
	static ::Class_1_451601B8BB62C38C_4** StaticGet_FABNLMFLGEG()
	{
		return (::Class_1_451601B8BB62C38C_4**)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE_TypeDefinitionIndex)->GetStaticField(0xE7A8);
	}
	static ::System::String** StaticGet_NCPGGMNLPIO()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE_TypeDefinitionIndex)->GetStaticField(0xE7B0);
	}
	static ::System::String** StaticGet_LPKLJPCNNOH()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE_TypeDefinitionIndex)->GetStaticField(0xE7B8);
	}
	static ::Class_1_84AEE1C12D6177DE_Class_1_273ED8FCC39D80E7** StaticGet_KGMEFCNFBMI()
	{
		return (::Class_1_84AEE1C12D6177DE_Class_1_273ED8FCC39D80E7**)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE_TypeDefinitionIndex)->GetStaticField(0xE7C0);
	}
	static ::System::Int32* StaticGet_MMBPDMGIEKE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE_TypeDefinitionIndex)->GetStaticField(0x46A0);
	}
	static ::System::Int32* StaticGet_EGIGCEFKFFD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE_TypeDefinitionIndex)->GetStaticField(0x46A4);
	}
	static ::System::Int32* StaticGet_OENFFHBCFNO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE_TypeDefinitionIndex)->GetStaticField(0x46A8);
	}
	static ::System::Int32* StaticGet_CMLMOGEAGBB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE_TypeDefinitionIndex)->GetStaticField(0x46AC);
	}
	static ::System::UInt32* StaticGet_JGPNEHFDGHF()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE_TypeDefinitionIndex)->GetStaticField(0x46B0);
	}
	static ::System::Int32* StaticGet_IGAPBBJMIAJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE_TypeDefinitionIndex)->GetStaticField(0x46B4);
	}
	static ::RPG::GameCore::StringHash* StaticGet_OHJPDKBNMJM()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE_TypeDefinitionIndex)->GetStaticField(0x46B8);
	}
	// static const ::System::String* JNPNAFEIPLL; // 0x0
	// static const ::System::String* KKLHELLFCLH; // 0x0
	// static const ::System::String* OKDGBCMKCAI; // 0x0
	// static const ::System::String* DDNNBEKJEJP; // 0x0
	// static const ::System::String* DOKEFAODKFJ; // 0x0
	// static const ::System::String* FHECHNIGPPG; // 0x0
	// static const ::System::String* NOPHFMKFMOD; // 0x0
	// static const ::System::String* COHFEKGAKGB; // 0x0
	// static const ::System::String* DMAFHJLLFFM; // 0x0
	// static const ::System::String* HHEJGHOIPIN; // 0x0
	// static const ::System::String* MOOGGEBBJDO; // 0x0
	// static const ::System::String* DPEEEOEPDLP; // 0x0
	// static const ::System::String* HABLOJDOCMO; // 0x0
	// static const ::System::String* FCBHLCMJKML; // 0x0
	// static const ::System::String* MIOIOHJKFEE; // 0x0
	// static const ::System::String* EHLEFNCBBDJ; // 0x0
	// static const ::System::String* NJOCAFHOJHK; // 0x0
	// static const ::System::String* OLHFOGLEBHB; // 0x0
	// static const ::System::String* GNMBNABFKCE; // 0x0
	// static const ::System::String* MJPKFDKJJPL; // 0x0
	// static const ::System::String* IDAFHAIAGIC; // 0x0
	// static const ::System::String* HCCGHMGFJEH; // 0x0
	// static const ::System::String* FLOAEINMMEG; // 0x0
	// static const ::System::String* EFNKBEEPMNO; // 0x0
	// static const ::System::String* JEGHECKDJAB; // 0x0
	// static const ::System::String* PAKMPLLLMLB; // 0x0
	// static const ::System::String* GMLMPGKLNAD; // 0x0
	// static const ::System::String* EEMGJGIOLGN; // 0x0
	// static const ::System::String* BNJDDCKBHAD; // 0x0
	// static const ::System::String* JGDFFPCHADC; // 0x0
	// static const ::System::String* OOOHKCGJAEA; // 0x0
	// static const ::System::String* PIOGPCGJJAP; // 0x0
	// static const ::System::String* AIGNNOJHKPJ; // 0x0
	// static const ::System::String* CKPEADONMLA; // 0x0
	// static const ::System::String* HINPIEHBBMO; // 0x0
	// static const ::System::String* MDNOAGPBAID; // 0x0
	// static const ::System::Single LCCFBHNEGNB; // 0x0
	// static const ::System::Single NBHKLPAHHLM; // 0x0
	// static const ::System::Int32 OHJFODIOFPE = 0x2; // 0x0
	// static const ::System::Single JBGLCIEOPII; // 0x0
	// static const ::System::Single PIFHLOEHGKA; // 0x0
	// static const ::System::UInt32 HPHPMFGOFJO = 0x0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_57AA5DE7D9223C96(::UnityEngine::Animator* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_57AA5DE7D9223C96_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_7331A1455F3F12A1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_7331A1455F3F12A1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_724DEA13BD84B25E(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_724DEA13BD84B25E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_724DEA13BD84B25E_1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_724DEA13BD84B25E_1_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_DB11C736C0498425(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_DB11C736C0498425_OFFSET))(a1);
	}

	static ::Class_1_451601B8BB62C38C_4* Method_1_FF5B805F6FC5BC5B(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::Class_1_451601B8BB62C38C_4*(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_FF5B805F6FC5BC5B_OFFSET))(a1, a2, a3);
	}

	static ::RPG::GameCore::SkillTransitAnimConfig* Method_1_64DC7BE8FD04FAC2(::System::Int32 a1, ::System::Int32 a2, ::RPG::GameCore::CharacterDataComponent* a3)
	{
		return ((::RPG::GameCore::SkillTransitAnimConfig*(*)(::System::Int32, ::System::Int32, ::RPG::GameCore::CharacterDataComponent*))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_64DC7BE8FD04FAC2_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_370300924411559A(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_370300924411559A_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_60C25AE039B90FE4(::Class_2_444389D33B1116F1* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::Class_2_444389D33B1116F1*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_60C25AE039B90FE4_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_38B08A28949FAF13(::RPG::GameCore::AnimCategory a1, ::Class_2_444389D33B1116F1* a2, ::System::Int32 a3)
	{
		return ((::System::String*(*)(::RPG::GameCore::AnimCategory, ::Class_2_444389D33B1116F1*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_38B08A28949FAF13_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_A27557DA2EA58BD8(::Class_1_DB457F2E821DD51D* a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::Class_1_DB457F2E821DD51D*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_A27557DA2EA58BD8_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_0ED3E69CF0A6A196(::RPG::GameCore::AnimStateLogicType a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::String*(*)(::RPG::GameCore::AnimStateLogicType, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_0ED3E69CF0A6A196_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C7BD5759A8CD263B(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::MVector3 a3, ::RPG::MVector3 a4, ::System::Boolean a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::MVector3, ::RPG::MVector3, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_C7BD5759A8CD263B_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_4787E9B038D6C602(::RPG::GameCore::GameEntity* a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::Class_1_CC76D1702CC17C09_5* a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::MVector3, ::RPG::MVector3, ::Class_1_CC76D1702CC17C09_5*))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_4787E9B038D6C602_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_C218B6BB4F603777(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TaskContext* a3, ::RPG::GameCore::AttackData* a4, ::RPG::MVector3 a5, ::RPG::MVector3 a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AttackData*, ::RPG::MVector3, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_C218B6BB4F603777_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Boolean Method_1_F268985708848D15(::RPG::GameCore::AnimStateLogicType a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::AnimStateLogicType))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_F268985708848D15_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_EA091433E77569D3(::RPG::GameCore::AnimStateLogicTypeExtra a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::AnimStateLogicTypeExtra))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_EA091433E77569D3_OFFSET))(a1);
	}

	static ::System::Single Method_1_0A59C14AC513B1F3(::RPG::GameCore::ResilienceEnum a1)
	{
		return ((::System::Single(*)(::RPG::GameCore::ResilienceEnum))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_0A59C14AC513B1F3_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_23B573F7FD360F67()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_23B573F7FD360F67_OFFSET))();
	}

	static ::UnityEngine::AnimatorStateInfo Method_1_881817D05A3F3048(::UnityEngine::Animator* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::AnimatorStateInfo(*)(::UnityEngine::Animator*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_881817D05A3F3048_OFFSET))(a1, a2, a3);
	}

	static ::Struct_2_1ADED1EDA7578A33 Method_1_8E1DF1377AA814CB(::RPG::Client::MockAnimator* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::Struct_2_1ADED1EDA7578A33(*)(::RPG::Client::MockAnimator*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_8E1DF1377AA814CB_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_A268F44328AB6500(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo& a2, ::UnityEngine::Animator* a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::System::Int32, ::UnityEngine::AnimatorStateInfo&, ::UnityEngine::Animator*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_A268F44328AB6500_OFFSET))(a1, a2, a3, a4);
	}

	static ::Il2CppArray<::UnityEngine::AnimatorClipInfo>* Method_1_1179FF255BAA25D3(::UnityEngine::Animator* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::Il2CppArray<::UnityEngine::AnimatorClipInfo>*(*)(::UnityEngine::Animator*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_1179FF255BAA25D3_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_9863F50EB4A4E758(::UnityEngine::Animator* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Animator*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_9863F50EB4A4E758_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_841E142B9EF9A6BD(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_841E142B9EF9A6BD_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_8A068F1586DCDFE1(::UnityEngine::Animator* a1)
	{
		return ((::System::UInt32(*)(::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_8A068F1586DCDFE1_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_971FC789D3B49430(::RPG::GameCore::BuildInAnimParam a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::BuildInAnimParam))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_971FC789D3B49430_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_60DA5BDDE54D8AAD(::RPG::GameCore::BuildInAnimParam a1, ::System::UInt32 a2, ::UnityEngine::Animator* a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::BuildInAnimParam, ::System::UInt32, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_60DA5BDDE54D8AAD_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_425E5DE9EF79C88D(::RPG::GameCore::BuildInAnimParam a1, ::System::UInt32 a2, ::RPG::Client::MockAnimator* a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::BuildInAnimParam, ::System::UInt32, ::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_425E5DE9EF79C88D_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_DE88D0A419577E55(::RPG::GameCore::BuildInAnimParam a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::BuildInAnimParam, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_DE88D0A419577E55_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_F1C13185F6DD3EB0(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_F1C13185F6DD3EB0_OFFSET))(a1);
	}

	static ::System::Single Method_1_52A3FEDD63707B13(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_52A3FEDD63707B13_OFFSET))(a1);
	}

	static ::System::Single Method_1_5B10DBC94C447F14(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::Class_0_16E4307DCC419505_565* a3, ::RPG::MVector3 a4)
	{
		return ((::System::Single(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_0_16E4307DCC419505_565*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_5B10DBC94C447F14_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_8AC79C1AE54BB24D(::System::Single a1, ::RPG::GameCore::GameEntity* a2, ::Class_0_16E4307DCC419505_565* a3)
	{
		return ((::System::Void(*)(::System::Single, ::RPG::GameCore::GameEntity*, ::Class_0_16E4307DCC419505_565*))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_8AC79C1AE54BB24D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E23427139348CB82(::System::Boolean a1, ::Class_0_16E4307DCC419505_565* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::Class_0_16E4307DCC419505_565*))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_E23427139348CB82_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_0B07C997B5AD53BE(::RPG::GameCore::AnimCategory a1, ::RPG::GameCore::CharacterReactionAnimConfig* a2)
	{
		return ((::System::String*(*)(::RPG::GameCore::AnimCategory, ::RPG::GameCore::CharacterReactionAnimConfig*))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_0B07C997B5AD53BE_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_C00B8E3C377F8C08(::RPG::GameCore::AnimCategory a1)
	{
		return ((::System::String*(*)(::RPG::GameCore::AnimCategory))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_C00B8E3C377F8C08_OFFSET))(a1);
	}
};
