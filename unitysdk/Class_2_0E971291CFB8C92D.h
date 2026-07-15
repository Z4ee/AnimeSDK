#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Class_2_0E971291CFB8C92D_HiddenStoryControlState.h"
#include "unitysdk/Class_2_0E971291CFB8C92D_PuzzleState.h"

class Class_0_16E4307DCC419505_425;
class Class_1_4A90D78D94DB1347;
class Class_2_0748E0E1B406181B;
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

#define CLASS_2_0E971291CFB8C92D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156344B0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_03CFABC9DB480D57_OFFSET UNITYSDK_OFFSET(0x15632750)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_08C9B39C07B526E4_1_OFFSET UNITYSDK_OFFSET(0x156301F0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_08C9B39C07B526E4_OFFSET UNITYSDK_OFFSET(0x156334D0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_096C7F7C8EC87129_OFFSET UNITYSDK_OFFSET(0x156303E0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_0BA114B592B3A582_1_OFFSET UNITYSDK_OFFSET(0x15634B80)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_0BA114B592B3A582_OFFSET UNITYSDK_OFFSET(0x15634AC0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_0C345DD812B0AECF_OFFSET UNITYSDK_OFFSET(0x1562FDB0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x15635B80)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x15631840)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x15635A90)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x15633160)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x15634500)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x15630E30)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_322A2003AEF2D926_OFFSET UNITYSDK_OFFSET(0x156323A0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x15631960)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_3A599F23178B2776_OFFSET UNITYSDK_OFFSET(0x156369B0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_3E586421BA588EFD_1_OFFSET UNITYSDK_OFFSET(0x15636550)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_3E586421BA588EFD_OFFSET UNITYSDK_OFFSET(0x15635D40)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15630BD0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_453AC1AA603124A7_OFFSET UNITYSDK_OFFSET(0x15634750)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_4971720EADE3BC69_OFFSET UNITYSDK_OFFSET(0x15632800)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_4DC69859C9624A77_OFFSET UNITYSDK_OFFSET(0x15632490)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x15631240)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x15632560)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_6100984B3BC988C7_OFFSET UNITYSDK_OFFSET(0x15636A00)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_74B606B7F04F3BC3_OFFSET UNITYSDK_OFFSET(0x15630760)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_759BBC8E63F4A719_OFFSET UNITYSDK_OFFSET(0x15633370)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x15635620)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0x15633770)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_8C6E66D260CC37AD_OFFSET UNITYSDK_OFFSET(0x156361B0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_8F229D0FB38BDC22_OFFSET UNITYSDK_OFFSET(0x15630B20)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_8F60F8EA8A4B6E2F_1_OFFSET UNITYSDK_OFFSET(0x15632440)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_8F60F8EA8A4B6E2F_2_OFFSET UNITYSDK_OFFSET(0x15631E80)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_8F60F8EA8A4B6E2F_OFFSET UNITYSDK_OFFSET(0x156323F0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_90EC405A27CF7D77_OFFSET UNITYSDK_OFFSET(0x15631F00)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x15635A00)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_9681042564541CD6_2_OFFSET UNITYSDK_OFFSET(0x15636140)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x156324E0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_97889423B3D78768_1_OFFSET UNITYSDK_OFFSET(0x15630F00)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_97889423B3D78768_OFFSET UNITYSDK_OFFSET(0x15632DA0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0x15634C40)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_A20DF704BAEFF02B_OFFSET UNITYSDK_OFFSET(0x15631550)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x156335B0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_A57FA722AB2A8938_OFFSET UNITYSDK_OFFSET(0x15630320)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x156352C0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x15635580)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_B2C0ADBFEA309440_1_OFFSET UNITYSDK_OFFSET(0x15636350)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x15636DB0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_B6BB704B01BCC35B_1_OFFSET UNITYSDK_OFFSET(0x15636470)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_B6BB704B01BCC35B_OFFSET UNITYSDK_OFFSET(0x156300C0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x156306B0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x156302D0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x15635CF0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x156301A0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x15632980)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x15630DA0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_D4B2B3AAA187F191_OFFSET UNITYSDK_OFFSET(0x15631E00)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x15635780)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_D901EBCE84FF5911_OFFSET UNITYSDK_OFFSET(0x15634E80)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0x15632160)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_DDB365B3A09E223B_OFFSET UNITYSDK_OFFSET(0x15630C30)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_DEAC86EB2AD5D389_OFFSET UNITYSDK_OFFSET(0x156350A0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_E40414FF0A300A50_OFFSET UNITYSDK_OFFSET(0x15636ED0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_E8F71BC8471C5469_1_OFFSET UNITYSDK_OFFSET(0x15632B90)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_E8F71BC8471C5469_OFFSET UNITYSDK_OFFSET(0x15632A00)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_ED65AE7582736594_OFFSET UNITYSDK_OFFSET(0x156309B0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x15635380)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x156330E0)
#define CLASS_2_0E971291CFB8C92D_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x15632D20)
#define CLASS_2_0E971291CFB8C92D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156339F0)
#define CLASS_2_0E971291CFB8C92D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x156340B0)
#define CLASS_2_0E971291CFB8C92D_TICK_OFFSET UNITYSDK_OFFSET(0x156343C0)
#define CLASS_2_0E971291CFB8C92D__CCTOR_OFFSET UNITYSDK_OFFSET(0x15636FB0)
#define CLASS_2_0E971291CFB8C92D__CTOR_OFFSET UNITYSDK_OFFSET(0x15633660)

inline static constexpr unsigned int Class_2_0E971291CFB8C92D_TypeDefinitionIndex = 50515;

class Class_2_0E971291CFB8C92D : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::Action** StaticGet_Field_2_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0E971291CFB8C92D_TypeDefinitionIndex)->GetStaticField(0x23BE0);
	}
	static ::System::String** StaticGet_Field_2_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0E971291CFB8C92D_TypeDefinitionIndex)->GetStaticField(0x23BE8);
	}
	static ::System::Boolean* StaticGet_Field_2_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0E971291CFB8C92D_TypeDefinitionIndex)->GetStaticField(0x6E90);
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
	::Class_1_5F51D4049EA87B7B* Field_2_35; // 0x18
	::RPG::GameCore::TaskContext* Field_2_36; // 0x20
	::Class_2_0748E0E1B406181B* Field_2_37; // 0x28
	::RPG::GameCore::GravityBallPuzzleControllerInit* Field_2_38; // 0x30
	::Class_1_4A90D78D94DB1347* Field_2_39; // 0x38
	::UnityEngine::GameObject* Field_2_40; // 0x40
	::System::String* Field_2_41; // 0x48
	::RPG::GameCore::GameEntity* Field_2_42; // 0x50
	::RPG::Client::Prop::GravityBallBallController* Field_2_43; // 0x58
	::RPG::GameCore::GameEntity* Field_2_44; // 0x60
	::RPG::Client::LuaUIController* Field_2_45; // 0x68
	::RPG::Client::Prop::GravityBallWallController* Field_2_46; // 0x70
	::RPG::GameCore::GameEntity* Field_2_47; // 0x78
	::RPG::GameCore::GravityBallUIParam* Field_2_48; // 0x80
	::UnityEngine::Transform* Field_2_49; // 0x88
	::System::String* Field_2_50; // 0x90
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::RPG::GameCore::GameEntity*>* Field_2_51; // 0x98
	::Class_2_0E971291CFB8C92D_PuzzleState Field_2_52; // 0xA0
	::Class_2_0E971291CFB8C92D_HiddenStoryControlState Field_2_53; // 0xA4
	::System::Int16 Field_2_54; // 0xA8
	::System::Boolean Field_2_55; // 0xAA
	::System::Boolean Field_2_56; // 0xAB
	::System::Single Field_2_57; // 0xAC
	::System::Int32 Field_2_58; // 0xB0
	::System::UInt64 Field_2_59; // 0xB8
	::System::Single Field_2_60; // 0xC0
	::System::Single Field_2_61; // 0xC4

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GravityBallPuzzleControllerInit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GravityBallPuzzleControllerInit*))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D__CCTOR_OFFSET))();
	}

	::System::Void Method_2_0C345DD812B0AECF(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_0C345DD812B0AECF_OFFSET))(this, a1);
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

	::System::Void Method_2_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_B877181B6123B7F6_OFFSET))(this);
	}

	::System::Void Method_2_74B606B7F04F3BC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_74B606B7F04F3BC3_OFFSET))(this);
	}

	::System::Void Method_2_ED65AE7582736594()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_ED65AE7582736594_OFFSET))(this);
	}

	::System::Void Method_2_DDB365B3A09E223B(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_DDB365B3A09E223B_OFFSET))(this, a1);
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

	::System::Void Method_2_8F60F8EA8A4B6E2F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_8F60F8EA8A4B6E2F_OFFSET))(this);
	}

	::System::Void Method_2_8F60F8EA8A4B6E2F_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_8F60F8EA8A4B6E2F_1_OFFSET))(this);
	}

	::System::Void Method_2_4DC69859C9624A77()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_4DC69859C9624A77_OFFSET))(this);
	}

	::System::Void Method_2_8F60F8EA8A4B6E2F_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_8F60F8EA8A4B6E2F_2_OFFSET))(this);
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

	::System::Void Method_2_759BBC8E63F4A719(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_759BBC8E63F4A719_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_8714CF4AE9195CA2_OFFSET))(this);
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

	::System::Void Method_2_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_21886A8411E71157_OFFSET))(this);
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

	::System::Void Method_2_9AB55F553C4AC6E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_9AB55F553C4AC6E8_OFFSET))(this);
	}

	::System::Void Method_2_D901EBCE84FF5911(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_D901EBCE84FF5911_OFFSET))(this, a1);
	}

	::System::Void Method_2_DEAC86EB2AD5D389()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_DEAC86EB2AD5D389_OFFSET))(this);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Method_2_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_096C7F7C8EC87129()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_096C7F7C8EC87129_OFFSET))(this);
	}

	::System::Void Method_2_3E586421BA588EFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_3E586421BA588EFD_OFFSET))(this);
	}

	::System::Void Method_2_97889423B3D78768()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_97889423B3D78768_OFFSET))(this);
	}

	::System::Void Method_2_3E586421BA588EFD_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_3E586421BA588EFD_1_OFFSET))(this);
	}

	::System::Void Method_2_97889423B3D78768_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_97889423B3D78768_1_OFFSET))(this);
	}

	::System::Void Method_2_3A599F23178B2776()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_3A599F23178B2776_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::System::Void Method_2_6100984B3BC988C7(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_6100984B3BC988C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_9681042564541CD6_2_OFFSET))(this);
	}

	::RPG::GameCore::TargetFetchAdvPropEx* Method_2_A20DF704BAEFF02B()
	{
		return ((::RPG::GameCore::TargetFetchAdvPropEx*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_A20DF704BAEFF02B_OFFSET))(this);
	}

	::System::Void Method_2_8C6E66D260CC37AD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_8C6E66D260CC37AD_OFFSET))(this, a1);
	}

	::RPG::GameCore::RuntimeGroupInfo* Method_2_E40414FF0A300A50()
	{
		return ((::RPG::GameCore::RuntimeGroupInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_E40414FF0A300A50_OFFSET))(this);
	}

	::System::Void Method_2_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_2_B2C0ADBFEA309440_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_B2C0ADBFEA309440_1_OFFSET))(this);
	}

	::System::Void Method_2_08C9B39C07B526E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_08C9B39C07B526E4_OFFSET))(this);
	}

	::System::Void Method_2_B6BB704B01BCC35B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_B6BB704B01BCC35B_OFFSET))(this);
	}

	::System::Void Method_2_08C9B39C07B526E4_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_08C9B39C07B526E4_1_OFFSET))(this);
	}

	::System::Void Method_2_B6BB704B01BCC35B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E971291CFB8C92D_METHOD_2_B6BB704B01BCC35B_1_OFFSET))(this);
	}
};
