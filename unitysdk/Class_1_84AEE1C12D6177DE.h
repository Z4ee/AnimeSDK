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

class Class_0_16E4307DCC419505_402;
class Class_1_451601B8BB62C38C_3;
class Class_1_84AEE1C12D6177DE_Class_1_273ED8FCC39D80E7;
class Class_1_CC76D1702CC17C09_4;
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

#define CLASS_1_84AEE1C12D6177DE_METHOD_1_0A59C14AC513B1F3_OFFSET UNITYSDK_OFFSET(0x8CBE950)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_0E2BA96CBE535455_OFFSET UNITYSDK_OFFSET(0x8CBBDA0)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_0ED3E69CF0A6A196_OFFSET UNITYSDK_OFFSET(0x8CBCB70)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_1179FF255BAA25D3_OFFSET UNITYSDK_OFFSET(0x8CBEC60)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_23B573F7FD360F67_OFFSET UNITYSDK_OFFSET(0x8CBE9D0)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_370300924411559A_OFFSET UNITYSDK_OFFSET(0x8CBC490)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_38B08A28949FAF13_OFFSET UNITYSDK_OFFSET(0x8CBC630)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_475F851C23980E67_OFFSET UNITYSDK_OFFSET(0x8CBF0C0)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_4787E9B038D6C602_OFFSET UNITYSDK_OFFSET(0x8CBD910)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_4DDAFDC5BDED81B3_OFFSET UNITYSDK_OFFSET(0x8CBC790)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_52A3FEDD63707B13_OFFSET UNITYSDK_OFFSET(0x8CBBFA0)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_5A85B0E829C2AF94_OFFSET UNITYSDK_OFFSET(0x8CBC550)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_5B10DBC94C447F14_OFFSET UNITYSDK_OFFSET(0x8CBCF30)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_64DC7BE8FD04FAC2_OFFSET UNITYSDK_OFFSET(0x8CBC3E0)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_724DEA13BD84B25E_1_OFFSET UNITYSDK_OFFSET(0x8CBC180)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_724DEA13BD84B25E_OFFSET UNITYSDK_OFFSET(0x8CBC020)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_7331A1455F3F12A1_OFFSET UNITYSDK_OFFSET(0x8CBBEE0)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_7692A1BCF81A3AB6_OFFSET UNITYSDK_OFFSET(0x8CBD7B0)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_841E142B9EF9A6BD_OFFSET UNITYSDK_OFFSET(0x8CBEDF0)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_881817D05A3F3048_OFFSET UNITYSDK_OFFSET(0x8CBEA30)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_8A068F1586DCDFE1_OFFSET UNITYSDK_OFFSET(0x8CBEE50)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_8E1DF1377AA814CB_OFFSET UNITYSDK_OFFSET(0x8CBEB50)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_971FC789D3B49430_OFFSET UNITYSDK_OFFSET(0x8CBF010)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_9863F50EB4A4E758_OFFSET UNITYSDK_OFFSET(0x8CBECF0)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_B0474A3FA8A8EE85_OFFSET UNITYSDK_OFFSET(0x8CBC900)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_C218B6BB4F603777_OFFSET UNITYSDK_OFFSET(0x8CBDF90)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_C7BD5759A8CD263B_OFFSET UNITYSDK_OFFSET(0x8CBCC40)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_CC3C6854897D2D01_OFFSET UNITYSDK_OFFSET(0x8CBCA50)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_DB11C736C0498425_OFFSET UNITYSDK_OFFSET(0x8CBC2E0)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_DE88D0A419577E55_OFFSET UNITYSDK_OFFSET(0x8CBF500)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_E9EB8F52DD2D6D00_OFFSET UNITYSDK_OFFSET(0x8CBF270)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_EA091433E77569D3_OFFSET UNITYSDK_OFFSET(0x8CBE900)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_F1C13185F6DD3EB0_OFFSET UNITYSDK_OFFSET(0x8CBF550)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_F268985708848D15_OFFSET UNITYSDK_OFFSET(0x8CBE8B0)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_FE928F355222CE32_OFFSET UNITYSDK_OFFSET(0x8CBD560)
#define CLASS_1_84AEE1C12D6177DE_METHOD_1_FF5B805F6FC5BC5B_OFFSET UNITYSDK_OFFSET(0x8CBC340)
#define CLASS_1_84AEE1C12D6177DE__CCTOR_OFFSET UNITYSDK_OFFSET(0x8CBF5B0)
#define CLASS_1_84AEE1C12D6177DE__CTOR_OFFSET UNITYSDK_OFFSET(0x8CBF5A0)

inline static constexpr unsigned int Class_1_84AEE1C12D6177DE_TypeDefinitionIndex = 47696;

class Class_1_84AEE1C12D6177DE : public ::System::Object
{
public:
	static ::Class_1_451601B8BB62C38C_3** StaticGet_Field_1_48()
	{
		return (::Class_1_451601B8BB62C38C_3**)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE_TypeDefinitionIndex)->GetStaticField(0x89E0);
	}
	static ::System::String** StaticGet_Field_1_41()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE_TypeDefinitionIndex)->GetStaticField(0x89E8);
	}
	static ::Class_1_84AEE1C12D6177DE_Class_1_273ED8FCC39D80E7** StaticGet_Field_1_47()
	{
		return (::Class_1_84AEE1C12D6177DE_Class_1_273ED8FCC39D80E7**)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE_TypeDefinitionIndex)->GetStaticField(0x89F0);
	}
	static ::System::String** StaticGet_Field_1_42()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE_TypeDefinitionIndex)->GetStaticField(0x89F8);
	}
	static ::System::String** StaticGet_Field_1_43()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE_TypeDefinitionIndex)->GetStaticField(0x8A00);
	}
	static ::System::Int32* StaticGet_Field_1_39()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE_TypeDefinitionIndex)->GetStaticField(0x4660);
	}
	static ::System::Int32* StaticGet_Field_1_40()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE_TypeDefinitionIndex)->GetStaticField(0x4664);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_26()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE_TypeDefinitionIndex)->GetStaticField(0x4668);
	}
	static ::System::Int32* StaticGet_Field_1_44()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE_TypeDefinitionIndex)->GetStaticField(0x466C);
	}
	static ::System::UInt32* StaticGet_Field_1_46()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE_TypeDefinitionIndex)->GetStaticField(0x4670);
	}
	static ::System::Int32* StaticGet_Field_1_38()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE_TypeDefinitionIndex)->GetStaticField(0x4674);
	}
	static ::System::Int32* StaticGet_Field_1_37()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_84AEE1C12D6177DE_TypeDefinitionIndex)->GetStaticField(0x4678);
	}
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
	// static const ::System::String* Field_1_8; // 0x0
	// static const ::System::String* Field_1_9; // 0x0
	// static const ::System::String* Field_1_10; // 0x0
	// static const ::System::String* Field_1_11; // 0x0
	// static const ::System::String* Field_1_12; // 0x0
	// static const ::System::String* Field_1_13; // 0x0
	// static const ::System::String* Field_1_14; // 0x0
	// static const ::System::String* Field_1_15; // 0x0
	// static const ::System::String* Field_1_16; // 0x0
	// static const ::System::String* Field_1_17; // 0x0
	// static const ::System::String* Field_1_18; // 0x0
	// static const ::System::String* Field_1_19; // 0x0
	// static const ::System::String* Field_1_20; // 0x0
	// static const ::System::String* Field_1_21; // 0x0
	// static const ::System::String* Field_1_22; // 0x0
	// static const ::System::String* Field_1_23; // 0x0
	// static const ::System::String* Field_1_24; // 0x0
	// static const ::System::String* Field_1_25; // 0x0
	// static const ::System::String* Field_1_27; // 0x0
	// static const ::System::String* Field_1_28; // 0x0
	// static const ::System::String* Field_1_29; // 0x0
	// static const ::System::String* Field_1_30; // 0x0
	// static const ::System::String* Field_1_31; // 0x0
	// static const ::System::Single Field_1_32; // 0x0
	// static const ::System::Single Field_1_33; // 0x0
	// static const ::System::Int32 Field_1_34 = 0x2; // 0x0
	// static const ::System::Single Field_1_35; // 0x0
	// static const ::System::Single Field_1_36; // 0x0
	// static const ::System::UInt32 Field_1_45 = 0x0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_0E2BA96CBE535455(::UnityEngine::Animator* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_0E2BA96CBE535455_OFFSET))(a1, a2);
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

	static ::Class_1_451601B8BB62C38C_3* Method_1_FF5B805F6FC5BC5B(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::Class_1_451601B8BB62C38C_3*(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_FF5B805F6FC5BC5B_OFFSET))(a1, a2, a3);
	}

	static ::RPG::GameCore::SkillTransitAnimConfig* Method_1_64DC7BE8FD04FAC2(::System::Int32 a1, ::System::Int32 a2, ::RPG::GameCore::CharacterDataComponent* a3)
	{
		return ((::RPG::GameCore::SkillTransitAnimConfig*(*)(::System::Int32, ::System::Int32, ::RPG::GameCore::CharacterDataComponent*))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_64DC7BE8FD04FAC2_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_370300924411559A(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_370300924411559A_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_5A85B0E829C2AF94(::Class_2_444389D33B1116F1* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::Class_2_444389D33B1116F1*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_5A85B0E829C2AF94_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_38B08A28949FAF13(::RPG::GameCore::AnimCategory a1, ::Class_2_444389D33B1116F1* a2, ::System::Int32 a3)
	{
		return ((::System::String*(*)(::RPG::GameCore::AnimCategory, ::Class_2_444389D33B1116F1*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_38B08A28949FAF13_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_CC3C6854897D2D01(::Class_1_DB457F2E821DD51D* a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::Class_1_DB457F2E821DD51D*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_CC3C6854897D2D01_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_0ED3E69CF0A6A196(::RPG::GameCore::AnimStateLogicType a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::String*(*)(::RPG::GameCore::AnimStateLogicType, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_0ED3E69CF0A6A196_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C7BD5759A8CD263B(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::MVector3 a3, ::RPG::MVector3 a4, ::System::Boolean a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::MVector3, ::RPG::MVector3, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_C7BD5759A8CD263B_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_4787E9B038D6C602(::RPG::GameCore::GameEntity* a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::Class_1_CC76D1702CC17C09_4* a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::MVector3, ::RPG::MVector3, ::Class_1_CC76D1702CC17C09_4*))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_4787E9B038D6C602_OFFSET))(a1, a2, a3, a4);
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

	static ::System::Boolean Method_1_475F851C23980E67(::RPG::GameCore::BuildInAnimParam a1, ::System::UInt32 a2, ::UnityEngine::Animator* a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::BuildInAnimParam, ::System::UInt32, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_475F851C23980E67_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_E9EB8F52DD2D6D00(::RPG::GameCore::BuildInAnimParam a1, ::System::UInt32 a2, ::RPG::Client::MockAnimator* a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::BuildInAnimParam, ::System::UInt32, ::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_E9EB8F52DD2D6D00_OFFSET))(a1, a2, a3);
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

	static ::System::Single Method_1_5B10DBC94C447F14(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::Class_0_16E4307DCC419505_402* a3, ::RPG::MVector3 a4)
	{
		return ((::System::Single(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_0_16E4307DCC419505_402*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_5B10DBC94C447F14_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_FE928F355222CE32(::System::Single a1, ::RPG::GameCore::GameEntity* a2, ::Class_0_16E4307DCC419505_402* a3)
	{
		return ((::System::Void(*)(::System::Single, ::RPG::GameCore::GameEntity*, ::Class_0_16E4307DCC419505_402*))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_FE928F355222CE32_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_7692A1BCF81A3AB6(::System::Boolean a1, ::Class_0_16E4307DCC419505_402* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::Class_0_16E4307DCC419505_402*))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_7692A1BCF81A3AB6_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_4DDAFDC5BDED81B3(::RPG::GameCore::AnimCategory a1, ::RPG::GameCore::CharacterReactionAnimConfig* a2)
	{
		return ((::System::String*(*)(::RPG::GameCore::AnimCategory, ::RPG::GameCore::CharacterReactionAnimConfig*))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_4DDAFDC5BDED81B3_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_B0474A3FA8A8EE85(::RPG::GameCore::AnimCategory a1)
	{
		return ((::System::String*(*)(::RPG::GameCore::AnimCategory))((::PBYTE)hIl2Cpp + CLASS_1_84AEE1C12D6177DE_METHOD_1_B0474A3FA8A8EE85_OFFSET))(a1);
	}
};
