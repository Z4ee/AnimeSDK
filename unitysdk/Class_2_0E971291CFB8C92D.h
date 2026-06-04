#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Class_2_0E971291CFB8C92D_HiddenStoryControlState.h"
#include "unitysdk/Class_2_0E971291CFB8C92D_PuzzleState.h"

class Class_0_16E4307DCC419505_401;
class Class_1_E05E7A6D9DE9138B;
class Class_2_510E2A3B742BC0DC;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client::Prop { class GravityBallBallController; }
namespace RPG::Client::Prop { class GravityBallWallController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GravityBallPuzzleControllerInit; }
namespace RPG::GameCore { class GravityBallUIParam; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace RPG::GameCore { class TargetFetchAdvPropEx; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_0E971291CFB8C92D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3764D0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0xA376520)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_03CFABC9DB480D57_OFFSET UNITYSDK_OFFSET(0xA374C00)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_0BA114B592B3A582_1_OFFSET UNITYSDK_OFFSET(0xA376BE0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_0BA114B592B3A582_OFFSET UNITYSDK_OFFSET(0xA376B20)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0xA377AF0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xA373D00)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xA377A00)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_228E3444D290BEE7_OFFSET UNITYSDK_OFFSET(0xA372D50)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xA3733D0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_2DA8F7A684C1DC34_1_OFFSET UNITYSDK_OFFSET(0xA3748F0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_2DA8F7A684C1DC34_2_OFFSET UNITYSDK_OFFSET(0xA374330)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_2DA8F7A684C1DC34_OFFSET UNITYSDK_OFFSET(0xA3748A0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_322A2003AEF2D926_OFFSET UNITYSDK_OFFSET(0xA374850)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_33C1DB4C8E5800FD_OFFSET UNITYSDK_OFFSET(0xA373050)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_342E6FE12453B5AA_OFFSET UNITYSDK_OFFSET(0xA372550)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0xA373E20)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_3A599F23178B2776_OFFSET UNITYSDK_OFFSET(0xA378920)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_3E586421BA588EFD_1_OFFSET UNITYSDK_OFFSET(0xA3784C0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_3E586421BA588EFD_OFFSET UNITYSDK_OFFSET(0xA377CB0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA3731F0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_446E3A78D06C5947_OFFSET UNITYSDK_OFFSET(0xA375740)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_453AC1AA603124A7_OFFSET UNITYSDK_OFFSET(0xA376790)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_4971720EADE3BC69_OFFSET UNITYSDK_OFFSET(0xA374CB0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_4A41C63BFE58D26F_1_OFFSET UNITYSDK_OFFSET(0xA372910)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_4A41C63BFE58D26F_OFFSET UNITYSDK_OFFSET(0xA3758A0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_4DC69859C9624A77_OFFSET UNITYSDK_OFFSET(0xA374940)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0xA373770)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0xA374A10)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0xA377010)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0xA372B00)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xA377590)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_805B6D82357700A5_OFFSET UNITYSDK_OFFSET(0xA378970)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_8594010D6A57C9BB_1_OFFSET UNITYSDK_OFFSET(0xA3734A0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0xA375250)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_8C6E66D260CC37AD_OFFSET UNITYSDK_OFFSET(0xA378120)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_8F229D0FB38BDC22_OFFSET UNITYSDK_OFFSET(0xA373140)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_90EC405A27CF7D77_OFFSET UNITYSDK_OFFSET(0xA3743B0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xA377970)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_9681042564541CD6_2_OFFSET UNITYSDK_OFFSET(0xA3780B0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA374990)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xA3755A0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xA375980)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_A57FA722AB2A8938_OFFSET UNITYSDK_OFFSET(0xA372A40)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_AAF209FFDFA2E77D_OFFSET UNITYSDK_OFFSET(0xA3739B0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_B0472D22DF1F0462_OFFSET UNITYSDK_OFFSET(0xA378E40)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0xA377230)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xA3774F0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_B2C0ADBFEA309440_1_OFFSET UNITYSDK_OFFSET(0xA3782C0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0xA378D20)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA3729F0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xA377C60)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA3728C0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0xA374E30)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xA373340)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_D4B2B3AAA187F191_OFFSET UNITYSDK_OFFSET(0xA3742B0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_D7852DE078ACC1F1_1_OFFSET UNITYSDK_OFFSET(0xA3776F0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0xA375B40)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_D901EBCE84FF5911_OFFSET UNITYSDK_OFFSET(0xA376E60)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0xA374610)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_DFD8FD4BA7D3ACA8_OFFSET UNITYSDK_OFFSET(0xA372E00)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0xA376CA0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_E8F71BC8471C5469_1_OFFSET UNITYSDK_OFFSET(0xA375040)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_E8F71BC8471C5469_OFFSET UNITYSDK_OFFSET(0xA374EB0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_EAD10B3E55E2C4C5_1_OFFSET UNITYSDK_OFFSET(0xA3783E0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0xA3727E0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xA3772F0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xA375520)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xA3751D0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_FA3D6E45984D6807_OFFSET UNITYSDK_OFFSET(0xA373250)
#define CLASS_2_0E971291CFB8C92D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA375D50)
#define CLASS_2_0E971291CFB8C92D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA376190)
#define CLASS_2_0E971291CFB8C92D_TICK_OFFSET UNITYSDK_OFFSET(0xA3763E0)
#define CLASS_2_0E971291CFB8C92D__CCTOR_OFFSET UNITYSDK_OFFSET(0xA378EC0)
#define CLASS_2_0E971291CFB8C92D__CTOR_OFFSET UNITYSDK_OFFSET(0xA375A30)

inline static constexpr unsigned int Class_2_0E971291CFB8C92D_TypeDefinitionIndex = 49465;

class Class_2_0E971291CFB8C92D : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0E971291CFB8C92D_TypeDefinitionIndex)->GetStaticField(0x18170);
	}
	static ::System::Action** StaticGet_Field_2_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0E971291CFB8C92D_TypeDefinitionIndex)->GetStaticField(0x18178);
	}
	static ::System::Boolean* StaticGet_Field_2_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0E971291CFB8C92D_TypeDefinitionIndex)->GetStaticField(0x82B0);
	}
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	// static const ::System::String* Field_2_8; // 0x0
	// static const ::System::String* Field_2_9; // 0x0
	// static const ::System::String* Field_2_10; // 0x0
	// static const ::System::String* Field_2_11; // 0x0
	// static const ::System::String* Field_2_12; // 0x0
	// static const ::System::String* Field_2_13; // 0x0
	// static const ::System::String* Field_2_14; // 0x0
	// static const ::System::String* Field_2_15; // 0x0
	// static const ::System::String* Field_2_16; // 0x0
	// static const ::System::String* Field_2_17; // 0x0
	// static const ::System::String* Field_2_18; // 0x0
	// static const ::System::String* Field_2_19; // 0x0
	// static const ::System::String* Field_2_20; // 0x0
	// static const ::System::String* Field_2_21; // 0x0
	// static const ::System::String* Field_2_22; // 0x0
	// static const ::System::String* Field_2_23; // 0x0
	// static const ::System::String* Field_2_24; // 0x0
	// static const ::System::String* Field_2_25; // 0x0
	// static const ::System::String* Field_2_26; // 0x0
	// static const ::System::String* Field_2_27; // 0x0
	// static const ::System::String* Field_2_28; // 0x0
	// static const ::System::String* Field_2_29; // 0x0
	// static const ::System::String* Field_2_30; // 0x0
	// static const ::System::String* Field_2_31; // 0x0
	// static const ::System::String* Field_2_32; // 0x0
	// static const ::System::String* Field_2_33; // 0x0
	// static const ::System::String* Field_2_34; // 0x0
	::RPG::GameCore::GravityBallPuzzleControllerInit* Field_2_35; // 0x18
	::RPG::GameCore::TaskContext* Field_2_36; // 0x20
	::Class_1_5F51D4049EA87B7B* Field_2_37; // 0x28
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::RPG::GameCore::GameEntity*>* Field_2_38; // 0x30
	::RPG::GameCore::GameEntity* Field_2_39; // 0x38
	::RPG::Client::Prop::GravityBallBallController* Field_2_40; // 0x40
	::RPG::Client::LuaUIController* Field_2_41; // 0x48
	::UnityEngine::GameObject* Field_2_42; // 0x50
	::RPG::GameCore::GravityBallUIParam* Field_2_43; // 0x58
	::RPG::Client::Prop::GravityBallWallController* Field_2_44; // 0x60
	::Class_2_510E2A3B742BC0DC* Field_2_45; // 0x68
	::RPG::GameCore::GameEntity* Field_2_46; // 0x70
	::System::String* Field_2_47; // 0x78
	::System::String* Field_2_48; // 0x80
	::UnityEngine::Transform* Field_2_49; // 0x88
	::Class_1_E05E7A6D9DE9138B* Field_2_50; // 0x90
	::RPG::GameCore::GameEntity* Field_2_51; // 0x98
	::System::Boolean Field_2_52; // 0xA0
	::System::Boolean Field_2_53; // 0xA1
	::System::Int16 Field_2_54; // 0xA2
	::System::Single Field_2_55; // 0xA4
	::System::UInt64 Field_2_56; // 0xA8
	::Class_2_0E971291CFB8C92D_HiddenStoryControlState Field_2_57; // 0xB0
	::System::Int32 Field_2_58; // 0xB4
	::Class_2_0E971291CFB8C92D_PuzzleState Field_2_59; // 0xB8
	::System::Single Field_2_60; // 0xBC
	::System::Single Field_2_61; // 0xC0

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GravityBallPuzzleControllerInit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GravityBallPuzzleControllerInit*))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D__CCTOR_OFFSET))();
	}

	::System::Void Method_2_342E6FE12453B5AA(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_342E6FE12453B5AA_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_A57FA722AB2A8938(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_A57FA722AB2A8938_OFFSET))(this, a1);
	}

	::System::Void Method_2_228E3444D290BEE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_228E3444D290BEE7_OFFSET))(this);
	}

	::System::Void Method_2_DFD8FD4BA7D3ACA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_DFD8FD4BA7D3ACA8_OFFSET))(this);
	}

	::System::Void Method_2_33C1DB4C8E5800FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_33C1DB4C8E5800FD_OFFSET))(this);
	}

	::System::Void Method_2_FA3D6E45984D6807(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_FA3D6E45984D6807_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_25DEA5C65A602671_OFFSET))(this);
	}

	::System::String* Method_2_8F229D0FB38BDC22(::System::Single a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_8F229D0FB38BDC22_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_367B9590522079D1_OFFSET))(this);
	}

	::System::String* Method_2_D4B2B3AAA187F191(::System::Int16 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_D4B2B3AAA187F191_OFFSET))(this, a1);
	}

	::System::String* Method_2_90EC405A27CF7D77(::System::Int16 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_90EC405A27CF7D77_OFFSET))(this, a1);
	}

	::System::Void Method_2_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Void Method_2_322A2003AEF2D926()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_322A2003AEF2D926_OFFSET))(this);
	}

	::System::Void Method_2_2DA8F7A684C1DC34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_2DA8F7A684C1DC34_OFFSET))(this);
	}

	::System::Void Method_2_2DA8F7A684C1DC34_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_2DA8F7A684C1DC34_1_OFFSET))(this);
	}

	::System::Void Method_2_4DC69859C9624A77()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_4DC69859C9624A77_OFFSET))(this);
	}

	::System::Void Method_2_2DA8F7A684C1DC34_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_2DA8F7A684C1DC34_2_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Void Method_2_03CFABC9DB480D57(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_03CFABC9DB480D57_OFFSET))(this, a1);
	}

	::System::Void Method_2_4971720EADE3BC69(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_4971720EADE3BC69_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_CE18697B63E52504_OFFSET))();
	}

	::System::Void Method_2_E8F71BC8471C5469()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_E8F71BC8471C5469_OFFSET))(this);
	}

	::System::Void Method_2_E8F71BC8471C5469_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_E8F71BC8471C5469_1_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_446E3A78D06C5947(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_446E3A78D06C5947_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_0076C796B2045359_OFFSET))(this);
	}

	::System::Void Method_2_453AC1AA603124A7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_453AC1AA603124A7_OFFSET))(this, a1);
	}

	::System::Void Method_2_0BA114B592B3A582()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_0BA114B592B3A582_OFFSET))(this);
	}

	::System::Void Method_2_0BA114B592B3A582_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_0BA114B592B3A582_1_OFFSET))(this);
	}

	::System::Void Method_2_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_E693A0026D178D8E_OFFSET))(this);
	}

	::System::Void Method_2_D901EBCE84FF5911(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_D901EBCE84FF5911_OFFSET))(this, a1);
	}

	::System::Void Method_2_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_5F08B426ADF31FF5_OFFSET))(this);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_D7852DE078ACC1F1_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_D7852DE078ACC1F1_1_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_2_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Void Method_2_3E586421BA588EFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_3E586421BA588EFD_OFFSET))(this);
	}

	::System::Void Method_2_8594010D6A57C9BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_8594010D6A57C9BB_OFFSET))(this);
	}

	::System::Void Method_2_3E586421BA588EFD_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_3E586421BA588EFD_1_OFFSET))(this);
	}

	::System::Void Method_2_8594010D6A57C9BB_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_8594010D6A57C9BB_1_OFFSET))(this);
	}

	::System::Void Method_2_3A599F23178B2776()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_3A599F23178B2776_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::System::Void Method_2_805B6D82357700A5(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_805B6D82357700A5_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_9681042564541CD6_2_OFFSET))(this);
	}

	::RPG::GameCore::TargetFetchAdvPropEx* Method_2_AAF209FFDFA2E77D()
	{
		return ((::RPG::GameCore::TargetFetchAdvPropEx*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_AAF209FFDFA2E77D_OFFSET))(this);
	}

	::System::Void Method_2_8C6E66D260CC37AD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_8C6E66D260CC37AD_OFFSET))(this, a1);
	}

	::RPG::GameCore::RuntimeGroupInfo* Method_2_B0472D22DF1F0462()
	{
		return ((::RPG::GameCore::RuntimeGroupInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_B0472D22DF1F0462_OFFSET))(this);
	}

	::System::Void Method_2_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_2_B2C0ADBFEA309440_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_B2C0ADBFEA309440_1_OFFSET))(this);
	}

	::System::Void Method_2_4A41C63BFE58D26F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_4A41C63BFE58D26F_OFFSET))(this);
	}

	::System::Void Method_2_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_2_4A41C63BFE58D26F_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_4A41C63BFE58D26F_1_OFFSET))(this);
	}

	::System::Void Method_2_EAD10B3E55E2C4C5_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_EAD10B3E55E2C4C5_1_OFFSET))(this);
	}
};
