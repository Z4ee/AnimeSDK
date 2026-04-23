#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Class_2_0E971291CFB8C92D_HiddenStoryControlState.h"
#include "unitysdk/Class_2_0E971291CFB8C92D_PuzzleState.h"

class Class_0_16E4307DCC419505_382;
class Class_1_E05E7A6D9DE9138B;
class Class_2_BD898AE9C0E88E25;
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

#define CLASS_2_0E971291CFB8C92D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4B4D40)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0xB4B4D90)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_03CFABC9DB480D57_OFFSET UNITYSDK_OFFSET(0xB4B3570)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_09236BC3F3F40508_OFFSET UNITYSDK_OFFSET(0xB4B4010)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0xB4B6370)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xB4B2640)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xB4B6280)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_1C6AD2DA62FB6EB1_OFFSET UNITYSDK_OFFSET(0xB4B17C0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_228E3444D290BEE7_OFFSET UNITYSDK_OFFSET(0xB4B1710)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xB4B1D90)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0xB4B2750)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_3A599F23178B2776_OFFSET UNITYSDK_OFFSET(0xB4B7190)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_3E586421BA588EFD_1_OFFSET UNITYSDK_OFFSET(0xB4B6D30)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_3E586421BA588EFD_OFFSET UNITYSDK_OFFSET(0xB4B6530)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB4B1BB0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_453AC1AA603124A7_OFFSET UNITYSDK_OFFSET(0xB4B5000)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_4971720EADE3BC69_OFFSET UNITYSDK_OFFSET(0xB4B3620)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_4A41C63BFE58D26F_1_OFFSET UNITYSDK_OFFSET(0xB4B12D0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_4A41C63BFE58D26F_OFFSET UNITYSDK_OFFSET(0xB4B4170)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_4E8A303616E6B331_OFFSET UNITYSDK_OFFSET(0xB4B69A0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0xB4B2130)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0xB4B3960)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0xB4B14C0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_71A73B32B60F1C50_OFFSET UNITYSDK_OFFSET(0xB4B2370)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xB4B5E00)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_7E876EE9E5D4C0FD_1_OFFSET UNITYSDK_OFFSET(0xB4B32D0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_7E876EE9E5D4C0FD_OFFSET UNITYSDK_OFFSET(0xB4B31E0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_805B6D82357700A5_OFFSET UNITYSDK_OFFSET(0xB4B71E0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_8594010D6A57C9BB_1_OFFSET UNITYSDK_OFFSET(0xB4B1E60)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0xB4B3B20)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_87FBD4C01CDE59F6_OFFSET UNITYSDK_OFFSET(0xB4B0F10)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0xB4B1A10)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_8F229D0FB38BDC22_OFFSET UNITYSDK_OFFSET(0xB4B1B00)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0xB4B5880)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_90EC405A27CF7D77_OFFSET UNITYSDK_OFFSET(0xB4B2CE0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xB4B61F0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_9681042564541CD6_2_OFFSET UNITYSDK_OFFSET(0xB4B6930)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB4B3320)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_96980C17A8BB1F06_1_OFFSET UNITYSDK_OFFSET(0xB4B3280)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_96980C17A8BB1F06_OFFSET UNITYSDK_OFFSET(0xB4B3230)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xB4B3E70)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0xB4B2F40)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_9D7B81571ADA6EDE_OFFSET UNITYSDK_OFFSET(0xB4B2C60)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xB4B4250)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_A57FA722AB2A8938_OFFSET UNITYSDK_OFFSET(0xB4B1400)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_B0472D22DF1F0462_OFFSET UNITYSDK_OFFSET(0xB4B76A0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0xB4B5AA0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xB4B5D60)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_B2C0ADBFEA309440_1_OFFSET UNITYSDK_OFFSET(0xB4B6B30)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0xB4B7580)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_B6BB704B01BCC35B_1_OFFSET UNITYSDK_OFFSET(0xB4B6C50)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_B6BB704B01BCC35B_OFFSET UNITYSDK_OFFSET(0xB4B11A0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB4B13B0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xB4B64E0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB4B1280)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_CCD88C0D86A5A786_OFFSET UNITYSDK_OFFSET(0xB4B33A0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0xB4B37A0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xB4B1D00)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_D4B2B3AAA187F191_OFFSET UNITYSDK_OFFSET(0xB4B2BE0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_D7852DE078ACC1F1_1_OFFSET UNITYSDK_OFFSET(0xB4B5F70)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0xB4B4400)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_D901EBCE84FF5911_OFFSET UNITYSDK_OFFSET(0xB4B56D0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0xB4B5510)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_ED65AE7582736594_1_OFFSET UNITYSDK_OFFSET(0xB4B5450)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_ED65AE7582736594_OFFSET UNITYSDK_OFFSET(0xB4B5390)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xB4B5B60)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_EEFAEF90788C3122_OFFSET UNITYSDK_OFFSET(0xB4B1C10)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_F088F946AD14C0AD_OFFSET UNITYSDK_OFFSET(0xB4B3820)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xB4B3DF0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xB4B3AA0)
#define CLASS_2_0E971291CFB8C92D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4B4610)
#define CLASS_2_0E971291CFB8C92D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB4B4A30)
#define CLASS_2_0E971291CFB8C92D_TICK_OFFSET UNITYSDK_OFFSET(0xB4B4C50)
#define CLASS_2_0E971291CFB8C92D__CCTOR_OFFSET UNITYSDK_OFFSET(0xB4B7720)
#define CLASS_2_0E971291CFB8C92D__CTOR_OFFSET UNITYSDK_OFFSET(0xB4B4300)

inline static constexpr unsigned int Class_2_0E971291CFB8C92D_TypeDefinitionIndex = 48799;

class Class_2_0E971291CFB8C92D : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::Action** StaticGet_Field_2_8()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0E971291CFB8C92D_TypeDefinitionIndex)->GetStaticField(0x69670);
	}
	static ::System::String** StaticGet_Field_2_7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0E971291CFB8C92D_TypeDefinitionIndex)->GetStaticField(0x69678);
	}
	static ::System::Boolean* StaticGet_Field_2_9()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0E971291CFB8C92D_TypeDefinitionIndex)->GetStaticField(0x11750);
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
	::Class_1_5F51D4049EA87B7B* Field_2_6; // 0x18
	::System::String* Field_2_5; // 0x20
	::RPG::GameCore::GravityBallPuzzleControllerInit* Field_2_12; // 0x28
	::RPG::Client::Prop::GravityBallWallController* Field_2_27; // 0x30
	::UnityEngine::Transform* Field_2_23; // 0x38
	::RPG::Client::LuaUIController* Field_2_17; // 0x40
	::RPG::GameCore::GameEntity* Field_2_24; // 0x48
	::Class_2_BD898AE9C0E88E25* Field_2_13; // 0x50
	::RPG::Client::Prop::GravityBallBallController* Field_2_28; // 0x58
	::Class_1_E05E7A6D9DE9138B* Field_2_21; // 0x60
	::RPG::GameCore::GravityBallUIParam* Field_2_20; // 0x68
	::UnityEngine::GameObject* Field_2_22; // 0x70
	::RPG::GameCore::TaskContext* Field_2_11; // 0x78
	::RPG::GameCore::GameEntity* Field_2_25; // 0x80
	::System::String* Field_2_4; // 0x88
	::RPG::GameCore::GameEntity* Field_2_26; // 0x90
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::RPG::GameCore::GameEntity*>* Field_2_29; // 0x98
	::System::UInt64 Field_2_19; // 0xA0
	::System::Single Field_2_1; // 0xA8
	::System::Single Field_2_3; // 0xAC
	::Class_2_0E971291CFB8C92D_PuzzleState Field_2_15; // 0xB0
	::System::Int32 Field_2_18; // 0xB4
	::System::Single Field_2_10; // 0xB8
	::Class_2_0E971291CFB8C92D_HiddenStoryControlState Field_2_2; // 0xBC
	::System::Boolean Field_2_16; // 0xC0
	::System::Boolean Field_2_0; // 0xC1
	::System::Int16 Field_2_14; // 0xC2

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

	::System::Void Method_2_805B6D82357700A5(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_805B6D82357700A5_OFFSET))(this, a1);
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
