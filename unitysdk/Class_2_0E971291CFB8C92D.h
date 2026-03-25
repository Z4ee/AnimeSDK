#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Class_2_0E971291CFB8C92D_HiddenStoryControlState.h"
#include "unitysdk/Class_2_0E971291CFB8C92D_PuzzleState.h"

class Class_0_16E4307DCC419505_375;
class Class_1_E05E7A6D9DE9138B;
class Class_2_D8257A310CAD757C;
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

#define CLASS_2_0E971291CFB8C92D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11180E60)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0x11180EB0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_03CFABC9DB480D57_OFFSET UNITYSDK_OFFSET(0x1117F640)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_09236BC3F3F40508_OFFSET UNITYSDK_OFFSET(0x11180100)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x111824D0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1117E6E0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x111823E0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_1C6AD2DA62FB6EB1_OFFSET UNITYSDK_OFFSET(0x1117D840)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_228E3444D290BEE7_OFFSET UNITYSDK_OFFSET(0x1117D780)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1117DE10)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x1117E7F0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_3A599F23178B2776_OFFSET UNITYSDK_OFFSET(0x11183300)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_3E586421BA588EFD_1_OFFSET UNITYSDK_OFFSET(0x11182E90)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_3E586421BA588EFD_OFFSET UNITYSDK_OFFSET(0x11182690)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1117DC20)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_453AC1AA603124A7_OFFSET UNITYSDK_OFFSET(0x11181120)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_4971720EADE3BC69_OFFSET UNITYSDK_OFFSET(0x1117F700)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_4A41C63BFE58D26F_1_OFFSET UNITYSDK_OFFSET(0x1117D330)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_4A41C63BFE58D26F_OFFSET UNITYSDK_OFFSET(0x11180260)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_4E8A303616E6B331_OFFSET UNITYSDK_OFFSET(0x11182B00)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x1117E1C0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_569C8A2D03C8AA85_OFFSET UNITYSDK_OFFSET(0x11183350)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0x1117FA40)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x1117D520)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_71A73B32B60F1C50_OFFSET UNITYSDK_OFFSET(0x1117E410)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x11181F50)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_7E876EE9E5D4C0FD_1_OFFSET UNITYSDK_OFFSET(0x1117F390)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_7E876EE9E5D4C0FD_OFFSET UNITYSDK_OFFSET(0x1117F2A0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_8594010D6A57C9BB_1_OFFSET UNITYSDK_OFFSET(0x1117DEE0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0x1117FC00)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_87FBD4C01CDE59F6_OFFSET UNITYSDK_OFFSET(0x1117CF60)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0x1117DA80)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_8F229D0FB38BDC22_OFFSET UNITYSDK_OFFSET(0x1117DB70)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0x111819C0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_90EC405A27CF7D77_OFFSET UNITYSDK_OFFSET(0x1117ED90)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x11182350)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_9681042564541CD6_2_OFFSET UNITYSDK_OFFSET(0x11182A90)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1117F3E0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_96980C17A8BB1F06_1_OFFSET UNITYSDK_OFFSET(0x1117F340)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_96980C17A8BB1F06_OFFSET UNITYSDK_OFFSET(0x1117F2F0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x1117FF60)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0x1117EFF0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_9D7B81571ADA6EDE_OFFSET UNITYSDK_OFFSET(0x1117ED10)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x11180340)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_A57FA722AB2A8938_OFFSET UNITYSDK_OFFSET(0x1117D460)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_B0472D22DF1F0462_OFFSET UNITYSDK_OFFSET(0x11183810)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x11181BE0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x11181EB0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_B2C0ADBFEA309440_1_OFFSET UNITYSDK_OFFSET(0x11182C90)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x111836F0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_B6BB704B01BCC35B_1_OFFSET UNITYSDK_OFFSET(0x11182DB0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_B6BB704B01BCC35B_OFFSET UNITYSDK_OFFSET(0x1117D200)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1117D410)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x11182640)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1117D2E0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_CCD88C0D86A5A786_OFFSET UNITYSDK_OFFSET(0x1117F460)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x1117F880)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x1117DD80)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_D4B2B3AAA187F191_OFFSET UNITYSDK_OFFSET(0x1117EC90)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_D7852DE078ACC1F1_1_OFFSET UNITYSDK_OFFSET(0x111820D0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x11180500)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_D901EBCE84FF5911_OFFSET UNITYSDK_OFFSET(0x11181810)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x11181640)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_ED65AE7582736594_1_OFFSET UNITYSDK_OFFSET(0x11181580)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_ED65AE7582736594_OFFSET UNITYSDK_OFFSET(0x111814C0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x11181CA0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_EEFAEF90788C3122_OFFSET UNITYSDK_OFFSET(0x1117DC80)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_F088F946AD14C0AD_OFFSET UNITYSDK_OFFSET(0x1117F900)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x1117FEE0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x1117FB80)
#define CLASS_2_0E971291CFB8C92D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11180710)
#define CLASS_2_0E971291CFB8C92D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11180B50)
#define CLASS_2_0E971291CFB8C92D_TICK_OFFSET UNITYSDK_OFFSET(0x11180D70)
#define CLASS_2_0E971291CFB8C92D__CCTOR_OFFSET UNITYSDK_OFFSET(0x11183890)
#define CLASS_2_0E971291CFB8C92D__CTOR_OFFSET UNITYSDK_OFFSET(0x111803F0)

inline static constexpr unsigned int Class_2_0E971291CFB8C92D_TypeDefinitionIndex = 42815;

class Class_2_0E971291CFB8C92D : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::String** StaticGet_Field_2_7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0E971291CFB8C92D_TypeDefinitionIndex)->GetStaticField(0x44D90);
	}
	static ::System::Action** StaticGet_Field_2_8()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0E971291CFB8C92D_TypeDefinitionIndex)->GetStaticField(0x44D98);
	}
	static ::System::Boolean* StaticGet_Field_2_9()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0E971291CFB8C92D_TypeDefinitionIndex)->GetStaticField(0x11CB0);
	}
	// static const ::System::String* Field_2_30; // 0x0
	// static const ::System::String* Field_2_31; // 0x0
	// static const ::System::String* Field_2_32; // 0x0
	// static const ::System::String* Field_2_33; // 0x0
	// static const ::System::String* Field_2_34; // 0x0
	// static const ::System::String* Field_2_35; // 0x0
	// static const ::System::String* Field_2_36; // 0x0
	// static const ::System::String* Field_2_37; // 0x0
	// static const ::System::String* Field_2_38; // 0x0
	// static const ::System::String* Field_2_39; // 0x0
	// static const ::System::String* Field_2_40; // 0x0
	// static const ::System::String* Field_2_41; // 0x0
	// static const ::System::String* Field_2_42; // 0x0
	// static const ::System::String* Field_2_43; // 0x0
	// static const ::System::String* Field_2_44; // 0x0
	// static const ::System::String* Field_2_45; // 0x0
	// static const ::System::String* Field_2_46; // 0x0
	// static const ::System::String* Field_2_47; // 0x0
	// static const ::System::String* Field_2_48; // 0x0
	// static const ::System::String* Field_2_49; // 0x0
	// static const ::System::String* Field_2_50; // 0x0
	// static const ::System::String* Field_2_51; // 0x0
	// static const ::System::String* Field_2_52; // 0x0
	// static const ::System::String* Field_2_53; // 0x0
	// static const ::System::String* Field_2_54; // 0x0
	// static const ::System::String* Field_2_55; // 0x0
	// static const ::System::String* Field_2_56; // 0x0
	// static const ::System::String* Field_2_57; // 0x0
	// static const ::System::String* Field_2_58; // 0x0
	// static const ::System::String* Field_2_59; // 0x0
	// static const ::System::String* Field_2_60; // 0x0
	// static const ::System::String* Field_2_61; // 0x0
	::System::String* Field_2_5; // 0x18
	::Class_1_5F51D4049EA87B7B* Field_2_6; // 0x20
	::UnityEngine::GameObject* Field_2_22; // 0x28
	::RPG::GameCore::GameEntity* Field_2_24; // 0x30
	::RPG::Client::LuaUIController* Field_2_17; // 0x38
	::System::String* Field_2_4; // 0x40
	::RPG::GameCore::GameEntity* Field_2_26; // 0x48
	::RPG::Client::Prop::GravityBallWallController* Field_2_27; // 0x50
	::UnityEngine::Transform* Field_2_23; // 0x58
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::RPG::GameCore::GameEntity*>* Field_2_29; // 0x60
	::Class_1_E05E7A6D9DE9138B* Field_2_21; // 0x68
	::RPG::GameCore::GravityBallPuzzleControllerInit* Field_2_12; // 0x70
	::RPG::GameCore::GameEntity* Field_2_25; // 0x78
	::RPG::GameCore::GravityBallUIParam* Field_2_20; // 0x80
	::Class_2_D8257A310CAD757C* Field_2_13; // 0x88
	::RPG::Client::Prop::GravityBallBallController* Field_2_28; // 0x90
	::RPG::GameCore::TaskContext* Field_2_11; // 0x98
	::System::UInt64 Field_2_19; // 0xA0
	::System::Single Field_2_10; // 0xA8
	::System::Single Field_2_3; // 0xAC
	::System::Int32 Field_2_18; // 0xB0
	::Class_2_0E971291CFB8C92D_HiddenStoryControlState Field_2_2; // 0xB4
	::System::Single Field_2_1; // 0xB8
	::System::Boolean Field_2_16; // 0xBC
	::System::Boolean Field_2_0; // 0xBD
	::System::Int16 Field_2_14; // 0xBE
	::Class_2_0E971291CFB8C92D_PuzzleState Field_2_15; // 0xC0

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GravityBallPuzzleControllerInit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GravityBallPuzzleControllerInit*))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D__CCTOR_OFFSET))();
	}

	::System::Void Method_2_87FBD4C01CDE59F6(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_87FBD4C01CDE59F6_OFFSET))(this, a1);
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

	::System::Void Method_2_1C6AD2DA62FB6EB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_1C6AD2DA62FB6EB1_OFFSET))(this);
	}

	::System::Void Method_2_8B848E52913DFCE9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_8B848E52913DFCE9_OFFSET))(this);
	}

	::System::Void Method_2_EEFAEF90788C3122(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_EEFAEF90788C3122_OFFSET))(this, a1);
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

	::System::Void Method_2_9AB55F553C4AC6E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_9AB55F553C4AC6E8_OFFSET))(this);
	}

	::System::Void Method_2_7E876EE9E5D4C0FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_7E876EE9E5D4C0FD_OFFSET))(this);
	}

	::System::Void Method_2_96980C17A8BB1F06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_96980C17A8BB1F06_OFFSET))(this);
	}

	::System::Void Method_2_96980C17A8BB1F06_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_96980C17A8BB1F06_1_OFFSET))(this);
	}

	::System::Void Method_2_7E876EE9E5D4C0FD_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_7E876EE9E5D4C0FD_1_OFFSET))(this);
	}

	::System::Void Method_2_9D7B81571ADA6EDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_9D7B81571ADA6EDE_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_CCD88C0D86A5A786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_CCD88C0D86A5A786_OFFSET))(this);
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

	::System::Void Method_2_F088F946AD14C0AD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_F088F946AD14C0AD_OFFSET))(this);
	}

	::System::Void Method_2_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_09236BC3F3F40508(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_09236BC3F3F40508_OFFSET))(this, a1);
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

	::System::Void Method_2_ED65AE7582736594()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_ED65AE7582736594_OFFSET))(this);
	}

	::System::Void Method_2_ED65AE7582736594_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_ED65AE7582736594_1_OFFSET))(this);
	}

	::System::Void Method_2_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_E693A0026D178D8E_OFFSET))(this);
	}

	::System::Void Method_2_D901EBCE84FF5911(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_D901EBCE84FF5911_OFFSET))(this, a1);
	}

	::System::Void Method_2_907E24F785836BA0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_907E24F785836BA0_OFFSET))(this);
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

	::System::Void Method_2_569C8A2D03C8AA85(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_569C8A2D03C8AA85_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_9681042564541CD6_2_OFFSET))(this);
	}

	::RPG::GameCore::TargetFetchAdvPropEx* Method_2_71A73B32B60F1C50()
	{
		return ((::RPG::GameCore::TargetFetchAdvPropEx*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_71A73B32B60F1C50_OFFSET))(this);
	}

	::System::Void Method_2_4E8A303616E6B331(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_4E8A303616E6B331_OFFSET))(this, a1);
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

	::System::Void Method_2_B6BB704B01BCC35B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_B6BB704B01BCC35B_OFFSET))(this);
	}

	::System::Void Method_2_4A41C63BFE58D26F_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_4A41C63BFE58D26F_1_OFFSET))(this);
	}

	::System::Void Method_2_B6BB704B01BCC35B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_B6BB704B01BCC35B_1_OFFSET))(this);
	}
};
